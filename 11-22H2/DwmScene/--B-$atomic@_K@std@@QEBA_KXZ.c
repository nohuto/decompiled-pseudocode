/*
 * XREFs of ??B?$atomic@_K@std@@QEBA_KXZ @ 0x18003B59C
 * Callers:
 *     ?GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C848 (-GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ.c)
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::atomic<unsigned __int64>::operator unsigned __int64()
{
  return std::_Atomic_storage<unsigned __int64,8>::load();
}
