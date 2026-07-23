/*
 * XREFs of sub_1405492D8 @ 0x1405492D8
 * Callers:
 *     sub_140548790 @ 0x140548790 (sub_140548790.c)
 *     sub_140548A90 @ 0x140548A90 (sub_140548A90.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_1405492D8(unsigned int a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1 | 0x4000000000000000LL;
  v1 = HvlInvokeFastExtendedHypercall(65667LL, (__int64)v3, 0x10u, 0LL, 0);
  return sub_14054CA70(v1);
}
