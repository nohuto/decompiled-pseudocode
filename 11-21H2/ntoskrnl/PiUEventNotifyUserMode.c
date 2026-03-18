/*
 * XREFs of PiUEventNotifyUserMode @ 0x14078B2D4
 * Callers:
 *     PnpNotifyUserModeDeviceRemoval @ 0x140765C60 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpProcessTargetDeviceEvent @ 0x14076C3C0 (PnpProcessTargetDeviceEvent.c)
 *     PnpProcessCustomDeviceEvent @ 0x14078AC7C (PnpProcessCustomDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1407D5E30 (PnpDeviceEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PiUEventShouldQueueEvent @ 0x1402E069C (PiUEventShouldQueueEvent.c)
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140561048 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiUEventDeviceNeedsInstall @ 0x1406E0480 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventDereferenceEventEntry @ 0x14078AE7C (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x14078AEE0 (PiUEventFreeEventEntry.c)
 *     PiUEventCacheObjectProperties @ 0x14078B5D8 (PiUEventCacheObjectProperties.c)
 *     PiUEventIsDeviceEventVetoable @ 0x14078BC2C (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventReferenceEventEntry @ 0x14078BE00 (PiUEventReferenceEventEntry.c)
 *     PpDevCfgRequestDeviceInstall @ 0x14094F7C0 (PpDevCfgRequestDeviceInstall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // r14
  char IsDeviceEventVetoable; // bp
  __int64 Pool2; // rbx
  struct _FAST_MUTEX *v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  PVOID *v10; // r15
  struct _WORK_QUEUE_ITEM *v11; // rax
  const wchar_t *v13; // rbx
  struct _KEVENT *v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF
  char v24; // [rsp+98h] [rbp+10h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v24 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 128) == 4 )
  {
    v13 = (const wchar_t *)(a1 + 160);
    if ( (int)PiUEventDeviceNeedsInstall((int)a1 + 160, &v24) >= 0 )
    {
      if ( v24 )
      {
        v17 = PpDevCfgRequestDeviceInstall();
        if ( v17 >= 0 && (byte_140C0DD4A & 8) != 0 )
          McTemplateK0z_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceInstall_Requested, v19, v13);
      }
    }
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable();
    Pool2 = ExAllocatePool2(256LL, (unsigned int)(*(_DWORD *)(a1 + 148) + 72), 1500540496LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v6 = (struct _FAST_MUTEX *)ExAllocatePool2(64LL, 56LL, 1500540496LL);
    *(_QWORD *)(Pool2 + 16) = v6;
    if ( !v6 )
    {
LABEL_40:
      PiUEventFreeEventEntry((_QWORD *)Pool2);
      return (unsigned int)-1073741670;
    }
    KeInitializeGuardedMutex(v6);
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_BYTE *)(Pool2 + 69) = IsDeviceEventVetoable;
    v7 = *(_DWORD **)(a1 + 48);
    if ( IsDeviceEventVetoable )
    {
      *(_QWORD *)(Pool2 + 32) = v7;
      v20 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Pool2 + 40) = v20;
      **(_WORD **)(v20 + 8) = 0;
      **(_WORD **)(Pool2 + 40) = 0;
      **(_DWORD **)(Pool2 + 32) = 0;
    }
    else
    {
      if ( v7 )
        *v7 = 0;
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
      {
        **(_WORD **)(v8 + 8) = 0;
        **(_WORD **)(a1 + 56) = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 24) || IsDeviceEventVetoable )
    {
      v3 = 1;
      v14 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1500540496LL);
      *(_QWORD *)(Pool2 + 24) = v14;
      if ( !v14 )
      {
LABEL_38:
        if ( *(_QWORD *)(Pool2 + 24) )
          PiUEventDereferenceEventEntry((PVOID)Pool2);
        goto LABEL_40;
      }
      KeInitializeEvent(v14, NotificationEvent, 0);
      PiUEventReferenceEventEntry(Pool2);
    }
    *(_BYTE *)(Pool2 + 68) = v3;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 148) + 8;
    memmove((void *)(Pool2 + 72), (const void *)(a1 + 112), *(unsigned int *)(a1 + 148));
    PiUEventCacheObjectProperties(Pool2);
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v9 = (__int64 *)qword_140C46728;
    v10 = (PVOID *)PiUEventUsermodeEventQueue;
    if ( *(PVOID **)qword_140C46728 != &PiUEventUsermodeEventQueue )
      goto LABEL_45;
    *(_QWORD *)Pool2 = &PiUEventUsermodeEventQueue;
    *(_QWORD *)(Pool2 + 8) = v9;
    *v9 = Pool2;
    qword_140C46728 = Pool2;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( v10 != &PiUEventUsermodeEventQueue )
      goto LABEL_17;
    v11 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1500540496LL);
    if ( v11 )
    {
      v11->Parameter = v11;
      v11->WorkerRoutine = PiUEventProcessEventWorker;
      v11->List.Flink = 0LL;
      ExQueueWorkItem(v11, NormalWorkQueue);
LABEL_17:
      if ( v3 )
      {
        Object[0] = &PnpShutdownEvent;
        Object[1] = *(PVOID *)(Pool2 + 24);
        Timeout.QuadPart = -300000000LL;
        v15 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
        v25 = 0;
        v16 = v15;
        ZwUpdateWnfStateData((__int64)&WNF_PNPB_AWAITING_RESPONSE, (__int64)&v25);
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            if ( IsDeviceEventVetoable && **(_DWORD **)(a1 + 48) )
              v2 = -1073741536;
            else
              v2 = 0;
          }
          else
          {
            v2 = v16 != 258 ? 0xC0000001 : 0;
          }
        }
        else
        {
          v2 = -1073741431;
        }
        ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
        *(_QWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
        PiUEventDereferenceEventEntry((PVOID)Pool2);
      }
      return v2;
    }
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v21 = *(_QWORD *)Pool2;
    if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) != Pool2 || (v22 = *(_QWORD **)(Pool2 + 8), *v22 != Pool2) )
LABEL_45:
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( !v3 )
      goto LABEL_40;
    goto LABEL_38;
  }
  return v2;
}
