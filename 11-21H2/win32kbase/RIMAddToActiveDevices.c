/*
 * XREFs of RIMAddToActiveDevices @ 0x1C018F660
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C01B1EB4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01B2140 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?Grow@?$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C018ED5C (-Grow@-$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C020EB64 (ApiSetPostPointerDeviceInRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rbx
  unsigned int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rsi
  PVOID v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __int64 Pool2; // rbx
  __int64 v15; // r8
  int v16; // eax
  void *v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  void *v25; // rcx
  char v27; // [rsp+40h] [rbp-C8h]
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B8h] BYREF
  union _LARGE_INTEGER DueTime; // [rsp+110h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a1 + 448);
  v4 = *(_QWORD **)(a1 + 448);
  v5 = 0;
  ApiSetPostPointerDeviceInRangeMessage(a2);
  while ( v4 != v2 )
  {
    v10 = v4 - 1;
    v4 = (_QWORD *)*v4;
    if ( *v10 == a2 )
    {
      v16 = *((_DWORD *)v10 + 6);
      if ( (v16 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
        v16 = *((_DWORD *)v10 + 6);
      }
      if ( (v16 & 1) != 0 )
        *((_DWORD *)v10 + 6) = v16 & 0xFFFFFFFE;
      return 1;
    }
  }
  v11 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78707352) != 0x78707352
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_8:
    Pool2 = ExAllocatePool2(260LL, 32LL);
    goto LABEL_9;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 2020635474 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_8;
  }
  Pool2 = ExAllocatePool2(260LL, 48LL);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v11,
              Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_22:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return v5;
      }
LABEL_10:
      v15 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v15 + 188) |= 8u;
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = v15;
        v17 = &WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids;
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          (_DWORD)v17,
          (_DWORD)gRimLog,
          4,
          1,
          39,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
          v27);
      }
      *(_QWORD *)Pool2 = a2;
      v18 = (_QWORD *)(Pool2 + 8);
      v19 = (_QWORD *)v2[1];
      if ( (_QWORD *)*v19 != v2 )
        __fastfail(3u);
      *(_QWORD *)(Pool2 + 16) = v19;
      *v18 = v2;
      v5 = 1;
      *v19 = v18;
      v2[1] = v18;
      if ( (int)CDynamicArray<tagHPD_ACTIVE_DEVICE *,2003858261>::Grow(a1 + 480) >= 0 )
        *(_QWORD *)(*(_QWORD *)(a1 + 480) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 488))++) = Pool2;
      v22 = *(_DWORD *)(a1 + 496);
      if ( v22 <= *(_DWORD *)(a1 + 488) )
        v22 = *(_DWORD *)(a1 + 488);
      *(_DWORD *)(a1 + 496) = v22;
      v23 = *(unsigned int *)(a1 + 464);
      if ( (_DWORD)v23 == -1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v20, v21);
        LODWORD(v23) = *(_DWORD *)(a1 + 464);
      }
      v24 = v23 + 1;
      *(_DWORD *)(a1 + 464) = v24;
      if ( v24 == 1 )
      {
        v25 = *(void **)(a1 + 336);
        DueTime.QuadPart = -1000000LL;
        ZwSetTimer(v25, &DueTime, 0LL, 0LL, 0, 0, 0LL);
      }
      return v5;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v11,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_22;
    Pool2 += 16LL;
LABEL_9:
    if ( !Pool2 )
      return v5;
    goto LABEL_10;
  }
  return v5;
}
