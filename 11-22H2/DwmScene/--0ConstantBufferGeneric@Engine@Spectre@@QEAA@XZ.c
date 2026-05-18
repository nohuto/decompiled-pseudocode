/*
 * XREFs of ??0ConstantBufferGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008B63C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_2f7a86c028961b1be19ef61dc11d1eb9_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x180053CC0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_2f7a86c028961b1be19ef61dc11d1eb9_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceConstantBuffer@Engine@Spectre@@IEAA@XZ @ 0x18008B678 (--0DeviceConstantBuffer@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::ConstantBufferGeneric *__fastcall Spectre::Engine::ConstantBufferGeneric::ConstantBufferGeneric(
        Spectre::Engine::ConstantBufferGeneric *this)
{
  Spectre::Engine::DeviceConstantBuffer::DeviceConstantBuffer(this);
  *(_QWORD *)this = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return this;
}
