/*
 * XREFs of ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180084290
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18002B3B8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003E2A0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_8edc18712893764f2ff11833e5f94b18_@@QEAA@AEAPEAUHSTRING__@@0QEAVAppManager@ContentManagement@@AEAE200@Z @ 0x18007D0F0 (--0_lambda_8edc18712893764f2ff11833e5f94b18_@@QEAA@AEAPEAUHSTRING__@@0QEAVAppManager@ContentMana.c)
 *     ??R_lambda_8edc18712893764f2ff11833e5f94b18_@@QEBA@XZ @ 0x18007E764 (--R_lambda_8edc18712893764f2ff11833e5f94b18_@@QEBA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180083B44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::StartProductInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        __int64 a4,
        unsigned __int8 a5,
        HSTRING a6,
        HSTRING a7)
{
  _lambda_8edc18712893764f2ff11833e5f94b18_ *v8; // rbx
  __int64 v9; // r9
  bool v10; // dl
  int v11; // eax
  int v12; // ebx
  int v14[2]; // [rsp+48h] [rbp-41h] BYREF
  int v15; // [rsp+54h] [rbp-35h]
  unsigned int v16[2]; // [rsp+58h] [rbp-31h] BYREF
  const char *v17; // [rsp+60h] [rbp-29h]
  __int64 v18; // [rsp+68h] [rbp-21h]
  __int16 v19; // [rsp+70h] [rbp-19h]
  _BYTE v20[80]; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]
  HSTRING v22; // [rsp+E0h] [rbp+57h] BYREF
  HSTRING v23; // [rsp+E8h] [rbp+5Fh] BYREF
  struct DiagnosticsInfo v24; // [rsp+F0h] [rbp+67h] BYREF

  LOBYTE(v24.cost) = a4;
  v23 = a3;
  v22 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v8 = _lambda_8edc18712893764f2ff11833e5f94b18_::_lambda_8edc18712893764f2ff11833e5f94b18_(
         (_lambda_8edc18712893764f2ff11833e5f94b18_ *)v20,
         &v22,
         &v23,
         (ContentManagement::AppManager *)((char *)this - 48),
         (unsigned __int8 *)&v24,
         &a5,
         &a6,
         &a7);
  *(_QWORD *)v16 = retaddr;
  v17 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v18 = 0LL;
  v19 = 357;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    1u,
    v9);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v14, v10);
  v11 = _lambda_8edc18712893764f2ff11833e5f94b18_::operator()((__int64)v8);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v11,
      (__int64)v14,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (__int64)v16);
  if ( *(_QWORD *)v14 )
    *(_DWORD *)(*(_QWORD *)v14 + 16LL) = v15;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x165,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
