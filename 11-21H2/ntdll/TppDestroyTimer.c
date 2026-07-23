/*
 * XREFs of TppDestroyTimer @ 0x18001F830
 * Callers:
 *     TppFreeWait @ 0x180082FC0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180084170 (TppTimerpFree.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 */

void __fastcall TppDestroyTimer(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  TppCleanupGroupMemberDestroy(a1);
}
