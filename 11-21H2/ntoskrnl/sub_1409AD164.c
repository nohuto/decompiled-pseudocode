/*
 * XREFs of sub_1409AD164 @ 0x1409AD164
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_140724E14 @ 0x140724E14 (sub_140724E14.c)
 */

void __fastcall sub_1409AD164(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1 + 129);
  sub_140724E14(a1);
}
