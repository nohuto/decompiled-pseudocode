/*
 * XREFs of RaidUnitProcessAsyncNotification @ 0x1C0061C80
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall RaidUnitProcessAsyncNotification(__int64 a1, unsigned int a2, PIO_WORKITEM *a3)
{
  unsigned int v4; // ebx
  __int64 Unit; // rax

  v4 = 0;
  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit && (*(_BYTE *)(Unit + 448) & 4) != 0 && (*(_DWORD *)(Unit + 1872) & 4) != 0 )
  {
    if ( a3 && *a3 )
      IoQueueWorkItem(*a3, (PIO_WORKITEM_ROUTINE)RaUnitAsyncNotificationWorkItemRoutine, CriticalWorkQueue, a3);
    else
      return (unsigned int)-1056964602;
  }
  else
  {
    return (unsigned int)-1056964601;
  }
  return v4;
}
