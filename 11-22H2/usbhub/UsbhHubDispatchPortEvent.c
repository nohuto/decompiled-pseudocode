/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C0017430
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0033D48 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0001CD0 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0001DA8 (UsbhSignalDriverResetEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0004C60 (UsbhAcquireEnumBusLock.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhWaitConnect @ 0x1C0018530 (UsbhWaitConnect.c)
 *     UsbhEnumerate1 @ 0x1C001A4E8 (UsbhEnumerate1.c)
 *     UsbhHandleSuspend @ 0x1C001A5BC (UsbhHandleSuspend.c)
 *     UsbhSignalResumeEvent @ 0x1C001B710 (UsbhSignalResumeEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C002E6BC (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C00353B4 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhEnumerate2 @ 0x1C004C770 (UsbhEnumerate2.c)
 *     UsbhDropDevice @ 0x1C004CAEC (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C004CC94 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  KIRQL v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  _DWORD *v26; // r14
  __int64 Pool2; // rax
  _DWORD *v28; // r14
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // r9
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // ecx
  int v48; // r15d
  __int64 v49; // r14
  __int16 v50; // dx
  int v51; // eax
  __int64 v52; // r14
  __int64 v53; // rcx
  void (__fastcall *v54)(_QWORD, int *, __int64, __int64); // rax
  int v55; // eax
  __int64 v56; // r14
  int v57; // eax
  int v58; // r8d
  __int64 v59; // rdx
  struct _KEVENT *v60; // rcx
  __int64 v61; // r9
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  KIRQL v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbp
  _QWORD *v75; // rsi
  _QWORD *v76; // rdx
  _QWORD *v77; // r9
  __int64 v78; // r8
  __int64 v79; // rcx
  _DWORD *v80; // rcx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  _QWORD *v85; // rcx
  _QWORD *v86; // rax
  int v87[18]; // [rsp+50h] [rbp-48h] BYREF

  if ( !a1 )
    goto LABEL_172;
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    goto LABEL_182;
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 729179504;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      88,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      0);
  v10 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 1313891184;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1145332592;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = a3;
      }
    }
  }
  v15 = 0LL;
  v16 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v18 = 1329877100;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 24) = 1884308559LL;
    }
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 1413771367;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v16;
      *(_QWORD *)(v21 + 24) = 0LL;
    }
  }
  if ( !(_WORD)v16 )
    goto LABEL_37;
  v22 = *(_QWORD *)(a1 + 64);
  if ( !v22 )
LABEL_182:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v22 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v22);
  if ( (unsigned __int16)v16 > *(unsigned __int8 *)(v22 + 2938) )
    goto LABEL_37;
  v23 = *(_QWORD *)(v22 + 3056);
  if ( !v23 )
    goto LABEL_37;
  v24 = 2928 * v16 + v23 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v25 = *(_QWORD *)(v22 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
    *(_DWORD *)v25 = 1044672615;
    *(_QWORD *)(v25 + 8) = 0LL;
    *(_QWORD *)(v25 + 16) = v16;
    *(_QWORD *)(v25 + 24) = v24;
  }
  if ( !v24 || (v15 = *(_QWORD *)(v24 + 392)) == 0 )
  {
LABEL_37:
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
    goto LABEL_38;
  }
  v26 = *(_DWORD **)(v15 + 64);
  if ( !v26 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v24 + 392), 0LL);
  if ( *v26 != 1329877064 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v24 + 392), *(_QWORD *)(v15 + 64));
  Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 1668571500;
    v28 = v26 + 318;
    *(_QWORD *)(Pool2 + 32) = v15;
    *(_DWORD *)(Pool2 + 24) = 1884308559;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    v29 = (_QWORD *)(Pool2 + 8);
    v30 = (_QWORD *)*((_QWORD *)v28 + 1);
    if ( (_DWORD *)*v30 != v28 )
      goto LABEL_171;
    *v29 = v28;
    v29[1] = v30;
    *v30 = v29;
    *((_QWORD *)v28 + 1) = v29;
  }
  else
  {
    ++v26[322];
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
  *(_DWORD *)(a2 + 416) = 1;
LABEL_38:
  v31 = *a4;
  *(_WORD *)(a2 + 420) = v31;
  v32 = (v15 != 0) | 0x10;
  if ( (v31 & 1) == 0 )
    v32 = v15 != 0;
  v33 = v32;
  v34 = v32 | 2;
  if ( (v31 & 4) == 0 )
    v34 = v33;
  v35 = v34;
  v36 = v34 | 4;
  if ( (v31 & 8) == 0 )
    v36 = v35;
  v37 = v36 | 8;
  if ( (v31 & 2) == 0 )
    v37 = v36;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 1414087210;
      *(_QWORD *)(v39 + 24) = v37;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 16) = v31;
    }
  }
  v40 = *(unsigned __int16 *)(a2 + 4);
  v41 = *(unsigned int *)(a2 + 400);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 844382762;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 16) = v41;
      *(_QWORD *)(v43 + 24) = v40;
    }
  }
  v44 = *(unsigned int *)(a3 + 8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v45 = *(_QWORD *)(a1 + 64);
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
      *(_DWORD *)v46 = 861159978;
      *(_QWORD *)(v46 + 24) = v37;
      *(_QWORD *)(v46 + 8) = 0LL;
      *(_QWORD *)(v46 + 16) = v44;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v44,
        89,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_WORD *)(a2 + 420));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int16 *)(a2 + 4),
          v44,
          90,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(a2 + 400));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v44,
            91,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            *(_DWORD *)(a3 + 8));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v44,
            92,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            v37);
      }
    }
  }
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 && (*(_DWORD *)(a3 + 8) & 0x80008) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        93,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 512, 1886353240, v37, *(unsigned int *)(a3 + 8));
    v37 &= ~8u;
    UsbhSignalResumeEvent(a1, a2);
    UsbhSignalSuspendEvent(a1, a2);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 60, a3, 56, 0, 0, usbfile_pchange_c, 5582, 0);
  }
  v47 = *(_DWORD *)(a3 + 8);
  v48 = *(_DWORD *)(a3 + 32);
  v49 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v50 = *(_WORD *)(a2 + 420);
  v51 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v49;
  v52 = a2 + 32 * (v49 + 27);
  *(_WORD *)(v52 + 16) = v50;
  *(_DWORD *)v52 = v51;
  *(_DWORD *)(v52 + 4) = v47;
  *(_BYTE *)(v52 + 18) = v37;
  *(_QWORD *)(v52 + 8) = v15;
  *(_BYTE *)(v52 + 19) = 0;
  *(_DWORD *)(v52 + 20) = v48;
  *(_DWORD *)(v52 + 28) = 1;
  v53 = *(_QWORD *)(a1 + 64);
  v87[0] = 0;
  if ( !v53 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v53 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v53);
  v54 = *(void (__fastcall **)(_QWORD, int *, __int64, __int64))(v53 + 4592);
  if ( v54 )
  {
    v54(*(_QWORD *)(v53 + 4560), v87, v44, v41);
    v55 = v87[0];
  }
  else
  {
    v55 = 0;
  }
  *(_DWORD *)(v52 + 24) = v55 - v48;
  if ( v15 )
  {
    v56 = *(_QWORD *)(v15 + 64);
    if ( !v56 )
      goto LABEL_180;
    if ( *(_DWORD *)v56 != 1329877064 )
      UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64));
    if ( *(_BYTE *)(v56 + 2740) && (*(_BYTE *)(a2 + 420) & 1) == 0 )
    {
      v57 = *(_DWORD *)(a3 + 8);
      if ( (v57 & 0x30008) != 0 )
      {
        if ( (v57 & 0x30000) != 0 )
        {
          Log(a1, 512, 1650742098, *(_QWORD *)(a3 + 40), *(unsigned int *)(a3 + 8));
          UsbhSignalSyncDeviceResetPdo(a1, v15, -1073741823);
          UsbhSignalDriverResetEvent(a1, a2);
        }
        Log(a1, 512, 1650741836, 0LL, *(unsigned int *)(a3 + 8));
        v58 = *(unsigned __int16 *)(a2 + 4);
        if ( *(_DWORD *)(v7 + 3072) == v58 )
        {
          v59 = *(_QWORD *)(a2 + 376);
          if ( *(_QWORD *)(v7 + 3080) == v59 )
            UsbhReleaseEnumBusLockEx(a1, v59, v58);
        }
        UsbhException(a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, 1);
      }
      goto LABEL_135;
    }
    if ( (*(_DWORD *)(v56 + 1420) & 0x400000) != 0 )
    {
      KeWaitForSingleObject((PVOID)(v56 + 2944), Executive, 0, 0, 0LL);
      if ( (*(_DWORD *)(v56 + 1420) & 0x4000000) != 0 && (*(_DWORD *)(a3 + 8) & 1) != 0 )
      {
        Log(a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v56 + 1420)) & 1, *(unsigned __int16 *)(a2 + 420));
        *(_DWORD *)(v56 + 1420) |= 0x3000000u;
        v60 = (struct _KEVENT *)(v56 + 2920);
        if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
          KeSetEvent(v60, 0, 0);
        else
          KeResetEvent(v60);
        KeSetEvent((PRKEVENT)(v56 + 2944), 0, 0);
        goto LABEL_135;
      }
      KeSetEvent((PRKEVENT)(v56 + 2944), 0, 0);
    }
  }
  if ( (*(_DWORD *)(a3 + 8) & 0x20000) == 0 || (v61 = *(_QWORD *)(a3 + 40), v61 == v15) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        94,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    v62 = *(_DWORD *)(a2 + 400);
    if ( v62 )
    {
      v63 = v62 - 1;
      if ( v63 )
      {
        v64 = v63 - 1;
        if ( v64 )
        {
          v65 = v64 - 1;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( v66 )
            {
              if ( v66 == 1 )
                *(_DWORD *)(a2 + 400) = UsbhHandleSuspend(a1, v15);
            }
            else
            {
              if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
              {
                *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, v15);
              }
              else
              {
                *(_DWORD *)(a2 + 400) = 4;
                if ( (*(_DWORD *)(a3 + 8) & 0x20000) != 0 )
                {
                  UsbhSignalSyncDeviceResetPdo(a1, v15, -1073741823);
                  UsbhSignalDriverResetEvent(a1, a2);
                }
                if ( (*(_DWORD *)(a3 + 8) & 0x10000) != 0 )
                {
                  UsbhSignalSyncDeviceResetPdo(a1, v15, -1073741823);
                  UsbhSignalDriverResetEvent(a1, a2);
                }
                if ( (*(_DWORD *)(a3 + 8) & 0x40000) != 0 )
                  UsbhSignalSuspendEvent(a1, a2);
                if ( (*(_DWORD *)(a3 + 8) & 0x100000) != 0 )
                {
                  UsbhSignalResumeEvent(a1, a2);
                  if ( v37 == 1 )
                  {
                    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
                    UsbhDropDevice(a1, a2, v15);
                  }
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  96,
                  (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
              }
              Log(a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v37);
            }
          }
          else
          {
            if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
              UsbhHandleOvercurrent(a1, v15);
            *(_DWORD *)(a2 + 400) = 3;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                95,
                (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
            }
            Log(a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v37);
          }
        }
        else
        {
          *(_DWORD *)(a2 + 400) = UsbhEnumerate2(a1, v15);
        }
      }
      else
      {
        *(_DWORD *)(a2 + 400) = UsbhEnumerate1(a1, v15);
      }
    }
    else
    {
      *(_DWORD *)(a2 + 400) = UsbhWaitConnect(a1, v15);
    }
  }
  else
  {
    Log(a1, 512, 1685222994, v61, *(unsigned int *)(a3 + 8));
    UsbhSignalSyncDeviceResetPdo(a1, *(_QWORD *)(a3 + 40), -1073741810);
    UsbhSignalDriverResetEvent(a1, a2);
  }
LABEL_135:
  if ( !*(_DWORD *)(a2 + 416) )
    goto LABEL_161;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    v67 = *(_QWORD *)(a1 + 64);
    if ( v67 )
    {
      v68 = *(_QWORD *)(v67 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v67 + 880)) & *(_DWORD *)(v67 + 884));
      *(_DWORD *)v68 = 827354229;
      *(_QWORD *)(v68 + 8) = 0LL;
      *(_QWORD *)(v68 + 16) = v15;
      *(_QWORD *)(v68 + 24) = a2;
    }
  }
  v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  *(_DWORD *)(a2 + 416) = 0;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    v70 = *(_QWORD *)(a1 + 64);
    if ( v70 )
    {
      v71 = *(_QWORD *)(v70 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 880)) & *(_DWORD *)(v70 + 884));
      *(_DWORD *)v71 = 844131445;
      *(_QWORD *)(v71 + 8) = 0LL;
      *(_QWORD *)(v71 + 16) = v15;
      *(_QWORD *)(v71 + 24) = a2;
    }
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v72 = *(_QWORD *)(a1 + 64);
    if ( v72 )
    {
      v73 = *(_QWORD *)(v72 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 880)) & *(_DWORD *)(v72 + 884));
      *(_DWORD *)v73 = 1348891236;
      *(_QWORD *)(v73 + 8) = 0LL;
      *(_QWORD *)(v73 + 16) = v15;
      *(_QWORD *)(v73 + 24) = 1884308559LL;
    }
  }
  if ( !v15 )
LABEL_172:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v74 = *(_QWORD *)(v15 + 64);
  if ( !v74 )
LABEL_180:
    UsbhTrapFatal_Dbg(v15, 0LL);
  if ( *(_DWORD *)v74 != 1329877064 )
    UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64));
  v75 = (_QWORD *)(v74 + 1272);
  v76 = *(_QWORD **)(v74 + 1272);
  if ( v76 == (_QWORD *)(v74 + 1272) )
  {
LABEL_155:
    v80 = (_DWORD *)(v74 + 1288);
    v81 = *(_DWORD *)(v74 + 1288);
    if ( v81 )
      *v80 = v81 - 1;
    goto LABEL_157;
  }
  while ( 1 )
  {
    v77 = v76 - 1;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v78 = *(_QWORD *)(a1 + 64);
      if ( v78 )
      {
        v79 = *(_QWORD *)(v78 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v78 + 880)) & *(_DWORD *)(v78 + 884));
        *(_DWORD *)v79 = 1064591724;
        *(_QWORD *)(v79 + 8) = 0LL;
        *(_QWORD *)(v79 + 16) = v74;
        *(_QWORD *)(v79 + 24) = 1884308559LL;
      }
    }
    if ( *((_DWORD *)v77 + 6) == 1884308559 && !v77[5] )
      break;
    v76 = (_QWORD *)*v76;
    if ( v76 == v75 )
      goto LABEL_155;
  }
  v85 = (_QWORD *)*v76;
  if ( *(_QWORD **)(*v76 + 8LL) != v76 || (v86 = (_QWORD *)v76[1], (_QWORD *)*v86 != v76) )
LABEL_171:
    __fastfail(3u);
  *v86 = v85;
  v85[1] = v86;
  ExFreePoolWithTag(v77, 0);
  v80 = (_DWORD *)(v74 + 1288);
LABEL_157:
  if ( (_QWORD *)*v75 == v75 && !*v80 )
    KeSetEvent((PRKEVENT)(v74 + 1296), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v69);
LABEL_161:
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v82 = *(_QWORD *)(a1 + 64);
    if ( v82 )
    {
      v83 = *(_QWORD *)(v82 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v82 + 880)) & *(_DWORD *)(v82 + 884));
      *(_DWORD *)v83 = 762733936;
      *(_QWORD *)(v83 + 8) = 0LL;
      *(_QWORD *)(v83 + 16) = a2;
      *(_QWORD *)(v83 + 24) = 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}
