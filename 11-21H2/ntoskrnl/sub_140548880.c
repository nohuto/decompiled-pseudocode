/*
 * XREFs of sub_140548880 @ 0x140548880
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548880(int a1)
{
  __int64 v1; // rax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvlInvokeFastExtendedHypercall(65705LL, (__int64)v3, 8u, 0LL, 0);
  return sub_14054CA70(v1);
}
