/*
 * XREFs of TppDestroyTimer @ 0x18007AD3C
 * Callers:
 *     TppFreeWait @ 0x18007ACB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18007AD00 (TppTimerpFree.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18002FFC0 (TpAdjustBindingCount.c)
 */

void __fastcall TppDestroyTimer(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  TppCleanupGroupMemberDestroy(a1);
}
