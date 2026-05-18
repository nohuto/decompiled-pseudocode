/*
 * XREFs of ?Reset@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8380
 * Callers:
 *     ?Create@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA_NAEAVRenderDevice@34@W4QueryType@GpuQuery@34@@Z @ 0x1800D7D30 (-Create@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA_NAEAVRenderDevice@34@W4QueryType@GpuQuery@34@@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@VShader@Engine@Spectre@@@std@@QEAAXXZ @ 0x180050C88 (-reset@-$shared_ptr@VShader@Engine@Spectre@@@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::GpuQueryD3D11::Reset(Spectre::Engine::D3D11::GpuQueryD3D11 *this)
{
  __int128 v2; // [rsp+20h] [rbp-18h]

  *((_DWORD *)this + 34) = 3;
  std::shared_ptr<Spectre::Engine::Shader>::reset((_QWORD *)this + 13);
  std::shared_ptr<Spectre::Engine::Shader>::reset((_QWORD *)this + 15);
  *(_QWORD *)&v2 = 0LL;
  BYTE8(v2) = 1;
  *((_OWORD *)this + 9) = v2;
}
