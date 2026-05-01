/*
 * XREFs of ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8
 * Callers:
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180026874 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180060064 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180071870 (-GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplic.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076DB0 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180076E48 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805B3CB4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1805B4F08 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800263C0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     IsPeoplePane @ 0x180026588 (IsPeoplePane.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D7B0 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CreateTitlebarConfiguration(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewTitlebarConfiguration **a3)
{
  CDesktopPositioner *v5; // rbx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  const struct _GUID *v10; // rdx
  int v11; // ebx
  __int64 v13; // rdx
  int CanCastTo; // eax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CDesktopPositioner *v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = this;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v17);
  v5 = v17;
  if ( !v17 )
  {
    v11 = -2147024882;
    v13 = 2461LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v11,
      v15);
    goto LABEL_11;
  }
  if ( !a2 || (v6 = (unsigned __int8)IsPeoplePane(a2) == 0, v7 = 4, v6) )
    v7 = 23;
  *((_WORD *)v5 + 24) = 257;
  *((_DWORD *)v5 + 15) = 55;
  *((_DWORD *)v5 + 16) = v7;
  *(_QWORD *)((char *)v5 + 68) = 255LL;
  *((_DWORD *)v5 + 13) = 1;
  *((_DWORD *)v5 + 14) = 0;
  *((_DWORD *)v5 + 19) = 1;
  *((_DWORD *)v5 + 20) = 255;
  *((_BYTE *)v5 + 84) = 1;
  *((_DWORD *)v5 + 22) = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6,
                       &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = v5;
    (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v5 + 8LL))(v5);
    v11 = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v8, v9) )
    {
      *a3 = v5;
      v11 = 0;
LABEL_8:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_9;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((CDesktopPositioner *)((char *)v5 + 8), v10, (void **)a3);
    v11 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v11 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_8;
    }
  }
LABEL_9:
  if ( v11 < 0 )
  {
    v13 = 2473LL;
    goto LABEL_18;
  }
  v11 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v17);
  return (unsigned int)v11;
}
