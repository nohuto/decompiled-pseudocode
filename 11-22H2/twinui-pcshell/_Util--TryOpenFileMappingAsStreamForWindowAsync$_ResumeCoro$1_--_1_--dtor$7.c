/*
 * XREFs of _Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_::_1_::dtor$7 @ 0x180279D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 256) + 168LL;
  return winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(*(_QWORD *)(a2 + 168));
}
