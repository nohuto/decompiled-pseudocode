/*
 * XREFs of ?GetTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C324
 * Callers:
 *     ?GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C848 (-GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Spectre::Engine::SceneNode::GetTransformUpdateID(Spectre::Engine::SceneNode *this)
{
  return *((_QWORD *)this + 26);
}
