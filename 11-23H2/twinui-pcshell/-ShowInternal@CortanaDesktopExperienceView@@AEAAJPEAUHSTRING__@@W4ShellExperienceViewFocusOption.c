/*
 * XREFs of ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180487F4C
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180487AC0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180488050 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x180476310 (--$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x180476370 (--$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z.c)
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180479484 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180486F3C (-Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experienc.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowInternal(
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
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTabletMode<bool &>((char *)(a1 + 245));
  v8 = *(_QWORD *)(a1 + 168);
  LOBYTE(SearchboxTaskbarMode) = 0;
  if ( v8 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 72LL))(v8, &SearchboxTaskbarMode) >= 0 )
    {
      if ( (_BYTE)SearchboxTaskbarMode )
      {
        v9 = CortanaDesktopExperienceView::Relaunch((CortanaDesktopExperienceView *)a1, (__int64)a2, a4);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7D4,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v9);
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, enum _TABLETMODESTATE *, _QWORD))(**(_QWORD **)(a1 + 168) + 88LL))(
          *(_QWORD *)(a1 + 168),
          a2,
          a3);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7D7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
