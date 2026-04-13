/*
 * XREFs of ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC4C4
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A61C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034BB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800EB520 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r14
  unsigned int v4; // r8d
  wil::details_abi *v5; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v7; // rbx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v12; // [rsp+28h] [rbp-C9h]
  int v13; // [rsp+48h] [rbp-A9h] BYREF
  struct DiagnosticsInfo v14; // [rsp+50h] [rbp-A1h] BYREF
  int v15[2]; // [rsp+58h] [rbp-99h] BYREF
  __int64 v16; // [rsp+60h] [rbp-91h]
  __int64 v17; // [rsp+68h] [rbp-89h]
  _QWORD v18[3]; // [rsp+70h] [rbp-81h] BYREF
  __int16 v19; // [rsp+88h] [rbp-69h]
  _QWORD v20[10]; // [rsp+90h] [rbp-61h] BYREF
  signed __int32 v21; // [rsp+E0h] [rbp-11h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+3Fh]
  __int64 v24; // [rsp+138h] [rbp+47h] BYREF
  __int64 v25; // [rsp+140h] [rbp+4Fh] BYREF
  __int64 v26; // [rsp+150h] [rbp+5Fh] BYREF
  va_list va; // [rsp+150h] [rbp+5Fh]
  __int64 v28; // [rsp+158h] [rbp+67h] BYREF
  va_list va1; // [rsp+158h] [rbp+67h]
  __int64 v30; // [rsp+160h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+160h] [rbp+6Fh]
  __int64 v32; // [rsp+168h] [rbp+77h] BYREF
  va_list va3; // [rsp+168h] [rbp+77h]
  __int64 v34; // [rsp+170h] [rbp+7Fh]
  va_list va4; // [rsp+178h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v32 = va_arg(va4, _QWORD);
  v34 = va_arg(va4, _QWORD);
  v25 = a2;
  v24 = a1;
  v22 = a3;
  v3 = v34;
  v20[9] = v34;
  LOBYTE(v13) = 0;
  v20[0] = &v22;
  va_copy((va_list)&v20[1], va1);
  va_copy((va_list)&v20[2], va);
  va_copy((va_list)&v20[3], va3);
  v20[4] = &v24;
  v20[5] = &v25;
  va_copy((va_list)&v20[6], va2);
  v20[7] = &v13;
  v20[8] = v34;
  v18[0] = retaddr;
  v18[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp";
  v18[2] = 0LL;
  v19 = 228;
  v4 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v17 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                       &v21);
    v4 = v17;
  }
  v14.cost = 0;
  LOBYTE(v14.flags) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AED68,
    0x79780Du,
    (v4 >> 8) & 1,
    (v4 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v14,
    1,
    3);
  LOBYTE(v5) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v5);
  v7 = ThreadLocalDataCache;
  *(_QWORD *)v15 = ThreadLocalDataCache;
  v16 = 0LL;
  v8 = 0;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v16) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v16) = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v16;
    v8 = HIDWORD(v16);
    v7 = *(struct wil::details_abi::ThreadLocalData **)v15;
  }
  v9 = lambda_633962cfafa552d6328dcc010e2c57bd_::operator()((__int64)v20);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (__int64)v15,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v18);
  if ( v7 )
    *((_DWORD *)v7 + 4) = v8;
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      228LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10,
      v12);
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v3);
}
