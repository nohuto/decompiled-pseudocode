/*
 * XREFs of __lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator()_::_1_::dtor$2 @ 0x18020DF4C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall _lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator()_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 80) + 72LL;
  return winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(*(_QWORD *)(a2 + 56));
}
