/*
 * XREFs of ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040878C
 * Callers:
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1801AC434 (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1801DB680 (-StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StopShortPressTimer(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 288) )
  {
    result = winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)(a1 + 280));
    *(_BYTE *)(a1 + 288) = 0;
  }
  return result;
}
