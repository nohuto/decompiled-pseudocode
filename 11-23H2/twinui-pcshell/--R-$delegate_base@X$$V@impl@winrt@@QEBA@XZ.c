/*
 * XREFs of ??R?$delegate_base@X$$V@impl@winrt@@QEBA@XZ @ 0x1804FD174
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180225B38 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVolume@Deploy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::delegate_base<void,>::operator()(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
}
