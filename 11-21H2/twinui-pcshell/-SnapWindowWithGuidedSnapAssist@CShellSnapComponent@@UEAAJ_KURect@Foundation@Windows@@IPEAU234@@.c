/*
 * XREFs of ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x180596100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry@@SAXAEA_KAEAURect@Foundation@Windows@@AEAI@Z @ 0x180590BA0 (--$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry.c)
 */

__int64 __fastcall CShellSnapComponent::SnapWindowWithGuidedSnapAssist(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // r14d
  unsigned int v7; // edi
  int v9; // ebx
  __int64 v10; // rdx
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm1_4
  int v16; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = a2;
  v17 = a2;
  v16 = a4;
  v7 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  CSnapComponentTelemetry::SnapWindowWithGuidedSnapAssist<unsigned __int64 &,Windows::Foundation::Rect &,unsigned int &>(
    &v17,
    (struct Windows::Foundation::Rect *)a3,
    &v16);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 456) + 48LL))(
         *(_QWORD *)(a1 + 456),
         v7,
         a5);
  if ( v9 < 0 )
  {
    v10 = 923LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = *(float *)(a3 + 4);
  v13 = *(float *)a3 + *(float *)(a3 + 8);
  v18[0] = (int)*(float *)a3;
  v14 = (int)v12;
  v15 = v12 + *(float *)(a3 + 12);
  v18[1] = v14;
  v18[2] = (int)v13;
  v18[3] = (int)v15;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, v5, v18, 0LL);
  if ( v9 < 0 )
  {
    v10 = 926LL;
    goto LABEL_3;
  }
  return 0LL;
}
