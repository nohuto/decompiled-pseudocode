/*
 * XREFs of ??0TextureD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800CC99C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_4751ef0567697aa51a05750371275a1e_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7C90 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_4751ef0567697aa51a05750371275a1e_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0DeviceTexture@Engine@Spectre@@QEAA@XZ @ 0x1800551EC (--0DeviceTexture@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::D3D11::TextureD3D11 *__fastcall Spectre::Engine::D3D11::TextureD3D11::TextureD3D11(
        Spectre::Engine::D3D11::TextureD3D11 *this)
{
  Spectre::Engine::D3D11::TextureD3D11 *result; // rax

  Spectre::Engine::DeviceTexture::DeviceTexture(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  result = this;
  *((_BYTE *)this + 192) = 1;
  return result;
}
