/*
 * XREFs of NtUserInjectPointerInput @ 0x1C015E990
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C00043E8 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C019D494 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, void *a2, unsigned int a3)
{
  __int64 v3; // r12
  char v4; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 Pool2; // rsi
  int v10; // edi
  __int64 v11; // rdx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _DEVICE_OBJECT *v19; // rdi
  PDEVICE_OBJECT v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rcx
  PKDEFERRED_ROUTINE DeferredRoutine; // rcx
  int v24; // eax
  size_t v25; // r13
  __int64 CurrentProcessWow64Process; // rax
  PVOID v27; // rdi
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  char v30; // r12
  PDEVICE_OBJECT v31; // rcx
  __int16 v32; // ax
  __int64 v33; // rax
  int v34; // r12d
  char v35; // si
  bool v36; // r14
  char LastError; // al
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned int Count; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v50; // rsi
  int v51; // eax
  char v53; // [rsp+40h] [rbp-1D8h]
  char v54[8]; // [rsp+60h] [rbp-1B8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1B0h]
  unsigned int v56; // [rsp+70h] [rbp-1A8h]
  unsigned int v57; // [rsp+74h] [rbp-1A4h]
  __int64 v58; // [rsp+78h] [rbp-1A0h]
  struct _DEVICE_OBJECT *v59; // [rsp+80h] [rbp-198h] BYREF
  _DWORD v60[6]; // [rsp+88h] [rbp-190h] BYREF
  void *Src; // [rsp+A0h] [rbp-178h]
  __int64 v62; // [rsp+A8h] [rbp-170h]
  __int128 v63; // [rsp+B0h] [rbp-168h]
  __int64 v64; // [rsp+C8h] [rbp-150h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-148h]
  unsigned __int64 v66; // [rsp+D8h] [rbp-140h]
  __int64 *v67[2]; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v68; // [rsp+F0h] [rbp-128h]
  PVOID BackTrace[20]; // [rsp+110h] [rbp-108h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1B0h] [rbp-68h] BYREF

  v3 = a3;
  v56 = a3;
  v4 = (char)a2;
  Src = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      54,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      (char)a1,
      v4,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v67, "InjectPointerInput", 0LL);
  v60[4] = 0;
  v54[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v54);
  Pool2 = 0LL;
  v62 = 0LL;
  v59 = 0LL;
  if ( v54[0] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        55,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v10 = 0;
    UserSetLastError(5LL, v6, v7, v8);
    goto LABEL_170;
  }
  if ( !(_DWORD)v3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        56,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v10 = 0;
    UserSetLastError(87LL, v6, v7, v8);
    v12 = 0LL;
    goto LABEL_158;
  }
  v15 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, (PVOID *)&v59);
  v18 = (unsigned int)v15;
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        57,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v15);
    v10 = 0;
    UserSetLastError(6LL, v16, v17, v18);
    v12 = v59;
    goto LABEL_158;
  }
  v19 = v59;
  Object = v59;
  if ( ((__int64)v59->SecurityDescriptor & 0x2000) == 0 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v21 = 58;
    goto LABEL_44;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)&v59->Queue.ListEntry.Blink, v16, v17) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        59,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v22 = 5LL;
    goto LABEL_46;
  }
  if ( (LODWORD(v19->DeviceLock.Header.WaitListHead.Flink) & 0x80u) == 0 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v21 = 60;
LABEL_44:
    WPP_RECORDER_AND_TRACE_SF_(
      v20->AttachedDevice,
      v16,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v21,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_45:
    v22 = 87LL;
LABEL_46:
    v10 = 0;
    goto LABEL_47;
  }
  DeferredRoutine = v19[1].Dpc.DeferredRoutine;
  v24 = *((_DWORD *)DeferredRoutine + 90);
  if ( (v24 & 8) == 0 || (v24 & 0x2000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        61,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v10 = 0;
    UserSetLastError(87LL, v16, v17, v18);
    goto LABEL_157;
  }
  v57 = *((_DWORD *)DeferredRoutine + 6);
  v25 = 152 * v3;
  if ( 152 * v3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(DeferredRoutine, v16, v17);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src + v25 > MmUserProbeAddress || (char *)Src + v25 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v60[0] = 1953067861;
  v64 = 260LL;
  v27 = gpLeakTrackingAllocator;
  *(_QWORD *)&v68 = &v64;
  *((_QWORD *)&v68 + 1) = v60;
  v63 = v68;
  v28 = 152 * v3;
  v65 = 152 * v3;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74697355) == 0x74697355 )
  {
    v29 = 0LL;
    v66 = 0LL;
    while ( v29 < *((unsigned int *)gpLeakTrackingAllocator + 11) )
    {
      if ( *((_DWORD *)gpLeakTrackingAllocator + v29) == 1953067861 )
      {
        v30 = 0;
        if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
        {
          v30 = 1;
          v28 = v25 + 16;
          v65 = v25 + 16;
        }
        Pool2 = ExAllocatePool2(*(_QWORD *)v63 & 0xFFFFFFFFFFFFFFFCuLL | 1, v28);
        if ( !Pool2 )
        {
LABEL_81:
          Pool2 = 0LL;
          v58 = 0LL;
LABEL_82:
          LODWORD(v3) = v56;
          goto LABEL_93;
        }
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v30 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v27,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_87:
            v58 = Pool2;
            goto LABEL_82;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v27,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_87;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_81;
      }
      v66 = ++v29;
    }
    LODWORD(v3) = v56;
  }
  Pool2 = ExAllocatePool2(*(_QWORD *)v63 & 0xFFFFFFFFFFFFFFFCuLL | 1, v28);
  v58 = Pool2;
LABEL_93:
  v62 = Pool2;
  if ( !Pool2 )
    ExRaiseStatus(-1073741801);
  memmove((void *)Pool2, Src, v25);
  v17 = *(unsigned int *)Pool2;
  if ( (_DWORD)v17 == 3 )
  {
    v18 = v57;
    if ( v57 != 5 )
    {
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v32 = 63;
      goto LABEL_104;
    }
    if ( (_DWORD)v3 != 1 )
    {
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v32 = 64;
      v53 = v3;
      goto LABEL_105;
    }
    v18 = (__int64)Object;
  }
  else
  {
    if ( (_DWORD)v17 != 2 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          67,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
          *(_DWORD *)Pool2);
      }
      goto LABEL_45;
    }
    v18 = v57;
    if ( v57 != 3 )
    {
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v32 = 65;
LABEL_104:
      v53 = v18;
LABEL_105:
      WPP_RECORDER_AND_TRACE_SF_D(
        v31->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        v32,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v53);
      goto LABEL_45;
    }
    v18 = (__int64)Object;
    v33 = *((_QWORD *)Object + 70);
    if ( (unsigned int)v3 > *(_DWORD *)(v33 + 768) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          66,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
          v3,
          *(_DWORD *)(v33 + 768));
      goto LABEL_45;
    }
  }
  v34 = RIMIDEInjectHIDReportFromPointerInfo(v18, Pool2, (unsigned int)v3);
  if ( v34 >= 0 )
  {
    v10 = 1;
    goto LABEL_157;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v13,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      68,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      v34);
  }
  v10 = 0;
  v22 = RtlNtStatusToDosError(v34);
LABEL_47:
  UserSetLastError(v22, v16, v17, v18);
LABEL_157:
  v12 = (PDEVICE_OBJECT)Object;
LABEL_158:
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  if ( !v10 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (v35 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v35 = 0;
    }
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v11, v13, v14);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v39,
        v38,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        69,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        LastError);
    }
  }
LABEL_170:
  if ( qword_1C029C988 )
    qword_1C029C988(v12, v11, v13, v14);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42);
    v44 = gcDeferredDestroyTargets;
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v40, v42);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v44, v40, v42, v43);
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v47, v46, v48);
    v50 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v51 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v50 + 44) || *(_DWORD *)(v50 + 48) || v51 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v50 + 28),
          0LL,
          2u,
          &v70);
      }
      *(_DWORD *)(v50 + 44) = 0;
      *(_OWORD *)(v50 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v67);
  return v10;
}
