/*
 * XREFs of ?GetTimeStep@FrameData@Engine@Spectre@@QEBAMXZ @ 0x1800743CC
 * Callers:
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Engine::FrameData::GetTimeStep(Spectre::Engine::FrameData *this)
{
  return *(float *)this;
}
