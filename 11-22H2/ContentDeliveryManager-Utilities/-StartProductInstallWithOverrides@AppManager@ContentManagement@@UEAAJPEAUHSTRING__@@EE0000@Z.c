/*
 * XREFs of ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180084460
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18002B3B8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003E2A0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEAA@QEAVAppManager@ContentManagement@@AEAPEAUHSTRING__@@111AEAE21@Z @ 0x18007D0FC (--0_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEAA@QEAVAppManager@ContentManagement@@AEAPEAUHSTR.c)
 *     ??R_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEBA@XZ @ 0x18007E440 (--R_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEBA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180083B94 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::StartProductInstallWithOverrides(
        ContentManagement::AppManager *this,
        HSTRING a2,
        unsigned __int8 a3,
        __int64 a4,
        HSTRING a5,
        HSTRING a6,
        HSTRING a7,
        HSTRING a8)
{
  _lambda_5e28e056b5a6ba1a3048485051bc0472_ *v9; // rbx
  __int64 v10; // r9
  bool v11; // dl
  int v12; // eax
  int v13; // ebx
  int v15[2]; // [rsp+58h] [rbp-49h] BYREF
  int v16; // [rsp+64h] [rbp-3Dh]
  unsigned int v17[2]; // [rsp+68h] [rbp-39h] BYREF
  const char *v18; // [rsp+70h] [rbp-31h]
  __int64 v19; // [rsp+78h] [rbp-29h]
  __int16 v20; // [rsp+80h] [rbp-21h]
  _BYTE v21[80]; // [rsp+88h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+3Fh]
  HSTRING v23; // [rsp+F0h] [rbp+4Fh] BYREF
  unsigned __int8 v24; // [rsp+F8h] [rbp+57h] BYREF
  unsigned __int8 v25; // [rsp+100h] [rbp+5Fh] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v9 = _lambda_5e28e056b5a6ba1a3048485051bc0472_::_lambda_5e28e056b5a6ba1a3048485051bc0472_(
         (_lambda_5e28e056b5a6ba1a3048485051bc0472_ *)v21,
         (ContentManagement::AppManager *)((char *)this - 48),
         &v23,
         &a6,
         &a7,
         &a5,
         &v24,
         &v25,
         &a8);
  *(_QWORD *)v17 = retaddr;
  v18 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v19 = 0LL;
  v20 = 340;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    1u,
    v10);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v15, v11);
  v12 = _lambda_5e28e056b5a6ba1a3048485051bc0472_::operator()((__int64)v9);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v12,
      (__int64)v15,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (__int64)v17);
  if ( *(_QWORD *)v15 )
    *(_DWORD *)(*(_QWORD *)v15 + 16LL) = v16;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x154,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
