/*
 * XREFs of UsbhPdoSetD0 @ 0x1C0003200
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetPdoPowerState @ 0x1C0003960 (UsbhSetPdoPowerState.c)
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0008330 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0009CFC (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhClearPdoIdleReady @ 0x1C000A20C (UsbhClearPdoIdleReady.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001AA00 (UsbhPdoSetD0_Finish.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C001AB8C (UsbhAcquireFdoPwrLock.c)
 *     UsbhDisableDeviceForWake @ 0x1C001AC18 (UsbhDisableDeviceForWake.c)
 *     UsbhReleasePowerContext @ 0x1C001BA68 (UsbhReleasePowerContext.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C001BD28 (UsbhCompletePdoIdleIrp.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E788 (WPP_RECORDER_SF_dd.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C003A2F8 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003CB44 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

void __fastcall UsbhPdoSetD0(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  ULONG_PTR v3; // rbp
  __int64 v5; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbx
  KIRQL v11; // al
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rbx
  KIRQL v15; // dl
  __int64 v16; // rbx
  KIRQL v17; // al
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // ebx
  int v31; // ebx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r8d
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  BOOLEAN v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  KIRQL v50; // dl
  KIRQL v51; // al
  _QWORD *v52; // r15
  _QWORD *v53; // rcx
  __int64 v54; // rdx
  int v55; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v56; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a3 + 48);
  v5 = a2;
  v55 = 0;
  v7 = PdoExt(v3);
  v8 = FdoExt(*(_QWORD *)(v7 + 1184));
  v56 = *(_QWORD *)(*(_QWORD *)(a3 + 64) + 184LL);
  Log((_DWORD)DeviceObject, 16, 1346651184, a3, v3);
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
  *(_QWORD *)(a3 + 112) = UsbhIncHubBusy((_DWORD)DeviceObject, v9, v3, 1430414448, 1);
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
  v19 = *(_DWORD *)(PdoExt(*(_QWORD *)(a3 + 48)) + 1128);
  FdoExt(*(_QWORD *)(v9 + 8));
  v21 = *(_DWORD *)(FdoExt(*(_QWORD *)(v9 + 8)) + 4172);
  if ( v21 <= 206 )
  {
    if ( v21 == 206 || (v24 = v21 - 201) == 0 )
    {
      v31 = v19 - 1;
      if ( v31 )
      {
        if ( v31 == 6 )
        {
          UsbhSetPdoPowerState(v9, v3, v22, 7, 13);
          UsbhReleaseFdoPwrLock(DeviceObject, v9, v38, v39);
          Log((_DWORD)DeviceObject, 16, 1999782960, 0, *(unsigned __int16 *)(v7 + 1428));
          KeWaitForSingleObject((PVOID)(v7 + 2360), Executive, 0, v40, 0LL);
        }
        else
        {
          UsbhSetPdoPowerState(v9, v3, v22, 7, 8);
          UsbhReleaseFdoPwrLock(DeviceObject, v9, v32, v33);
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
          UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
          PdoExt(*(_QWORD *)(a3 + 48));
          *(_DWORD *)(v7 + 2384) = *(_DWORD *)(v8 + 4216);
          UsbhSetPdoPowerState(v9, v3, v34, 1, 8);
          KeSetEvent((PRKEVENT)(v7 + 2360), 0, 0);
          UsbhReleaseFdoPwrLock(DeviceObject, v9, v35, v36);
          UsbhCompletePdoIdleIrp(DeviceObject, v3, 0LL);
          UsbhClearPdoIdleReady(DeviceObject, v3, a3);
          if ( (*(_DWORD *)(v7 + 1420) & 0x100) != 0 )
          {
            v37 = UsbhDisableDeviceForWake(*(_QWORD *)(v9 + 8), v3, &v55);
            v29 = v37;
            if ( (v37 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v37) )
              UsbhException(
                *(_QWORD *)(v9 + 8),
                *(unsigned __int16 *)(v7 + 1428),
                49,
                0,
                0,
                v29,
                v55,
                usbfile_pdopwr_c,
                1186,
                0);
          }
        }
      }
      else
      {
        UsbhSetPdoPowerState(v9, v3, v22, 1, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v9, v41, v42);
        Log((_DWORD)DeviceObject, 16, 1999848496, 0, *(unsigned __int16 *)(v7 + 1428));
      }
      v30 = 0;
      goto LABEL_40;
    }
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_7;
    v26 = v25 - 1;
    if ( !v26 || (unsigned int)(v26 - 1) <= 1 )
      goto LABEL_7;
LABEL_30:
    UsbhSetPdoPowerState(v9, v3, v22, v19, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v9, v47, v48);
    v30 = -1073741101;
LABEL_40:
    *(_QWORD *)(v7 + 2560) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy(DeviceObject, v29, *(_QWORD *)(a3 + 112));
    v54 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 112) = 0LL;
    UsbhEtwLogDevicePowerEvent(
      v7,
      v54,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(unsigned int *)(v56 + 24),
      v30);
    *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = v30;
    IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
    UsbhDecPdoIoCount(v3, *(_QWORD *)(a3 + 64));
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  v43 = v21 - 209;
  if ( v43 )
  {
    v44 = v43 - 1;
    if ( v44 )
    {
      v45 = v44 - 1;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( !v46 )
        {
LABEL_7:
          UsbhSetPdoPowerState(v9, v3, v22, v19, 9);
          UsbhReleaseFdoPwrLock(DeviceObject, v9, v27, v28);
          v30 = -1073741101;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_dd(
                WPP_GLOBAL_Control->DeviceExtension,
                v29,
                1,
                15,
                (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
                *(_WORD *)(v7 + 1428),
                211);
          }
          goto LABEL_40;
        }
        if ( v46 == 1 )
        {
          v30 = -1073741810;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v20,
              1,
              14,
              (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
              *(_WORD *)(v7 + 1428),
              14);
          }
          UsbhReleaseFdoPwrLock(DeviceObject, v9, v22, v23);
          goto LABEL_40;
        }
        goto LABEL_30;
      }
    }
  }
  UsbhSetPdoPowerState(v9, v3, v22, 3, 7);
  v49 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v9 + 8));
  *(_DWORD *)(v9 + 32) = 1734964085;
  v50 = *(_BYTE *)(v49 + 5064);
  *(_QWORD *)(v49 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v49 + 5056), v50);
  Log((_DWORD)DeviceObject, 16, 1349862448, a3, v3);
  UsbhClearPdoIdleReady(DeviceObject, v3, a3);
  Log((_DWORD)DeviceObject, 16, 2003321904, 0, v5);
  v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4176));
  if ( !*(_BYTE *)(v8 + 4184) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v51);
    UsbhPdoSetD0_Finish(v9, v3, *(_QWORD *)(a3 + 64));
    v30 = 0;
    goto LABEL_40;
  }
  v52 = (_QWORD *)(a3 + 96);
  v53 = *(_QWORD **)(v8 + 4200);
  if ( *v53 != v8 + 4192 )
    __fastfail(3u);
  *v52 = v8 + 4192;
  v52[1] = v53;
  *v53 = v52;
  *(_QWORD *)(v8 + 4200) = v52;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v51);
}
