/*
 * XREFs of KeyboardStart @ 0x1C0002AE0
 * Callers:
 *     KeyboardPnP @ 0x1C0002010 (KeyboardPnP.c)
 *     KeyboardStartWorker @ 0x1C0002A50 (KeyboardStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003010 (__security_check_cookie.c)
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0005110 (KeyboardClassCheckWaitWakeEnabled.c)
 *     KbdEnableDisablePort @ 0x1C000D010 (KbdEnableDisablePort.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000E2B0 (KeyboardSendIrpSynchronously.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000F454 (KeyboardClassCreateWaitWakeIrp.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000F60C (KeyboardClassGetWaitWakeEnableState.c)
 */

__int64 __fastcall KeyboardStart(__int64 a1, __int64 a2)
{
  IRP *v2; // r14
  __int64 v3; // rbx
  int Status; // edi
  ULONG_PTR Information; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v7; // r15d
  struct _DEVICE_OBJECT *v8; // rcx
  char v10; // di
  char *v11; // rsi
  struct _IO_STACK_LOCATION *v12; // rcx
  ULONG_PTR v13; // rbp
  struct _IRP *MasterIrp; // rdi
  NTSTATUS v15; // esi
  KIRQL v16; // al
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h]
  __int128 v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]

  v2 = *(IRP **)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v2->IoStatus.Status = -1073741637;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Information = 0LL;
  v17[0] = 65600LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v17[1] = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v17;
  if ( (int)KeyboardSendIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 16), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    *(_DWORD *)(v3 + 284) = v20;
    *(_DWORD *)(v3 + 288) = HIDWORD(v19);
    *(_OWORD *)(v3 + 264) = v18;
    *(_DWORD *)(v3 + 280) = v19;
  }
  v2->IoStatus.Status = Status;
  v7 = 0;
  v2->IoStatus.Information = Information;
  *(_BYTE *)(v3 + 65) = 1;
  if ( *(int *)(v3 + 284) <= 1 || *(int *)(v3 + 288) <= 1 )
  {
    *(_DWORD *)(v3 + 200) = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 200) = 2;
    KeyboardClassGetWaitWakeEnableState(v3);
  }
  v8 = *(struct _DEVICE_OBJECT **)v3;
  *(_QWORD *)(v3 + 208) = &KeyboardClassWmiGuidList;
  *(_QWORD *)(v3 + 248) = 0LL;
  *(_QWORD *)(v3 + 216) = KeyboardClassQueryWmiRegInfo;
  *(_QWORD *)(v3 + 224) = KeyboardClassQueryWmiDataBlock;
  *(_QWORD *)(v3 + 232) = KeyboardClassSetWmiDataBlock;
  *(_QWORD *)(v3 + 240) = KeyboardClassSetWmiDataItem;
  *(_QWORD *)(v3 + 256) = 0LL;
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
      v10 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 196) + 16);
      v11 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 196);
      v11[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v10 )
      {
        v7 = KbdEnableDisablePort(1LL, v2, v3, v11);
        if ( v7 >= 0 )
        {
          v12 = v2->Tail.Overlay.CurrentStackLocation;
          v12[-1].MajorFunction = 15;
          v12[-1].Parameters.Read.ByteOffset.LowPart = 720904;
          v12[-1].FileObject = *(PFILE_OBJECT *)v11;
          v12[-1].Parameters.Read.Length = 0;
          v12[-1].Parameters.Create.Options = 4;
          v13 = v2->IoStatus.Information;
          MasterIrp = v2->AssociatedIrp.MasterIrp;
          v15 = v2->IoStatus.Status;
          v2->IoStatus.Information = 0LL;
          v2->AssociatedIrp.MasterIrp = (struct _IRP *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL);
          KeyboardSendIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 16), v2);
          v7 = 0;
          v2->IoStatus.Status = v15;
          v2->IoStatus.Information = v13;
          v2->AssociatedIrp.MasterIrp = MasterIrp;
        }
        else
        {
          v11[16] = 0;
        }
      }
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 88), 1u);
  }
  if ( *(int *)(v3 + 284) > 1 && *(int *)(v3 + 288) > 1 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
    if ( !*(_QWORD *)(v3 + 296) || *(_BYTE *)(v3 + 304) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v16);
      if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v3) )
        KeyboardClassCreateWaitWakeIrp((PVOID)v3);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v16);
    }
  }
  return (unsigned int)v7;
}
