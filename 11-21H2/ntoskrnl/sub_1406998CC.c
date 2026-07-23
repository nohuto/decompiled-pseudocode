/*
 * XREFs of sub_1406998CC @ 0x1406998CC
 * Callers:
 *     sub_14069984C @ 0x14069984C (sub_14069984C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     sub_140699B5C @ 0x140699B5C (sub_140699B5C.c)
 *     sub_140699C30 @ 0x140699C30 (sub_140699C30.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078C9E8 @ 0x14078C9E8 (sub_14078C9E8.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406998CC(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6)
{
  char v6; // r13
  void *v9; // rsi
  void *v10; // rdi
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // r14
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *v25; // [rsp+60h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0;
  v27 = a1;
  TokenInformation = 0LL;
  v25 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  UnicodeString = 0LL;
  v22 = 0;
  memset(Sid, 0, 0x44uLL);
  *a6 = 0LL;
  v12 = sub_140699C30(v11, a1, a2);
  if ( v12 >= 0 )
  {
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v6 = 1;
    }
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    if ( p_SubjectContext->ClientToken )
      ClientToken = p_SubjectContext->ClientToken;
    else
      ClientToken = p_SubjectContext->PrimaryToken;
    v15 = SeQueryInformationToken(ClientToken, TokenImpersonationLevel, &TokenInformation);
    v12 = v15;
    if ( v15 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        v12 = -1073741790;
        goto LABEL_25;
      }
      goto LABEL_10;
    }
    if ( v15 == -1073741821 )
    {
LABEL_10:
      sub_14066A374((__int64)ClientToken, Sid, 0x44u, 0LL);
      v12 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( v12 >= 0 )
      {
        v12 = sub_14078C9E8(0x7FFFFFFFLL, 1483763280LL, &v25, 2LL, L"\\REGISTRY\\USER\\", UnicodeString.Buffer);
        if ( v12 < 0 )
        {
          v9 = v25;
        }
        else
        {
          if ( *(_QWORD *)&qword_140D00AC0 )
            v16 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
          else
            LODWORD(v16) = 0;
          v9 = v25;
          v12 = sub_14077FFEC(v16, 0, (_DWORD)v25, 0, 4, (__int64)&Handle);
          if ( v12 >= 0 )
          {
            v12 = sub_140699B5C(v27, a2, &v23);
            if ( v12 < 0 )
            {
              v10 = v23;
            }
            else
            {
              if ( a4 )
              {
                v10 = v23;
                v18 = sub_140772AA0(
                        qword_140D00AC0,
                        (_DWORD)Handle,
                        (_DWORD)v23,
                        0,
                        a3,
                        0LL,
                        (__int64)a6,
                        (__int64)&v22);
              }
              else
              {
                v22 = 2;
                if ( *(_QWORD *)&qword_140D00AC0 )
                  v17 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
                else
                  LODWORD(v17) = 0;
                v10 = v23;
                v18 = sub_14077FFEC(v17, (_DWORD)Handle, (_DWORD)v23, 0, a3, (__int64)a6);
              }
              v12 = v18;
            }
          }
        }
      }
    }
  }
  if ( v12 == -1073741444 )
    v12 = -1073741772;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned int)v12;
}
