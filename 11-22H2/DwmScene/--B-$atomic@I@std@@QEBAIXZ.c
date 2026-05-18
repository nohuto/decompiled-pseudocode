/*
 * XREFs of ??B?$atomic@I@std@@QEBAIXZ @ 0x180059D10
 * Callers:
 *     ?IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z @ 0x18005BD74 (-IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::atomic<unsigned int>::operator unsigned int()
{
  return std::_Atomic_storage<unsigned int,4>::load();
}
