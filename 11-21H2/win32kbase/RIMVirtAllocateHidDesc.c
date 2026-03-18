/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C018D358
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C018DB94 (RIMVirtCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00564C4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimIsHidInputDevice @ 0x1C00E6476 (rimIsHidInputDevice.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMFreeHidDesc @ 0x1C018B428 (RIMFreeHidDesc.c)
 *     RIMIsInteractiveCtrl @ 0x1C018C204 (RIMIsInteractiveCtrl.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C020C7BC (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C020C8E4 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C020DE34 (ApiSetInkProcessorIsInkDevice.c)
 */

__int64 __fastcall RIMVirtAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r13
  PVOID v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  __int64 Pool2; // rdi
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned __int16 v22; // r9
  PVOID v23; // xmm0_8
  int v24; // eax
  int v25; // edx
  __int64 v26; // r8
  int v27; // r10d
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // r9
  int IsInkDevice; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // edx
  int v37; // r8d
  char v38; // [rsp+58h] [rbp-B0h]
  PVOID v39; // [rsp+68h] [rbp-A0h] BYREF
  int v40; // [rsp+70h] [rbp-98h]
  _OWORD v41[4]; // [rsp+78h] [rbp-90h] BYREF
  PVOID BackTrace[20]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v43[26]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v45; // [rsp+248h] [rbp+140h]

  v45 = a3;
  v7 = a2;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        81,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] && (*(_DWORD *)(a2 + 184) & 0x10000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        82,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v8 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x44687352) != 0x44687352
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_22:
    Pool2 = ExAllocatePool2(260LL, 120LL);
    goto LABEL_23;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1147695954 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_22;
  }
  Pool2 = ExAllocatePool2(260LL, 136LL);
  if ( !Pool2 )
    goto LABEL_24;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v8,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_58;
    Pool2 += 16LL;
LABEL_23:
    if ( Pool2 )
      goto LABEL_34;
LABEL_24:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        (_DWORD)gRimLog,
        3,
        1,
        83,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        *(_QWORD *)(v7 + 216));
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v8,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_58:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_24;
  }
LABEL_34:
  v13 = *((_OWORD *)a4 + 1);
  *(_OWORD *)(Pool2 + 40) = *(_OWORD *)a4;
  v14 = *((_OWORD *)a4 + 2);
  *(_OWORD *)(Pool2 + 56) = v13;
  v15 = *((_OWORD *)a4 + 3);
  *(_OWORD *)(Pool2 + 72) = v14;
  *(_OWORD *)(Pool2 + 88) = v15;
  if ( !rimIsHidInputDevice(v7, Pool2, v12) )
    goto LABEL_70;
  v16 = *(unsigned __int16 *)(Pool2 + 44);
  v39 = gpLeakTrackingAllocator;
  v17 = 10 * v16;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) == 0x70707352
    && (v18 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v18) != 1886417746 )
    {
      if ( ++v18 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_39;
    }
    v38 = 0;
    if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
    {
      v38 = 1;
      v17 += 16LL;
    }
    v20 = ExAllocatePool2(68LL, v17);
    if ( v20 )
    {
      memset(v43, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, v43, 0LL);
      if ( v38 && (unsigned __int64)(v20 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v39,
               (const void *)v20,
               (struct NSInstrumentation::CBackTrace *)v43) )
        {
          v20 += 16LL;
          goto LABEL_40;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v39,
                  v20,
                  (struct NSInstrumentation::CBackTrace *)v43) )
      {
        goto LABEL_40;
      }
      ExFreePoolWithTag((PVOID)v20, 0);
    }
    v20 = 0LL;
  }
  else
  {
LABEL_39:
    v20 = ExAllocatePool2(68LL, v17);
  }
LABEL_40:
  *(_QWORD *)(Pool2 + 24) = v20;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v21,
      (_DWORD)gRimLog,
      4,
      1,
      84,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      v20);
    v20 = *(_QWORD *)(Pool2 + 24);
  }
  if ( !v20 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v19) = 0;
    }
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v21,
        (_DWORD)gRimLog,
        3,
        1,
        85,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        *(_WORD *)(Pool2 + 44));
    RIMFreeHidDesc((_WORD *)Pool2, v19, v21);
    return 0LL;
  }
LABEL_70:
  v22 = a4[1];
  *(_QWORD *)(Pool2 + 16) = v45;
  *(_QWORD *)(Pool2 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(Pool2 + 112) = *(_DWORD *)(a5 + 8);
  if ( v22 == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v23 = *(PVOID *)(Pool2 + 104);
    v40 = *(_DWORD *)(Pool2 + 112);
    v39 = v23;
    v24 = RIMVirtCreatePointerDeviceInfo(a1, v7, v45, a4, &v39, a6);
    if ( v24 >= 0 || *a4 == 5 && v24 != -1073741808 )
    {
      ApiSetEtwTracePointerDeviceArrivalStop();
      LOBYTE(v27) = 0;
      goto LABEL_84;
    }
LABEL_92:
    DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
    LOBYTE(v34) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        v35,
        (_DWORD)gRimLog,
        4,
        1,
        87,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        a4[1],
        *a4);
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(v7 + 456) = 0LL;
    RIMFreeHidDesc((_WORD *)Pool2, v34, v35);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v36) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v36) = 0;
    }
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v37,
        (_DWORD)gRimLog,
        4,
        1,
        88,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        0);
    }
    return 0LL;
  }
  v28 = *((_OWORD *)a4 + 1);
  v41[0] = *(_OWORD *)a4;
  v29 = *((_OWORD *)a4 + 2);
  v41[1] = v28;
  v30 = *((_OWORD *)a4 + 3);
  v41[2] = v29;
  v41[3] = v30;
  if ( (unsigned int)RIMIsInteractiveCtrl(v41) )
  {
    *(_DWORD *)(v7 + 200) |= 0x100u;
  }
  else
  {
    IsInkDevice = ApiSetInkProcessorIsInkDevice((unsigned __int16)v31, *a4, v26 + 6, v31);
    LOBYTE(v27) = 0;
    if ( !IsInkDevice )
    {
      if ( ((unsigned int)RimDeviceTypeToRimInputType(v7, *(unsigned __int8 *)(v7 + 48)) & *(_DWORD *)(a1 + 84)) != 0
        && (*(_DWORD *)(a1 + 88) == v27 || (*(_DWORD *)(v7 + 184) & 0x10000) != 0) )
      {
        goto LABEL_84;
      }
      goto LABEL_92;
    }
    *(_DWORD *)(v7 + 200) |= 0x200u;
  }
LABEL_84:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v25) = v27;
  }
  if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v26,
      (_DWORD)gRimLog,
      4,
      1,
      86,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      Pool2);
  }
  return Pool2;
}
