/*
 * XREFs of ??1?$com_ptr@VCActionCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x180416C94
 * Callers:
 *     _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801DC6E6 (_CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801DCEC2 (_CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x18007376C (-unconditional_release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CActionCenterExperienceManager>::~com_ptr<CActionCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref(a1);
  return result;
}
