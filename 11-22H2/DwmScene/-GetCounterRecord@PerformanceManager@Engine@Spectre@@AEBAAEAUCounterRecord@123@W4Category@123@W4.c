/*
 * XREFs of ?GetCounterRecord@PerformanceManager@Engine@Spectre@@AEBAAEAUCounterRecord@123@W4Category@123@W4Property@123@@Z @ 0x180070AD4
 * Callers:
 *     ?GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@Z @ 0x180070A18 (-GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::PerformanceManager::GetCounterRecord(__int64 a1, int a2, int a3)
{
  return a1 + 32 * (a3 + 5LL * a2);
}
