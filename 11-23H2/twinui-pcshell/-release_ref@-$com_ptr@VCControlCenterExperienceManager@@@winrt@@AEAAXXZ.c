/*
 * XREFs of ?release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x18042733C
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DE790 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1804275F8 (-unconditional_release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CControlCenterExperienceManager>::release_ref(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CControlCenterExperienceManager>::unconditional_release_ref();
  return result;
}
