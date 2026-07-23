/*
 * XREFs of SepCreateClientSecurityEx @ 0x14071DAF0
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405B95D0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityEx @ 0x14071D3B0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14071D550 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1407E6100 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402AFB90 (PsIsHostSilo.c)
 *     SepGetAnonymousToken @ 0x140371398 (SepGetAnonymousToken.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     SeCopyClientToken @ 0x14071DEC0 (SeCopyClientToken.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     SeQueryServerSiloToken @ 0x1407DECB0 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C9710 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1409CF3F0 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 a11)
{
  char v12; // dl
  _QWORD *v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rbx
  char v17; // al
  __int64 result; // rax
  bool v19; // al
  int v20; // r8d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rcx
  ULONG_PTR v23; // rax
  void *v24; // r14
  __int64 v25; // rcx
  int AnonymousToken; // edi
  __int64 v27; // rdi
  int v28; // r8d
  __int64 CurrentServerSilo; // rax
  _QWORD v30[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  v30[0] = 0LL;
  Object = 0LL;
  v14 = (_QWORD *)a1;
  if ( *(_BYTE *)(a2 + 8) >= 2u )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 > 3 )
    return 3221225637LL;
  if ( a4 == 2 )
  {
    if ( (int)v15 > (int)a6 )
    {
      if ( !a7 )
        return 3221225637LL;
      v12 = 1;
    }
    if ( a6 > 1 && (!a3 || a6 == 3) )
    {
      v19 = a5 || *(_BYTE *)(a2 + 9);
      v16 = a11;
      *(_BYTE *)(a11 + 25) = v19;
      if ( !v12 )
        goto LABEL_5;
LABEL_29:
      if ( (*(_DWORD *)(a1 + 200) & 0x4000) == 0 )
      {
        if ( a8 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( (struct _KTHREAD *)a8 == CurrentThread )
            Process = (__int64)CurrentThread->ApcState.Process;
          else
            Process = *(_QWORD *)(a8 + 544);
          v23 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
          v24 = (void *)v23;
          if ( (*(_DWORD *)(v23 + 200) & 0x4000) != 0 )
            v25 = v23;
          else
            v25 = 0LL;
          AnonymousToken = SepGetAnonymousToken(v25, &Object);
          ObfDereferenceObject(v24);
LABEL_36:
          if ( AnonymousToken < 0 )
            return (unsigned int)AnonymousToken;
          v14 = Object;
          result = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
          if ( (int)result >= 0 )
          {
            if ( ObpTraceFlags )
            {
              ObpPushStackInfo((__int64)(v14 - 6), 0, 1u, 0x746C6644u);
              ObpPushStackInfo((__int64)(v14 - 6), 1, 1u, 0x63436553u);
            }
            *(_QWORD *)v16 = 12LL;
            *(_BYTE *)(v16 + 8) = 0;
            v17 = *(_BYTE *)(a2 + 9);
            *(_BYTE *)(v16 + 24) = 0;
            goto LABEL_9;
          }
          return result;
        }
        a1 = 0LL;
      }
      AnonymousToken = SepGetAnonymousToken(a1, &Object);
      goto LABEL_36;
    }
    if ( a7 )
    {
      v16 = a11;
      goto LABEL_29;
    }
    return 3221225637LL;
  }
  v16 = a11;
  *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
LABEL_5:
  if ( *(_BYTE *)(a2 + 8) )
  {
    *(_BYTE *)(v16 + 24) = 1;
    if ( a3 )
      SeGetTokenControlInformation(a1, v16 + 28);
LABEL_8:
    *(_DWORD *)v16 = 12;
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(v16 + 8) = *(_BYTE *)(a2 + 8);
    v17 = *(_BYTE *)(a2 + 9);
LABEL_9:
    *(_QWORD *)(v16 + 16) = v14;
    *(_BYTE *)(v16 + 9) = v17;
    result = 0LL;
    *(_BYTE *)(v16 + 26) = a3;
    return result;
  }
  *(_BYTE *)(v16 + 24) = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    v27 = v14[3];
    Object = 0LL;
    if ( (int)SeQueryServerSiloToken(v14, &Object) >= 0 && PsIsHostSilo((__int64)Object) && v27 == 999 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      result = SepCopyClientTokenAndSetSilo(v14, *(unsigned int *)(a2 + 4), CurrentServerSilo, v30);
    }
    else
    {
      result = SeCopyClientToken((_DWORD)v14, *(_DWORD *)(a2 + 4), v28, 0, 0LL, (__int64)v30);
    }
  }
  else
  {
    result = SeCopyClientToken((_DWORD)v14, *(_DWORD *)(a2 + 4), v20, a9, a10, (__int64)v30);
  }
  if ( (int)result >= 0 )
  {
    v14 = (_QWORD *)v30[0];
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo(v30[0] - 48LL, 0, 1u, 0x746C6644u);
      ObpPushStackInfo((__int64)(v14 - 6), 1, 1u, 0x63436553u);
    }
    goto LABEL_8;
  }
  return result;
}
