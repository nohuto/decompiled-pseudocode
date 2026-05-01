/*
 * XREFs of _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1802457E7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 288) + 576LL;
  *(_DWORD *)(a2 + 296) = **(_DWORD **)(a2 + 104);
  if ( (*(_DWORD *)(a2 + 296) & 1) != 0 )
  {
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 288) + 576LL;
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 288) + 576LL;
    *(_DWORD *)(a2 + 296) = **(_DWORD **)(a2 + 120);
    *(_DWORD *)(a2 + 128) = *(_DWORD *)(a2 + 296) & 0xFFFFFFFE;
    **(_DWORD **)(a2 + 112) = *(_DWORD *)(a2 + 128);
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 288) + 88LL;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 136));
  }
}
