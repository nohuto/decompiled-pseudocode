/*
 * XREFs of _GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801DB904
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@QEAA@XZ @ 0x1803F9468 (--1-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64) + 16LL;
  return winrt::com_ptr<GamingOverlayExperienceManager>::~com_ptr<GamingOverlayExperienceManager>(*(_QWORD *)(a2 + 40));
}
