/*
 * XREFs of ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18003ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_3c4a812b730aa0141528bba5f0864bb5_@@QEBAJXZ @ 0x180029AB8 (--R_lambda_3c4a812b730aa0141528bba5f0864bb5_@@QEBAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034BB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::LaunchDefaultEntryPointForPackage(
        ContentManagement::LaunchManager *this,
        HSTRING a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v6; // rbx
  int v7; // esi
  int v8; // eax
  int v9; // edi
  struct DiagnosticsInfo *v11; // [rsp+20h] [rbp-49h]
  HSTRING *v12; // [rsp+40h] [rbp-29h] BYREF
  signed __int32 v13; // [rsp+48h] [rbp-21h] BYREF
  signed __int32 v14; // [rsp+50h] [rbp-19h] BYREF
  int v15[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v16; // [rsp+60h] [rbp-9h]
  unsigned int v17[2]; // [rsp+68h] [rbp-1h] BYREF
  const char *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int16 v20; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  HSTRING v22; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  DiagnosticsInfo v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = a2;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                      &v13);
  LODWORD(v23) = 0;
  BYTE4(v23) = 3;
  wil::details::ReportUsageToService(&unk_1801AED68, 7960589LL, (v2 >> 8) & 1, (v2 >> 9) & 1, &v23, 1, 3);
  v12 = &v22;
  *(_QWORD *)v17 = retaddr;
  v18 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v19 = 0LL;
  v20 = 390;
  v3 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v23 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                       &v14);
    v3 = v23;
  }
  v24.cost = 0;
  LOBYTE(v24.flags) = 3;
  wil::details::ReportUsageToService(&unk_1801AED68, 7960589LL, (v3 >> 8) & 1, (v3 >> 9) & 1, &v24, 1, 3);
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v6 = ThreadLocalDataCache;
  *(_QWORD *)v15 = ThreadLocalDataCache;
  v16 = 0LL;
  v7 = 0;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v16) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v16) = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v16;
    v7 = HIDWORD(v16);
    v6 = *(struct wil::details_abi::ThreadLocalData **)v15;
  }
  v8 = _lambda_3c4a812b730aa0141528bba5f0864bb5_::operator()(&v12);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v8,
      (int)v15,
      (struct wil::ThreadErrorContext *)0x79780D,
      (unsigned int)v17,
      v11);
  if ( v6 )
    *((_DWORD *)v6 + 4) = v7;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x186,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v9,
    (int)v11);
  return (unsigned int)v9;
}
