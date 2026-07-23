/*
 * XREFs of VfPacketFree @ 0x140ADD124
 * Callers:
 *     ViPacketNotificationCallback @ 0x140ADD190 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x14055FC48 (IovIsDisabledWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfIrpDatabaseUninitialize @ 0x140AE1AA4 (VfIrpDatabaseUninitialize.c)
 */

void __fastcall VfPacketFree(_QWORD *Entry)
{
  void *v2; // rcx

  v2 = (void *)Entry[28];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x6D646C56u);
  ExFreeToNPagedLookasideList(&ViPacketLookaside, Entry);
  if ( !_InterlockedDecrement(&ViPacketCount) && IovIsDisabledWithoutReboot() )
    VfIrpDatabaseUninitialize();
}
