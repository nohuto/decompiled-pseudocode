/*
 * XREFs of ?BeginFrame@RenderDevice@Engine@Spectre@@UEAAXXZ @ 0x180025F80
 * Callers:
 *     <none>
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 */

void __fastcall Spectre::Engine::RenderDevice::BeginFrame(Spectre::Engine::RenderDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  float v4; // xmm0_4
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*((_DWORD *)this + 971) == 1 )
  {
    std::chrono::steady_clock::now(&v5);
    v2 = v5;
    *((_QWORD *)this + 56) = v5;
    v3 = v2 - *((_QWORD *)this + 53);
    *((_QWORD *)this + 60) = v3;
    v4 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v3);
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_Renderer,
      3,
      "RenderDevice startup duration until first frame begin: %8.3fms",
      v4);
  }
}
