/*
 * XREFs of sub_14071F674 @ 0x14071F674
 * Callers:
 *     sub_1403DB4A4 @ 0x1403DB4A4 (sub_1403DB4A4.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB48B4 @ 0x140AB48B4 (sub_140AB48B4.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14071F674(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
