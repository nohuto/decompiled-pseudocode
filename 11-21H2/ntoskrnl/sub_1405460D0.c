/*
 * XREFs of sub_1405460D0 @ 0x1405460D0
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_1405460D0(unsigned __int64 a1)
{
  __int64 v2; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    return 3221225485LL;
  v3[0] = -1LL;
  v3[1] = a1 & 0x3FFFFFFFFFFFFFFFLL;
  v2 = HvlInvokeFastExtendedHypercall(65732LL, (__int64)v3, 0x10u, 0LL, 0);
  return sub_14054CA70(v2);
}
