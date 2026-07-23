/*
 * XREFs of sub_1407F02A8 @ 0x1407F02A8
 * Callers:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void sub_1407F02A8()
{
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1F5F0, 0LL);
  KeLeaveCriticalRegion();
}
