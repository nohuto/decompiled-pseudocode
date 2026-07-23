/*
 * XREFs of sub_140548A40 @ 0x140548A40
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548A40(unsigned int a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = a1;
  v1 = HvlInvokeFastExtendedHypercall(65704LL, (__int64)v3, 8u, 0LL, 0);
  return sub_14054CA70(v1);
}
