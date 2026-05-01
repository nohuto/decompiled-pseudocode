/*
 * XREFs of ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803A8148
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803A746C (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803A9008 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_a0005991c4d1e4c1aea655bfe9fd5c05_::operator() @ 0x1803A55A8 (_lambda_a0005991c4d1e4c1aea655bfe9fd5c05_--operator().c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetSpeechTextInputHeight(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        HMONITOR a3)
{
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  HMONITOR *v7; // [rsp+28h] [rbp-20h]
  unsigned int *v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  HMONITOR v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (int)a2, a3);
  *(_QWORD *)v6 = this;
  v7 = &v11;
  v8 = &v10;
  v4 = lambda_a0005991c4d1e4c1aea655bfe9fd5c05_::operator()((__int64)v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x95E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  return v10;
}
