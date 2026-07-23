/*
 * XREFs of NtImpersonateAnonymousToken @ 0x1407F5280
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x140228940 (SeTokenIsRestricted.c)
 *     ObReferenceObjectByPointer @ 0x14022AA90 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     SepGetAnonymousToken @ 0x140371398 (SepGetAnonymousToken.c)
 *     SeTokenIsWriteRestricted @ 0x140371550 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     PsImpersonateClient @ 0x140734C20 (PsImpersonateClient.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     SepRegQueryDwordValue @ 0x1407F555C (SepRegQueryDwordValue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9560 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v3; // rcx
  const signed __int32 *PrimaryToken; // rbx
  PACCESS_TOKEN ClientToken; // rdi
  __int64 v6; // rcx
  PVOID v7; // rsi
  NTSTATUS AnonymousToken; // ebx
  _KPROCESS *Process; // rdi
  void *v10; // rax
  void *v11; // rbx
  __int64 CurrentServerSilo; // rax
  PVOID v13; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN Token; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v16; // [rsp+70h] [rbp+7h] BYREF
  __int128 v17; // [rsp+80h] [rbp+17h]
  __int128 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Token = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (const signed __int32 *)SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( ((int)SepRegQueryDwordValue(v3, L"AnonymousAppContainerImpersonationLevelCheck", &v19) < 0 || !v19)
    && *((_DWORD *)ClientToken + 48) != 1
    && _bittest(PrimaryToken + 50, 0xEu)
    && *((int *)ClientToken + 49) < 2 )
  {
    AnonymousToken = -1073741659;
    goto LABEL_16;
  }
  if ( _bittest((const signed __int32 *)ClientToken + 50, 0xEu) )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &Token);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, Token, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(Token);
    }
    goto LABEL_16;
  }
  if ( (int)SepRegQueryDwordValue(v6, L"EveryoneIncludesAnonymous", &v19) < 0 || (v7 = SeAnonymousLogonToken, v19 != 1) )
    v7 = SeAnonymousLogonTokenNoEveryone;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &v21);
    if ( AnonymousToken < 0 )
      goto LABEL_16;
    v7 = v21;
LABEL_12:
    AnonymousToken = ObReferenceObjectByPointer(
                       v7,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v7);
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
      v11 = v10;
      if ( v10 )
      {
        if ( !SeTokenIsRestricted(v10) || SeTokenIsWriteRestricted(v11) )
        {
          ObFastDereferenceObject(
            (signed __int64 *)&Process[1].Affinity.StaticBitmap[5],
            (unsigned __int64)v11,
            0x746C6644u);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v7, v21 == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v11);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_16;
  }
  if ( (*((_DWORD *)ClientToken + 50) & 0x380000) == 0 )
    goto LABEL_12;
  LODWORD(v16) = 48;
  *((_QWORD *)&v16 + 1) = 0LL;
  DWORD2(v17) = 0;
  *(_QWORD *)&v17 = 0LL;
  v18 = 0LL;
  AnonymousToken = SepDuplicateToken((__int128 *)v7, (__int64)&v16, 1, 2, 2u, 0, 1, (__int64 *)&v13);
  if ( AnonymousToken >= 0 )
  {
    *((_DWORD *)v13 + 50) |= *((_DWORD *)ClientToken + 50) & 0x380000;
    v7 = v13;
    goto LABEL_12;
  }
LABEL_16:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( v13 )
    ObfDereferenceObject(v13);
  return AnonymousToken;
}
