/*
 * XREFs of ??0PixelShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D548C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_67580e89edb989bae1ab2e6bcdd7b69a_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7E10 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_67580e89edb989bae1ab2e6bcdd7b69a_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??0DeviceShader@Engine@Spectre@@IEAA@XZ @ 0x18008A75C (--0DeviceShader@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::D3D11::PixelShaderD3D11 *__fastcall Spectre::Engine::D3D11::PixelShaderD3D11::PixelShaderD3D11(
        Spectre::Engine::D3D11::PixelShaderD3D11 *this)
{
  Spectre::Engine::D3D11::PixelShaderD3D11 *result; // rax

  memset_0(this, 0, 0x68uLL);
  Spectre::Engine::DeviceShader::DeviceShader(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
