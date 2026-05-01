/*
 * XREFs of ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180487AC0
 * Callers:
 *     ?ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x180480BA0 (-ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1804828BC (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x180483D20 (-IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180483EB8 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180484124 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180486DFC (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180487F4C (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::Show(CortanaDesktopExperienceView *a1, HSTRING a2, unsigned int a3)
{
  int IsShowForTransitions; // eax
  unsigned int v7; // edi
  CortanaDesktopExperienceView *v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  int ActivateArgs; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(string) = 0;
  IsShowForTransitions = CortanaDesktopExperienceView::IsShowForTransitions(a1, a2, (bool *)&string);
  v7 = IsShowForTransitions;
  if ( IsShowForTransitions < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x310,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsShowForTransitions);
    return v7;
  }
  *((_BYTE *)a1 + 215) = 0;
  v9 = (CortanaDesktopExperienceView *)((char *)a1 - 24);
  if ( !(_BYTE)string )
  {
    *((_BYTE *)a1 + 218) = 1;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs(
                     (CortanaDesktopExperienceView *)((char *)a1 - 24),
                     a2,
                     &string);
    v7 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      if ( *((_BYTE *)a1 + 214) )
        v14 = 2LL;
      else
        v14 = *((_BYTE *)a1 + 264) != 0;
      ActivateArgs = CortanaDesktopExperienceView::ShowInternal((char *)a1 - 24, string, v14, a3);
      v7 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        WindowsDeleteString(string);
        goto LABEL_16;
      }
      v13 = 820LL;
    }
    else
    {
      v13 = 805LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
    WindowsDeleteString(string);
    return v7;
  }
  *((_BYTE *)a1 + 218) = 0;
  v10 = CortanaDesktopExperienceView::NotifyAppWithTransitionType(
          (CortanaDesktopExperienceView *)((char *)a1 - 24),
          L"NotifyAppTransitionRequestHandled",
          a3,
          0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
LABEL_16:
  if ( CortanaDesktopExperienceView::IsViewVisible(v9) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton(v9);
  return 0LL;
}
