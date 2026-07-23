/*
 * XREFs of sub_14050AA58 @ 0x14050AA58
 * Callers:
 *     sub_14090A930 @ 0x14090A930 (sub_14090A930.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall sub_14050AA58(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF

  InputBuffer[1] = a1;
  InputBuffer[2] = 0LL;
  InputBuffer[0] = 5LL;
  return ZwPowerInformation(SystemPowerStateHandler, InputBuffer, 0x18u, 0LL, 0);
}
