/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x14031D7F0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeWorkItem @ 0x14031D840 (IoFreeWorkItem.c)
 *     PnpDisableWatchdog @ 0x14078285C (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroyWorkItem(__int64 a1, _QWORD *a2, struct _IO_WORKITEM *a3)
{
  if ( a2[8] )
  {
    PnpDisableWatchdog();
    a2[8] = 0LL;
  }
  IoFreeWorkItem(a3);
  ExFreePoolWithTag(a2, 0x31706E50u);
}
