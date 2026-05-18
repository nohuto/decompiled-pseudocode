/*
 * XREFs of ??B?$atomic@_J@std@@QEBA_JXZ @ 0x180070990
 * Callers:
 *     ?FrameTick@PerformanceManager@Engine@Spectre@@QEAAXXZ @ 0x18007099C (-FrameTick@PerformanceManager@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@Z @ 0x180070A18 (-GetCounter@PerformanceManager@Engine@Spectre@@QEBA_JW4Category@123@W4Property@123@W4Value@123@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::atomic<__int64>::operator __int64()
{
  return std::_Atomic_storage<__int64,8>::load();
}
