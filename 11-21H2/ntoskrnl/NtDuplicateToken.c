/*
 * XREFs of NtDuplicateToken @ 0x1407297A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A4964 @ 0x1402A4964 (sub_1402A4964.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     sub_140695E18 @ 0x140695E18 (sub_140695E18.c)
 *     sub_140729B40 @ 0x140729B40 (sub_140729B40.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 v9; // di
  PHANDLE v10; // r12
  TOKEN_TYPE v11; // r13d
  NTSTATUS result; // eax
  PVOID v13; // rsi
  int v14; // ecx
  NTSTATUS v15; // ebx
  __int64 v16; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *PrimaryToken; // r15
  PVOID TokenInformation; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  PVOID v22; // [rsp+50h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-90h] BYREF
  __int64 v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h] BYREF
  int v26; // [rsp+70h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v28; // [rsp+98h] [rbp-50h] BYREF

  v25 = 0LL;
  v26 = 0;
  WORD1(TokenInformation) = 0;
  v24 = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  BYTE1(TokenInformation) = 0;
  v28.ClientToken = 0LL;
  *(_QWORD *)&v28.ImpersonationLevel = 0LL;
  v28.ProcessAuditId = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v9 )
  {
    v11 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v10 = NewTokenHandle;
    v16 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  else
  {
    v10 = NewTokenHandle;
    v11 = TokenType;
  }
  result = sub_140729B40(ObjectAttributes, v9, (char *)&TokenInformation + 2, &v25);
  if ( result >= 0 )
  {
    result = sub_1402A4964((__int64)ObjectAttributes, v9, (_BYTE *)&TokenInformation + 3);
    if ( result >= 0 )
    {
      Token = 0LL;
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 v9,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          SeCaptureSubjectContextEx(KeGetCurrentThread(), *((PEPROCESS *)KeGetCurrentThread() + 23), &SubjectContext);
          v28.PrimaryToken = SubjectContext.PrimaryToken;
          LOBYTE(TokenInformation) = 0;
          if ( v9 )
          {
            ClientToken = SubjectContext.ClientToken;
            if ( !SubjectContext.ClientToken )
              ClientToken = SubjectContext.PrimaryToken;
            if ( (SeQueryInformationToken(ClientToken, TokenIsSandboxed, &TokenInformation) < 0
               || (_BYTE)TokenInformation)
              && (unsigned __int8)RtlIsSandboxedToken(&v28) )
            {
              CurrentThread = KeGetCurrentThread();
              --*((_WORD *)CurrentThread + 242);
              PrimaryToken = SubjectContext.PrimaryToken;
              ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
              sub_140695E18(Token, PrimaryToken, (_BYTE *)&TokenInformation + 1);
              ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
              sub_1402F9540((__int64)KeGetCurrentThread());
            }
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        v13 = Token;
        if ( BYTE2(TokenInformation) )
          v14 = HIDWORD(v25);
        else
          v14 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v11 == TokenImpersonation && v14 > *((_DWORD *)Token + 49)
           || v11 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v22 = 0LL;
          v15 = sub_1407CDED0((_DWORD)Token, (_DWORD)ObjectAttributes, EffectiveOnly, v11, v14, v9, 0, (__int64)&v22);
          if ( v15 >= 0 )
          {
            v15 = sub_140729C30(v22, 0LL, 0, 0LL, (__int64)&v24);
            if ( v15 >= 0 )
            {
              if ( !BYTE3(TokenInformation) )
                sub_140659D50(v22);
              ObfDereferenceObject(v22);
            }
          }
          ObfDereferenceObject(v13);
          if ( v15 >= 0 )
            *v10 = (HANDLE)v24;
          return v15;
        }
      }
    }
  }
  return result;
}
