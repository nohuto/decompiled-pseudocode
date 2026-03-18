/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C019F67C
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C019D494 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall BuildValueDeviceUsages(__int64 a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  struct tagINPUT_INJECTION_VALUE **v4; // r14
  int v5; // esi
  __int64 v6; // r12
  unsigned int v7; // r13d
  int v8; // r15d
  PVOID v9; // rbp
  __int64 v10; // rax
  int v11; // edx
  __int64 Pool2; // rsi
  int v13; // r8d
  _WORD *v14; // rcx
  __int16 *v15; // rdx
  unsigned int v16; // r8d
  __int16 v17; // ax
  unsigned int v18; // edx
  _WORD *v19; // rsi
  __int64 v20; // rcx
  char v22; // [rsp+40h] [rbp-E8h]
  PVOID BackTrace[27]; // [rsp+50h] [rbp-D8h] BYREF
  char *v24; // [rsp+138h] [rbp+10h]
  unsigned int *v25; // [rsp+140h] [rbp+18h]
  char *v26; // [rsp+148h] [rbp+20h]

  v25 = a3;
  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 5LL;
  if ( v5 == 3 )
  {
    v24 = (char *)&unk_1C0294602;
    v7 = 6;
    v26 = (char *)&unk_1C0294604;
    v8 = 11;
LABEL_7:
    v9 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A6E6952) == 0x6A6E6952
      && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1785620818 )
      {
        if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_11;
      }
      Pool2 = ExAllocatePool2(260LL, 160LL);
      if ( !Pool2 )
        goto LABEL_21;
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v9,
               Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          *v4 = (struct tagINPUT_INJECTION_VALUE *)Pool2;
          goto LABEL_13;
        }
LABEL_35:
        ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_21:
        *v4 = 0LL;
LABEL_22:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
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
            (_DWORD)gRimLog,
            2,
            1,
            13,
            (__int64)&WPP_3ea38f37f3bd3b51b6eab10c996454ef_Traceguids,
            23);
        }
        return v3;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v9,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_35;
      Pool2 += 16LL;
    }
    else
    {
LABEL_11:
      Pool2 = ExAllocatePool2(260LL, 144LL);
    }
    *v4 = (struct tagINPUT_INJECTION_VALUE *)Pool2;
    if ( !Pool2 )
      goto LABEL_22;
LABEL_13:
    v14 = (_WORD *)Pool2;
    v15 = (__int16 *)&unk_1C0294564;
    v16 = 5;
    do
    {
      *v14 = *(v15 - 1);
      v17 = *v15;
      v15 += 16;
      v14[1] = v17;
      v14 += 6;
      --v6;
    }
    while ( v6 );
    v18 = 0;
    v19 = (_WORD *)(Pool2 + 60);
    do
    {
      if ( v18 >= v7 )
        break;
      ++v16;
      v20 = 32LL * v18++;
      *v19 = *(_WORD *)&v24[v20];
      v19[1] = *(_WORD *)&v26[v20];
      v19 += 6;
    }
    while ( v16 < 0xC );
    if ( v16 == v8 )
    {
      v3 = 1;
      *v25 = 12;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v18) = 0;
      }
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = v16;
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v16,
          (_DWORD)gRimLog,
          2,
          1,
          12,
          (__int64)&WPP_3ea38f37f3bd3b51b6eab10c996454ef_Traceguids,
          v22,
          v8);
      }
    }
    return v3;
  }
  if ( v5 == 2 )
  {
    v7 = 5;
    v24 = (char *)&unk_1C0294482;
    v8 = 10;
    v26 = (char *)&unk_1C0294484;
    goto LABEL_7;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      2,
      1,
      11,
      (__int64)&WPP_3ea38f37f3bd3b51b6eab10c996454ef_Traceguids,
      v5);
  }
  return 0LL;
}
