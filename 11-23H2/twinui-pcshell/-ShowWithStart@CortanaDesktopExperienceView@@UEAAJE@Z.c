/*
 * XREFs of ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180488050
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18042DEF4 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??$?0$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180476148 (--$-0$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@AEAA@U-$integral_cons.c)
 *     ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180476E38 (--1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1804828BC (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804864B0 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180487F4C (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowWithStart(CortanaDesktopExperienceView *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int ActivateArgs; // eax
  __int64 v7; // rdx
  int v8; // edx
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-C0h]
  _QWORD v13[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::CortanaExperienceManager_ShowWithStart(
    (__int64)v13,
    a2);
  *((_BYTE *)this + 218) = 0;
  v4 = CortanaDesktopExperienceView::PositionAlongsideStart((CortanaDesktopExperienceView *)((char *)this - 24));
  v5 = v4;
  if ( v4 >= 0 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    string1 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=QFSearchBox&QuerySource=StartButton&Positioner=desktop",
      0x41u,
      0x40u);
    ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs(
                     (CortanaDesktopExperienceView *)((char *)this - 24),
                     string1,
                     &string);
    v5 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      *((_BYTE *)this + 215) = 1;
      ActivateArgs = CortanaDesktopExperienceView::ShowInternal(
                       (__int64)this - 24,
                       (enum _TABLETMODESTATE *)string,
                       a2 != 0,
                       0);
      v5 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        *((_BYTE *)this + 220) = 1;
        wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, v8);
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 847LL;
    }
    else
    {
      v7 = 840LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
LABEL_9:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x345,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::~CortanaExperienceManager_ShowWithStart((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v13);
  return v5;
}
