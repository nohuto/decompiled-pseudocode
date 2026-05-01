/*
 * XREFs of ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x180136FEC
 * Callers:
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DE180 (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801DF010 (CControlCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041F6D8 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1804215EC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VCControlCenterExperienceManager@@@details@wil@@YAJPEAVCControlCenterExperienceManager@@PEAPEAUIWeakReference@@@Z @ 0x180137040 (--$GetWeakReference@VCControlCenterExperienceManager@@@details@wil@@YAJPEAVCControlCenterExperie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query<CControlCenterExperienceManager *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<CControlCenterExperienceManager>(v3, a1);
  if ( Weak < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71E,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)Weak,
      1);
  return a1;
}
