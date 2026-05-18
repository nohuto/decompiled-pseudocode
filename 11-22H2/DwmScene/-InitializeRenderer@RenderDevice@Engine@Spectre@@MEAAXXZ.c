/*
 * XREFs of ?InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026C70
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 *     ?CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x1800261B8 (-CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 */

void __fastcall Spectre::Engine::RenderDevice::InitializeRenderer(Spectre::Engine::RenderDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  float v4; // xmm0_4
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::RenderDevice *)((char *)this + 24));
  Spectre::Engine::RenderDevice::CreateStandardTextures(this);
  std::chrono::steady_clock::now(&v5);
  v2 = v5;
  *((_QWORD *)this + 54) = v5;
  v3 = v2 - *((_QWORD *)this + 53);
  *((_QWORD *)this + 59) = v3;
  v4 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v3);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Renderer,
    3,
    "RenderDevice startup duration to initialization complete: %8.3fms",
    v4);
}
