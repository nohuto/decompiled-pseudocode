/*
 * XREFs of UsbhPdoSetD0 @ 0x1C00055F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001330 (UsbhCompletePdoIdleIrp.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00019E0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0001A6C (UsbhPdoSetD0_Finish.c)
 *     UsbhDisableDeviceForWake @ 0x1C0001BF8 (UsbhDisableDeviceForWake.c)
 *     UsbhSetPdoPowerState @ 0x1C0002CC0 (UsbhSetPdoPowerState.c)
 *     UsbhReleasePowerContext @ 0x1C00035EC (UsbhReleasePowerContext.c)
 *     UsbhClearPdoIdleReady @ 0x1C0004AC0 (UsbhClearPdoIdleReady.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000AFE0 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000DFB0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDecPdoIoCount @ 0x1C000EE64 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002DDB8 (WPP_RECORDER_SF_dd.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C00398B8 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C2B4 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

void __fastcall UsbhPdoSetD0(PDEVICE_OBJECT DeviceObject, unsigned int a2, _QWORD *a3)
{
  ULONG_PTR v3; // rbp
  __int64 v5; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbx
  KIRQL v11; // al
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rbx
  KIRQL v15; // dl
  __int64 v16; // rbx
  KIRQL v17; // al
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rbx
  KIRQL v24; // dl
  KIRQL v25; // al
  _QWORD *v26; // r15
  _QWORD *v27; // r8
  int v28; // ebx
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // r8
  unsigned int v32; // eax
  BOOLEAN v33; // r9
  __int64 v34; // rdx
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v3 = a3[6];
  v5 = a2;
  v7 = PdoExt(v3);
  v8 = FdoExt(*(_QWORD *)(v7 + 1184));
  v35 = *(_QWORD *)(a3[8] + 184LL);
  Log((_DWORD)DeviceObject, 16, 1346651184, (_DWORD)a3, v3);
  v9 = PdoExt(v3) + 944;
  v10 = FdoExt(DeviceObject);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 5056));
  v12 = *(_DWORD *)(v10 + 4172);
  *(_BYTE *)(v10 + 5064) = v11;
  *(_DWORD *)(v9 + 40) = v12;
  *(_DWORD *)(v9 + 44) = 126;
  *(_DWORD *)(v9 + 32) = 844055622;
  *(_DWORD *)(v9 + 36) = 1381131376;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v10 + 1344) = v9;
  UsbhSetPdoPowerState(v9, v3, v13, 8, 8);
  v14 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v9 + 8));
  *(_DWORD *)(v9 + 32) = 1734964085;
  v15 = *(_BYTE *)(v14 + 5064);
  *(_QWORD *)(v14 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 5056), v15);
  a3[14] = UsbhIncHubBusy((_DWORD)DeviceObject, v9, v3, 1430414448, 1);
  v16 = FdoExt(DeviceObject);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 5056));
  v18 = *(_DWORD *)(v16 + 4172);
  *(_BYTE *)(v16 + 5064) = v17;
  *(_DWORD *)(v9 + 40) = v18;
  *(_DWORD *)(v9 + 44) = 126;
  *(_DWORD *)(v9 + 32) = 844055622;
  *(_DWORD *)(v9 + 36) = 809792336;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v16 + 1344) = v9;
  v19 = *(_DWORD *)(PdoExt(a3[6]) + 1128);
  FdoExt(*(_QWORD *)(v9 + 8));
  v21 = *(_DWORD *)(FdoExt(*(_QWORD *)(v9 + 8)) + 4172);
  if ( v21 == 201 )
    goto LABEL_22;
  if ( v21 <= 201 )
  {
LABEL_21:
    UsbhSetPdoPowerState(v9, v3, v22, v19, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v28 = -1073741101;
    goto LABEL_37;
  }
  if ( v21 <= 205 )
    goto LABEL_18;
  if ( v21 == 206 )
  {
LABEL_22:
    v30 = v19 - 1;
    if ( v30 )
    {
      if ( v30 == 6 )
      {
        UsbhSetPdoPowerState(v9, v3, v22, 7, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        Log((_DWORD)DeviceObject, 16, 1999782960, 0, *(unsigned __int16 *)(v7 + 1428));
        KeWaitForSingleObject((PVOID)(v7 + 2360), Executive, 0, v33, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState(v9, v3, v22, 7, 8);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        if ( (*(_DWORD *)(v7 + 1420) & 0x4000000) != 0 )
        {
          UsbhPdoWaitForD3Reconnect(DeviceObject);
        }
        else
        {
          UsbhSyncResumeDeviceInternal(DeviceObject, v9, v3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
              *(_WORD *)(v7 + 1428));
          }
          UsbhSet_Pdo_Dx(v3, 1LL);
        }
        UsbhAcquireFdoPwrLock((__int64)DeviceObject, v9, 126, 809792336);
        PdoExt(a3[6]);
        *(_DWORD *)(v7 + 2384) = *(_DWORD *)(v8 + 4216);
        UsbhSetPdoPowerState(v9, v3, v31, 1, 8);
        KeSetEvent((PRKEVENT)(v7 + 2360), 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        UsbhCompletePdoIdleIrp((__int64)DeviceObject, v3, 0);
        UsbhClearPdoIdleReady((__int64)DeviceObject, v3, (__int64)a3);
        if ( (*(_DWORD *)(v7 + 1420) & 0x100) != 0 )
        {
          v32 = UsbhDisableDeviceForWake(*(_QWORD *)(v9 + 8), v3);
          v29 = v32;
          if ( (v32 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v32) )
            UsbhException(
              *(_QWORD *)(v9 + 8),
              *(unsigned __int16 *)(v7 + 1428),
              49,
              0,
              0,
              v29,
              0,
              usbfile_pdopwr_c,
              1186,
              0);
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState(v9, v3, v22, 1, 13);
      UsbhReleaseFdoPwrLock(DeviceObject, v9);
      Log((_DWORD)DeviceObject, 16, 1999848496, 0, *(unsigned __int16 *)(v7 + 1428));
    }
    v28 = 0;
    goto LABEL_37;
  }
  if ( v21 <= 208 )
    goto LABEL_21;
  if ( v21 > 211 )
  {
    if ( v21 != 212 )
    {
      if ( v21 == 213 )
      {
        v28 = -1073741810;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            1,
            14,
            (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
            *(_WORD *)(v7 + 1428),
            14);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        goto LABEL_37;
      }
      goto LABEL_21;
    }
LABEL_18:
    UsbhSetPdoPowerState(v9, v3, v22, v19, 9);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v28 = -1073741101;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v29,
        1,
        15,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        *(_WORD *)(v7 + 1428),
        211);
    goto LABEL_37;
  }
  UsbhSetPdoPowerState(v9, v3, v22, 3, 7);
  v23 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v9 + 8));
  *(_DWORD *)(v9 + 32) = 1734964085;
  v24 = *(_BYTE *)(v23 + 5064);
  *(_QWORD *)(v23 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 5056), v24);
  Log((_DWORD)DeviceObject, 16, 1349862448, (_DWORD)a3, v3);
  UsbhClearPdoIdleReady((__int64)DeviceObject, v3, (__int64)a3);
  Log((_DWORD)DeviceObject, 16, 2003321904, 0, v5);
  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4176));
  if ( !*(_BYTE *)(v8 + 4184) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v25);
    UsbhPdoSetD0_Finish(v9, v3, a3[8]);
    v28 = 0;
LABEL_37:
    *(_QWORD *)(v7 + 2560) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy(DeviceObject, v29, a3[14]);
    v34 = a3[8];
    a3[14] = 0LL;
    UsbhEtwLogDevicePowerEvent(
      v7,
      v34,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(unsigned int *)(v35 + 24),
      v28);
    *(_DWORD *)(a3[8] + 48LL) = v28;
    IofCompleteRequest((PIRP)a3[8], 0);
    UsbhDecPdoIoCount(v3, a3[8]);
    UsbhReleasePowerContext((__int64)DeviceObject, (__int64)a3);
    return;
  }
  v26 = a3 + 12;
  v27 = *(_QWORD **)(v8 + 4200);
  if ( *v27 != v8 + 4192 )
    __fastfail(3u);
  *v26 = v8 + 4192;
  v26[1] = v27;
  *v27 = v26;
  *(_QWORD *)(v8 + 4200) = v26;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v25);
}
