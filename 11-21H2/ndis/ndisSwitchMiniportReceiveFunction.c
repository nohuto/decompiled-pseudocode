/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x1C0006474
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0006198 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0006514 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00A3EB0 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReceiveQueueingOff @ 0x1C00A51B0 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C00A521C (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A53D8 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  KSPIN_LOCK *v3; // rbp
  bool v4; // zf
  KSPIN_LOCK *v5; // rdi

  if ( a1 == 6 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisMiniportListLock);
    for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
    {
      if ( !MiniportSupportsReceiveThrottle(i) )
      {
        KeAcquireSpinLockAtDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
        v4 = i->MediaType == NdisMedium802_3;
        i->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        if ( v4 && i->PeriodicReceiveQueue.BoundToIP && i->PeriodicReceiveQueue.State == PeriodicReceivesOff )
          ndisReceiveQueueingOn(i);
        i->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&ndisMiniportListLock);
  }
  else
  {
    v3 = (KSPIN_LOCK *)qword_1C00EC258;
    qword_1C00EC258 = 0LL;
    if ( v3 )
    {
      do
      {
        v5 = (KSPIN_LOCK *)v3[395];
        KeAcquireSpinLockAtDpcLevel(v3 + 397);
        v3[398] = (KSPIN_LOCK)KeGetCurrentThread();
        ndisReceiveQueueingOff(v3);
        ndisEmptyPeriodicReceivesQueue(v3);
        v3[395] = 0LL;
        v3[398] = 0LL;
        KeReleaseSpinLockFromDpcLevel(v3 + 397);
        v3 = v5;
      }
      while ( v5 );
    }
    if ( BYTE2(dword_1C00EE5E8) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
