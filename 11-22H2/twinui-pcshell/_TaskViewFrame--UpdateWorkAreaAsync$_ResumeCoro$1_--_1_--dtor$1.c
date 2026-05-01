/*
 * XREFs of _TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x18028DBC5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TaskViewFrame::UpdateWorkAreaAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 144) + 32LL;
  return winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(*(_QWORD *)(a2 + 64));
}
