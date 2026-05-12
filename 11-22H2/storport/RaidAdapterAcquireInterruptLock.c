/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0008690
 * Callers:
 *     RaidAdapterAcquireStartIoLock @ 0x1C000759C (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C00111C8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C001142C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterInsertUnit @ 0x1C0017E28 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveUnit @ 0x1C0017F88 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterGetFirstUnit @ 0x1C0035AAC (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C003715C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C00375F4 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C0046FC0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v1; // bl
  struct _KINTERRUPT *v3; // rcx
  __int64 v5; // rsi
  unsigned int i; // edi

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4305) )
  {
    v5 = *(_QWORD *)(a1 + 4288);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 24));
    if ( *(_DWORD *)(a1 + 4272) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v5 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * i + 24));
    }
  }
  else
  {
    v3 = *(struct _KINTERRUPT **)(a1 + 728);
    if ( v3 )
      return KeAcquireInterruptSpinLock(v3);
  }
  return v1;
}
