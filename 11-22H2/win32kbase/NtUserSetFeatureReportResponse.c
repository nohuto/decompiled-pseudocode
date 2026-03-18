/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C014AF30
 * Callers:
 *     <none>
 * Callees:
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0005ED4 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C019709C (RIMIDEResetPointerDeviceMaxCount.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(
        char *a1,
        NSInstrumentation::CLeakTrackingAllocator *a2,
        unsigned int a3)
{
  __int64 v3; // r13
  ULONG64 v6; // rdx
  PDEVICE_OBJECT v7; // rcx
  _UNKNOWN **v8; // r8
  __int16 v9; // r9
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  __int64 v17; // r8
  size_t v18; // r14
  char *QuotaZInit; // rax
  char *v20; // rdi
  int v21; // eax
  PVOID v22; // r15
  unsigned int *v23; // rsi
  _DWORD *v24; // r12
  unsigned int v25; // eax
  unsigned int Count; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  char *v38; // [rsp+68h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  Object = 0LL;
  v38 = 0LL;
  LOBYTE(v39) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v39);
  if ( (_BYTE)v39 )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v9 = 28;
LABEL_10:
    WPP_RECORDER_AND_TRACE_SF_(
      v7->AttachedDevice,
      v6,
      (_DWORD)v8,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      2,
      v9,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_11:
    v10 = 0;
    UserSetLastError(5);
    goto LABEL_62;
  }
  if ( (unsigned int)(v3 - 1) > 6 || (v15 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v10 = 0;
    UserSetLastError(87);
    goto LABEL_62;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v9 = 29;
    goto LABEL_10;
  }
  if ( v15 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v16, v6, v17) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a2 + v15);
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 + v15 > MmUserProbeAddress || v16 < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v18 = (unsigned int)v15;
  QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v16,
                         v6,
                         (unsigned int)v15,
                         0x74697355u);
  v20 = QuotaZInit;
  v38 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, a2, v18);
  v21 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v22 = Object;
  v12 = (__int64)Object + 72;
  if ( !Object )
    v12 = 0LL;
  if ( v21 < 0 )
    goto LABEL_56;
  if ( (*(_DWORD *)(v12 + 200) & 0x80u) == 0 )
    goto LABEL_56;
  v23 = *(unsigned int **)(v12 + 472);
  if ( *(_DWORD *)(*((_QWORD *)Object + 57) + 16LL) || (v23[90] & 0x2000) == 0 )
    goto LABEL_56;
  v14 = 0LL;
  v39 = 0;
  if ( (_DWORD)v3 )
  {
    v24 = v20 + 4;
    while ( 1 )
    {
      v12 = *((unsigned __int16 *)v24 - 2);
      if ( (_WORD)v12 != 13 )
        break;
      if ( *((_WORD *)v24 - 1) == 85 )
      {
        v11 = (unsigned int)*v24;
        if ( (int)v11 > 256 || (v13 = v23[6], (unsigned int)(v13 - 1) > 3) )
        {
          v13 = v23[6];
          if ( (_DWORD)v13 != 7 || (int)v11 > 5 )
            break;
        }
        v12 = v23[192];
        v25 = v12 - 1;
        if ( (_DWORD)v13 != 7 )
          v25 = v23[192];
        if ( (_DWORD)v11 != v25 )
        {
          if ( !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v23, v11, v13, v14) )
            break;
          LODWORD(v14) = v39;
        }
      }
      else
      {
        if ( *((_WORD *)v24 - 1) != 89 || v23[6] != 7 || *v24 > 1u )
          break;
        v23[238] = *v24;
      }
      v14 = (unsigned int)(v14 + 1);
      v39 = v14;
      v24 += 3;
      if ( (unsigned int)v14 >= (unsigned int)v3 )
        goto LABEL_55;
    }
LABEL_56:
    v10 = 0;
    UserSetLastError(87);
    goto LABEL_57;
  }
LABEL_55:
  v10 = 1;
LABEL_57:
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( v20 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v20);
LABEL_62:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v12, v11, v13, v14) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v39 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v39 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v39 = 0x20000;
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
  EtwTraceReleaseUserCrit(v28, v27, v29, v30);
  v35 = SGDGetUserSessionState(v32, v31, v33, v34);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v35 + 8));
  return v10;
}
