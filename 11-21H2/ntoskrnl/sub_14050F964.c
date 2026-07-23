/*
 * XREFs of sub_14050F964 @ 0x14050F964
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

ULONG_PTR sub_14050F964()
{
  ULONG_PTR Context[2]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  Context[0] = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context[1] = 0LL;
  v2 = 5;
  return KeIpiGenericCall(sub_14050F9E0, (ULONG_PTR)Context);
}
