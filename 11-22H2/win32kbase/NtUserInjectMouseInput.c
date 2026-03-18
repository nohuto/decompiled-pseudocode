/*
 * XREFs of NtUserInjectMouseInput @ 0x1C0148360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0005ED4 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0005F38 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C00C9A0C (ApiSetEditionIsRIMInjectionBlocked.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0196C38 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C0208F94 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, unsigned int a2)
{
  __int64 v2; // rsi
  char v4; // dl
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // esi
  __int64 v9; // rdx
  _UNKNOWN **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE *v13; // r13
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  char *QuotaZInit; // rax
  int v21; // edx
  PDEVICE_OBJECT v22; // rcx
  _UNKNOWN **v23; // r8
  __int16 v24; // r9
  int v25; // ecx
  int v26; // eax
  char v27; // dl
  int v28; // eax
  int v29; // edx
  char v30; // dl
  _UNKNOWN **v31; // r8
  _UNKNOWN **v32; // r8
  char *v33; // r15
  int v34; // eax
  NTSTATUS v35; // r14d
  char v36; // dl
  ULONG v37; // eax
  char v38; // dl
  char v39; // r15
  bool v40; // r12
  char LastError; // al
  int v42; // r8d
  int v43; // edx
  unsigned int Count; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v55; // [rsp+40h] [rbp-78h]
  char *v56; // [rsp+60h] [rbp-58h]
  __int64 *v57[10]; // [rsp+68h] [rbp-50h] BYREF
  int v59; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      2u,
      0x1Eu,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
      Src,
      v2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v57, "InjectMouseInput", 0LL);
  LOBYTE(v59) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v59);
  if ( (_BYTE)v59 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        31,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v8 = 0;
    UserSetLastError(5);
    goto LABEL_115;
  }
  v56 = 0LL;
  v13 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v18 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v18 = v16 & CurrentProcessWin32Process;
  }
  if ( (unsigned int)(v2 - 1) > 0xF )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v38 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v38 = 0;
    }
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v55) = v2;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v38,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0x20u,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v55);
    }
    goto LABEL_100;
  }
  v19 = 32 * v2;
  if ( v19 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v16, v15, v17) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (unsigned __int64)&Src[v19];
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)&Src[v19] > MmUserProbeAddress || v16 < (unsigned __int64)Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         (NSInstrumentation::CLeakTrackingAllocator *)v16,
                         v15,
                         v19,
                         0x6D697355u);
  v56 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, Src, v19);
  if ( *(_QWORD *)(v18 + 912) != -1LL )
  {
LABEL_49:
    v28 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v18 + 912), 3u, 1, &Object);
    if ( v28 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v30 = 0;
      }
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v55) = v28;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v30,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          2u,
          2u,
          0x24u,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          v55);
      }
      v8 = 0;
      UserSetLastError(6);
      v13 = Object;
      goto LABEL_102;
    }
    v13 = Object;
    if ( (*((_DWORD *)Object + 64) & 0x2000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v29) = 0;
      }
      v31 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v29,
          (_DWORD)v31,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          37,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
      }
      v8 = 0;
      UserSetLastError(87);
      goto LABEL_102;
    }
    if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 72) )
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v21) = 0;
      }
      v23 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v24 = 38;
      goto LABEL_38;
    }
    if ( !v13[120] )
    {
      v33 = v56;
      v34 = RIMIDEInjectMouseFromMouseInputStruct(v13, v56, a2);
      v35 = v34;
      if ( v34 >= 0 )
      {
        v8 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v36 = 0;
        }
        if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v55) = v34;
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v36,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            2u,
            2u,
            0x28u,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
            v55);
        }
        v8 = 0;
        v37 = RtlNtStatusToDosError(v35);
        UserSetLastError(v37);
      }
      goto LABEL_103;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v21) = 0;
    }
    v32 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        (_DWORD)v32,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        39,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
LABEL_100:
    v25 = 87;
    goto LABEL_101;
  }
  if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
  {
    v26 = RIMIDECreatePseudoMouseOrKeyboardDevice(0, (__int64 *)(v18 + 912));
    if ( v26 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v27 = 0;
      }
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v55) = v26;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v27,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          2u,
          2u,
          0x23u,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          v55);
      }
      v25 = 1359;
      goto LABEL_101;
    }
    goto LABEL_49;
  }
  v22 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v21) = 0;
  }
  v23 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_39;
  v24 = 34;
LABEL_38:
  WPP_RECORDER_AND_TRACE_SF_(
    v22->AttachedDevice,
    v21,
    (_DWORD)v23,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    2,
    v24,
    (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_39:
  v25 = 5;
LABEL_101:
  v8 = 0;
  UserSetLastError(v25);
LABEL_102:
  v33 = v56;
LABEL_103:
  if ( v33 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v33);
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( !v8 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v39 = 0;
    }
    v10 = &WPP_RECORDER_INITIALIZED;
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v39;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v43,
        v42,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        41,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        LastError);
    }
  }
LABEL_115:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v10, v9, v11, v12) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v59 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v59 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v59 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1184);
    }
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetCurrentThread() )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit(v46, v45, v47, v48);
  v53 = SGDGetUserSessionState(v50, v49, v51, v52);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v53 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v57);
  return v8;
}
