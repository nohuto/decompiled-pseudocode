/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C01890E0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0187070 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     rimHidP_GetUsageValue @ 0x1C00E0DCA (rimHidP_GetUsageValue.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01852B0 (rimHidP_GetSpecificValueCaps.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0185678 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWrit.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0185754 (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMGetFeatureReport @ 0x1C0188F70 (RIMGetFeatureReport.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  unsigned int v9; // r13d
  int v10; // edx
  int SpecificValueCaps; // edi
  int v12; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v13; // rdi
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 Pool2; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r10
  char v19; // si
  unsigned int i; // esi
  char v21; // di
  int v22; // edx
  int v23; // r8d
  NTSTATUS v24; // edi
  char v25; // dl
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  struct _DEVICE_OBJECT *v29; // rax
  __int64 v30; // rsi
  _WORD *v31; // r13
  unsigned int *v32; // rsi
  unsigned int v33; // ecx
  __int64 v34; // r14
  char v35; // dl
  __int64 v37; // [rsp+40h] [rbp-C0h]
  __int16 v38; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  struct RIMDEV *v43; // [rsp+78h] [rbp-88h] BYREF
  struct _DEVICE_OBJECT *v44; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *QuadPart; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  _QWORD v49[2]; // [rsp+B0h] [rbp-50h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-30h]
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-20h] BYREF
  char v54[80]; // [rsp+180h] [rbp+80h] BYREF

  v52 = a2;
  v42 = a3;
  v43 = a1;
  v48 = a4;
  v47 = a5;
  v44 = a6;
  memset(v54, 0, 0x48uLL);
  v9 = 1;
  v38 = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2LL, 13LL, 0LL, 85LL, (__int64)v54, (__int64)&v38, a4);
  if ( SpecificValueCaps < 0 )
    return (unsigned int)SpecificValueCaps;
  v13 = gpLeakTrackingAllocator;
  v14 = *(unsigned __int16 *)(a5 + 8);
  v39 = 1768321874;
  v46 = 68LL;
  v15 = *(_DWORD *)gpLeakTrackingAllocator;
  v40 = v14;
  if ( !v15 )
  {
    Pool2 = ExAllocatePool2(68LL, (unsigned int)v14, 1768321874LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v13 + 14, 1uLL);
    goto LABEL_22;
  }
  if ( v15 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69667352u)
      && v14 + 16 >= v14 )
    {
      v17 = (_QWORD *)ExAllocatePool2(v46 & 0xFFFFFFFFFFFFFFFDuLL, v14 + 16, v39);
      Pool2 = (__int64)v17;
      if ( !v17
        || (_InterlockedAdd64((volatile signed __int64 *)v13 + 14, 1uLL),
            *v17 = 1768321874LL,
            Pool2 = (__int64)(v17 + 2),
            v17 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v13 + 1),
          0x69667352uLL);
      }
LABEL_22:
      if ( Pool2 )
        goto LABEL_25;
LABEL_75:
      SpecificValueCaps = -1073741668;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v12,
          (_DWORD)gRimLog,
          3,
          1,
          34,
          (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
      }
      goto LABEL_83;
    }
LABEL_74:
    Pool2 = 0LL;
    goto LABEL_75;
  }
  if ( v15 != 2 )
    goto LABEL_74;
  v41 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1768321874, &v41) )
  {
    v49[0] = &v46;
    v49[1] = &v39;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v13,
              (__int64)v49,
              &v40);
    goto LABEL_22;
  }
  v19 = 0;
  if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
  {
    v14 += 16LL;
    v19 = 1;
    v40 = v14;
  }
  Pool2 = ExAllocatePool2(v18, v14, 1768321874LL);
  if ( !Pool2 )
    goto LABEL_74;
  _InterlockedAdd64((volatile signed __int64 *)v13 + 16, 1uLL);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v13,
           (const void *)Pool2,
           v41,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_22;
    }
    goto LABEL_73;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v13,
          Pool2,
          v41,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_73:
    _InterlockedAdd64((volatile signed __int64 *)v13 + 17, 1uLL);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_74;
  }
LABEL_25:
  if ( *(_DWORD *)(a3 + 24) == 7 )
    v9 = 10;
  QuadPart = (const WCHAR *)KeQueryPerformanceCounter(0LL).QuadPart;
  for ( i = 0; i < v9; ++i )
  {
    v21 = (char)v43;
    InputTraceLogging::RIM::GetMaxCount(v43);
    LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v23,
        (_DWORD)gRimLog,
        4,
        1,
        31,
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids,
        v21);
    }
    v24 = RIMGetFeatureReport((PLARGE_INTEGER)Pool2, *(_WORD *)(v47 + 8), v54[2], v44, a7);
    if ( !v24 )
      break;
    v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v37) = v24;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v25,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x20u,
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids,
        v37);
    }
    if ( i < v9 - 1 )
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
    }
  }
  KeQueryPerformanceCounter(0LL);
  if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
  {
    v28 = v26 - (_QWORD)QuadPart;
    v29 = (struct _DEVICE_OBJECT *)(i + 1);
    v30 = v42;
    v44 = v29;
    LODWORD(v41) = v24;
    QuadPart = *(const WCHAR **)(v42 + 376);
    v51 = *(int *)(v42 + 952);
    v49[0] = *(int *)(v42 + 24);
    v43 = (struct RIMDEV *)(unsigned int)(1000 * v28 / gliQpcFreq.QuadPart);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v43,
      byte_1C0258574,
      v28,
      v27,
      (__int64)v49,
      (__int64)&v51,
      &QuadPart,
      (__int64)&v43,
      (__int64)&v44,
      (__int64)&v41);
  }
  else
  {
    v30 = v42;
  }
  if ( v24 )
  {
    SpecificValueCaps = -1073741668;
LABEL_84:
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
    return (unsigned int)SpecificValueCaps;
  }
  v31 = (_WORD *)v47;
  v32 = (unsigned int *)(v30 + 768);
  SpecificValueCaps = rimHidP_GetUsageValue(
                        2LL,
                        13LL,
                        0LL,
                        85LL,
                        (__int64)v32,
                        v48,
                        Pool2,
                        *(unsigned __int16 *)(v47 + 8));
  if ( SpecificValueCaps < 0 || (v33 = *v32) == 0 )
  {
    v35 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v37) = SpecificValueCaps;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v35,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x21u,
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids,
        v37);
    }
    goto LABEL_72;
  }
  if ( v33 > 0x100 )
  {
LABEL_72:
    SpecificValueCaps = -1073741668;
    goto LABEL_83;
  }
  if ( *v31 == 5 )
  {
    *v32 = v33 + 1;
  }
  else if ( *(_DWORD *)(v52 + 720) + v33 > 0xA00 )
  {
    goto LABEL_72;
  }
  if ( *v31 == 5 )
  {
    v34 = v42;
    LODWORD(v40) = 0;
    *(_DWORD *)(v42 + 952) = 3;
    SpecificValueCaps = rimHidP_GetUsageValue(2LL, 13LL, 0LL, 89LL, (__int64)&v40, v48, Pool2, (unsigned __int16)v31[4]);
    if ( SpecificValueCaps >= 0 )
      *(_DWORD *)(v34 + 952) = ((v40 & 1) != 0) + 1;
  }
LABEL_83:
  if ( Pool2 )
    goto LABEL_84;
  return (unsigned int)SpecificValueCaps;
}
