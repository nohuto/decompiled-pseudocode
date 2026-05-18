/*
 * XREFs of ?SetShaderModelActive@RenderDevice@Engine@Spectre@@QEAAXW4EShaderModel@23@@Z @ 0x180027134
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderDevice::SetShaderModelActive(__int64 a1)
{
  *(_DWORD *)(a1 + 3880) = 4;
}
