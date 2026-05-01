/*
 * XREFs of _CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1801DF77E
 * Callers:
 *     <none>
 * Callees:
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180071960 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::PrelaunchExperienceAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 40) + 152LL;
  return `winrt::resume_after'::`2'::awaitable::~awaitable(*(volatile __int64 ***)(a2 + 88));
}
