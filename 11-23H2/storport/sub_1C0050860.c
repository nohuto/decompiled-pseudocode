/*
 * XREFs of sub_1C0050860 @ 0x1C0050860
 * Callers:
 *     sub_1C0049C54 @ 0x1C0049C54 (sub_1C0049C54.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C0050860(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v9; // [rsp+60h] [rbp-28h] BYREF

  v9 = 0LL;
  result = WheaErrorSourceGetState((unsigned int)dword_1C0093B00);
  if ( (_DWORD)result == 2 )
  {
    if ( a2 )
      return WheaReportFatalHwErrorDeviceDriverEx(
               (unsigned int)dword_1C0093B00,
               a1,
               &qword_1C0093CE0,
               (unsigned __int16)word_1C0093CEA,
               a4,
               a4 != 0 ? 0x24 : 0,
               &v9,
               0,
               0LL,
               &xmmword_1C008A0D0,
               a5);
    else
      return WheaReportHwErrorDeviceDriverEx(
               (unsigned int)dword_1C0093B00,
               a1,
               &qword_1C0093CE0,
               (unsigned __int16)word_1C0093CEA,
               a4,
               a4 != 0 ? 0x24 : 0,
               &v9,
               0,
               1,
               0LL);
  }
  return result;
}
