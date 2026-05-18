/*
 * XREFs of ?GetInput@FrameData@Engine@Spectre@@QEBAAEBVInput@23@XZ @ 0x1800743C0
 * Callers:
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

const struct Spectre::Engine::Input *__fastcall Spectre::Engine::FrameData::GetInput(Spectre::Engine::FrameData *this)
{
  return (Spectre::Engine::FrameData *)((char *)this + 8);
}
