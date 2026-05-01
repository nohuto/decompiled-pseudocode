/*
 * XREFs of ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805BB244
 * Callers:
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805BAFE0 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805BC010 (-GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 * Callees:
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800263C0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D7B0 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BC504 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAAX_N.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1805BDEAC (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::CreateTitlebarConfiguration(
        struct IApplicationView *a1,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  unsigned int v3; // edi
  TitlebarOverlayHelpers *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  const struct _GUID *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  v3 = 0;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v13);
  v5 = (__int64)v13;
  if ( v13 )
  {
    if ( TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(v4) )
    {
      *(_WORD *)(v5 + 48) = 1;
      *(_DWORD *)(v5 + 52) = 1;
      *(_DWORD *)(v5 + 56) = 1;
    }
    else
    {
      *(_WORD *)(v5 + 48) = 257;
      *(_QWORD *)(v5 + 52) = 1LL;
    }
    *(_DWORD *)(v5 + 88) = 0;
    if ( IsPPIEdition() )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_AppCloseButton>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_Hub_AppCloseButton>::GetImpl'::`2'::impl,
        1u,
        v6,
        v7);
      *(_DWORD *)(v5 + 60) = 55;
      *(_DWORD *)(v5 + 64) = 20;
      *(_DWORD *)(v5 + 76) = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 60) = 55;
      *(_DWORD *)(v5 + 64) = 20;
      *(_DWORD *)(v5 + 76) = 64;
    }
    *(_QWORD *)(v5 + 68) = 255LL;
    *(_DWORD *)(v5 + 80) = 1;
    *(_BYTE *)(v5 + 84) = 1;
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = (struct IApplicationViewTitlebarConfiguration *)v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      goto LABEL_15;
    }
    if ( InlineIsEqualGUID(v8, v9) )
    {
      *a2 = (struct IApplicationViewTitlebarConfiguration *)v5;
    }
    else if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), v10, (void **)a2) < 0 )
    {
      goto LABEL_15;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    goto LABEL_15;
  }
  v3 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC81,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)0x8007000ELL);
LABEL_15:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v13);
  return v3;
}
