/*
 * XREFs of MouseClassRemoveDevice @ 0x1C00051D4
 * Callers:
 *     MousePnP @ 0x1C0001510 (MousePnP.c)
 * Callees:
 *     MouseClassCleanupQueue @ 0x1C0004AC8 (MouseClassCleanupQueue.c)
 */

void __fastcall MouseClassRemoveDevice(__int64 a1, char a2)
{
  IRP *v2; // rdi
  __int64 v3; // rbx
  KIRQL v4; // al
  IRP *v5; // rdx
  __int32 v6; // eax

  v2 = 0LL;
  v3 = a1;
  if ( a2 )
  {
    *(_BYTE *)(a1 + 346) = 1;
  }
  else if ( *(_BYTE *)(a1 + 346) )
  {
    goto LABEL_21;
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 304), 1) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
    v5 = *(IRP **)(v3 + 280);
    if ( v5 && !*(_BYTE *)(v3 + 288) )
    {
      *(_BYTE *)(v3 + 288) = 1;
      v2 = v5;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v4);
    if ( v2 )
      IoCancelIrp(v2);
    v6 = _InterlockedExchange((volatile __int32 *)(v3 + 304), 2);
    if ( v2 && v6 == 3 )
      IofCompleteRequest(v2, 0);
  }
  IoWMIRegistrationControl(*(PDEVICE_OBJECT *)v3, 2u);
  if ( *(_BYTE *)(v3 + 65) )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      }
      else
      {
        *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 180) + 16) = 0;
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        a1 = _InterlockedExchange64((volatile __int64 *)(v3 + 312), 0LL);
        if ( a1 )
          IoUnregisterPlugPlayNotification((PVOID)a1);
      }
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)(v3 + 96) )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 88), 0);
    }
  }
LABEL_21:
  if ( *(_BYTE *)(v3 + 64) )
    MouseClassCleanupQueue(a1, v3, 0LL);
}
