/*
 * XREFs of StorpWheaReportError @ 0x1C0050290
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

__int64 __fastcall StorpWheaReportError(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v9; // [rsp+60h] [rbp-28h] BYREF

  v9 = 0LL;
  result = WheaErrorSourceGetState((unsigned int)g_StorpWheaErrorSourceId);
  if ( (_DWORD)result == 2 )
  {
    if ( a2 )
      return WheaReportFatalHwErrorDeviceDriverEx(
               (unsigned int)g_StorpWheaErrorSourceId,
               a1,
               &WheaErrorData,
               (unsigned __int16)word_1C0092CBA,
               a4,
               a4 != 0 ? 0x24 : 0,
               &v9,
               0,
               0LL,
               &g_StorpSourceGuid,
               a5);
    else
      return WheaReportHwErrorDeviceDriverEx(
               (unsigned int)g_StorpWheaErrorSourceId,
               a1,
               &WheaErrorData,
               (unsigned __int16)word_1C0092CBA,
               a4,
               a4 != 0 ? 0x24 : 0,
               &v9,
               0,
               1,
               0LL);
  }
  return result;
}
