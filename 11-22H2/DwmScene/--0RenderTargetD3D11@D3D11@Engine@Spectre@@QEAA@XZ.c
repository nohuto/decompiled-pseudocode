/*
 * XREFs of ??0RenderTargetD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800CB5E0
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_e7785b2161b4c7cd8c3a887037d40e0a_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C8250 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_e7785b2161b4c7cd8c3a887037d40e0a_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceFrameBuffer@Engine@Spectre@@IEAA@XZ @ 0x180027DC8 (--0DeviceFrameBuffer@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::D3D11::RenderTargetD3D11 *__fastcall Spectre::Engine::D3D11::RenderTargetD3D11::RenderTargetD3D11(
        Spectre::Engine::D3D11::RenderTargetD3D11 *this)
{
  Spectre::Engine::D3D11::RenderTargetD3D11 *result; // rax

  Spectre::Engine::DeviceFrameBuffer::DeviceFrameBuffer(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
