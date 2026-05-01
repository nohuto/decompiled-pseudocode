/*
 * XREFs of ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18066B218
 * Callers:
 *     ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18066B330 (-OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowMan.c)
 *     ?get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z @ 0x18066E780 (-get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?IsVisible@GuidedSnapAssistControl@@QEAA_NXZ @ 0x18068822C (-IsVisible@GuidedSnapAssistControl@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CSnapAssistControllerBase::IsGuidedSnapAssistActive(CSnapAssistControllerBase *this)
{
  RTL_SRWLOCK *v2; // rbx
  bool v3; // di
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockShared((PSRWLOCK)this + 21);
  v3 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  if ( !GuidedSnapAssistControl::IsVisible(*((GuidedSnapAssistControl **)this + 36)) )
    v3 = *((_QWORD *)this + 26) != 0LL;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
