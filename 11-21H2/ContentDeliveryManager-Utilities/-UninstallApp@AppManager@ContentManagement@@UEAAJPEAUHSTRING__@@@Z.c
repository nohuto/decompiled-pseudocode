/*
 * XREFs of ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800909B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034BB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_016b4fe22cbcaf8067ffbb75c59aa712_@@QEBAJXZ @ 0x180086650 (--R_lambda_016b4fe22cbcaf8067ffbb75c59aa712_@@QEBAJXZ.c)
 */

__int64 __fastcall ContentManagement::AppManager::UninstallApp(ContentManagement::AppManager *this, HSTRING a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v6; // rbx
  int v7; // esi
  int v8; // eax
  int v9; // edi
  HSTRING *v11; // [rsp+40h] [rbp-29h] BYREF
  signed __int32 v12; // [rsp+48h] [rbp-21h] BYREF
  signed __int32 v13; // [rsp+50h] [rbp-19h] BYREF
  int v14[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v15; // [rsp+60h] [rbp-9h]
  unsigned int v16[2]; // [rsp+68h] [rbp-1h] BYREF
  const char *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  __int16 v19; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  HSTRING v21; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF
  struct DiagnosticsInfo v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v21 = a2;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                      &v12);
  LODWORD(v22) = 0;
  BYTE4(v22) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AED68,
    0x79780Du,
    (v2 >> 8) & 1,
    (v2 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v22,
    1,
    3);
  v11 = &v21;
  *(_QWORD *)v16 = retaddr;
  v17 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v18 = 0LL;
  v19 = 268;
  v3 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v22 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                       &v13);
    v3 = v22;
  }
  v23.cost = 0;
  LOBYTE(v23.flags) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AED68,
    0x79780Du,
    (v3 >> 8) & 1,
    (v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v23,
    1,
    3);
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v6 = ThreadLocalDataCache;
  *(_QWORD *)v14 = ThreadLocalDataCache;
  v15 = 0LL;
  v7 = 0;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v15) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v15) = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v15;
    v7 = HIDWORD(v15);
    v6 = *(struct wil::details_abi::ThreadLocalData **)v14;
  }
  v8 = _lambda_016b4fe22cbcaf8067ffbb75c59aa712_::operator()(&v11);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v8,
      (__int64)v14,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v16);
  if ( v6 )
    *((_DWORD *)v6 + 4) = v7;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
