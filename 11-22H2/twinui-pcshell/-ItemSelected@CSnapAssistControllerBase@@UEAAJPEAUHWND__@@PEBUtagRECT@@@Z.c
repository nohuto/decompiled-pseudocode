/*
 * XREFs of ?ItemSelected@CSnapAssistControllerBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z @ 0x18066B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn CSnapAssistControllerBase::ItemSelected(
        CSnapAssistControllerBase *this,
        HWND a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  const char *v4; // r9
  const char *v5; // r9
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3,
      a4);
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B9,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      v4);
  }
  catch ( ... )
  {
    *(_DWORD *)(v6 + 32) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1E1,
                             (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                             v5);
  }
}
