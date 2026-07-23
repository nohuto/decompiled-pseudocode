/*
 * XREFs of sub_140A9BF9C @ 0x140A9BF9C
 * Callers:
 *     sub_140A91260 @ 0x140A91260 (sub_140A91260.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall sub_140A9BF9C(__int64 a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  *(_BYTE *)(a1 + 16) = result;
  return result;
}
