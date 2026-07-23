/*
 * XREFs of sub_140602294 @ 0x140602294
 * Callers:
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 *     sub_140A8CEB8 @ 0x140A8CEB8 (sub_140A8CEB8.c)
 *     sub_140A90FE0 @ 0x140A90FE0 (sub_140A90FE0.c)
 *     sub_140A9C0A0 @ 0x140A9C0A0 (sub_140A9C0A0.c)
 *     sub_140AA5AF8 @ 0x140AA5AF8 (sub_140AA5AF8.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall sub_140602294(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&dword_140C1ADF0);
  *a1 = result;
  return result;
}
