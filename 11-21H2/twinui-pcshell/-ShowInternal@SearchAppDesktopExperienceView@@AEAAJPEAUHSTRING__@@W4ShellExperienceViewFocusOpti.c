/*
 * XREFs of ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18039E42C
 * Callers:
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039E000 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x18039E530 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x1803978A0 (--$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x180397900 (--$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z.c)
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18039AB84 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039D824 (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShowInternal(
        __int64 a1,
        enum _TABLETMODESTATE *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int SearchboxTaskbarMode; // [rsp+30h] [rbp+8h] BYREF

  SearchboxTaskbarMode = GetSearchboxTaskbarMode((TabletModeHelpers *)a1, a2);
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTaskbarState<unsigned long>(&SearchboxTaskbarMode);
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTabletMode<bool &>((char *)(a1 + 210));
  v8 = *(_QWORD *)(a1 + 152);
  LOBYTE(SearchboxTaskbarMode) = 0;
  if ( v8 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 72LL))(v8, &SearchboxTaskbarMode) >= 0 )
    {
      if ( (_BYTE)SearchboxTaskbarMode )
      {
        v9 = SearchAppDesktopExperienceView::Relaunch((SearchAppDesktopExperienceView *)a1, (__int64)a2, a4);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x56E,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v9);
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, enum _TABLETMODESTATE *, _QWORD))(**(_QWORD **)(a1 + 152) + 88LL))(
          *(_QWORD *)(a1 + 152),
          a2,
          a3);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x571,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
