/*
 * XREFs of UsbhFdoSetD0Cold @ 0x1C0009FA0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00070B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x1C003C838 (UsbhHardReset_Action.c)
 *     UsbhHubStart @ 0x1C0042CB0 (UsbhHubStart.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C0002030 (UsbhRefPdo.c)
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000C920 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001A270 (UsbhSyncPowerOnPorts.c)
 *     UsbhRawWait @ 0x1C001A650 (UsbhRawWait.c)
 *     UsbhFdoColdStartPdo @ 0x1C001B954 (UsbhFdoColdStartPdo.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 *     UsbhResetHubUpstreamPort @ 0x1C003CBB0 (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x1C003CC60 (UsbhResetNotifyCompletion.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(PDEVICE_OBJECT DeviceObject, __int64 a2, char a3)
{
  unsigned __int16 v6; // r12
  int v7; // r9d
  int v8; // eax
  unsigned int v9; // eax
  unsigned int started; // r15d
  unsigned int v11; // r9d
  unsigned __int16 i; // si
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v14; // rcx
  unsigned __int8 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdi
  void *v21; // rdx
  __int64 v22; // rcx
  KIRQL v23; // al
  __int64 v24; // rcx
  KIRQL v25; // r15
  void *v26; // rdx
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r8
  void *v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rdx
  signed int PortState; // eax
  __int64 v35; // r8
  void *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r13
  int v39; // r9d
  int v40; // eax
  char v41; // r9
  unsigned __int8 *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rcx
  KIRQL v45; // si
  void *v46; // rdx
  __int64 v47; // rcx
  unsigned __int8 *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  void *v51; // rdx
  __int64 v52; // rcx
  void *v53; // rdx
  __int64 v54; // rcx
  unsigned __int8 *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v60; // rax
  __int64 v61; // rsi
  signed int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // edi
  int v65; // ecx
  int v66; // r9d
  unsigned __int16 v67; // di
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rbp
  _DWORD *v71; // [rsp+70h] [rbp-48h]

  v71 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1668246628, 0LL, 0LL);
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START, 0, 0);
  if ( a3 )
  {
    v63 = UsbhResetHubUpstreamPort(DeviceObject);
    v64 = v63;
    if ( (v63 & 0xC0000000) == 0xC0000000 )
    {
      if ( !(unsigned __int8)Usb_Disconnected(v63) )
        UsbhException((int)DeviceObject, 0, 54, 0, 0, v65, 0, usbfile_fdopwr_c, 3274, 0);
      UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, v64);
      return v64;
    }
  }
  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 2048, 1346458174, 0LL, 0LL);
  v8 = UsbhDispatch_BusEvent(DeviceObject, a2, (unsigned int)(v7 + 10));
  Log((__int64)DeviceObject, 2048, 1346458172, 0LL, v8);
  v9 = UsbhSyncPowerOnPorts((_DWORD)DeviceObject);
  started = v9;
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    if ( !(unsigned __int8)Usb_Disconnected(v9) )
      UsbhException((int)DeviceObject, 0, 53, 0, 0, started, 0, usbfile_fdopwr_c, 3298, 0);
LABEL_84:
    UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
    return started;
  }
  Log((__int64)DeviceObject, 8, 2002872692, 100LL, 0LL);
  UsbhRawWait(v11);
  for ( i = 1; ; ++i )
  {
    while ( 1 )
    {
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
LABEL_128:
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
      if ( i > DeviceExtension[2938] )
      {
        v38 = a2;
        goto LABEL_48;
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v14 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v14 = 1413771367;
        *(_QWORD *)(v14 + 16) = i;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
      }
      if ( i )
      {
        v15 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v15 )
          goto LABEL_128;
        if ( *(_DWORD *)v15 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v15);
        if ( i <= v15[2938] )
        {
          v16 = *((_QWORD *)v15 + 382);
          if ( v16 )
          {
            v17 = 2928LL * i - 2928;
            v18 = v16 + v17;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v19 = *((_QWORD *)v15 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
              *(_DWORD *)v19 = 1044672615;
              *(_QWORD *)(v19 + 8) = 0LL;
              *(_QWORD *)(v19 + 16) = i;
              *(_QWORD *)(v19 + 24) = v18;
            }
            if ( v18 )
              break;
          }
        }
      }
LABEL_46:
      ++i;
    }
    v20 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v21 = DeviceObject->DeviceExtension;
      if ( v21 )
      {
        v22 = *((_QWORD *)v21 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
        *(_DWORD *)v22 = 1329877100;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = i;
        *(_QWORD *)(v22 + 24) = 1129270340LL;
      }
    }
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v24 = (unsigned int)UsbhLogMask;
    v25 = v23;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v26 = DeviceObject->DeviceExtension;
      if ( v26 )
      {
        v24 = *((_QWORD *)v26 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
        *(_DWORD *)v24 = 1413771367;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = i;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
    }
    v27 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v27 )
      goto LABEL_128;
    if ( *(_DWORD *)v27 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v27);
    if ( i <= v27[2938] )
    {
      v28 = *((_QWORD *)v27 + 382);
      if ( v28 )
      {
        v29 = v28 + v17;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v24 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v24 = 1044672615;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 16) = i;
          *(_QWORD *)(v24 + 24) = v29;
        }
        if ( v29 )
        {
          v20 = *(_QWORD *)(v29 + 392);
          if ( v20 )
            v20 = UsbhRefPdo(v24, v20, 0LL, 1129270340);
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    v30 = *(unsigned __int16 *)(v18 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v31 = DeviceObject->DeviceExtension;
      if ( v31 )
      {
        v32 = *((_QWORD *)v31 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v31 + 220) & *((_DWORD *)v31 + 221));
        *(_DWORD *)v32 = 828664931;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = v30;
        *(_QWORD *)(v32 + 24) = v20;
      }
    }
    if ( !v20 )
      break;
    v38 = a2;
    started = UsbhFdoColdStartPdo((_DWORD)DeviceObject);
    if ( (started & 0xC0000000) == 0xC0000000 )
    {
      UsbhUnlatchPdo((__int64)DeviceObject, v20, 0LL, 0x434F4C44u);
      goto LABEL_48;
    }
    UsbhUnlatchPdo((__int64)DeviceObject, v20, 0LL, 0x434F4C44u);
  }
  v33 = DeviceObject->DeviceExtension;
  if ( !v33 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *v33 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, v33);
  PortState = UsbhQueryPortState((_DWORD)DeviceObject);
  v35 = *(unsigned __int16 *)(v18 + 4);
  started = PortState;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v36 = DeviceObject->DeviceExtension;
    if ( v36 )
    {
      v37 = *((_QWORD *)v36 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
      *(_DWORD *)v37 = 826500195;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = v35;
      *(_QWORD *)(v37 + 24) = PortState;
    }
  }
  if ( (PortState & 0xC0000000) != 0xC0000000 )
    goto LABEL_46;
  Log((__int64)DeviceObject, 16, 1667515186, 0LL, PortState);
  if ( (unsigned __int8)Usb_Disconnected(started) )
  {
    UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, 0, started);
    started = 0;
    goto LABEL_46;
  }
  UsbhException((int)DeviceObject, *(unsigned __int16 *)(v18 + 4), 48, v66, 0, started, 0, usbfile_fdopwr_c, 3004, 0);
  v38 = a2;
LABEL_48:
  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 2048, 1346458174, 0LL, 0LL);
  v40 = UsbhDispatch_BusEvent(DeviceObject, v38, (unsigned int)(v39 + 8));
  Log((__int64)DeviceObject, 2048, 1346458172, 0LL, v40);
  if ( *((_BYTE *)v71 + 5268) == v41 )
    goto LABEL_49;
  v67 = 1;
  while ( 2 )
  {
    if ( v67 > *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_49:
          v42 = (unsigned __int8 *)DeviceObject->DeviceExtension;
          if ( !v42 )
            goto LABEL_128;
          if ( *(_DWORD *)v42 != 541218120 )
            UsbhTrapFatal_Dbg(DeviceObject, v42);
          if ( v6 > v42[2938] )
            goto LABEL_84;
          v43 = 0LL;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            v44 = *((_QWORD *)v42 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
            *(_DWORD *)v44 = 1329877100;
            *(_QWORD *)(v44 + 16) = v6;
            *(_QWORD *)(v44 + 8) = 0LL;
            *(_QWORD *)(v44 + 24) = 1129071666LL;
          }
          v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
          WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v46 = DeviceObject->DeviceExtension;
            if ( v46 )
            {
              v47 = *((_QWORD *)v46 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
              *(_DWORD *)v47 = 1413771367;
              *(_QWORD *)(v47 + 16) = v6;
              *(_QWORD *)(v47 + 8) = 0LL;
              *(_QWORD *)(v47 + 24) = 0LL;
            }
          }
          if ( v6 )
          {
            v48 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v48 )
              goto LABEL_128;
            if ( *(_DWORD *)v48 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v48);
            if ( v6 <= v48[2938] )
            {
              v49 = *((_QWORD *)v48 + 382);
              if ( v49 )
              {
                v50 = 2928LL * v6 + v49 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v49 = *((_QWORD *)v48 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v48 + 220) & *((_DWORD *)v48 + 221));
                  *(_DWORD *)v49 = 1044672615;
                  *(_QWORD *)(v49 + 8) = 0LL;
                  *(_QWORD *)(v49 + 16) = v6;
                  *(_QWORD *)(v49 + 24) = v50;
                }
                if ( v50 )
                {
                  v43 = *(_QWORD *)(v50 + 392);
                  if ( v43 )
                    v43 = UsbhRefPdo(v49, v43, 0LL, 1129071666);
                }
              }
            }
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v45);
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            v51 = DeviceObject->DeviceExtension;
            if ( v51 )
            {
              v52 = *((_QWORD *)v51 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v51 + 220) & *((_DWORD *)v51 + 221));
              *(_DWORD *)v52 = 829318514;
              *(_QWORD *)(v52 + 16) = v6;
              *(_QWORD *)(v52 + 8) = 0LL;
              *(_QWORD *)(v52 + 24) = v43;
            }
          }
          if ( v43 )
            break;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v53 = DeviceObject->DeviceExtension;
            if ( v53 )
            {
              v54 = *((_QWORD *)v53 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v53 + 220) & *((_DWORD *)v53 + 221));
              *(_DWORD *)v54 = 1413771367;
              *(_QWORD *)(v54 + 16) = v6;
              *(_QWORD *)(v54 + 8) = 0LL;
              *(_QWORD *)(v54 + 24) = 0LL;
            }
          }
          if ( v6 )
          {
            v55 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v55 )
              goto LABEL_128;
            if ( *(_DWORD *)v55 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v55);
            if ( v6 > v55[2938] )
            {
              v57 = 0LL;
            }
            else
            {
              v56 = *((_QWORD *)v55 + 382);
              if ( v56 )
              {
                v57 = 2928LL * v6 + v56 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v58 = *((_QWORD *)v55 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v55 + 220) & *((_DWORD *)v55 + 221));
                  *(_DWORD *)v58 = 1044672615;
                  *(_QWORD *)(v58 + 8) = 0LL;
                  *(_QWORD *)(v58 + 16) = v6;
                  *(_QWORD *)(v58 + 24) = v57;
                }
              }
              else
              {
                v57 = 0LL;
              }
            }
          }
          else
          {
            v57 = 0LL;
          }
          if ( *(_BYTE *)(v57 + 2841) )
          {
            *(_BYTE *)(v57 + 2841) = 0;
            UsbhQueueSoftConnectChange((_DWORD)DeviceObject);
          }
LABEL_83:
          ++v6;
        }
        v60 = PdoExt(v43);
        v61 = v60;
        if ( *(_BYTE *)(v60 + 2740) )
        {
          UsbhUnlatchPdo((__int64)DeviceObject, v43, 0LL, 0x434C4432u);
          goto LABEL_83;
        }
        if ( (*(_DWORD *)(v60 + 1420) & 0x4000) != 0 )
        {
          Log((__int64)DeviceObject, 16, 1346654803, 0LL, 0LL);
          UsbhEtwLogHubIrpEvent(
            DeviceObject,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET,
            *(unsigned __int16 *)(v61 + 1428),
            0);
          v62 = UsbhSyncResetDeviceInternal(DeviceObject, v38, v43);
          started = v62;
          if ( (v62 & 0xC0000000) == 0xC0000000 )
          {
            Log((__int64)DeviceObject, 16, 1919249970, 0LL, v62);
            UsbhQueueSoftConnectChange((_DWORD)DeviceObject);
            *(_DWORD *)(v61 + 1420) &= ~0x4000u;
            UsbhException((int)DeviceObject, 0, 88, 0, 0, started, 0, usbfile_fdopwr_c, 3445, 0);
            started = 0;
          }
          else
          {
            *(_DWORD *)(v61 + 1420) &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v43, 0LL, 0x434C4432u);
        ++v6;
      }
    }
    v68 = UsbhLatchPdo(DeviceObject, v67, 0LL, 1129071666LL);
    v69 = v68;
    if ( !v68 )
      goto LABEL_116;
    v70 = PdoExt(v68);
    if ( !*(_BYTE *)(v70 + 2740) )
      goto LABEL_115;
    started = UsbhSyncResetDeviceInternal(DeviceObject, v38, v69);
    if ( (started & 0x80000000) == 0 )
    {
      UsbhResetNotifyCompletion(*(_QWORD *)(v38 + 8));
LABEL_115:
      UsbhUnlatchPdo((__int64)DeviceObject, v69, 0LL, 0x434C4432u);
LABEL_116:
      ++v67;
      continue;
    }
    break;
  }
  UsbhQueueSoftConnectChange((_DWORD)DeviceObject);
  *(_DWORD *)(v70 + 1420) &= ~0x4000u;
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
  UsbhUnlatchPdo((__int64)DeviceObject, v69, 0LL, 0x434C4432u);
  return started;
}
