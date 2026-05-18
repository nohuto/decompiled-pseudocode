/*
 * XREFs of ?SetTimeStep@FrameData@Engine@Spectre@@QEAAXM@Z @ 0x180074440
 * Callers:
 *     ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0 (-UpdateFrameTime@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::FrameData::SetTimeStep(Spectre::Engine::FrameData *this, float a2)
{
  *(float *)this = a2;
}
