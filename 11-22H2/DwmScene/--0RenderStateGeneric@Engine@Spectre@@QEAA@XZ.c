/*
 * XREFs of ??0RenderStateGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008B7D8
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_966210904f8ddb1ecfe06826adf9ae70_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x180053DA0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_966210904f8ddb1ecfe06826adf9ae70_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceRenderState@Engine@Spectre@@IEAA@XZ @ 0x18008B79C (--0DeviceRenderState@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::RenderStateGeneric *__fastcall Spectre::Engine::RenderStateGeneric::RenderStateGeneric(
        Spectre::Engine::RenderStateGeneric *this)
{
  Spectre::Engine::DeviceRenderState::DeviceRenderState(this);
  *(_QWORD *)this = &Spectre::Engine::RenderStateGeneric::`vftable';
  return this;
}
