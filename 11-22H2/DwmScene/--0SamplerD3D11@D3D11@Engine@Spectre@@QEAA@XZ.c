/*
 * XREFs of ??0SamplerD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D48AC
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_ad0815aa9f361cf5dc68792ada8f36bf_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C8130 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_ad0815aa9f361cf5dc68792ada8f36bf_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceSampler@Engine@Spectre@@QEAA@XZ @ 0x1800543E4 (--0DeviceSampler@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::D3D11::SamplerD3D11 *__fastcall Spectre::Engine::D3D11::SamplerD3D11::SamplerD3D11(
        Spectre::Engine::D3D11::SamplerD3D11 *this)
{
  Spectre::Engine::D3D11::SamplerD3D11 *result; // rax

  Spectre::Engine::DeviceSampler::DeviceSampler(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  return result;
}
