/*
 * XREFs of sub_1406022B8 @ 0x1406022B8
 * Callers:
 *     sub_140A7FA0C @ 0x140A7FA0C (sub_140A7FA0C.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall sub_1406022B8(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockShared(&dword_140C1ADF0);
  *a1 = result;
  return result;
}
