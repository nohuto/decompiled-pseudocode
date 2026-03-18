/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A73A0
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EEBD0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ConvertPointCoordinates @ 0x1C003C35C (ConvertPointCoordinates.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01A41B4 (-CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C01A435C (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01A588C (-StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, struct RIMDEV *a2, __int64 *a3)
{
  _DWORD *v3; // rsi
  unsigned int v4; // ebx
  struct RIMDEV *v5; // r12
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 Pool2; // rdi
  __int64 v11; // rsi
  char v12; // r14
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  PDEVICE_OBJECT *v18; // rdx
  _UNKNOWN **v19; // r8
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r12
  __m128i v25; // xmm2
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // ecx
  __int64 v34; // r14
  __int64 v35; // rsi
  void *v36; // rdx
  __int64 v38; // r8
  __int64 *v39; // rdx
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // [rsp+58h] [rbp-B0h]
  __int64 v44; // [rsp+60h] [rbp-A8h]
  __int128 v45; // [rsp+68h] [rbp-A0h] BYREF
  int v46[8]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v47; // [rsp+98h] [rbp-70h]
  __int128 v48; // [rsp+A8h] [rbp-60h]
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int128 v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D8h] [rbp-30h]
  PVOID BackTrace[25]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v53; // [rsp+1F8h] [rbp+F0h]
  int v54; // [rsp+1F8h] [rbp+F0h]
  int v57; // [rsp+210h] [rbp+108h]

  v3 = gpLeakTrackingAllocator;
  v4 = 0;
  v5 = a2;
  v53 = *(_DWORD *)(a1 + 16);
  v7 = 1;
  v8 = v53;
  *a3 = 0LL;
  if ( (v3[10] & 0x66637352) != 0x66637352 || (v9 = 0LL, !v3[11]) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, v53);
    goto LABEL_6;
  }
  while ( v3[v9] != 1717793618 )
  {
    if ( ++v9 >= (unsigned __int64)(unsigned int)v3[11] )
      goto LABEL_5;
  }
  v12 = 0;
  if ( v53 < 0x1000uLL || (v53 & 0xFFF) != 0 )
  {
    v12 = 1;
    v8 = v53 + 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v8);
  if ( !Pool2 )
    return v4;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v3,
           (const void *)Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
LABEL_6:
      if ( Pool2 )
        goto LABEL_7;
      return v4;
    }
LABEL_19:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return v4;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v3,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_19;
LABEL_7:
  *(_DWORD *)Pool2 = v53;
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 176) )
      v11 = *((_QWORD *)v5 + 3);
    else
      v11 = *((_QWORD *)v5 + 2);
  }
  else
  {
    v11 = 0LL;
  }
  v43 = v11;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_DWORD *)Pool2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(Pool2 + 28) = *(_DWORD *)(a1 + 24);
  *(_OWORD *)(Pool2 + 48) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(Pool2 + 64) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(Pool2 + 80) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(Pool2 + 96) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(Pool2 + 112) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(Pool2 + 128) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(Pool2 + 144) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(Pool2 + 160) = *(_OWORD *)(a1 + 144);
  *(_OWORD *)(Pool2 + 176) = *(_OWORD *)(a1 + 160);
  v44 = 0LL;
  v13 = 0LL;
  *(LARGE_INTEGER *)(Pool2 + 120) = KeQueryPerformanceCounter(0LL);
  v14 = 0LL;
  *(_DWORD *)(Pool2 + 192) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(Pool2 + 196) = *(_DWORD *)(a1 + 180);
  *(_DWORD *)(Pool2 + 200) = *(_DWORD *)(a1 + 184);
  *(_QWORD *)(Pool2 + 208) = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(Pool2 + 232) = Pool2 + 240;
  *(_QWORD *)(Pool2 + 32) = v11;
  if ( v5 )
  {
    v15 = *((_QWORD *)v5 + 59);
    if ( v15 )
    {
      v13 = *(_OWORD *)(v15 + 176);
      v44 = *((_QWORD *)v5 + 59);
      v14 = *(_OWORD *)(v15 + 160);
    }
  }
  InputTraceLogging::RIM::StartFrameFromContainer(v5, (const struct RIMCOMPLETEFRAME *)Pool2);
  v16 = *(_QWORD *)(a1 + 216);
  v17 = 0LL;
  v54 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
LABEL_50:
    v32 = *(_QWORD *)(Pool2 + 232);
    *(_QWORD *)(Pool2 + 216) = v32;
    v33 = 192 * *(_DWORD *)(a1 + 20);
    *(_DWORD *)(Pool2 + 28) = *(_DWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 208) )
    {
      v34 = v32 + v33;
      *(_QWORD *)(Pool2 + 224) = v34;
      v35 = *(_QWORD *)(a1 + 208);
      while ( v35 )
      {
        while ( 1 )
        {
          *(_DWORD *)v34 = *(_DWORD *)v35;
          *(_DWORD *)(v34 + 4) = *(_DWORD *)(v35 + 4);
          *(_QWORD *)(v34 + 8) = v34 + 24;
          memmove((void *)(v34 + 24), *(const void **)(v35 + 8), *(unsigned int *)(v35 + 4));
          v39 = (__int64 *)(v35 + 16);
          v40 = *(_DWORD *)(v35 + 4) + 7;
          *(_QWORD *)(v34 + 16) = 0LL;
          v35 = *(_QWORD *)(v35 + 16);
          v41 = (v40 & 0xFFFFFFF8) + 24;
          v42 = 0LL;
          if ( v35 )
          {
            v42 = v34 + v41;
            *(_QWORD *)(v34 + 16) = v42;
            v35 = *v39;
          }
          v34 = v42;
          if ( !v42 )
            break;
          if ( !v35 )
            goto LABEL_66;
        }
        if ( !v35 )
          break;
LABEL_66:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v39, v38);
      }
    }
    v4 = 1;
    *a3 = Pool2;
    InputTraceLogging::RIM::CompleteFrameFromContainer(v5, (const struct RIMCOMPLETEFRAME *)Pool2);
    return v4;
  }
  v18 = &WPP_GLOBAL_Control;
  v19 = &WPP_RECORDER_INITIALIZED;
  while ( 1 )
  {
    v20 = 192 * v17;
    *(_DWORD *)(v20 + *(_QWORD *)(Pool2 + 232)) = *(_DWORD *)v16;
    *(_WORD *)(v20 + *(_QWORD *)(Pool2 + 232) + 8) = *(_WORD *)(v16 + 8);
    *(_WORD *)(v20 + *(_QWORD *)(Pool2 + 232) + 10) = *(_WORD *)(v16 + 12);
    *(_DWORD *)(v20 + *(_QWORD *)(Pool2 + 232) + 160) = *(_DWORD *)(v16 + 152);
    *(_DWORD *)(v20 + *(_QWORD *)(Pool2 + 232) + 164) = *(_DWORD *)(v16 + 156);
    v21 = *(_DWORD *)(v16 + 16);
    v57 = v21;
    if ( v21 == 2 || v21 == 5 )
    {
      v23 = *(_QWORD *)(Pool2 + 232);
      *(_DWORD *)(v20 + v23 + 112) = *(_DWORD *)(v16 + 104);
      *(_DWORD *)(v20 + v23 + 116) = *(_DWORD *)(v16 + 108);
      *(_OWORD *)(v20 + v23 + 120) = *(_OWORD *)(v16 + 112);
      *(_OWORD *)(v20 + v23 + 136) = *(_OWORD *)(v16 + 128);
      *(_DWORD *)(v20 + v23 + 152) = *(_DWORD *)(v16 + 144);
      *(_DWORD *)(v20 + v23 + 156) = *(_DWORD *)(v16 + 148);
    }
    else if ( v21 == 3 )
    {
      v22 = *(_QWORD *)(Pool2 + 232);
      *(_DWORD *)(v20 + v22 + 112) = *(_DWORD *)(v16 + 104);
      *(_DWORD *)(v20 + v22 + 116) = *(_DWORD *)(v16 + 108);
      *(_DWORD *)(v20 + v22 + 120) = *(_DWORD *)(v16 + 112);
      *(_DWORD *)(v20 + v22 + 124) = *(_DWORD *)(v16 + 116);
      *(_DWORD *)(v20 + v22 + 128) = *(_DWORD *)(v16 + 120);
      *(_DWORD *)(v20 + v22 + 132) = *(_DWORD *)(v16 + 124);
    }
    v24 = *(_QWORD *)(Pool2 + 232);
    v25 = *(__m128i *)(v16 + 16);
    v26 = *(_OWORD *)(v16 + 48);
    v47 = *(_OWORD *)(v16 + 32);
    v27 = *(_OWORD *)(v16 + 64);
    v48 = v26;
    v28 = *(_OWORD *)(v16 + 80);
    v49 = v27;
    *(_QWORD *)&v27 = *(_QWORD *)(v16 + 96);
    *(_DWORD *)(v20 + v24 + 20) = v25.m128i_i32[1];
    *(_DWORD *)(v20 + v24 + 16) = _mm_cvtsi128_si32(v25);
    v50 = v28;
    *(_DWORD *)(v20 + v24 + 28) = _mm_srli_si128(v25, 8).m128i_i32[1];
    *(_QWORD *)(v20 + v24 + 32) = v43;
    *(_QWORD *)(v20 + v24 + 48) = *((_QWORD *)&v47 + 1);
    *(_QWORD *)(v20 + v24 + 64) = *((_QWORD *)&v48 + 1);
    v51 = v27;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v18,
        (_DWORD)v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        60,
        (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids,
        v47);
    }
    *(_QWORD *)&v45 = v20 + *(_QWORD *)(Pool2 + 232) + 16LL;
    if ( !qword_1C029D808 || (int)qword_1C029D808() < 0 )
      break;
    if ( !(qword_1C029D810 ? qword_1C029D810(v47, v45) : 0) )
      break;
    if ( v57 == 5 || !v44 )
    {
      *(_QWORD *)(v20 + v24 + 56) = v48;
      *(_QWORD *)(v20 + v24 + 72) = v49;
    }
    else
    {
      v30 = *(_QWORD *)(v20 + v24 + 48);
      v45 = v13;
      *(_OWORD *)v46 = v14;
      ConvertPointCoordinates(v30, v46, (int *)&v45, (_QWORD *)(v20 + v24 + 56));
      v31 = *(_QWORD *)(v20 + v24 + 64);
      *(_OWORD *)v46 = v13;
      v45 = v14;
      ConvertPointCoordinates(v31, (int *)&v45, v46, (_QWORD *)(v20 + v24 + 72));
    }
    *(_QWORD *)(v20 + v24 + 80) = *((_QWORD *)&v49 + 1);
    *(_OWORD *)(v20 + v24 + 88) = v50;
    *(_DWORD *)(v20 + v24 + 104) = v51;
    v5 = a2;
    InputTraceLogging::RIM::CopyPointerFromContainer(
      a2,
      (const struct tagPOINTEREVENTINT *)(v20 + *(_QWORD *)(Pool2 + 232) + 8LL));
    v19 = &WPP_RECORDER_INITIALIZED;
    v17 = (unsigned int)(v54 + 1);
    v16 += 176LL;
    v54 = v17;
    v18 = &WPP_GLOBAL_Control;
    if ( (unsigned int)v17 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_50;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = &WPP_8675e8122247356a5f11107ee91523c0_Traceguids;
    LOBYTE(v36) = v7;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v36,
      (_DWORD)v19,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      12,
      61,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
  }
  return 0LL;
}
