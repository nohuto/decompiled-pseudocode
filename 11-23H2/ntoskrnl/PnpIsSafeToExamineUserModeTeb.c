/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x14031E210
 * Callers:
 *     PnpRequestDeviceAction @ 0x140359044 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x140555724 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x140786330 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140215000 (KeAreAllApcsDisabled.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v0 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode != 1 || KeAreAllApcsDisabled() || BYTE6(CurrentThread[1].Queue) > 1u )
    return 0;
  return v0;
}
