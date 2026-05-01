/*
 * XREFs of ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1804812BC
 * Callers:
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180480D94 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18048702C (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ApplyCortiniWindowRegion(
        CortanaDesktopExperienceView *this,
        HRGN a2,
        struct tagRECT *a3,
        HMONITOR a4)
{
  int v5; // esi
  int v6; // r14d
  int v7; // edi
  int v8; // ebp
  HMONITOR v9; // r8
  int v10; // ebx
  HMONITOR v11; // r8
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  LANGID ThreadUILanguage; // ax
  int v17; // ebx
  LANGID v18; // ax
  CortanaDesktopExperienceView *v19; // rcx
  int v20; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3->right - a3->left;
  v6 = a3->bottom - a3->top;
  v7 = (int)a4;
  v8 = ExperienceManagerUtils::ScaleByPerMonitorDPI(0LL, (int)a4, (HMONITOR)a3);
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, v7, v9);
  v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x87, v7, v11);
  v13 = CortanaDesktopExperienceView::RemoveRectFromRegion(
          (CortanaDesktopExperienceView *)(unsigned int)(v6 - v10 - v12),
          a2,
          0,
          0,
          v5,
          v6 - v10 - v12);
  if ( v13 < 0 )
  {
    v14 = 2156LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v17 = v8;
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
    v17 = v5;
  v18 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v18) )
    v20 = v5 - v8;
  else
    v20 = 0;
  v13 = CortanaDesktopExperienceView::RemoveRectFromRegion(v19, a2, v20, 0, v17, v6);
  if ( v13 < 0 )
  {
    v14 = 2163LL;
    goto LABEL_3;
  }
  return 0LL;
}
