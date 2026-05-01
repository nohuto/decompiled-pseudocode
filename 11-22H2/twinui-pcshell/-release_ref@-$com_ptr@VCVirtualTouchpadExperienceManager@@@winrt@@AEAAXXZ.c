/*
 * XREFs of ?release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x180455750
 * Callers:
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801E3DA0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801E4120 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x18045576C (-unconditional_release_ref@-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CVirtualTouchpadExperienceManager>::release_ref(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CVirtualTouchpadExperienceManager>::unconditional_release_ref();
  return result;
}
