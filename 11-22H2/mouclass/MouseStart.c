/*
 * XREFs of MouseStart @ 0x1C00026C0
 * Callers:
 *     MousePnP @ 0x1C0001EE0 (MousePnP.c)
 *     MouseStartWorker @ 0x1C0002630 (MouseStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00029B0 (__security_check_cookie.c)
 *     MouseClassCheckWaitWakeEnabled @ 0x1C0004898 (MouseClassCheckWaitWakeEnabled.c)
 *     MouEnableDisablePort @ 0x1C000D230 (MouEnableDisablePort.c)
 *     MouseSendIrpSynchronously @ 0x1C000DEF0 (MouseSendIrpSynchronously.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000EF00 (MouseClassCreateWaitWakeIrp.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000F0BC (MouseClassGetWaitWakeEnableState.c)
 */

__int64 __fastcall MouseStart(__int64 a1, __int64 a2)
{
  IRP *v2; // rdi
  __int64 v3; // rbx
  int Status; // ebp
  NTSTATUS v5; // esi
  ULONG_PTR Information; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int *v8; // rdi
  struct _DEVICE_OBJECT *v9; // rcx
  char v11; // di
  char *v12; // rbp
  __int64 v13; // rcx
  KIRQL v14; // al
  _QWORD v15[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]

  v2 = *(IRP **)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v2->IoStatus.Status = -1073741637;
  v5 = 0;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Information = 0LL;
  v15[0] = 65600LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v15[1] = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v15;
  if ( (int)MouseSendIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 16), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    *(_DWORD *)(v3 + 268) = v18;
    *(_DWORD *)(v3 + 272) = HIDWORD(v17);
    *(_OWORD *)(v3 + 248) = v16;
    *(_DWORD *)(v3 + 264) = v17;
  }
  v2->IoStatus.Information = Information;
  v2->IoStatus.Status = Status;
  v8 = (int *)(v3 + 272);
  *(_BYTE *)(v3 + 65) = 1;
  if ( *(int *)(v3 + 268) <= 1 || *v8 <= 1 )
  {
    *(_DWORD *)(v3 + 184) = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 184) = 2;
    MouseClassGetWaitWakeEnableState(v3);
  }
  v9 = *(struct _DEVICE_OBJECT **)v3;
  *(_QWORD *)(v3 + 192) = &MouseClassWmiGuidList;
  *(_QWORD *)(v3 + 232) = 0LL;
  *(_QWORD *)(v3 + 200) = MouseClassQueryWmiRegInfo;
  *(_QWORD *)(v3 + 208) = MouseClassQueryWmiDataBlock;
  *(_QWORD *)(v3 + 216) = MouseClassSetWmiDataBlock;
  *(_QWORD *)(v3 + 224) = MouseClassSetWmiDataItem;
  *(_QWORD *)(v3 + 240) = 0LL;
  IoWMIRegistrationControl(v9, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
    else
    {
      v11 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 180) + 16);
      v12 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 180);
      v12[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v11 )
      {
        LOBYTE(v13) = 1;
        v5 = MouEnableDisablePort(v13, 0LL, v3, v12);
        if ( v5 < 0 )
          v12[16] = 0;
      }
    }
    v8 = (int *)(v3 + 272);
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 88), 1u);
  }
  if ( *(int *)(v3 + 268) > 1 && *v8 > 1 )
  {
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
    if ( !*(_QWORD *)(v3 + 280) || *(_BYTE *)(v3 + 288) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v14);
      if ( (unsigned __int8)MouseClassCheckWaitWakeEnabled(v3) )
        MouseClassCreateWaitWakeIrp((PVOID)v3);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v14);
    }
  }
  return (unsigned int)v5;
}
