/*
 * XREFs of ??0ConstantBufferD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D70C0
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_74281c84ea322a35b112587499033771_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7F10 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_74281c84ea322a35b112587499033771_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceConstantBuffer@Engine@Spectre@@IEAA@XZ @ 0x18008B678 (--0DeviceConstantBuffer@Engine@Spectre@@IEAA@XZ.c)
 */

Spectre::Engine::D3D11::ConstantBufferD3D11 *__fastcall Spectre::Engine::D3D11::ConstantBufferD3D11::ConstantBufferD3D11(
        Spectre::Engine::D3D11::ConstantBufferD3D11 *this)
{
  Spectre::Engine::D3D11::ConstantBufferD3D11 *result; // rax

  Spectre::Engine::DeviceConstantBuffer::DeviceConstantBuffer(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
