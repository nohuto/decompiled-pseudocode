/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C01A62A0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0034D74 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     rimIsWakeablePointerFrame @ 0x1C00DC55C (rimIsWakeablePointerFrame.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C00E65F6 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E69BA (rimCountContactsToDeliverWithFrame.c)
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C01A6D9C (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A6FEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A7B8C (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C01A9900 (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01AE2AC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, __int64 a3)
{
  unsigned int v3; // r12d
  struct RIMDEV *v4; // rbx
  PDEVICE_OBJECT v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // edx
  int v16; // r8d
  unsigned int v17; // r15d
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  int v26; // edx
  int v27; // r8d
  PDEVICE_OBJECT v28; // rcx
  __int16 v29; // ax
  int v30; // edx
  int v31; // r8d
  __int64 v33; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      52,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
  v7 = *((_QWORD *)v4 + 59);
  v8 = 0;
  LODWORD(v33) = 0;
  v34 = 0;
  v9 = *(_QWORD *)(v7 + 760);
  if ( v9 && *(_DWORD *)(v9 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
  if ( rimIsWakeablePointerFrame(v7) )
  {
    v10 = -__CFSHR__(*((_DWORD *)v4 + 46), 14);
    v11 = RIMGetPointerInputType(v7) - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            v14 = 17;
          else
            v14 = 0;
        }
        else
        {
          v14 = 3;
        }
      }
      else
      {
        v14 = 13;
      }
    }
    else
    {
      v14 = 11;
    }
    CInputGlobals::UpdateInputGlobals(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      v14,
      0LL,
      0,
      v10 != 0 ? 10 : 2);
  }
  rimCountContactsToDeliverWithFrame(v7, &v34, &v33);
  v17 = v34;
  if ( v34 )
  {
    RIMUpdatePrimaryAndFinalizePointerFlags(a1, v7);
    v18 = v33;
    if ( (unsigned int)rimStorePointersInHoldingFrame(a1, v4, v17, (unsigned int)v33) )
    {
      v33 = 0LL;
      if ( (unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v33) )
      {
        v25 = v33;
        *(_DWORD *)(v33 + 196) = v18;
        if ( (*((_DWORD *)v4 + 46) & 0x2000) != 0 )
        {
          *(_QWORD *)(v25 + 32) = *((_QWORD *)v4 + 3);
          *(_DWORD *)(v25 + 192) = 1;
        }
        InputTraceLogging::RIM::CompleteFrame((__int64)v4);
        rimProcessCompleteFrame(a1, v4);
        v8 = 1;
        goto LABEL_55;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v26) = 0;
      }
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_46:
        rimFindAndReclaimHoldingFrame(a1, v4, v18, v3);
        goto LABEL_55;
      }
      v29 = 53;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v26) = 0;
      }
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v29 = 54;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v28->AttachedDevice,
      v26,
      v27,
      (_DWORD)gRimLog,
      4,
      1,
      v29,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
    goto LABEL_46;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      (_DWORD)gRimLog,
      4,
      1,
      55,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
  }
  LOBYTE(v18) = v33;
  rimFindAndReclaimHoldingFrame(a1, v4, (unsigned int)v33, v3);
LABEL_55:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, v8, 0LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v30) = 0;
  }
  if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v30,
      v31,
      (_DWORD)gRimLog,
      4,
      1,
      56,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids,
      v8,
      v18,
      v17);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v30) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v31) = 0;
  }
  if ( (_BYTE)v30 || (_BYTE)v31 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v30,
      v31,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      57,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
  return v8;
}
