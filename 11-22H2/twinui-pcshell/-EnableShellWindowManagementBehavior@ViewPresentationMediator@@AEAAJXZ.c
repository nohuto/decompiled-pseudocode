/*
 * XREFs of ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x18014E2D0
 * Callers:
 *     ?SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x18014E290 (-SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SC.c)
 *     ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x1804F3A60 (-OnChannelSever@ViewPresentationMediator@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x18014E35C (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewPresentationMediator::EnableShellWindowManagementBehavior(ViewPresentationMediator *this)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // edi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 25) )
  {
    v2 = ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(*((unsigned int *)this + 76));
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           (unsigned int)v2,
           HIDWORD(v2));
    if ( v3 == -2147019873 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 128LL))(*((_QWORD *)this + 25));
      v3 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12A,
          (int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_8;
      }
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
             *((_QWORD *)this + 24),
             (unsigned int)v2,
             HIDWORD(v2));
    }
    if ( (v3 & 0x80000000) == 0 )
      return v3;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)v3);
    return v3;
  }
  return 2147943515LL;
}
