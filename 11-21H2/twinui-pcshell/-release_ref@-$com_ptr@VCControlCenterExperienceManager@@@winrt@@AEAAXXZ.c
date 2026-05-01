/*
 * XREFs of ?release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1803554EC
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801958E0 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x18035562C (-unconditional_release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CControlCenterExperienceManager>::release_ref(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CControlCenterExperienceManager>::unconditional_release_ref();
  return result;
}
