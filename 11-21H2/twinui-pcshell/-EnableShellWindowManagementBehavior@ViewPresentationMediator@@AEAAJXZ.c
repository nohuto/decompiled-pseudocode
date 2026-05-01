/*
 * XREFs of ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x18014E270
 * Callers:
 *     ?SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x18014E230 (-SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SC.c)
 *     ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x18041AE50 (-OnChannelSever@ViewPresentationMediator@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x18014E2EC (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewPresentationMediator::EnableShellWindowManagementBehavior(ViewPresentationMediator *this)
{
  unsigned __int64 v2; // rbx
  int v3; // edi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

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
        (void *)0x122,
        (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_6;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           (unsigned int)v2,
           HIDWORD(v2));
  }
  if ( v3 < 0 )
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x127,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
