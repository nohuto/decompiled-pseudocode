/*
 * XREFs of ??$make_pair@AEAPEAUHMONITOR__@@AEAUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@YA?AU?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@0@AEAPEAUHMONITOR__@@AEAUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067939C
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

_QWORD *__fastcall std::make_pair<HMONITOR__ * &,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  *a1 = *a2;
  v4 = (winrt::Windows::Foundation::IUnknown *)(a1 + 1);
  *(_QWORD *)v4 = *a3;
  winrt::Windows::Foundation::IUnknown::add_ref(v4);
  return a1;
}
