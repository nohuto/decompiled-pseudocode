/*
 * XREFs of sub_140549510 @ 0x140549510
 * Callers:
 *     sub_140548BF0 @ 0x140548BF0 (sub_140548BF0.c)
 *     sub_14054961C @ 0x14054961C (sub_14054961C.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 */

__int64 __fastcall sub_140549510(int a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = 0LL;
  v3[1] = a1;
  v3[0] = a2;
  return HvlInvokeFastExtendedHypercall(65696LL, (__int64)v3, 0x10u, 0LL, 0);
}
