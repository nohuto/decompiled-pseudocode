/*
 * XREFs of ?GetAttribute@SceneNode@Engine@Spectre@@QEBA_NW4ESceneAttribute@23@@Z @ 0x18003BF50
 * Callers:
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

char __fastcall Spectre::Engine::SceneNode::GetAttribute(Spectre::Engine::SceneNode *a1)
{
  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  return HIWORD(*((_DWORD *)a1 + 112)) & 1;
}
