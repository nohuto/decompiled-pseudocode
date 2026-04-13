/*
 * XREFs of ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18003B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_decfc2b5d7d156b6ba938ed014370ad3_@@QEBAJXZ @ 0x18002E3C8 (--R_lambda_decfc2b5d7d156b6ba938ed014370ad3_@@QEBAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034BB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ContentManagement::LaunchManager::LaunchUriAsync(__int64 a1, ...)
{
  unsigned int v1; // r8d
  unsigned int v2; // r8d
  wil::details_abi *v3; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v5; // rbx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  struct DiagnosticsInfo *v10; // [rsp+28h] [rbp-69h]
  int v11; // [rsp+48h] [rbp-49h] BYREF
  char v12; // [rsp+4Ch] [rbp-45h]
  struct DiagnosticsInfo v13; // [rsp+50h] [rbp-41h] BYREF
  int v14[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v15; // [rsp+60h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-29h]
  _QWORD v17[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v18[2]; // [rsp+88h] [rbp-9h] BYREF
  const char *v19; // [rsp+90h] [rbp-1h]
  __int64 v20; // [rsp+98h] [rbp+7h]
  __int16 v21; // [rsp+A0h] [rbp+Fh]
  signed __int32 v22; // [rsp+A8h] [rbp+17h] BYREF
  signed __int32 v23[14]; // [rsp+B0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  __int64 v25; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va; // [rsp+100h] [rbp+6Fh]
  __int64 v27; // [rsp+108h] [rbp+77h] BYREF
  va_list va1; // [rsp+108h] [rbp+77h]
  _QWORD *v29; // [rsp+110h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+7Fh]
  va_list va3; // [rsp+118h] [rbp+87h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v25 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD *);
  *v29 = 0LL;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                       &v22);
    v1 = v16;
  }
  v11 = 0;
  v12 = 3;
  wil::details::ReportUsageToService(&unk_1801AED68, 7960589LL, (v1 >> 8) & 1, (v1 >> 9) & 1, &v11, 1, 3);
  va_copy((va_list)v17, va);
  va_copy((va_list)&v17[1], va1);
  va_copy((va_list)&v17[2], va2);
  *(_QWORD *)v18 = retaddr;
  v19 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v20 = 0LL;
  v21 = 331;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                       v23);
    v2 = v16;
  }
  v13.cost = 0;
  LOBYTE(v13.flags) = 3;
  wil::details::ReportUsageToService(&unk_1801AED68, 7960589LL, (v2 >> 8) & 1, (v2 >> 9) & 1, &v13, 1, 3);
  LOBYTE(v3) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v3);
  v5 = ThreadLocalDataCache;
  *(_QWORD *)v14 = ThreadLocalDataCache;
  v15 = 0LL;
  v6 = 0;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v15) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v15) = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v15;
    v6 = HIDWORD(v15);
    v5 = *(struct wil::details_abi::ThreadLocalData **)v14;
  }
  v7 = _lambda_decfc2b5d7d156b6ba938ed014370ad3_::operator()((__int64)v17);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v7,
      (int)v14,
      (struct wil::ThreadErrorContext *)0x79780D,
      (unsigned int)v18,
      v10);
  if ( v5 )
    *((_DWORD *)v5 + 4) = v6;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14B,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v8,
    (int)v10);
  return (unsigned int)v8;
}
