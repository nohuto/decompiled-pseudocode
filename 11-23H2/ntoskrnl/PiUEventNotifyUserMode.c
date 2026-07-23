/*
 * XREFs of PiUEventNotifyUserMode @ 0x140783BDC
 * Callers:
 *     PnpDeviceEventWorker @ 0x140786A50 (PnpDeviceEventWorker.c)
 *     PnpProcessTargetDeviceEvent @ 0x14079458C (PnpProcessTargetDeviceEvent.c)
 *     PnpProcessCustomDeviceEvent @ 0x1407DB110 (PnpProcessCustomDeviceEvent.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140867C88 (PnpNotifyUserModeDeviceRemoval.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KeInitializeGuardedMutex @ 0x14031DB00 (KeInitializeGuardedMutex.c)
 *     PiUEventShouldQueueEvent @ 0x14031DB30 (PiUEventShouldQueueEvent.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1405619A8 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiUEventReferenceEventEntry @ 0x14077E914 (PiUEventReferenceEventEntry.c)
 *     PiUEventDereferenceEventEntry @ 0x140782408 (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x1407827FC (PiUEventFreeEventEntry.c)
 *     PiUEventIsDeviceEventVetoable @ 0x1407839A8 (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventCacheObjectProperties @ 0x1407839F0 (PiUEventCacheObjectProperties.c)
 *     PnpWatchdogTimerStart @ 0x140785800 (PnpWatchdogTimerStart.c)
 *     PnpWatchdogTimerPause @ 0x140785830 (PnpWatchdogTimerPause.c)
 *     PiUEventDeviceNeedsInstall @ 0x1407D9FD0 (PiUEventDeviceNeedsInstall.c)
 *     PpDevCfgRequestDeviceInstall @ 0x1409638B0 (PpDevCfgRequestDeviceInstall.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // r12
  char v4; // r13
  bool IsDeviceEventVetoable; // r15
  __int64 Pool2; // rdi
  struct _FAST_MUTEX *v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rax
  PVOID *v10; // r14
  __int64 *v11; // rax
  PVOID *v12; // r13
  struct _WORK_QUEUE_ITEM *v13; // rax
  const wchar_t *v15; // rdi
  __int64 v16; // rcx
  struct _KEVENT *v17; // rax
  NTSTATUS v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned int Buffer; // [rsp+40h] [rbp-20h] BYREF
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF
  char v28; // [rsp+A8h] [rbp+48h] BYREF
  char v29; // [rsp+B0h] [rbp+50h]
  char v30; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  v3 = 0;
  v30 = 0;
  v4 = 0;
  Timeout.QuadPart = 0LL;
  v28 = 0;
  v29 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 128) == 4 )
  {
    v15 = (const wchar_t *)(a1 + 160);
    if ( (int)PiUEventDeviceNeedsInstall(a1 + 160, &v28) >= 0 )
    {
      if ( v28 )
      {
        v19 = PpDevCfgRequestDeviceInstall();
        if ( v19 >= 0 && (byte_140C0E20A & 8) != 0 )
          McTemplateK0z_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceInstall_Requested, v21, v15);
      }
    }
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable(a1);
    Buffer = *(_DWORD *)(a1 + 148) + 72;
    Pool2 = ExAllocatePool2(256LL, Buffer, 1500540496LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v7 = (struct _FAST_MUTEX *)ExAllocatePool2(64LL, 56LL, 1500540496LL);
    *(_QWORD *)(Pool2 + 16) = v7;
    if ( !v7 )
    {
      v2 = -1073741670;
LABEL_57:
      PiUEventFreeEventEntry((_QWORD *)Pool2);
      return v2;
    }
    KeInitializeGuardedMutex(v7);
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_BYTE *)(Pool2 + 69) = IsDeviceEventVetoable;
    v8 = *(_DWORD **)(a1 + 48);
    if ( IsDeviceEventVetoable )
    {
      *(_QWORD *)(Pool2 + 32) = v8;
      v22 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Pool2 + 40) = v22;
      **(_WORD **)(v22 + 8) = 0;
      **(_WORD **)(Pool2 + 40) = 0;
      **(_DWORD **)(Pool2 + 32) = 0;
    }
    else
    {
      if ( v8 )
        *v8 = 0;
      v9 = *(_QWORD *)(a1 + 56);
      if ( v9 )
      {
        **(_WORD **)(v9 + 8) = 0;
        **(_WORD **)(a1 + 56) = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 24) || IsDeviceEventVetoable )
    {
      v16 = *(_QWORD *)(a1 + 104);
      v3 = 1;
      if ( v16 )
      {
        PnpWatchdogTimerPause(*(_QWORD *)(v16 + 8));
        v29 = 1;
      }
      v17 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1500540496LL);
      v10 = (PVOID *)(Pool2 + 24);
      *(_QWORD *)(Pool2 + 24) = v17;
      if ( !v17 )
      {
        v2 = -1073741670;
        goto LABEL_20;
      }
      KeInitializeEvent(v17, NotificationEvent, 0);
      PiUEventReferenceEventEntry(Pool2);
    }
    else
    {
      v10 = (PVOID *)(Pool2 + 24);
    }
    *(_BYTE *)(Pool2 + 68) = v3;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 148) + 8;
    memmove((void *)(Pool2 + 72), (const void *)(a1 + 112), *(unsigned int *)(a1 + 148));
    PiUEventCacheObjectProperties(Pool2);
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v11 = (__int64 *)qword_140C5D188;
    v12 = (PVOID *)PiUEventUsermodeEventQueue;
    if ( *(PVOID **)qword_140C5D188 != &PiUEventUsermodeEventQueue )
      goto LABEL_58;
    *(_QWORD *)Pool2 = &PiUEventUsermodeEventQueue;
    *(_QWORD *)(Pool2 + 8) = v11;
    *v11 = Pool2;
    qword_140C5D188 = Pool2;
    v28 = 1;
    ExReleaseFastMutex(&PiUEventUsermodeEventQueueLock);
    if ( v12 == &PiUEventUsermodeEventQueue )
    {
      v13 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1500540496LL);
      if ( !v13 )
      {
        v2 = -1073741670;
LABEL_19:
        v4 = v28;
LABEL_20:
        if ( v29 )
          PnpWatchdogTimerStart(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL));
        if ( v30 )
          return v2;
        if ( !v4 )
          goto LABEL_54;
        ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
        v23 = *(_QWORD *)Pool2;
        if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) == Pool2 )
        {
          v24 = *(_QWORD **)(Pool2 + 8);
          if ( *v24 == Pool2 )
          {
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            ExReleaseFastMutex(&PiUEventUsermodeEventQueueLock);
LABEL_54:
            if ( v3 && *v10 )
              PiUEventDereferenceEventEntry((PVOID)Pool2);
            goto LABEL_57;
          }
        }
LABEL_58:
        __fastfail(3u);
      }
      v13->Parameter = v13;
      v13->WorkerRoutine = PiUEventProcessEventWorker;
      v13->List.Flink = 0LL;
      ExQueueWorkItem(v13, NormalWorkQueue);
    }
    v30 = 1;
    if ( v3 )
    {
      Object[0] = &PnpShutdownEvent;
      Object[1] = *v10;
      Timeout.QuadPart = -300000000LL;
      Buffer = 0;
      v18 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
      ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Buffer, 4u, 0LL, 0LL, 0, 0);
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          if ( IsDeviceEventVetoable && **(_DWORD **)(a1 + 48) )
            v2 = -1073741536;
          else
            v2 = 0;
        }
        else
        {
          v2 = v18 != 258 ? 0xC0000001 : 0;
        }
      }
      else
      {
        v2 = -1073741431;
      }
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      ExReleaseFastMutex(&PiUEventUsermodeEventQueueLock);
      PiUEventDereferenceEventEntry((PVOID)Pool2);
    }
    goto LABEL_19;
  }
  return v2;
}
