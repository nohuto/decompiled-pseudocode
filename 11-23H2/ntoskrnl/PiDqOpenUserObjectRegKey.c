/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x1407FA7A8
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x1407FA728 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     SeQueryUserSidToken @ 0x140715010 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140797B54 (_PnpCtxRegCreateTree.c)
 *     _PnpValidateObjectName @ 0x1407FAA38 (_PnpValidateObjectName.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1407FABA4 (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x1407FAC78 (PnpConcatPWSTR.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6)
{
  char v6; // r13
  void *v9; // rsi
  __int64 v10; // rcx
  int RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int Tree; // eax
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *v22; // [rsp+60h] [rbp-A0h]
  PVOID TokenInformation; // [rsp+68h] [rbp-98h] BYREF
  int v24[2]; // [rsp+70h] [rbp-90h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0;
  *(_QWORD *)v24 = a1;
  TokenInformation = 0LL;
  v22 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  Handle = 0LL;
  UnicodeString = 0LL;
  memset(Sid, 0, 0x44uLL);
  *a6 = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(v10, a1, a2);
  if ( RelativeObjectRegPath >= 0 )
  {
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v6 = 1;
    }
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    ClientToken = p_SubjectContext->ClientToken;
    if ( !p_SubjectContext->ClientToken )
      ClientToken = p_SubjectContext->PrimaryToken;
    v14 = SeQueryInformationToken(ClientToken, TokenImpersonationLevel, &TokenInformation);
    RelativeObjectRegPath = v14;
    if ( v14 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        goto LABEL_23;
      }
      goto LABEL_10;
    }
    if ( v14 == -1073741821 )
    {
LABEL_10:
      SeQueryUserSidToken((__int64)ClientToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath < 0 )
        {
          v9 = v22;
        }
        else
        {
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v15 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          else
            v15 = 0LL;
          v9 = v22;
          RelativeObjectRegPath = SysCtxRegOpenKey(v15, 0LL, (__int64)v22, 0, 4u, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v24[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(*(__int64 *)&PiPnpRtlCtx, (__int64)Handle, 0LL, 0LL, a3, 0LL);
              }
              else
              {
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v16 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
                else
                  v16 = 0LL;
                Tree = SysCtxRegOpenKey(v16, (__int64)Handle, 0LL, 0, a3, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned int)RelativeObjectRegPath;
}
