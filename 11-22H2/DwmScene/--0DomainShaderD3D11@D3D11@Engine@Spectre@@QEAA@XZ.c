/*
 * XREFs of ??0DomainShaderD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D75FC
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0afe27ddc9a0cdc90bbf3e2db7bb1a1d_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7B90 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_0afe27ddc9a0cdc90bbf3e2db7bb1a1d_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceShader@Engine@Spectre@@IEAA@XZ @ 0x18008A75C (--0DeviceShader@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::D3D11::DomainShaderD3D11 *__fastcall Spectre::Engine::D3D11::DomainShaderD3D11::DomainShaderD3D11(
        Spectre::Engine::D3D11::DomainShaderD3D11 *this)
{
  Spectre::Engine::D3D11::DomainShaderD3D11 *result; // rax

  Spectre::Engine::DeviceShader::DeviceShader(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
