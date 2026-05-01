/*
 * XREFs of ??1?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ @ 0x180451F14
 * Callers:
 *     _CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801E3F10 (_CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801E42D8 (_CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x18045576C (-unconditional_release_ref@-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CVirtualTouchpadExperienceManager>::~com_ptr<CVirtualTouchpadExperienceManager>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CVirtualTouchpadExperienceManager>::unconditional_release_ref();
  return result;
}
