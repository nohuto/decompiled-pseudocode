/*
 * XREFs of sub_140548B10 @ 0x140548B10
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548B10(unsigned int a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  v6 = 0;
  v5 = a2;
  v4 = a1;
  v2 = HvlInvokeFastExtendedHypercall(65701LL, (__int64)&v4, 0x10u, 0LL, 0);
  return sub_14054CA70(v2);
}
