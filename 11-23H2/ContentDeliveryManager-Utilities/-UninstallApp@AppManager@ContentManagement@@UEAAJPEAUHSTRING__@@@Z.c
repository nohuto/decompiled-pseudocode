/*
 * XREFs of ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180084710
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18002B3B8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003E2A0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E8B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_@@QEAA@AEAPEAUHSTRING__@@@Z @ 0x18007D09C (--0_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_@@QEAA@AEAPEAUHSTRING__@@@Z.c)
 *     ??R_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_@@QEBA@XZ @ 0x18007E038 (--R_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::UninstallApp(
        ContentManagement::AppManager *this,
        HSTRING a2,
        __int64 a3,
        __int64 a4)
{
  _lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_ *v4; // rbx
  bool v5; // dl
  int v6; // eax
  int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+2Ch] [rbp-24h]
  unsigned int v11[2]; // [rsp+30h] [rbp-20h] BYREF
  const char *v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int16 v14; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING v16; // [rsp+78h] [rbp+28h] BYREF
  char v17; // [rsp+80h] [rbp+30h] BYREF

  v16 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v4 = _lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_::_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_(
         (_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_ *)&v17,
         &v16);
  *(_QWORD *)v11 = retaddr;
  v12 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v13 = 0LL;
  v14 = 289;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u,
    (__int64)retaddr);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v9, v5);
  v6 = _lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_::operator()((_QWORD **)v4);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v6,
      (__int64)v9,
      (struct wil::ThreadErrorContext *)0x79780D,
      (__int64)v11);
  if ( *(_QWORD *)v9 )
    *(_DWORD *)(*(_QWORD *)v9 + 16LL) = v10;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x121,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
