/*
 * XREFs of _CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x180194F2A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x180353340 (--1-$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 40) + 24LL;
  return winrt::com_ptr<CControlCenterExperienceManager>::~com_ptr<CControlCenterExperienceManager>(*(_QWORD *)(a2 + 64));
}
