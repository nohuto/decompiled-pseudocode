/*
 * XREFs of ?Update@Camera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18005D880
 * Callers:
 *     ?Update@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008EDF0 (-Update@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::Camera::Update(
        Spectre::Engine::Camera *this,
        const struct Spectre::Engine::FrameData *a2)
{
  Spectre::Engine::Camera::NotifyNodeTransformChanged(this);
}
