/*
 * XREFs of UsbhQueryPortState @ 0x1C0016540
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0009B88 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0015DF0 (UsbhFdoReturnPortStatus.c)
 *     UsbhQueryChange @ 0x1C0019300 (UsbhQueryChange.c)
 *     UsbhBusSuspend_Action @ 0x1C001D87C (UsbhBusSuspend_Action.c)
 *     UsbhFdoColdStartPdo @ 0x1C00222BC (UsbhFdoColdStartPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002B084 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002FD00 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C00314EC (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0033EBC (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034FA8 (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x1C00378F4 (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x1C0038ED0 (UsbhPortResumeTimeout.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003CB44 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0016EE0 (UsbhSyncSendCommand.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhFlushPortChange @ 0x1C002B22C (UsbhFlushPortChange.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rsi
  _DWORD *v9; // rax
  int v10; // ecx
  __int64 Pool2; // rax
  unsigned __int16 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  KIRQL v18; // bp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  _DWORD *v25; // rsi
  __int64 v26; // rax
  _DWORD *v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  unsigned __int16 v30; // si
  unsigned __int16 v31; // bp
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  _QWORD *v39; // rdi
  _QWORD *v40; // rdx
  _QWORD *v41; // r9
  __int64 v42; // r8
  __int64 v43; // rcx
  _DWORD *v44; // rcx
  int v45; // eax
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  _BYTE v54[8]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v55[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v56; // [rsp+62h] [rbp-46h]
  __int16 v57; // [rsp+64h] [rbp-44h]
  __int16 v58; // [rsp+66h] [rbp-42h]
  KIRQL v59; // [rsp+B0h] [rbp+8h]

  v4 = a2;
  v8 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_DWORD **)(a1 + 64);
  if ( !v9 )
    goto LABEL_96;
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9[640];
  if ( (v10 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  if ( (v10 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  Pool2 = ExAllocatePool2(64LL, 10LL, 1112885333LL);
  v13 = (unsigned __int16 *)Pool2;
  if ( !Pool2 )
  {
    Log(a1, 4, 1366319468, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073737728;
    return 3221225626LL;
  }
  *(_WORD *)(Pool2 + 4) = 4;
  *(_DWORD *)a3 = 0;
  *(_WORD *)(Pool2 + 6) = v4;
  *(_DWORD *)Pool2 = 0;
  v55[0] = -93;
  *(_BYTE *)(Pool2 + 8) = 0;
  v55[1] = 0;
  v56 = 0;
  v57 = v4;
  v58 = *(_WORD *)(Pool2 + 4);
  v14 = 0LL;
  v15 = (int)UsbhSyncSendCommand(a1, (unsigned int)v55, Pool2, (int)Pool2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = 1329877100;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v4;
      *(_QWORD *)(v17 + 24) = 1383420738LL;
    }
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
      *(_DWORD *)v20 = 1413771367;
      *(_QWORD *)(v20 + 16) = a2;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 24) = 0LL;
    }
  }
  if ( !a2 )
    goto LABEL_40;
  v21 = *(_QWORD *)(a1 + 64);
  if ( !v21 )
LABEL_96:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v21 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v21);
  if ( a2 <= *(unsigned __int8 *)(v21 + 2938) )
  {
    v22 = *(_QWORD *)(v21 + 3056);
    if ( v22 )
    {
      v23 = v22 + 2928LL * a2 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v24 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v24 = 1044672615;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = a2;
        *(_QWORD *)(v24 + 24) = v23;
      }
      if ( v23 )
      {
        v14 = *(_QWORD *)(v23 + 392);
        if ( v14 )
        {
          v25 = *(_DWORD **)(v14 + 64);
          if ( !v25 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v23 + 392), 0LL);
          if ( *v25 != 1329877064 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v23 + 392), *(_QWORD *)(v14 + 64));
          v26 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
          if ( v26 )
          {
            *(_DWORD *)v26 = 1668571500;
            v27 = v25 + 318;
            *(_QWORD *)(v26 + 32) = v14;
            *(_DWORD *)(v26 + 24) = 1383420738;
            *(_QWORD *)(v26 + 40) = 0LL;
            v28 = (_QWORD *)(v26 + 8);
            v29 = (_QWORD *)*((_QWORD *)v27 + 1);
            if ( (_DWORD *)*v29 != v27 )
              goto LABEL_77;
            *v28 = v27;
            v28[1] = v29;
            *v29 = v28;
            *((_QWORD *)v27 + 1) = v28;
            WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          }
          else
          {
            ++v25[322];
            WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18);
          v8 = *(_QWORD *)(v14 + 64);
          if ( !v8 )
            UsbhTrapFatal_Dbg(v14, 0LL);
          if ( *(_DWORD *)v8 != 1329877064 )
            UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
          goto LABEL_41;
        }
      }
    }
  }
LABEL_40:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18);
LABEL_41:
  if ( (int)v15 >= 0 && v8 && *(_BYTE *)(v8 + 2740) )
  {
    v30 = *v13;
    v31 = v13[1];
    if ( ((v31 | *v13) & 8) != 0 )
    {
      v32 = FdoExt(a1);
      UsbhDispatch_HardResetEvent(a1, v32 + 566, 3LL);
    }
    if ( (v30 & 1) == 0 && (v31 & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 21, (__int64)"FKh&", a1);
      byte_1C006B6C8 = 1;
      UsbhFlushPortChange(a1, a2, v54);
      v33 = FdoExt(a1);
      UsbhDispatch_HardResetEvent(a1, v33 + 566, 3LL);
    }
  }
  if ( !v14 )
    goto LABEL_78;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 64);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
      *(_DWORD *)v35 = 1329877109;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = v14;
      *(_QWORD *)(v35 + 24) = 1383420738LL;
    }
  }
  v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
      *(_DWORD *)v37 = 1348891236;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = v14;
      *(_QWORD *)(v37 + 24) = 1383420738LL;
    }
  }
  v38 = *(_QWORD *)(v14 + 64);
  if ( !v38 )
    UsbhTrapFatal_Dbg(v14, 0LL);
  if ( *(_DWORD *)v38 != 1329877064 )
    UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
  v39 = (_QWORD *)(v38 + 1272);
  v40 = *(_QWORD **)(v38 + 1272);
  if ( v40 == (_QWORD *)(v38 + 1272) )
  {
LABEL_68:
    v44 = (_DWORD *)(v38 + 1288);
    v45 = *(_DWORD *)(v38 + 1288);
    if ( v45 )
      *v44 = v45 - 1;
    goto LABEL_70;
  }
  while ( 1 )
  {
    v41 = v40 - 1;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v42 = *(_QWORD *)(a1 + 64);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
        *(_DWORD *)v43 = 1064591724;
        *(_QWORD *)(v43 + 8) = 0LL;
        *(_QWORD *)(v43 + 16) = v38;
        *(_QWORD *)(v43 + 24) = 1383420738LL;
      }
    }
    if ( *((_DWORD *)v41 + 6) == 1383420738 && !v41[5] )
      break;
    v40 = (_QWORD *)*v40;
    if ( v40 == v39 )
      goto LABEL_68;
  }
  v46 = (_QWORD *)*v40;
  if ( *(_QWORD **)(*v40 + 8LL) != v40 || (v47 = (_QWORD *)v40[1], (_QWORD *)*v47 != v40) )
LABEL_77:
    __fastfail(3u);
  *v47 = v46;
  v46[1] = v47;
  ExFreePoolWithTag(v41, 0);
  v44 = (_DWORD *)(v38 + 1288);
LABEL_70:
  if ( (_QWORD *)*v39 == v39 && !*v44 )
    KeSetEvent((PRKEVENT)(v38 + 1296), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v59);
LABEL_78:
  if ( (UsbhLogMask & 4) != 0 )
  {
    v48 = *(_QWORD *)(a1 + 64);
    if ( v48 )
    {
      v49 = *(_QWORD *)(v48 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
      *(_DWORD *)v49 = 1953722449;
      *(_QWORD *)(v49 + 8) = 0LL;
      *(_QWORD *)(v49 + 16) = v15;
      *(_QWORD *)(v49 + 24) = 0LL;
    }
  }
  if ( (int)v15 < 0 || v13[2] == 4 )
  {
    if ( (v15 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v15) )
    {
      Log(a1, 4, 1366324018, v13[2], 0LL);
      UsbhException(a1, a2, 8, (int)v13, 10, v15, 0, usbfile_bus_c, 1649, 0);
    }
    if ( (int)v15 >= 0 )
    {
      v50 = v13[1];
      *(_WORD *)(a3 + 2) = v50;
      v51 = *v13;
      *(_WORD *)a3 = v51;
      if ( (UsbhLogMask & 4) != 0 )
      {
        v52 = *(_QWORD *)(a1 + 64);
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
          *(_DWORD *)v53 = 1953722448;
          *(_QWORD *)(v53 + 8) = 0LL;
          *(_QWORD *)(v53 + 16) = v50;
          *(_QWORD *)(v53 + 24) = v51;
        }
      }
    }
    if ( a4 )
      *a4 = 0;
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v15;
  }
  else
  {
    Log(a1, 4, 1366324017, v13[2], 0LL);
    UsbhException(a1, a2, 9, (int)v13, 10, v15, 0, usbfile_bus_c, 1635, 0);
    if ( a4 )
      *a4 = 0;
    ExFreePoolWithTag(v13, 0);
    return 3221225473LL;
  }
}
