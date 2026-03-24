/*
 * XREFs of MouseStart @ 0x1C0002AB0
 * Callers:
 *     MousePnP @ 0x1C0001510 (MousePnP.c)
 *     MouseStartWorker @ 0x1C0002A20 (MouseStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D60 (__security_check_cookie.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000CEC0 (MouseClassCreateWaitWakeIrp.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000CF10 (MouseClassGetWaitWakeEnableState.c)
 *     MouseSendIrpSynchronously @ 0x1C000D170 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MouseStart(__int64 a1, __int64 a2)
{
  IRP *v2; // rdi
  __int64 v3; // rbx
  int Status; // esi
  NTSTATUS v5; // ebp
  ULONG_PTR Information; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  KIRQL v9; // al
  KIRQL v10; // al
  char v11; // di
  char v13; // di
  char *v14; // rsi
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+30h] [rbp-68h]
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int128 v19; // [rsp+50h] [rbp-48h]

  v2 = *(IRP **)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v2->IoStatus.Status = -1073741637;
  v5 = 0;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Information = 0LL;
  v16[0] = 65600LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v16[1] = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v16;
  if ( (int)MouseSendIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 16), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    *(_DWORD *)(v3 + 268) = v19;
    *(_DWORD *)(v3 + 272) = HIDWORD(v18);
    *(_OWORD *)(v3 + 248) = v17;
    *(_DWORD *)(v3 + 264) = v18;
  }
  v2->IoStatus.Information = Information;
  v2->IoStatus.Status = Status;
  *(_BYTE *)(v3 + 65) = 1;
  if ( *(int *)(v3 + 268) <= 1 || *(int *)(v3 + 272) <= 1 )
  {
    *(_DWORD *)(v3 + 184) = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 184) = 2;
    MouseClassGetWaitWakeEnableState(v3);
  }
  v8 = *(struct _DEVICE_OBJECT **)v3;
  *(_QWORD *)(v3 + 192) = &MouseClassWmiGuidList;
  *(_QWORD *)(v3 + 232) = 0LL;
  *(_QWORD *)(v3 + 200) = MouseClassQueryWmiRegInfo;
  *(_QWORD *)(v3 + 208) = MouseClassQueryWmiDataBlock;
  *(_QWORD *)(v3 + 216) = MouseClassSetWmiDataBlock;
  *(_QWORD *)(v3 + 224) = MouseClassSetWmiDataItem;
  *(_QWORD *)(v3 + 240) = 0LL;
  IoWMIRegistrationControl(v8, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
    else
    {
      v13 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 180) + 16);
      v14 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 180);
      v14[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v13 )
      {
        LOBYTE(v15) = 1;
        v5 = MouEnableDisablePort(v15, 0LL, v3, v14);
        if ( v5 < 0 )
          v14[16] = 0;
      }
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 88), 1u);
  }
  if ( *(int *)(v3 + 268) > 1 && *(int *)(v3 + 272) > 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
    if ( !*(_QWORD *)(v3 + 280) || *(_BYTE *)(v3 + 288) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v9);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
      v11 = *(_BYTE *)(v3 + 345);
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v10);
      if ( v11 )
        MouseClassCreateWaitWakeIrp((PVOID)v3);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v9);
    }
  }
  return (unsigned int)v5;
}
