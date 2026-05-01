/*
 * XREFs of ?TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x180617698
 * Callers:
 *     ?AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z @ 0x180162A28 (-AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118258 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::TriggerCampaign(CVirtualDesktopSoftLandingHandler *this)
{
  int *v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r9
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 1;
  v2 = &v6;
  LOBYTE(v2) = 1;
  (*(void (__fastcall **)(_QWORD, int *, _QWORD, const wchar_t *, int, int *, __int64))(**((_QWORD **)this + 4) + 32LL))(
    *((_QWORD *)this + 4),
    v2,
    0LL,
    L"VDSoftLandingCampaignDone",
    4,
    &v6,
    4LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    1u,
    0,
    v3);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    1u,
    1u,
    v4);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  return 0LL;
}
