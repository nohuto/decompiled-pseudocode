/*
 * XREFs of ??0DepthBufferGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008C4E0
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_1ffa97e75efc20dc5ba4ef23b8bdb63a_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x180053C40 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_1ffa97e75efc20dc5ba4ef23b8bdb63a_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceDepthBuffer@Engine@Spectre@@IEAA@XZ @ 0x18006F0DC (--0DeviceDepthBuffer@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::DepthBufferGeneric *__fastcall Spectre::Engine::DepthBufferGeneric::DepthBufferGeneric(
        Spectre::Engine::DepthBufferGeneric *this)
{
  Spectre::Engine::DeviceDepthBuffer::DeviceDepthBuffer(this);
  *(_QWORD *)this = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return this;
}
