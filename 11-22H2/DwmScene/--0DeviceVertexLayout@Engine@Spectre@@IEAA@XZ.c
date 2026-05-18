/*
 * XREFs of ??0DeviceVertexLayout@Engine@Spectre@@IEAA@XZ @ 0x18008BCA4
 * Callers:
 *     ??R_lambda_838beeeaa6fb5cde8c4026525d949f60_@@QEBA@XZ @ 0x180052928 (--R_lambda_838beeeaa6fb5cde8c4026525d949f60_@@QEBA@XZ.c)
 *     ??0VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D39C0 (--0VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 *     ??0VertexLayoutBase@Engine@Spectre@@QEAA@XZ @ 0x18008BD68 (--0VertexLayoutBase@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::DeviceVertexLayout *__fastcall Spectre::Engine::DeviceVertexLayout::DeviceVertexLayout(
        Spectre::Engine::DeviceVertexLayout *this)
{
  Spectre::Engine::DeviceVertexLayout *result; // rax

  Spectre::Engine::DeviceResource::DeviceResource((__int64)this);
  Spectre::Engine::VertexLayoutBase::VertexLayoutBase((Spectre::Engine::DeviceVertexLayout *)((char *)this + 96));
  result = this;
  *(_QWORD *)this = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return result;
}
