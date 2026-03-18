/*
 * XREFs of xxxRemoteConnect @ 0x1C00115D0
 * Callers:
 *     <none>
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C000F7CC (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C000F8FC (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     SetProtocolType @ 0x1C000FA60 (SetProtocolType.c)
 *     SetConnectCompletedState @ 0x1C0011090 (SetConnectCompletedState.c)
 *     PowerConnectionEvent @ 0x1C00110E4 (PowerConnectionEvent.c)
 *     PopulateUMKMHandlePair @ 0x1C0011D20 (PopulateUMKMHandlePair.c)
 *     SetConsoleSwitchInProgress @ 0x1C0011D60 (SetConsoleSwitchInProgress.c)
 *     GreMultiUserInitSession @ 0x1C0011DF0 (GreMultiUserInitSession.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C0012370 (DxgkEngNotifyDisplayChange.c)
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001E270 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     FastGetProfileIntW @ 0x1C0033AC0 (FastGetProfileIntW.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     InitLoadResources @ 0x1C005D508 (InitLoadResources.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     CleanupRemoteHandles @ 0x1C00C0420 (CleanupRemoteHandles.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00CC970 (DrvEscapeRemoteDrivers.c)
 *     wcschr @ 0x1C00CE068 (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     GreDrvConnect @ 0x1C016CA40 (GreDrvConnect.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r14
  PDEVICE_OBJECT v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // edi
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  wchar_t *v27; // rax
  _DWORD *v28; // rax
  HANDLE v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  NSInstrumentation::CLeakTrackingAllocator *v34; // rsi
  int v35; // eax
  __int64 Pool2; // rbx
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int *v45; // rax
  __int64 v46; // rcx
  int v47; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // bl
  bool v54; // di
  _DWORD *v55; // rax
  int v56; // r8d
  int v57; // edx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // r10
  unsigned int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+68h] [rbp-98h]
  unsigned __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  PVOID v65; // [rsp+78h] [rbp-88h] BYREF
  PVOID v66; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v69; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Value; // [rsp+190h] [rbp+90h] BYREF

  Value = 0;
  v10 = *(_QWORD *)(SGDGetSessionState() + 24) + 3016LL;
  if ( *(_DWORD *)a1 )
  {
    if ( qword_1C0295218 )
    {
      result = qword_1C0295218();
      if ( (int)result < 0 )
        return result;
      if ( qword_1C0295220 )
        return qword_1C0295220(a1, a3, a4);
    }
    return 3221225659LL;
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      10,
      (__int64)&WPP_e275ad68cbf4396ee51bb6cf0f267e1a_Traceguids,
      (__int64)a3);
  gdwHydraHint |= 8u;
  if ( (PVOID)PsGetCurrentProcess(v11, v8, v9) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  *(_QWORD *)&gpThinWireCache = &ThinWireCache;
  result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 48), &gRemoteMouseChannelHandlePair);
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 56), &gRemoteKeyboardChannelHandlePair);
    v16 = result;
    if ( (int)result >= 0 )
    {
      gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
      gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
      ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
      ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
      ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
      SetProtocolType(*(unsigned __int16 *)(a1 + 264), v13, v14, v15);
      LOWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = *(_WORD *)(a1 + 264);
      gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
      dword_1C0290268 = *(_DWORD *)(a1 + 276);
      v17 = *(_DWORD *)(a1 + 240);
      *(_DWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 15912) = v17;
      v22 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 13820) = v22;
      gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
      gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
      gRemotePreviousMonitorsCount = gRemoteNumMonitors;
      *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
      xmmword_1C0290290 = *(_OWORD *)(a1 + 178);
      qword_1C02902A0 = *(_QWORD *)(a1 + 194);
      gWinStationInfo = *(_OWORD *)(a1 + 202);
      word_1C0290318 = *(_WORD *)(a1 + 218);
      xmmword_1C029031C = *(_OWORD *)(a1 + 220);
      dword_1C029032C = *(_DWORD *)(a1 + 236);
      memset(&gstrBaseWinStationName, 0, 0x40uLL);
      *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
      xmmword_1C02901F0 = *(_OWORD *)(a1 + 96);
      xmmword_1C0290200 = *(_OWORD *)(a1 + 112);
      xmmword_1C0290210 = *(_OWORD *)(a1 + 128);
      v27 = wcschr(&gstrBaseWinStationName, 0x23u);
      if ( v27 )
        *v27 = 0;
      v63 = gbRemoteFxSession;
      gbRemoteFxSession = *(_DWORD *)(a1 + 292);
      *(_DWORD *)(v10 + 64) = *(_DWORD *)(a1 + 292);
      if ( *(_DWORD *)(a1 + 292) )
        *(_QWORD *)(v10 + 68) = *(_QWORD *)(a1 + 296);
      gbConnected = 1;
      if ( qword_1C02962C0 && (unsigned int)qword_1C02962C0(0LL) )
      {
        FastGetProfileIntW(0, 39, (int)L"CursorBlinkEnable", 0, &Value, 0);
        v28 = gpsi;
        if ( !Value )
        {
          *((_DWORD *)gpsi + 559) &= ~4u;
LABEL_23:
          if ( gVideoFileObject )
          {
            if ( !ghRemoteVideoChannel )
            {
LABEL_25:
              if ( (unsigned int)GreMultiUserInitSession(
                                   v10,
                                   (int)ghRemoteThinwireChannel,
                                   gpThinWireCache,
                                   gRemoteNumMonitors,
                                   gRemotePrimaryMonitor,
                                   (__int64)gVideoFileObject,
                                   (__int64)gThinwireFileObject,
                                   a2,
                                   a3,
                                   19,
                                   &gRemoteDisplayDeviceName) )
                goto LABEL_26;
LABEL_90:
              v16 = -1073741823;
              goto LABEL_41;
            }
LABEL_26:
            v29 = ghRemoteBeepChannel;
            if ( ghRemoteBeepChannel )
            {
              Object[0] = 0LL;
              v16 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
              gpRemoteBeepDevice = Object[0];
              if ( v16 < 0 )
                goto LABEL_41;
            }
            if ( gbVideoInitialized || !gbNonServiceSession )
            {
              if ( qword_1C02962C0 )
                v47 = qword_1C02962C0(v29);
              else
                v47 = 0;
              DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
              LOBYTE(v49) = v47 == 0;
              (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 360))(v49);
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
                || (v53 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v53 = 0;
              }
              v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v55 = (_DWORD *)SGDGetUserSessionState(WPP_GLOBAL_Control, v50, v51, v52);
                LOBYTE(v56) = v54;
                LOBYTE(v57) = v53;
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v57,
                  v56,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  14,
                  11,
                  (__int64)&WPP_e275ad68cbf4396ee51bb6cf0f267e1a_Traceguids,
                  *v55);
              }
              v16 = 0;
              goto LABEL_41;
            }
            if ( InitVideo(a4) )
            {
              if ( !qword_1C0295228 || (int)qword_1C0295228() < 0 || qword_1C0295230 && (unsigned int)qword_1C0295230() )
              {
                InitLoadResources(0LL);
                v34 = gpLeakTrackingAllocator;
                v70 = 64LL;
                v62 = 1951101781;
                v68 = 68LL;
                v35 = *(_DWORD *)gpLeakTrackingAllocator;
                if ( !*(_DWORD *)gpLeakTrackingAllocator )
                {
                  Pool2 = ExAllocatePool2(68LL, 64LL, 1951101781LL);
                  if ( Pool2 )
                    _InterlockedIncrement64((volatile signed __int64 *)v34 + 14);
                  goto LABEL_37;
                }
                if ( v35 == 1 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                         gpLeakTrackingAllocator,
                         0x744B7355u) )
                  {
                    v60 = (_QWORD *)ExAllocatePool2(v68 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v62);
                    Pool2 = (__int64)v60;
                    if ( !v60
                      || (_InterlockedIncrement64((volatile signed __int64 *)v34 + 14),
                          *v60 = 1951101781LL,
                          Pool2 = (__int64)(v60 + 2),
                          v60 == (_QWORD *)-16LL) )
                    {
                      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                        *((NSInstrumentation::CPointerHashTable **)v34 + 1),
                        (const void *)0x744B7355);
                    }
LABEL_37:
                    gptmrWD = (PKTIMER)Pool2;
                    if ( Pool2 )
                    {
LABEL_38:
                      KeInitializeTimerEx((PKTIMER)Pool2, SynchronizationTimer);
                      if ( qword_1C02962C0 )
                        v38 = qword_1C02962C0(v37);
                      else
                        v38 = 0;
                      v39 = DxDdGetDxgkWin32kInterface();
                      LOBYTE(v40) = v38 == 0;
                      (*(void (__fastcall **)(__int64))(v39 + 360))(v40);
                      DispBrokerUpdateKernelDisplayPolicies();
                      DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
                      gbVideoInitialized = 1;
                      goto LABEL_41;
                    }
                    goto LABEL_93;
                  }
                }
                else if ( v35 == 2 )
                {
                  v64 = 0LL;
                  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                          gpLeakTrackingAllocator,
                          0x744B7355u,
                          &v64) )
                  {
                    Object[0] = &v68;
                    Object[1] = &v62;
                    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                              v34,
                              Object,
                              &v70);
                    goto LABEL_37;
                  }
                  Pool2 = ExAllocatePool2(v61, 80LL, 1951101781LL);
                  if ( Pool2 )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)v34 + 16);
                    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
                    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
                    {
                      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                              v34,
                                              Pool2,
                                              v64,
                                              BackTrace) )
                      {
                        gptmrWD = (PKTIMER)Pool2;
                        goto LABEL_38;
                      }
                    }
                    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                                 v34,
                                                 Pool2,
                                                 v64,
                                                 BackTrace) )
                    {
                      Pool2 += 16LL;
                      goto LABEL_37;
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)v34 + 17);
                    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
                  }
                }
                gptmrWD = 0LL;
              }
LABEL_93:
              v16 = -1073741801;
              goto LABEL_41;
            }
            gbConnected = 0;
            if ( gbConnectCompleted )
            {
              gbConnectCompleted = 0;
              PowerConnectionEvent(v31, v30, v32, v33);
            }
            goto LABEL_90;
          }
          if ( !ghRemoteVideoChannel )
            goto LABEL_25;
          v65 = 0LL;
          v16 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v65, 0LL);
          if ( v16 < 0 )
            goto LABEL_41;
          gVideoFileObject = v65;
          RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v65);
          v66 = 0LL;
          v16 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v66, 0LL);
          gThinwireFileObject = v66;
          if ( v16 < 0 )
            goto LABEL_41;
          if ( !(unsigned int)GreMultiUserInitSession(
                                v10,
                                (int)ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                gRemotePrimaryMonitor,
                                (__int64)gVideoFileObject,
                                (__int64)v66,
                                a2,
                                a3,
                                19,
                                &gRemoteDisplayDeviceName) )
            goto LABEL_90;
          if ( qword_1C02962C0 && (unsigned int)qword_1C02962C0(v59) )
          {
            v16 = GreDeviceIoControlImpl(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, &v69, 0, 1);
            if ( v16 < 0 )
              goto LABEL_41;
            v16 = GreDrvConnect(v10);
          }
          if ( v16 >= 0 )
            goto LABEL_26;
LABEL_41:
          KeSetEvent(gpevtVideoInitialized, 1, 0);
          if ( v16 )
          {
            if ( v16 < 0 )
            {
              gbRemoteFxSession = v63;
              *(_DWORD *)(v10 + 64) = v63;
              CleanupRemoteHandles(v10);
            }
          }
          else
          {
            if ( !gProtocolType )
            {
              v45 = (unsigned int *)SGDGetUserSessionState(v42, v41, v43, v44);
              RtlSetActiveConsoleId(*v45);
            }
            if ( qword_1C0295238 && (int)qword_1C0295238() >= 0 && qword_1C0295240 )
              qword_1C0295240();
            if ( qword_1C02962C0 )
            {
              if ( (unsigned int)qword_1C02962C0(v42) )
                DrvEscapeRemoteDrivers(
                  *((_QWORD *)gpDispInfo + 2),
                  (unsigned __int16)gProtocolType,
                  *(_QWORD *)(v10 + 40),
                  6,
                  0LL,
                  0);
            }
            SetConnectCompletedState(1);
          }
          SetConsoleSwitchInProgress(0LL);
          LOBYTE(v46) = 1;
          DxgkEngNotifyDisplayChange(v46);
          return (unsigned int)v16;
        }
      }
      else
      {
        v28 = gpsi;
      }
      v28[559] |= 4u;
      goto LABEL_23;
    }
  }
  return result;
}
