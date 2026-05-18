/*
 * XREFs of ??0GeometryShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D7350
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_76d404fbcba0e82d74f92b1af906afb0_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7F90 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_76d404fbcba0e82d74f92b1af906afb0_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceShader@Engine@Spectre@@IEAA@XZ @ 0x18008A75C (--0DeviceShader@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::D3D11::GeometryShaderD3D11 *__fastcall Spectre::Engine::D3D11::GeometryShaderD3D11::GeometryShaderD3D11(
        Spectre::Engine::D3D11::GeometryShaderD3D11 *this)
{
  Spectre::Engine::D3D11::GeometryShaderD3D11 *result; // rax

  Spectre::Engine::DeviceShader::DeviceShader(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
