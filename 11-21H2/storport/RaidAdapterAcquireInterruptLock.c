/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C00112B8
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000BC24 (RaidAdapterAcquireStartIoLock.c)
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C0014FFC (RaidAdapterStopAdapter.c)
 *     RaidAdapterRemoveUnit @ 0x1C001C558 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C001C684 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRestartAdapter @ 0x1C001E07C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterGetFirstUnit @ 0x1C0034C40 (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C0035EFC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0036380 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C0043FF0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v1; // bl
  __int64 v3; // rsi
  unsigned int i; // edi
  struct _KINTERRUPT *v6; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4241) )
  {
    v3 = *(_QWORD *)(a1 + 4224);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24));
    if ( *(_DWORD *)(a1 + 4208) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v3 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 48LL * i + 24));
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 720);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
