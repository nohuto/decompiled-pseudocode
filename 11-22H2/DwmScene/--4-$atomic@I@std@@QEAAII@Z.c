/*
 * XREFs of ??4?$atomic@I@std@@QEAAII@Z @ 0x180059BFC
 * Callers:
 *     ??0Camera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18005930C (--0Camera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?store@?$_Atomic_storage@I$03@std@@QEAAXI@Z @ 0x18005E878 (-store@-$_Atomic_storage@I$03@std@@QEAAXI@Z.c)
 */

__int64 std::atomic<unsigned int>::operator=()
{
  std::_Atomic_storage<unsigned int,4>::store();
  return 0LL;
}
