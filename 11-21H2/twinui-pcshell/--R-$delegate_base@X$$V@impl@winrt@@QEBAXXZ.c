/*
 * XREFs of ??R?$delegate_base@X$$V@impl@winrt@@QEBAXXZ @ 0x18041D29C
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801C5D18 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::delegate_base<void,>::operator()(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
}
