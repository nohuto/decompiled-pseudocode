/*
 * XREFs of ?release_ref@?$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ @ 0x18044A4C4
 * Callers:
 *     CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801E3530 (CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ @ 0x18044A634 (-unconditional_release_ref@-$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CJumpViewExperienceManager>::release_ref(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CJumpViewExperienceManager>::unconditional_release_ref();
  return result;
}
