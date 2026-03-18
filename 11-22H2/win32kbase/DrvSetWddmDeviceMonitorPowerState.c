/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00CAA74
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00C4CB0 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013356C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001E270 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00BA8D0 (DrvDxgkLogCodePointPacket.c)
 *     UserSetMonitorPowerWaiterEvent @ 0x1C00CAE80 (UserSetMonitorPowerWaiterEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 *v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 j; // rbx
  __int64 k; // rax
  NSInstrumentation::CLeakTrackingAllocator *v12; // rdi
  unsigned __int64 v13; // rbx
  int v14; // eax
  char *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  unsigned int i; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r14d
  _QWORD *v29; // rdi
  int v30; // r15d
  struct tagTHREADINFO *v31; // rax
  struct tagTHREADINFO *v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v34; // rdi
  __int64 v35; // rdx
  void *v36; // rcx
  int v37; // edi
  char *Pool2; // rax
  unsigned int v39; // edx
  __int64 v40; // r10
  char v41; // r14
  __int64 v42; // rax
  PVOID v43[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  _DWORD InputBuffer[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  PVOID BackTrace[26]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v49; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int64 v50; // [rsp+178h] [rbp+78h] BYREF

  InputBuffer[0] = a2;
  InputBuffer[1] = 0;
  v47 = a4;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return;
  WdLogSingleEntry2(5LL, a1);
  v7 = (__int64 *)(v6 + 1264);
  if ( a3 )
    goto LABEL_10;
  v8 = *v7;
  v9 = 0;
  while ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 160) & 0x800000) != 0 && *(_QWORD *)(v8 + 224) && (!a1 || *(_QWORD *)(v8 + 144) == a1) )
      ++v9;
    v8 = *(_QWORD *)(v8 + 128);
  }
  if ( 24 * v9 )
  {
    v12 = gpLeakTrackingAllocator;
    v13 = 24 * v9;
    v49 = 1886221383;
    v44 = 260LL;
    v14 = *(_DWORD *)gpLeakTrackingAllocator;
    v45 = v13;
    switch ( v14 )
    {
      case 0:
        v43[0] = (PVOID)ExAllocatePool2(260LL, (unsigned int)v13, 1886221383LL);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)v43[0];
        if ( v43[0] )
          _InterlockedIncrement64((volatile signed __int64 *)v12 + 14);
        goto LABEL_23;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u)
          && v13 + 16 >= v13 )
        {
          Pool2 = (char *)ExAllocatePool2(v44 & 0xFFFFFFFFFFFFFFFDuLL, v13 + 16, v49);
          v43[0] = Pool2;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2;
          if ( !Pool2
            || (_InterlockedIncrement64((volatile signed __int64 *)v12 + 14),
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2 + 16,
                *(_QWORD *)Pool2 = 1886221383LL,
                v43[0] = Pool2 + 16,
                Pool2 == (char *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v12 + 1),
              (const void *)0x706D7447);
          }
LABEL_23:
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          {
            v16 = *v7;
            v17 = 0;
            if ( *v7 )
            {
              v43[0] = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              do
              {
                if ( (*(_DWORD *)(v16 + 160) & 0x800000) != 0
                  && *(_QWORD *)(v16 + 224)
                  && (!a1 || *(_QWORD *)(v16 + 144) == a1) )
                {
                  for ( i = 0; i < v17; ++i )
                  {
                    v8 = 3LL * i;
                    if ( *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[24 * i + 16] == *(_QWORD *)(v16 + 144) )
                      break;
                  }
                  if ( v17 == i )
                  {
                    v35 = 3LL * v17;
                    *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v35] = *(_QWORD *)(v16 + 136);
                    v36 = *(void **)(v16 + 224);
                    *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v35 + 8] = v36;
                    *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v35 + 16] = *(_QWORD *)(v16 + 144);
                    ObfReferenceObject(v36);
                    ++v17;
                  }
                }
                v16 = *(_QWORD *)(v16 + 128);
              }
              while ( v16 );
            }
            v19 = SGDGetUserGdiSessionState(v8);
            KeResetEvent(*(PRKEVENT *)(v19 + 8));
            *(_BYTE *)(SGDGetUserGdiSessionState(v20) + 1) = 1;
            UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
            v28 = 0;
            if ( v17 )
            {
              v29 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              do
              {
                DrvDxgkLogCodePointPacket(90LL, v28, v17, 0);
                v30 = GreDeviceIoControlImpl(
                        (PDEVICE_OBJECT)*v29,
                        0x23200Fu,
                        InputBuffer,
                        0x10u,
                        0LL,
                        0,
                        (unsigned int *)&v50,
                        1u,
                        1);
                if ( v30 < 0 )
                  WdLogSingleEntry2(2LL, *v29);
                ObfDereferenceObject((PVOID)v29[1]);
                DrvDxgkLogCodePointPacket(91LL, (unsigned int)v30, 0, 0);
                ++v28;
                v29 += 3;
              }
              while ( v28 < v17 );
            }
            v31 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v25, v26, v27);
            gptiCurrent = v31;
            if ( v31 )
            {
              *((_DWORD *)v31 + 387) = 1;
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
              if ( CurrentProcessWin32Process )
              {
                if ( *(_QWORD *)CurrentProcessWin32Process )
                {
                  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
                  {
                    v32 = gptiCurrent;
                    if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      v34 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( gpSharedUserCritDeferredUnlockListHead )
                      {
                        do
                        {
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
                          v42 = *v34;
                          v34[2] = 0LL;
                          if ( !*(_DWORD *)(v42 + 8) )
                          {
                            LODWORD(v50) = 0x20000;
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          }
                          HMUnlockObject(*v34);
                          v34 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                        }
                        while ( gpSharedUserCritDeferredUnlockListHead );
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)v43[0];
                      }
                    }
                  }
                }
              }
            }
            *(_BYTE *)(SGDGetUserGdiSessionState(v32) + 1) = 0;
            UserSetMonitorPowerWaiterEvent(0);
            NSInstrumentation::CLeakTrackingAllocator::Free(
              gpLeakTrackingAllocator,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            return;
          }
          goto LABEL_83;
        }
        break;
      case 2:
        v50 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v50) )
        {
          v43[0] = &v44;
          v43[1] = &v49;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                     (__int64)v12,
                                                                                                     (__int64)v43,
                                                                                                     &v45);
          v43[0] = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          goto LABEL_23;
        }
        v41 = 0;
        if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
        {
          v13 += 16LL;
          v41 = 1;
          v45 = v13;
        }
        v43[0] = (PVOID)ExAllocatePool2(v40, v13, v39);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)v43[0];
        if ( v43[0] )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v12 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v41 && (unsigned __int64)((__int64)v43[0] & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v12,
                                    v43[0],
                                    v50,
                                    BackTrace) )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)v43[0] + 16;
LABEL_74:
              v43[0] = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              goto LABEL_23;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v12,
                                       v43[0],
                                       v50,
                                       BackTrace) )
          {
            goto LABEL_23;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v12 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v43[0]);
        }
        break;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_74;
  }
LABEL_83:
  WdLogSingleEntry1(6LL, v9);
LABEL_10:
  for ( j = *v7; j; j = *(_QWORD *)(j + 128) )
  {
    if ( (*(_DWORD *)(j + 160) & 0x800000) != 0 && *(_QWORD *)(j + 136) && (!a1 || *(_QWORD *)(j + 144) == a1) )
    {
      for ( k = *v7; k; k = *(_QWORD *)(k + 128) )
      {
        if ( *(_QWORD *)(k + 144) == *(_QWORD *)(j + 144) )
          break;
      }
      if ( k == j )
      {
        DrvDxgkLogCodePointPacket(90LL, 0LL, 0, 0);
        v37 = GreDeviceIoControlImpl(
                *(PDEVICE_OBJECT *)(j + 136),
                0x23200Fu,
                InputBuffer,
                0x10u,
                0LL,
                0,
                (unsigned int *)&v50,
                1u,
                1);
        if ( v37 < 0 )
          WdLogSingleEntry2(2LL, j);
        DrvDxgkLogCodePointPacket(91LL, (unsigned int)v37, 0, 0);
      }
    }
  }
  WdLogSingleEntry0(5LL);
}
