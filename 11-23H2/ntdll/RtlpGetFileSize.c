/*
 * XREFs of RtlpGetFileSize @ 0x18010AF98
 * Callers:
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010B4A8 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A10D0 (NtQueryInformationFile.c)
 */

__int64 __fastcall RtlpGetFileSize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp-20h]

  result = NtQueryInformationFile();
  if ( (int)result >= 0 )
  {
    *a2 = v4;
    return 0LL;
  }
  return result;
}
