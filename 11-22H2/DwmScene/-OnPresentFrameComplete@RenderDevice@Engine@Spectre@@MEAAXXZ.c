/*
 * XREFs of ?OnPresentFrameComplete@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026DD0
 * Callers:
 *     ?OnPresentFrameComplete@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C6A40 (-OnPresentFrameComplete@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::RenderDevice::OnPresentFrameComplete(Spectre::Engine::RenderDevice *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  float v5; // xmm0_4
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 48LL))(*((_QWORD *)this + 34));
  std::chrono::steady_clock::now(&v6);
  v2 = v6;
  v3 = *((_DWORD *)this + 971) == 1;
  *((_QWORD *)this + 61) = v6 - *((_QWORD *)this + 58);
  *((_QWORD *)this + 58) = v2;
  if ( v3 )
  {
    *((_QWORD *)this + 57) = v2;
    v4 = v2 - *((_QWORD *)this + 53);
    *((_QWORD *)this + 59) = v4;
    v5 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v4);
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_Renderer,
      3,
      "RenderDevice startup duration until first frame presented: %8.3fms",
      v5);
  }
}
