/*
 * XREFs of UsbhReset2Complete @ 0x1C000A9D0
 * Callers:
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00015D0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0002F00 (UsbhFdoCheckUpstreamConnectionState.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000C920 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000CBC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhCancelResetTimeout @ 0x1C000DCF0 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000FB0C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhDerefPdo @ 0x1C00108A0 (UsbhDerefPdo.c)
 *     UsbhRawWait @ 0x1C001A650 (UsbhRawWait.c)
 *     UsbhResetPort @ 0x1C001AB54 (UsbhResetPort.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C001AE7C (Usbh_UsbdReadFrameCounter.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001B058 (UsbhAllocateTimeoutObject.c)
 *     UsbhBusConnectPdo @ 0x1C001DE04 (UsbhBusConnectPdo.c)
 *     UsbhInitializeDevice @ 0x1C001E90C (UsbhInitializeDevice.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C001F008 (UsbhBusIf_GetContainerIdForPort.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhWait @ 0x1C002D834 (UsbhWait.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C00339C8 (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C0036D8C (UsbhDisablePort.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003A55C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C004B930 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C104 (UsbhBusUnlatchPdo.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildContainerID @ 0x1C004EB84 (UsbhBuildContainerID.c)
 *     UsbhFreeID @ 0x1C004FAE8 (UsbhFreeID.c)
 */

__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r15d
  _DWORD *v7; // r12
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  int FrameCounter; // eax
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // r12
  __int64 v17; // rdi
  KIRQL v18; // al
  __int64 v19; // rax
  KIRQL v20; // dl
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  KIRQL v24; // di
  __int64 v26; // rax
  KIRQL v27; // dl
  int v28; // eax
  KIRQL v29; // al
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // r9
  int v39; // r9d
  int v40; // [rsp+20h] [rbp-A8h]
  int v41; // [rsp+28h] [rbp-A0h]
  int v42; // [rsp+30h] [rbp-98h]
  int v43; // [rsp+38h] [rbp-90h]
  KIRQL v44; // [rsp+50h] [rbp-78h]
  PVOID P; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-68h]
  int v47; // [rsp+64h] [rbp-64h]
  int v48; // [rsp+68h] [rbp-60h]
  int v49; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v50[2]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v51; // [rsp+78h] [rbp-50h]
  __int16 v52; // [rsp+7Ah] [rbp-4Eh]

  v48 = 0;
  v49 = 0;
  v52 = 0;
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884435043, a2, 0LL);
  P = FdoExt(a1);
  v7 = P;
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v11 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v50[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v50[1] = v11;
  v51 = FrameCounter;
  Log(a1, 1024, 1701720625, a2, v11);
  if ( *(_DWORD *)(a2 + 544) )
  {
    UsbhWait(a1, 100LL);
  }
  else
  {
    Log(a1, 8, 2002872692, 15LL, 0LL);
    UsbhRawWait(v12);
  }
  v13 = (int)UsbhInitializeDevice(a1);
  UsbhEtwLogHubIrpEvent(
    a1,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE,
    *(unsigned __int16 *)(a2 + 4),
    0);
  Log(a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v13);
  if ( (int)v13 < 0 )
  {
LABEL_15:
    if ( (v13 & 0xC0000000) == 0xC0000000 )
    {
LABEL_39:
      v31 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log(a1, 1024, 1936025137, v31, (int)v13);
      v32 = (int)UsbhAllocateTimeoutObject(a1, a2, &P);
      v33 = *(_DWORD *)(a2 + 544);
      if ( v33 < 3 && (int)v32 >= 0 )
      {
        Log(a1, 1024, 1936025138, v33, v32);
        UsbhDisablePort(a1);
        v34 = *(unsigned __int16 *)(a2 + 4);
        v35 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v35, v34);
        UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897, 1);
        UsbhBusUnlatchPdo(a1, a3, a2, v36, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v32);
        UsbhResetPort(a1);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v32);
      UsbhSetEnumerationFailed(a1, (int)v50, v32, v42, v43, 2065);
    }
    else
    {
      v23 = PdoExt(a3);
      if ( !*(_BYTE *)(v23 + 2732)
        && ((*(_DWORD *)(v23 + 1420) & 0x200) == 0
         || (*(_DWORD *)(v23 + 1180) & 0x10) != 0
         || (UsbhBuildContainerID(a1, a3), !*(_BYTE *)(v23 + 2732)))
        || (v7[640] & 1) != 0
        && (UsbhBusIf_SetContainerIdForPort(a1, *(unsigned __int16 *)(v23 + 1428), v23 + 2716), !*(_BYTE *)(v23 + 2732)) )
      {
        if ( (v7[640] & 1) != 0 )
        {
          if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *(unsigned __int16 *)(v23 + 1428), v23 + 2716) >= 0 )
            *(_BYTE *)(v23 + 2732) = 1;
          LODWORD(v13) = 0;
        }
      }
      Log(a1, 1024, 1970032689, a3, a2);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      *(_DWORD *)(a2 + 416) = 0;
      Log(a1, 1024, 1970032690, a3, a2);
      UsbhDerefPdo(a1, a3, 0LL, 1884308559LL);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v13);
      *(_DWORD *)(PdoExt(a3) + 2820) = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return 0;
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(_QWORD *)(a2 + 376);
  v46 = 0;
  v16 = 0;
  UsbhReleaseEnumBusLockEx(a1, v15, v14);
  v17 = *(_QWORD *)(a2 + 376);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v17 + 136) = 1;
  *(_BYTE *)(v17 + 132) = v18;
  *(_DWORD *)(v17 + 88) = 2018460752;
  *(_DWORD *)(v17 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v17;
  *(_QWORD *)(v17 + 24) = KeGetCurrentThread();
  if ( a3 && *(_DWORD *)(PdoExt(a3) + 1124) == 3 )
  {
    Log(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v19 = *(_QWORD *)(a2 + 376);
    v16 = 1;
    LODWORD(v13) = 0;
    *(_DWORD *)(v19 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v20 = *(_BYTE *)(v19 + 132);
    *(_DWORD *)(v19 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v26 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v27 = *(_BYTE *)(v26 + 132);
    *(_DWORD *)(v26 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v27);
    v28 = UsbhSetupDevice(a1);
    v13 = v28;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v28);
    Log(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v13);
  }
  while ( 1 )
  {
    if ( (int)v13 >= 0 )
    {
      v13 = (int)UsbhFdoCheckUpstreamConnectionState(a1, &v49);
      Log(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v13);
    }
    Log(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (v13 & 0xC0000000) == 0xC0000000 )
      break;
    v21 = PdoExt(a3);
    v22 = v21;
    if ( (*(_DWORD *)(v21 + 1420) & 0x200) == 0 || v16 == 1 )
      goto LABEL_14;
    ++v46;
    v47 = 4;
    v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 2808));
    v44 = v29;
    if ( !*(_DWORD *)(v22 + 2816) )
    {
      v30 = PdoExt(a3);
      if ( (*(_DWORD *)(v30 + 1420) & 0x200) == 0
        || (v42 = v30 + 2128,
            LOWORD(v41) = *(_WORD *)(v30 + 1410),
            LOWORD(v40) = *(_WORD *)(v30 + 1408),
            v47 = USBD_AddDeviceToGlobalList(a3, a1, *(unsigned __int16 *)(v30 + 1428), 0LL, v40, v41),
            v47 == 1) )
      {
        *(_DWORD *)(v22 + 2816) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 2808), v44);
        goto LABEL_14;
      }
      v29 = v44;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 2808), v29);
    if ( v47 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      UsbhException(
        a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        *(_QWORD *)(v22 + 2136),
        *(_DWORD *)(v22 + 2132),
        v13,
        0,
        usbfile_busfunc_c,
        1932,
        0);
      UsbhFreeID(v22 + 2128);
      *(_DWORD *)(v22 + 1420) &= ~0x200u;
      goto LABEL_14;
    }
    if ( v47 != 2 )
    {
      if ( v47 == 4 )
      {
        LODWORD(v13) = -1073741823;
        goto LABEL_39;
      }
LABEL_14:
      v7 = P;
      goto LABEL_15;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v13) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_39;
    }
    UsbhWait(a1, LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc));
    if ( v46 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v13) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1987, 0);
      *(_DWORD *)(PdoExt(a3) + 2820) = 1073807363;
      goto LABEL_39;
    }
  }
  if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v13) )
  {
    Log(a1, 1024, 1701725522, v38, v37);
    UsbhDisablePort(a1);
    goto LABEL_14;
  }
  Log(a1, 1024, 1701720644, v38, v37);
  UsbhBusUnlatchPdo(a1, a3, a2, v39, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v13);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}
