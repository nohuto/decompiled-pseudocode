/*
 * XREFs of ??0SamplerGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008B50C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_b20bfe755ee06a1fa4c395733db982e8_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x180053E40 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_b20bfe755ee06a1fa4c395733db982e8_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceSampler@Engine@Spectre@@QEAA@XZ @ 0x1800543E4 (--0DeviceSampler@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::SamplerGeneric *__fastcall Spectre::Engine::SamplerGeneric::SamplerGeneric(
        Spectre::Engine::SamplerGeneric *this)
{
  Spectre::Engine::DeviceSampler::DeviceSampler(this);
  *(_QWORD *)this = &Spectre::Engine::SamplerGeneric::`vftable';
  return this;
}
