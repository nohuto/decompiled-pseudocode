/*
 * XREFs of ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180090860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_2071baf0e29165fd8b2c358088e93883_@@QEBAJXZ @ 0x1800870FC (--R_lambda_2071baf0e29165fd8b2c358088e93883_@@QEBAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008FA34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::StartProductInstallWithOverrides(
        ContentManagement::AppManager *this,
        HSTRING a2,
        char a3,
        __int64 a4,
        HSTRING a5,
        HSTRING a6,
        HSTRING a7,
        HSTRING a8)
{
  __int64 v9; // r9
  wil::details_abi *v10; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v12; // rdi
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  int v17[2]; // [rsp+28h] [rbp-59h] BYREF
  int v18; // [rsp+30h] [rbp-51h]
  int v19; // [rsp+34h] [rbp-4Dh]
  unsigned int v20[2]; // [rsp+38h] [rbp-49h] BYREF
  const char *v21; // [rsp+40h] [rbp-41h]
  __int64 v22; // [rsp+48h] [rbp-39h]
  __int16 v23; // [rsp+50h] [rbp-31h]
  _QWORD v24[12]; // [rsp+58h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+3Fh]
  HSTRING v26; // [rsp+D0h] [rbp+4Fh] BYREF
  char v27; // [rsp+D8h] [rbp+57h] BYREF
  char v28; // [rsp+E0h] [rbp+5Fh] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v24[0] = (char *)this - 48;
  v24[1] = &v26;
  v24[2] = &a6;
  v24[3] = &a7;
  v24[4] = &a5;
  v24[5] = &v27;
  v24[6] = &v28;
  v24[7] = &a8;
  *(_QWORD *)v20 = retaddr;
  v21 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v22 = 0LL;
  v23 = 319;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    1u,
    v9);
  LOBYTE(v10) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v10);
  v12 = ThreadLocalDataCache;
  *(_QWORD *)v17 = ThreadLocalDataCache;
  v18 = 0;
  v13 = 0;
  v19 = 0;
  if ( ThreadLocalDataCache )
  {
    v19 = *((_DWORD *)ThreadLocalDataCache + 4);
    v18 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v18;
    v13 = v19;
    v12 = *(struct wil::details_abi::ThreadLocalData **)v17;
  }
  v14 = _lambda_2071baf0e29165fd8b2c358088e93883_::operator()((__int64)v24);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v14,
      (__int64)v17,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v20);
  if ( v12 )
    *((_DWORD *)v12 + 4) = v13;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
