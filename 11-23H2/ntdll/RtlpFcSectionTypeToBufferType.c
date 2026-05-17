/*
 * XREFs of RtlpFcSectionTypeToBufferType @ 0x180130338
 * Callers:
 *     RtlpFcMapBuffers @ 0x180071368 (RtlpFcMapBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  _DWORD v2[4]; // [rsp+0h] [rbp-28h]

  v2[0] = 0;
  v2[1] = 1;
  v2[2] = 2;
  return (unsigned int)v2[a1];
}
