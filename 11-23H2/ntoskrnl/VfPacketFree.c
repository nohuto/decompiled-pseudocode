/*
 * XREFs of VfPacketFree @ 0x140ADD134
 * Callers:
 *     ViPacketNotificationCallback @ 0x140ADD1A0 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x14055F588 (IovIsDisabledWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfIrpDatabaseUninitialize @ 0x140AE1AB4 (VfIrpDatabaseUninitialize.c)
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
