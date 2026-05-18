/*
 * XREFs of ??4?$atomic@_J@std@@QEAA_J_J@Z @ 0x180070978
 * Callers:
 *     ?FrameTick@PerformanceManager@Engine@Spectre@@QEAAXXZ @ 0x18007099C (-FrameTick@PerformanceManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?store@?$_Atomic_storage@_J$07@std@@QEAAX_J@Z @ 0x180070B40 (-store@-$_Atomic_storage@_J$07@std@@QEAAX_J@Z.c)
 */

__int64 std::atomic<__int64>::operator=()
{
  std::_Atomic_storage<__int64,8>::store();
  return 0LL;
}
