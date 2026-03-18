/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C0192AA4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimHidP_GetUsageValue @ 0x1C00E63A2 (rimHidP_GetUsageValue.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C018EB50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWrit.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C018EC2C (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMGetFeatureReport @ 0x1C0192934 (RIMGetFeatureReport.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        struct _HIDP_PREPARSED_DATA *a4,
        _WORD *a5,
        const WCHAR *a6,
        struct _FILE_OBJECT *a7)
{
  int SpecificValueCaps; // ebx
  PVOID v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 Pool2; // rdi
  int v14; // edx
  int v15; // r8d
  unsigned int v16; // eax
  unsigned int i; // esi
  char v18; // bl
  int v19; // edx
  int v20; // r8d
  char v21; // si
  int v22; // edx
  NTSTATUS v23; // ebx
  int v24; // r8d
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  union _LARGE_INTEGER v28; // rax
  __int64 v29; // rsi
  unsigned int *v30; // rsi
  int v31; // edx
  int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // r14
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v37; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  struct RIMDEV *v39; // [rsp+60h] [rbp-A0h] BYREF
  struct _DEVICE_OBJECT *v40; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp-90h] BYREF
  __int64 QuadPart; // [rsp+78h] [rbp-88h] BYREF
  struct _HIDP_PREPARSED_DATA *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h]
  PVOID BackTrace[20]; // [rsp+A0h] [rbp-60h] BYREF
  struct _HIDP_VALUE_CAPS v48; // [rsp+140h] [rbp+40h] BYREF

  v46 = a2;
  v38 = a3;
  v39 = a1;
  v43 = a4;
  v40 = (struct _DEVICE_OBJECT *)a6;
  memset(&v48, 0, sizeof(v48));
  v37 = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &v48, &v37, a4);
  if ( SpecificValueCaps < 0 )
    return (unsigned int)SpecificValueCaps;
  v10 = gpLeakTrackingAllocator;
  v11 = (unsigned __int16)a5[4];
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69667352) != 0x69667352
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(68LL, v11);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1768321874 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  v21 = 0;
  if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
  {
    v21 = 1;
    v11 += 16LL;
  }
  Pool2 = ExAllocatePool2(68LL, v11);
  if ( !Pool2 )
    goto LABEL_19;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v10,
           (const void *)Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_7;
    }
    goto LABEL_26;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v10,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_26:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_19:
    Pool2 = 0LL;
  }
LABEL_7:
  memset((void *)Pool2, 0, (unsigned __int16)a5[4]);
  if ( Pool2 )
  {
    v16 = 1;
    if ( *(_DWORD *)(a3 + 24) == 7 )
      v16 = 10;
    v36 = v16;
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    for ( i = 0; i < v36; ++i )
    {
      v18 = (char)v39;
      InputTraceLogging::RIM::GetMaxCount(v39);
      LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          (_DWORD)gRimLog,
          4,
          1,
          31,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
          v18);
      }
      v23 = RIMGetFeatureReport((PLARGE_INTEGER)Pool2, a5[4], v48.ReportID, v40, a7);
      if ( !v23 )
        break;
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v24,
          (_DWORD)gRimLog,
          3,
          1,
          32,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
          v23);
      }
      if ( i < v36 - 1 )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(1, 0, &Interval);
      }
    }
    KeQueryPerformanceCounter(0LL);
    if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
    {
      v27 = v25 - QuadPart;
      v28.QuadPart = i + 1;
      v29 = v38;
      Interval = v28;
      LODWORD(v39) = v23;
      v40 = *(struct _DEVICE_OBJECT **)(v38 + 376);
      v44 = *(int *)(v38 + 952);
      v45 = *(int *)(v38 + 24);
      QuadPart = (unsigned int)(1000 * v27 / gliQpcFreq.QuadPart);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        QuadPart,
        byte_1C025D757,
        v27,
        v26,
        (__int64)&v45,
        (__int64)&v44,
        (const WCHAR **)&v40,
        (__int64)&QuadPart,
        (__int64)&Interval,
        (__int64)&v39);
    }
    else
    {
      v29 = v38;
    }
    if ( v23 )
    {
      SpecificValueCaps = -1073741668;
LABEL_77:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
      return (unsigned int)SpecificValueCaps;
    }
    v30 = (unsigned int *)(v29 + 768);
    SpecificValueCaps = rimHidP_GetUsageValue(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x55u,
                          v30,
                          v43,
                          (char *)Pool2,
                          (unsigned __int16)a5[4]);
    if ( SpecificValueCaps < 0 || (v33 = *v30) == 0 )
    {
      LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v32,
          (_DWORD)gRimLog,
          3,
          1,
          33,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
          SpecificValueCaps);
      }
      goto LABEL_67;
    }
    if ( v33 > 0x100 )
    {
LABEL_67:
      SpecificValueCaps = -1073741668;
      goto LABEL_76;
    }
    if ( *a5 == 5 )
    {
      *v30 = v33 + 1;
    }
    else if ( *(_DWORD *)(v46 + 756) + v33 > 0xA00 )
    {
      goto LABEL_67;
    }
    if ( *a5 == 5 )
    {
      v34 = v38;
      v36 = 0;
      *(_DWORD *)(v38 + 952) = 3;
      SpecificValueCaps = rimHidP_GetUsageValue(
                            HidP_Feature,
                            0xDu,
                            0,
                            0x59u,
                            &v36,
                            v43,
                            (char *)Pool2,
                            (unsigned __int16)a5[4]);
      if ( SpecificValueCaps >= 0 )
        *(_DWORD *)(v34 + 952) = ((v36 & 1) != 0) + 1;
    }
  }
  else
  {
    SpecificValueCaps = -1073741668;
    LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SpecificValueCaps;
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      (_DWORD)gRimLog,
      3,
      1,
      34,
      (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
  }
LABEL_76:
  if ( Pool2 )
    goto LABEL_77;
  return (unsigned int)SpecificValueCaps;
}
