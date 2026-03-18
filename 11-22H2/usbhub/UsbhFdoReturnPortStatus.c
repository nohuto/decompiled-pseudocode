/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x1C0015DF0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_SSH_HubSuspended @ 0x1C00050BC (Usbh_SSH_HubSuspended.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhUnlockSSH @ 0x1C0022790 (UsbhUnlockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     USBHUB_TriggerCallBacks @ 0x1C0041C74 (USBHUB_TriggerCallBacks.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C0059640 (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00596BC (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _DWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  _DWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rax
  KIRQL v19; // dl
  _DWORD *v20; // rax
  bool v21; // zf
  KIRQL v22; // dl
  __int64 v23; // rcx
  __int64 v24; // rsi
  _DWORD *v25; // rdx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 PortState; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 SecurityQos_low; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  KIRQL v42; // r15
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  _DWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // esi
  int v54; // eax
  __int64 v55; // [rsp+78h] [rbp+10h]

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !a2 )
    goto LABEL_124;
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    goto LABEL_123;
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1045647431;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225485LL;
  }
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (__int64)a3, 0LL);
    return 3221225485LL;
  }
  LODWORD(SecurityContext->SecurityQos) = 0;
  v11 = *(_DWORD **)(a2 + 64);
  if ( !v11 )
    goto LABEL_123;
  if ( *v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = (__int64)(v11 + 236);
  if ( !a1 )
    goto LABEL_124;
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    goto LABEL_122;
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v13 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
  *(_DWORD *)(v12 + 40) = *(_DWORD *)(v13 + 4172);
  *(_DWORD *)(v12 + 44) = 11;
  *(_DWORD *)(v12 + 32) = 844055622;
  *(_DWORD *)(v12 + 36) = 1953516355;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v13 + 1344) = v12;
  v16 = *(_QWORD *)(v12 + 8);
  if ( !v16 )
    goto LABEL_124;
  v17 = *(_DWORD **)(v16 + 64);
  if ( !v17 )
    UsbhTrapFatal_Dbg(v16, 0LL);
  if ( *v17 != 541218120 )
    UsbhTrapFatal_Dbg(v16, *(_QWORD *)(v16 + 64));
  if ( (unsigned int)(v17[1043] - 212) <= 1 )
  {
    UsbhReleaseFdoPwrLock(a1, v12, v14, v15);
    Log(a1, 8, 1196450936, (__int64)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v18 = *(_QWORD *)(a1 + 64);
  if ( !v18 )
LABEL_122:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v18 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_DWORD *)(v12 + 32) = 1734964085;
  v19 = *(_BYTE *)(v18 + 5064);
  *(_QWORD *)(v18 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 5056), v19);
  *(_BYTE *)(v12 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v12 + 136) = 1;
  *(_DWORD *)(v12 + 88) = 2018460752;
  *(_DWORD *)(v12 + 92) = 16;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v12;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v20 = *(_DWORD **)(a2 + 64);
  if ( !v20 )
LABEL_123:
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v20 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v21 = v20[281] == 3;
  *(_DWORD *)(v12 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v12 + 88) = 1734964085;
  v22 = *(_BYTE *)(v12 + 132);
  if ( !v21 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v22);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446584, (__int64)a3, 0LL);
    return 3221225486LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v22);
  v55 = *(_QWORD *)(v12 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids,
      5);
  v23 = *(_QWORD *)(v12 + 8);
  if ( !v23 )
LABEL_124:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v24 = *(_QWORD *)(v23 + 64);
  if ( !v24 )
    UsbhTrapFatal_Dbg(v23, 0LL);
  if ( *(_DWORD *)v24 != 541218120 )
    UsbhTrapFatal_Dbg(v23, *(_QWORD *)(v23 + 64));
  KeWaitForSingleObject((PVOID)(v24 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v24 + 3192) = v12;
  v25 = (_DWORD *)(v24 + 3124);
  *(_DWORD *)(v12 + 120) = 2018005843;
  *(_DWORD *)(v12 + 124) = 5;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v26 = *(_DWORD *)(v24 + 3456);
  v27 = 32LL * (v26 & 7);
  if ( *(_DWORD *)(v27 + v24 + 3460) != 5 || *(_DWORD *)(v27 + v24 + 3464) != *v25 )
  {
    v51 = ((_BYTE)v26 + 1) & 7;
    *(_DWORD *)(v24 + 3456) = v51;
    v51 *= 32LL;
    *(_DWORD *)(v51 + v24 + 3460) = 5;
    *(_DWORD *)(v51 + v24 + 3464) = *v25;
  }
  v28 = (unsigned int)*v25;
  if ( (_DWORD)v28 != 1 )
  {
    switch ( (_DWORD)v28 )
    {
      case 2:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            12,
            (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
        FdoExt(v55);
        v28 = 2LL;
        break;
      case 3:
        v52 = Usbh_SSH_HubPendingResumeAfterSuspend(v55, 5LL, v12);
LABEL_82:
        if ( (v52 & 0xC0000000) == 0xC0000000 )
        {
          LODWORD(SecurityContext->SecurityQos) |= 3u;
          v53 = 0;
          goto LABEL_49;
        }
        goto LABEL_43;
      case 4:
        v52 = Usbh_SSH_HubSuspended(v55, 5, v12);
        goto LABEL_82;
      case 5:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            15,
            (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
        v29 = v55;
        if ( v55 )
        {
          v47 = *(_DWORD **)(v55 + 64);
          if ( !v47 )
LABEL_108:
            UsbhTrapFatal_Dbg(v29, 0LL);
          if ( *v47 != 541218120 )
            UsbhTrapFatal_Dbg(v55, v47);
          v48 = *(_QWORD *)(v12 + 8);
          if ( v48 )
          {
            v49 = *(_QWORD *)(v48 + 64);
            if ( !v49 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), 0LL);
            if ( *(_DWORD *)v49 != 541218120 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), *(_QWORD *)(v48 + 64));
            v50 = *(unsigned int *)(v49 + 3456);
            *(_DWORD *)(v49 + 3124) = 5;
            *(_DWORD *)(32 * v50 + v49 + 3468) = 5;
            *(_DWORD *)(v12 + 120) = 1734964085;
            *(_QWORD *)(v49 + 3192) = 0LL;
            KeReleaseSemaphore((PRKSEMAPHORE)(v49 + 3128), 16, 1, 0);
            goto LABEL_79;
          }
        }
        goto LABEL_124;
      case 6:
        v52 = Usbh_SSH_HubFailedResume(v55, v28, v12);
        goto LABEL_82;
    }
    UsbhUnlockSSH(v12, v28);
LABEL_79:
    LODWORD(SecurityContext->SecurityQos) |= 3u;
    v53 = 0;
    goto LABEL_49;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v29 = v55;
  if ( !v55 )
    goto LABEL_124;
  v30 = *(_DWORD **)(v55 + 64);
  if ( !v30 )
    goto LABEL_108;
  if ( *v30 != 541218120 )
    UsbhTrapFatal_Dbg(v55, v30);
  v31 = *(_QWORD *)(v12 + 8);
  if ( !v31 )
    goto LABEL_124;
  v32 = *(_QWORD *)(v31 + 64);
  if ( !v32 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), 0LL);
  if ( *(_DWORD *)v32 != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), *(_QWORD *)(v31 + 64));
  v33 = *(unsigned int *)(v32 + 3456);
  *(_DWORD *)(v32 + 3124) = 1;
  *(_DWORD *)(32 * v33 + v32 + 3468) = 1;
  *(_DWORD *)(v12 + 120) = 1734964085;
  *(_QWORD *)(v32 + 3192) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v32 + 3128), 16, 1, 0);
LABEL_43:
  PortState = (int)UsbhQueryPortState(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 861098055;
      *(_QWORD *)(v36 + 16) = 0LL;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 24) = PortState;
    }
  }
  if ( (int)PortState < 0 )
  {
    v53 = -1073741810;
  }
  else
  {
    v53 = -1073741810;
    if ( v7[596] == 2 )
      LODWORD(SecurityContext->SecurityQos) &= ~1u;
  }
LABEL_49:
  SecurityQos_low = LODWORD(SecurityContext->SecurityQos);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 877875271;
      *(_QWORD *)(v39 + 24) = v53;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 16) = SecurityQos_low;
    }
  }
  a3->IoStatus.Status = v53;
  IofCompleteRequest(a3, 0);
  v40 = *(_QWORD *)(a2 + 64);
  if ( !v40 )
    goto LABEL_123;
  if ( *(_DWORD *)v40 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v41 = (_QWORD *)(v40 + 1224);
  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 1216));
  v43 = *(_QWORD **)(v40 + 1224);
  if ( v43 == (_QWORD *)(v40 + 1224) || !v43 )
  {
LABEL_116:
    v54 = *(_DWORD *)(v40 + 1264);
    if ( !v54 )
    {
      USBHUB_TriggerCallBacks(a2);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
    }
    *(_DWORD *)(v40 + 1264) = v54 - 1;
  }
  else
  {
    while ( 1 )
    {
      v44 = (_QWORD *)*v43;
      if ( (IRP *)v43[2] == a3 )
        break;
      v43 = (_QWORD *)*v43;
      if ( v44 == v41 )
        goto LABEL_116;
    }
    if ( (_QWORD *)v44[1] != v43 || (v45 = (_QWORD *)v43[1], (_QWORD *)*v45 != v43) )
      __fastfail(3u);
    *v45 = v44;
    v44[1] = v45;
    ExFreePoolWithTag(v43 - 1, 0);
  }
  if ( (_QWORD *)*v41 != v41 || *(_DWORD *)(v40 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 1216), v42);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 1216), v42);
    KeSetEvent((PRKEVENT)(v40 + 1240), 0, 0);
  }
  return (unsigned int)v53;
}
