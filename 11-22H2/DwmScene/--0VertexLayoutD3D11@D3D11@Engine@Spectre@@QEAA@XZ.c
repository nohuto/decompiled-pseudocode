/*
 * XREFs of ??0VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D39C0
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_8be67bcf9b5b289d242b19ff70747553_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C8090 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_8be67bcf9b5b289d242b19ff70747553_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceVertexLayout@Engine@Spectre@@IEAA@XZ @ 0x18008BCA4 (--0DeviceVertexLayout@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::D3D11::VertexLayoutD3D11 *__fastcall Spectre::Engine::D3D11::VertexLayoutD3D11::VertexLayoutD3D11(
        Spectre::Engine::D3D11::VertexLayoutD3D11 *this)
{
  Spectre::Engine::D3D11::VertexLayoutD3D11 *result; // rax

  Spectre::Engine::DeviceVertexLayout::DeviceVertexLayout(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
