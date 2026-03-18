/*
 * XREFs of PiUEventNotifyClient @ 0x14077E5DC
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E3F0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783544 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140791288 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140872360 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     PiUEventQueuePendingEvent @ 0x14077E6E0 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14077E724 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14077E760 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventIsClientStuck @ 0x14077E7B8 (PiUEventIsClientStuck.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14078207C (PiUEventDequeuePendingEventWorker.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v4; // edi
  char v5; // si
  __int64 Pool2; // rsi

  v4 = 0;
  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( !(unsigned __int8)PiUEventIsClientStuck(a2) )
      goto LABEL_3;
    ++*(_DWORD *)(a2 + 136);
  }
  v5 = 1;
LABEL_3:
  ExReleaseFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1500540496LL);
    if ( Pool2 )
    {
      PiUEventReferenceEventEntry(a1);
      *(_QWORD *)(Pool2 + 24) = a1;
      ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      v4 = PiUEventQueuePendingEvent(a2, Pool2);
      if ( v4 >= 0
        || (PiUEventDequeuePendingEventWorker(a2, *(_QWORD *)(a2 + 112), 0LL),
            ++*(_DWORD *)(a2 + 136),
            v4 = PiUEventQueuePendingEvent(a2, Pool2),
            v4 >= 0) )
      {
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000014];
        ExReleaseFastMutex(*(PFAST_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
      else
      {
        ++*(_DWORD *)(a2 + 136);
        ExReleaseFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
