/*
 * XREFs of ??0CommandListD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800CFA3C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_075568019f0ba5dd51131882019b8c39_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7B10 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_075568019f0ba5dd51131882019b8c39_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0CommandList@Engine@Spectre@@QEAA@XZ @ 0x180038FEC (--0CommandList@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::D3D11::CommandListD3D11 *__fastcall Spectre::Engine::D3D11::CommandListD3D11::CommandListD3D11(
        Spectre::Engine::D3D11::CommandListD3D11 *this)
{
  Spectre::Engine::D3D11::CommandListD3D11 *result; // rax

  Spectre::Engine::CommandList::CommandList(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  return result;
}
