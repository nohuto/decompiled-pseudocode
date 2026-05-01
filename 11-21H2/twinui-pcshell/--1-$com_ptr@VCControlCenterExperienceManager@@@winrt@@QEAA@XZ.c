/*
 * XREFs of ??1?$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x180353340
 * Callers:
 *     _CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x180194F2A (_CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x180195C1E (_CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x18035562C (-unconditional_release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CControlCenterExperienceManager>::~com_ptr<CControlCenterExperienceManager>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CControlCenterExperienceManager>::unconditional_release_ref();
  return result;
}
