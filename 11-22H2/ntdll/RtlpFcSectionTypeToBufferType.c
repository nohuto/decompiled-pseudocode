/*
 * XREFs of RtlpFcSectionTypeToBufferType @ 0x18012E2EC
 * Callers:
 *     RtlpFcMapBuffers @ 0x180071044 (RtlpFcMapBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800710A4 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  _DWORD v2[4]; // [rsp+0h] [rbp-28h]

  v2[0] = 0;
  v2[1] = 1;
  v2[2] = 2;
  return (unsigned int)v2[a1];
}
