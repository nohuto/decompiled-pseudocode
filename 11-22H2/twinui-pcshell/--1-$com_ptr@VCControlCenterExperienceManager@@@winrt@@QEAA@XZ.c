/*
 * XREFs of ??1?$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x18041DB6C
 * Callers:
 *     _CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801DEB7E (_CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801E017E (_CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1804275F8 (-unconditional_release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CControlCenterExperienceManager>::~com_ptr<CControlCenterExperienceManager>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CControlCenterExperienceManager>::unconditional_release_ref();
  return result;
}
