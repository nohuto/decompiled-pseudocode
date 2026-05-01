/*
 * XREFs of ??1?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@QEAA@XZ @ 0x1803F9468
 * Callers:
 *     _GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801DB904 (_GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1_--.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ @ 0x18040B908 (-unconditional_release_ref@-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<GamingOverlayExperienceManager>::~com_ptr<GamingOverlayExperienceManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<GamingOverlayExperienceManager>::unconditional_release_ref();
  return result;
}
