/*
 * XREFs of ?NotifyAttachComplete@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x180026D6C
 * Callers:
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 */

void __fastcall Spectre::Engine::RenderDevice::NotifyAttachComplete(Spectre::Engine::RenderDevice *this)
{
  int v2; // ecx
  float v3; // xmm0_4
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  std::chrono::steady_clock::now(&v4);
  v2 = v4;
  *((_QWORD *)this + 55) = v4;
  v3 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v2 - *((_DWORD *)this + 106));
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Renderer,
    3,
    "RenderDevice startup duration to attach complete: %8.3fms",
    v3);
}
