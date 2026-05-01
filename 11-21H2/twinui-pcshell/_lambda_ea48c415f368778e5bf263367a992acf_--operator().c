/*
 * XREFs of _lambda_ea48c415f368778e5bf263367a992acf_::operator() @ 0x1805AEF98
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805AFE50 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x1805AF388 (-Id@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@Snap.c)
 */

bool __fastcall lambda_ea48c415f368778e5bf263367a992acf_::operator()(_QWORD *a1, __int64 a2)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 280LL) == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Id(*a1);
}
