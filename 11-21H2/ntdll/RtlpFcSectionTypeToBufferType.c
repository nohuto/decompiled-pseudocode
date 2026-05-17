/*
 * XREFs of RtlpFcSectionTypeToBufferType @ 0x18012A1A0
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800763A8 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcMapBuffers @ 0x180076568 (RtlpFcMapBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  _DWORD v2[4]; // [rsp+0h] [rbp-28h]

  v2[0] = 0;
  v2[1] = 1;
  v2[2] = 2;
  return (unsigned int)v2[a1];
}
