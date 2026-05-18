/*
 * XREFs of ??4?$atomic@_K@std@@QEAA_K_K@Z @ 0x18004014C
 * Callers:
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 * Callees:
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_K@Z @ 0x180042D00 (-store@-$_Atomic_storage@_K$07@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall std::atomic<unsigned __int64>::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  std::_Atomic_storage<unsigned __int64,8>::store(a1, a2, a3, a2);
  return v3;
}
