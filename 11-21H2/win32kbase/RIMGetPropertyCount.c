/*
 * XREFs of RIMGetPropertyCount @ 0x1C0193C60
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C0195468 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _HIDP_PREPARSED_DATA *a4)
{
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int16 v12; // r13
  int SpecificValueCaps; // edi
  __int64 v14; // rax
  unsigned __int16 v15; // si
  unsigned __int16 v16; // cx
  int v17; // edx
  int v18; // r8d
  PVOID v19; // r14
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 Pool2; // rbx
  struct _HIDP_PREPARSED_DATA *v23; // r12
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  _BYTE *v28; // rax
  __int64 v30; // rax
  char v31; // r12
  unsigned __int16 v32; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v35; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int16 v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+5Ch] [rbp-A4h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  struct _HIDP_PREPARSED_DATA *v39; // [rsp+68h] [rbp-98h]
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v41; // [rsp+110h] [rbp+10h] BYREF

  v36 = a2;
  v38 = a1;
  v39 = a4;
  v33 = a3;
  v32 = a3;
  v8 = 0;
  memset(&v41, 0, sizeof(v41));
  v35 = 1;
  v12 = a2;
  v34[0] = 0;
  SpecificValueCaps = -1073741668;
  v37 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v14 = *(_QWORD *)(a1 + 760);
  v15 = a3;
  if ( v14 )
  {
    v16 = *(_WORD *)(v14 + 8);
    if ( v16 )
    {
      v12 = *(_WORD *)(v14 + 8);
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v16, 0, 0LL, v34, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v30 = *(_QWORD *)(a1 + 760);
        v15 = v34[0] + v33;
        v32 = v34[0];
        v37 = 1;
        *(_WORD *)(v30 + 10) = v34[0];
      }
      else
      {
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v18,
            (_DWORD)gRimLog,
            3,
            1,
            30,
            (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
        }
      }
    }
  }
  if ( v15 > 1u )
  {
    v19 = gpLeakTrackingAllocator;
    v20 = 72LL * v15;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63707352) != 0x63707352
      || (v21 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_19:
      Pool2 = ExAllocatePool2(260LL, v20);
      goto LABEL_20;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v21) != 1668313938 )
    {
      if ( ++v21 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_19;
    }
    v31 = 0;
    if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
    {
      v31 = 1;
      v20 += 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v20);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v31 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v19,
               (const void *)Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
LABEL_20:
          if ( !Pool2 )
            return SpecificValueCaps >= 0;
          goto LABEL_21;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v19,
                  Pool2,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_21:
        v23 = v39;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v12, 0x30u, &v41, &v35, v39);
        if ( SpecificValueCaps >= 0 )
        {
          v24 = v38;
          *(_BYTE *)(v38 + 824) = v41.ReportID;
          SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                HidP_Input,
                                0,
                                v12,
                                0,
                                (struct _HIDP_VALUE_CAPS *)Pool2,
                                &v32,
                                v23);
          if ( SpecificValueCaps >= 0 )
          {
            v27 = v32;
            if ( v32 )
            {
              LOBYTE(v26) = v41.ReportID;
              v28 = (_BYTE *)(Pool2 + 2);
              v25 = v32;
              do
              {
                if ( *v28 == v41.ReportID )
                  ++v8;
                v28 += 72;
                --v25;
              }
              while ( v25 );
            }
            if ( v37 )
            {
              SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                    HidP_Input,
                                    0,
                                    v36,
                                    0,
                                    (struct _HIDP_VALUE_CAPS *)(Pool2 + 72LL * v32),
                                    &v33,
                                    v23);
              if ( SpecificValueCaps >= 0 )
              {
                v26 = v33;
                v25 = v32;
                if ( v33 )
                {
                  do
                  {
                    if ( (unsigned __int16)v25 >= v15 )
                      break;
                    v27 = 9LL * (unsigned __int16)v25;
                    if ( *(_BYTE *)(Pool2 + 72LL * (unsigned __int16)v25 + 2) == v41.ReportID )
                      ++v8;
                    LOWORD(v25) = v25 + 1;
                  }
                  while ( (unsigned __int16)(v25 - v32) < v33 );
                  v24 = v38;
                }
              }
            }
            if ( v8 <= 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v25, v26);
            *(_DWORD *)(v24 + 384) = v8;
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)Pool2);
        return SpecificValueCaps >= 0;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
  return SpecificValueCaps >= 0;
}
