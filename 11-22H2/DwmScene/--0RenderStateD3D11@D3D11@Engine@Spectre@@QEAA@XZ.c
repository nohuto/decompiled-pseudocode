/*
 * XREFs of ??0RenderStateD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D4BEC
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_bf7fa8efd816e1ebfe1394980608a68c_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C81B0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_bf7fa8efd816e1ebfe1394980608a68c_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceRenderState@Engine@Spectre@@IEAA@XZ @ 0x18008B79C (--0DeviceRenderState@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::D3D11::RenderStateD3D11 *__fastcall Spectre::Engine::D3D11::RenderStateD3D11::RenderStateD3D11(
        Spectre::Engine::D3D11::RenderStateD3D11 *this)
{
  Spectre::Engine::DeviceRenderState::DeviceRenderState(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
