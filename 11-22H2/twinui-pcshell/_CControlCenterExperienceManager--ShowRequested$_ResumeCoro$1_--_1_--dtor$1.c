/*
 * XREFs of _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801E017E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x18041DB6C (--1-$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 88) + 24LL;
  return winrt::com_ptr<CControlCenterExperienceManager>::~com_ptr<CControlCenterExperienceManager>(*(_QWORD *)(a2 + 104));
}
