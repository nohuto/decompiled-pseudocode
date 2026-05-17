/*
 * XREFs of AVrfpAppendCurrentUserSid @ 0x1800E494C
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E4844 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x18001AF50 (RtlConvertSidToUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     NtOpenProcessTokenEx @ 0x18009F3F0 (NtOpenProcessTokenEx.c)
 */

int __fastcall AVrfpAppendCurrentUserSid(unsigned __int16 *a1)
{
  int result; // eax
  int InformationToken; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  PSID Sid; // [rsp+58h] [rbp-19h]

  result = NtOpenProcessTokenEx();
  if ( result >= 0 )
  {
    InformationToken = NtQueryInformationToken();
    NtClose(0LL);
    if ( InformationToken >= 0 )
    {
      v4 = *a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( result >= 0 )
      {
        v6 = UnicodeString.Length + *a1;
        if ( v6 < *a1 )
        {
          *a1 = -1;
          return -1073741789;
        }
        else
        {
          *a1 = v6;
        }
      }
    }
    else
    {
      return InformationToken;
    }
  }
  return result;
}
