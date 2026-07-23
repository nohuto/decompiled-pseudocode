/*
 * XREFs of sub_14091C9C8 @ 0x14091C9C8
 * Callers:
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14091C9C8(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1784, 0LL);
}
