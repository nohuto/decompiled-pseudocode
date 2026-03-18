/*
 * XREFs of UsbhBusPause_Action @ 0x1C0014220
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C00102A0 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhSsh_CheckHubIdle @ 0x1C00038F4 (UsbhSsh_CheckHubIdle.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhPostInterrupt @ 0x1C00104E0 (UsbhPostInterrupt.c)
 *     UsbhDerefPdo @ 0x1C00108A0 (UsbhDerefPdo.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhCancelEnumeration @ 0x1C001EB50 (UsbhCancelEnumeration.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002DFC0 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // r15
  char *DeviceExtension; // rdi
  __int64 v5; // rcx
  IRP *v6; // r8
  IRP *v7; // rcx
  void *v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 i; // r14
  unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned __int8 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  void *v21; // rdx
  __int64 v22; // rcx
  void *v23; // rdx
  __int64 v24; // rcx
  KIRQL v25; // si
  void *v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // r15
  _DWORD *v33; // rdi
  __int64 Pool2; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  _DWORD *v37; // rdi
  int v38; // r8d
  void *v39; // rdx
  __int64 v40; // rcx
  void *v41; // rdx
  __int64 v42; // rcx
  unsigned __int8 *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r10
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  void *v48; // rdx
  __int64 v49; // rcx
  void *v50; // rdx
  __int64 v51; // rcx
  unsigned __int8 *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdi
  void *v57; // rdx
  __int64 v58; // rcx
  KIRQL v59; // r12
  void *v60; // rdx
  __int64 v61; // rcx
  unsigned __int8 *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r15
  __int64 v65; // rcx
  __int64 v66; // r15
  _DWORD *v67; // rdi
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  __int64 v71; // rdx
  KIRQL v72; // di
  KIRQL v73; // dl
  __int64 v74; // rcx
  __int64 v75; // [rsp+78h] [rbp-60h]
  __int64 v76; // [rsp+80h] [rbp-58h]

  v2 = a2;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
LABEL_135:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v5 = 829776240;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 678, 0xFFFFFFFF) == 1 )
  {
    v6 = (IRP *)*((_QWORD *)DeviceExtension + 333);
    v7 = v6;
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v8 = DeviceObject->DeviceExtension;
      if ( v8 )
      {
        v9 = *((_QWORD *)v8 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
        *(_DWORD *)v9 = 1363763555;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = v6;
        *(_QWORD *)(v9 + 24) = 0LL;
        v7 = (IRP *)*((_QWORD *)DeviceExtension + 333);
      }
    }
    IoCancelIrp(v7);
  }
  KeWaitForSingleObject(DeviceExtension + 2688, Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(v2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle((__int64)DeviceObject) < 0 )
  {
    *((_DWORD *)DeviceExtension + 678) = 0;
    KeResetEvent((PRKEVENT)DeviceExtension + 112);
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  for ( i = 1; ; ++i )
  {
    v12 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v12 )
      goto LABEL_135;
    if ( *(_DWORD *)v12 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v12);
    if ( i > v12[2938] )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v13 = *((_QWORD *)v12 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
      *(_DWORD *)v13 = 1413771367;
      *(_QWORD *)(v13 + 16) = i;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    if ( i )
    {
      v15 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v15 )
        goto LABEL_135;
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v15);
      if ( i <= v15[2938] )
      {
        v16 = *((_QWORD *)v15 + 382);
        if ( v16 )
        {
          v14 = 2928LL * i + v16 - 2928;
          v75 = v14;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v17 = *((_QWORD *)v15 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
            *(_DWORD *)v17 = 1044672615;
            *(_QWORD *)(v17 + 8) = 0LL;
            *(_QWORD *)(v17 + 16) = i;
            *(_QWORD *)(v17 + 24) = v14;
          }
        }
        else
        {
          v14 = 0LL;
          v75 = 0LL;
        }
      }
      else
      {
        v14 = 0LL;
        v75 = 0LL;
      }
    }
    else
    {
      v14 = 0LL;
      v75 = 0LL;
    }
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v18 = DeviceObject->DeviceExtension;
      if ( v18 )
      {
        v19 = *((_QWORD *)v18 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
        *(_DWORD *)v19 = 1467310448;
        *(_QWORD *)(v19 + 24) = i;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
      }
    }
    if ( v14 )
    {
      v20 = *(int *)(v14 + 696);
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v21 = DeviceObject->DeviceExtension;
        if ( v21 )
        {
          v22 = *((_QWORD *)v21 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
          *(_DWORD *)v22 = 846553456;
          *(_QWORD *)(v22 + 24) = i;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 16) = v20;
        }
      }
    }
    if ( *(_DWORD *)(v2 + 128) == 6 )
      KeWaitForSingleObject((PVOID)(v14 + 520), Executive, 0, 0, 0LL);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v23 = DeviceObject->DeviceExtension;
      if ( v23 )
      {
        v24 = *((_QWORD *)v23 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
        *(_DWORD *)v24 = 1329877100;
        *(_QWORD *)(v24 + 16) = i;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 24) = 1348564304LL;
      }
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v26 = DeviceObject->DeviceExtension;
      if ( v26 )
      {
        v27 = *((_QWORD *)v26 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
        *(_DWORD *)v27 = 1413771367;
        *(_QWORD *)(v27 + 16) = i;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 24) = 0LL;
      }
    }
    if ( !i )
      goto LABEL_61;
    v28 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v28 )
      goto LABEL_135;
    if ( *(_DWORD *)v28 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v28);
    if ( i <= v28[2938] && (v29 = *((_QWORD *)v28 + 382)) != 0 )
    {
      v30 = 2928LL * i + v29 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v31 = *((_QWORD *)v28 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
        *(_DWORD *)v31 = 1044672615;
        *(_QWORD *)(v31 + 8) = 0LL;
        *(_QWORD *)(v31 + 16) = i;
        *(_QWORD *)(v31 + 24) = v30;
      }
      if ( v30 && (v32 = *(_QWORD *)(v30 + 392)) != 0 )
      {
        v33 = PdoExt(v32);
        Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 1668571500;
          *(_QWORD *)(Pool2 + 32) = v32;
          *(_DWORD *)(Pool2 + 24) = 1348564304;
          *(_QWORD *)(Pool2 + 40) = 0LL;
          v35 = (_QWORD *)(Pool2 + 8);
          v36 = (_QWORD *)*((_QWORD *)v33 + 160);
          if ( (_DWORD *)*v36 != v33 + 318 )
            goto LABEL_131;
          *v35 = v33 + 318;
          v35[1] = v36;
          *v36 = v35;
          *((_QWORD *)v33 + 160) = v35;
        }
        else
        {
          ++v33[322];
        }
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
        v37 = PdoExt(v32);
        KeWaitForSingleObject(v37 + 724, Executive, 0, 0, 0LL);
        v37[355] |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v37 + 724), 0, 0);
        Log((__int64)DeviceObject, 256, 1968194639, v32, 1348564304LL);
        LOBYTE(v37) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        UsbhDerefPdo((__int64)DeviceObject, v32, 0LL, 0x50617550u);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, (KIRQL)v37);
        v2 = a2;
      }
      else
      {
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
        v2 = a2;
      }
    }
    else
    {
LABEL_61:
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    }
    HIDWORD(v76) = 0;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v39 = DeviceObject->DeviceExtension;
      if ( v39 )
      {
        v40 = *((_QWORD *)v39 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
        *(_DWORD *)v40 = 829912937;
        *(_QWORD *)(v40 + 24) = i;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 16) = v2;
      }
    }
    LODWORD(v76) = 0x80000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        79,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v41 = DeviceObject->DeviceExtension;
      if ( v41 )
      {
        v42 = *((_QWORD *)v41 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v41 + 220) & *((_DWORD *)v41 + 221));
        *(_DWORD *)v42 = 1413771367;
        *(_QWORD *)(v42 + 16) = i;
        *(_QWORD *)(v42 + 8) = 0LL;
        *(_QWORD *)(v42 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v43 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v43 )
        goto LABEL_135;
      if ( *(_DWORD *)v43 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v43);
      if ( i <= v43[2938] )
      {
        v44 = *((_QWORD *)v43 + 382);
        if ( v44 )
        {
          v38 = i;
          v45 = 2928LL * i + v44 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v46 = *((_QWORD *)v43 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v43 + 220) & *((_DWORD *)v43 + 221));
            *(_DWORD *)v46 = 1044672615;
            *(_QWORD *)(v46 + 8) = 0LL;
            *(_QWORD *)(v46 + 16) = i;
            *(_QWORD *)(v46 + 24) = v45;
          }
          if ( v45 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v45, 4, v2, v76, 0, 0LL, 0LL);
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        80,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i);
    v47 = DeviceObject->DeviceExtension;
    if ( !v47 )
      goto LABEL_135;
    if ( *v47 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v47);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v47,
        v38,
        66,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i,
        v2);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v48 = DeviceObject->DeviceExtension;
      if ( v48 )
      {
        v49 = *((_QWORD *)v48 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v48 + 220) & *((_DWORD *)v48 + 221));
        *(_DWORD *)v49 = 842024272;
        *(_QWORD *)(v49 + 24) = i;
        *(_QWORD *)(v49 + 8) = 0LL;
        *(_QWORD *)(v49 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v50 = DeviceObject->DeviceExtension;
      if ( v50 )
      {
        v51 = *((_QWORD *)v50 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v50 + 220) & *((_DWORD *)v50 + 221));
        *(_DWORD *)v51 = 1413771367;
        *(_QWORD *)(v51 + 16) = i;
        *(_QWORD *)(v51 + 8) = 0LL;
        *(_QWORD *)(v51 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v52 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v52 )
        goto LABEL_135;
      if ( *(_DWORD *)v52 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v52);
      if ( i <= v52[2938] )
      {
        v53 = *((_QWORD *)v52 + 382);
        if ( v53 )
        {
          v54 = 2928LL * i + v53 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v55 = *((_QWORD *)v52 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v52 + 220) & *((_DWORD *)v52 + 221));
            *(_DWORD *)v55 = 1044672615;
            *(_QWORD *)(v55 + 8) = 0LL;
            *(_QWORD *)(v55 + 16) = i;
            *(_QWORD *)(v55 + 24) = v54;
          }
          if ( v54 )
          {
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v54, 2, v2, 0LL, 0, 0LL, 0LL);
            v56 = *(unsigned __int16 *)(v54 + 4);
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v57 = DeviceObject->DeviceExtension;
              if ( v57 )
              {
                v58 = *((_QWORD *)v57 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v57 + 220) & *((_DWORD *)v57 + 221));
                *(_DWORD *)v58 = 1329877100;
                *(_QWORD *)(v58 + 8) = 0LL;
                *(_QWORD *)(v58 + 16) = v56;
                *(_QWORD *)(v58 + 24) = 1884308559LL;
              }
            }
            v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
            WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v60 = DeviceObject->DeviceExtension;
              if ( v60 )
              {
                v61 = *((_QWORD *)v60 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v60 + 220) & *((_DWORD *)v60 + 221));
                *(_DWORD *)v61 = 1413771367;
                *(_QWORD *)(v61 + 8) = 0LL;
                *(_QWORD *)(v61 + 16) = v56;
                *(_QWORD *)(v61 + 24) = 0LL;
              }
            }
            if ( !(_WORD)v56 )
              goto LABEL_126;
            v62 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v62 )
              goto LABEL_135;
            if ( *(_DWORD *)v62 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v62);
            if ( (unsigned __int16)v56 <= v62[2938] && (v63 = *((_QWORD *)v62 + 382)) != 0 )
            {
              v64 = 2928 * v56 + v63 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v65 = *((_QWORD *)v62 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v62 + 220) & *((_DWORD *)v62 + 221));
                *(_DWORD *)v65 = 1044672615;
                *(_QWORD *)(v65 + 8) = 0LL;
                *(_QWORD *)(v65 + 16) = v56;
                *(_QWORD *)(v65 + 24) = v64;
              }
              if ( v64 && (v66 = *(_QWORD *)(v64 + 392)) != 0 )
              {
                v67 = PdoExt(v66);
                v68 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                if ( v68 )
                {
                  *(_DWORD *)v68 = 1668571500;
                  *(_QWORD *)(v68 + 32) = v66;
                  *(_DWORD *)(v68 + 24) = 1884308559;
                  *(_QWORD *)(v68 + 40) = 0LL;
                  v69 = (_QWORD *)(v68 + 8);
                  v70 = (_QWORD *)*((_QWORD *)v67 + 160);
                  if ( (_DWORD *)*v70 != v67 + 318 )
LABEL_131:
                    __fastfail(3u);
                  *v69 = v67 + 318;
                  v69[1] = v70;
                  *v70 = v69;
                  *((_QWORD *)v67 + 160) = v69;
                }
                else
                {
                  ++v67[322];
                }
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v59);
                v71 = *(unsigned int *)(v54 + 400);
                *(_DWORD *)(v54 + 416) = 1;
                *(_QWORD *)(v54 + 376) = v54 + 24;
                UsbhCancelEnumeration(DeviceObject, v71, v54, v66);
                *(_QWORD *)(v54 + 376) = 0LL;
                if ( *(_DWORD *)(v54 + 416) )
                {
                  Log((__int64)DeviceObject, 1024, 1970032689, v66, v54);
                  v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                  *(_DWORD *)(v54 + 416) = 0;
                  Log((__int64)DeviceObject, 1024, 1970032690, v66, v54);
                  UsbhDerefPdo((__int64)DeviceObject, v66, 0LL, 0x7050444Fu);
                  v73 = v72;
                  goto LABEL_123;
                }
                v2 = a2;
                *(_DWORD *)(v54 + 400) = 0;
              }
              else
              {
                v73 = v59;
LABEL_123:
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v73);
                v2 = a2;
              }
            }
            else
            {
LABEL_126:
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v59);
            }
            v14 = v75;
          }
        }
      }
    }
    if ( *(_DWORD *)(v2 + 128) == 6 )
      KeSetEvent((PRKEVENT)(v14 + 520), 0, 0);
  }
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v74 = *((_QWORD *)v12 + 111)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
    *(_DWORD *)v74 = 1047880048;
    *(_QWORD *)(v74 + 8) = 0LL;
    *(_QWORD *)(v74 + 16) = 0LL;
    *(_QWORD *)(v74 + 24) = 0LL;
  }
  return 0LL;
}
