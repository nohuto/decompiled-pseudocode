/*
 * XREFs of ?release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x180351794
 * Callers:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180192800 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801935D0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1803520A4 (-unconditional_release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CActionCenterExperienceManager>::release_ref(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
  return result;
}
