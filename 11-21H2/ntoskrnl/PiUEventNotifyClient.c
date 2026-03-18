/*
 * XREFs of PiUEventNotifyClient @ 0x14078BC74
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x1406DF998 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1406E6000 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1407698C4 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14078B9BC (PiUEventNotifyTargetDeviceChange.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14078AE24 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14078BD64 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x14078BDBC (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14078BE00 (PiUEventReferenceEventEntry.c)
 *     PiUEventIsClientStuck @ 0x14078BE3C (PiUEventIsClientStuck.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1500540496LL);
    if ( Pool2 )
    {
      PiUEventReferenceEventEntry(a1);
      *(_QWORD *)(Pool2 + 24) = a1;
      ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      v4 = PiUEventQueuePendingEvent(a2, Pool2);
      if ( v4 < 0 )
      {
        PiUEventDequeuePendingEventWorker(a2, *(void **)(a2 + 112), 0);
        ++*(_DWORD *)(a2 + 136);
        v4 = PiUEventQueuePendingEvent(a2, Pool2);
      }
      if ( v4 < 0 )
      {
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      }
      else
      {
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
