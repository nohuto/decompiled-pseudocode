/*
 * XREFs of ??0DeviceShader@Engine@Spectre@@IEAA@XZ @ 0x18008A75C
 * Callers:
 *     ??0VertexShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D45FC (--0VertexShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 *     ??0PixelShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D548C (--0PixelShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 *     ??0GeometryShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D7350 (--0GeometryShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 *     ??0DomainShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D75FC (--0DomainShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 *     ??0HullShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D78A0 (--0HullShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

Spectre::Engine::DeviceShader *__fastcall Spectre::Engine::DeviceShader::DeviceShader(
        Spectre::Engine::DeviceShader *this)
{
  Spectre::Engine::DeviceResource::DeviceResource((__int64)this);
  *((_BYTE *)this + 96) = 0;
  *(_QWORD *)this = &Spectre::Engine::DeviceShader::`vftable';
  return this;
}
