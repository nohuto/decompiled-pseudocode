/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x1C00033E4
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C000310C (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0003484 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00AA914 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReceiveQueueingOff @ 0x1C00AB858 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C00AB8C4 (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C00ABA84 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  bool v4; // zf
  struct _NDIS_MINIPORT_BLOCK *NextMiniportBlock; // rdi

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
    v1 = qword_1C00F5218;
    qword_1C00F5218 = 0LL;
    if ( v1 )
    {
      do
      {
        NextMiniportBlock = v1->PeriodicReceiveQueue.NextMiniportBlock;
        KeAcquireSpinLockAtDpcLevel(&v1->PeriodicReceiveQueue.SpinLock);
        v1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        ndisReceiveQueueingOff(v1);
        ndisEmptyPeriodicReceivesQueue(v1);
        v1->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        v1->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v1->PeriodicReceiveQueue.SpinLock);
        v1 = NextMiniportBlock;
      }
      while ( NextMiniportBlock );
    }
    if ( BYTE2(dword_1C00F76B0) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
