/*
 * XREFs of sub_140A2CF6C @ 0x140A2CF6C
 * Callers:
 *     sub_14076D4A4 @ 0x14076D4A4 (sub_14076D4A4.c)
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 *     sub_140781268 @ 0x140781268 (sub_140781268.c)
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 *     sub_140A23328 @ 0x140A23328 (sub_140A23328.c)
 *     sub_140A23A34 @ 0x140A23A34 (sub_140A23A34.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140A25AC0 @ 0x140A25AC0 (sub_140A25AC0.c)
 *     sub_140A281F8 @ 0x140A281F8 (sub_140A281F8.c)
 *     sub_140A28FC4 @ 0x140A28FC4 (sub_140A28FC4.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x14041BB80 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x14041BD40 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x14041BD60 (ZwOpenProcessTokenEx.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_1406D7C74 @ 0x1406D7C74 (sub_1406D7C74.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A2CF6C(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v8; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v11; // bx
  wchar_t *Pool2; // rax
  __int64 v13; // rcx
  __int16 v15[2]; // [rsp+30h] [rbp-99h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-8Dh] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-81h] BYREF
  int v20; // [rsp+50h] [rbp-79h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  __int64 v22; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-59h] BYREF
  _BYTE Sid[16]; // [rsp+80h] [rbp-49h] BYREF
  PSID Sid2[11]; // [rsp+90h] [rbp-39h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  TokenInformation = 0;
  v20 = 0;
  ReturnLength = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v22 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v15[0] = 0;
  v8 = 0LL;
  UnicodeString = 0LL;
  appended = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0x200u, &Handle);
  if ( appended == -1073741700 )
    appended = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
  if ( appended >= 0 )
  {
    appended = ZwQueryInformationToken(Handle, TokenType, &TokenInformation, 4u, &ReturnLength);
    if ( appended >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        appended = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &v20, 4u, &ReturnLength);
        if ( appended < 0 )
          goto LABEL_23;
        if ( v20 < 2 )
        {
          appended = -1073741790;
          goto LABEL_23;
        }
      }
      else if ( TokenInformation != 1 )
      {
        goto LABEL_10;
      }
      appended = ZwQueryInformationToken(Handle, TokenUser, Sid2, 0x54u, &ReturnLength);
      if ( appended < 0 )
        goto LABEL_23;
      v10 = Sid2[0];
      appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      if ( appended < 0 )
        goto LABEL_23;
      *RtlSubAuthoritySid(Sid, 0) = 18;
      if ( !RtlEqualSid(Sid, v10) )
      {
        appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
        if ( appended >= 0 )
        {
          appended = sub_1402DE190(UnicodeString.Length, 30, v15);
          if ( appended >= 0 )
          {
            appended = sub_1402DE190(v15[0], 2, v15);
            if ( appended >= 0 )
            {
              v11 = v15[0];
              Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)v15[0], 1397771856LL);
              v8 = Pool2;
              if ( Pool2 )
              {
                Destination.Length = 0;
                Destination.MaximumLength = v11;
                Destination.Buffer = Pool2;
                appended = RtlAppendUnicodeStringToString(&Destination, &stru_14000AE48);
                if ( appended >= 0 )
                {
                  appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                  if ( appended >= 0 )
                  {
                    appended = sub_1406D7C74(a1, 3, &v22);
                    if ( appended >= 0 )
                      appended = sub_14077FFEC(v13, v22, (__int64)(Destination.Buffer + 15), a2, a3, a4);
                  }
                }
              }
              else
              {
                appended = -1073741801;
              }
            }
          }
        }
        goto LABEL_23;
      }
LABEL_10:
      appended = -1073741637;
    }
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
