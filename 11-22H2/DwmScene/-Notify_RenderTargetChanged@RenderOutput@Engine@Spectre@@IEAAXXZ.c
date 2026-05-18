/*
 * XREFs of ?Notify_RenderTargetChanged@RenderOutput@Engine@Spectre@@IEAAXXZ @ 0x18002C958
 * Callers:
 *     ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10 (-UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Texture2.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180025D24 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

void __fastcall Spectre::Engine::RenderOutput::Notify_RenderTargetChanged(Spectre::Engine::RenderOutput *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx

  v1 = *((_QWORD *)this + 17);
  for ( i = *((_QWORD *)this + 16); i != v1; i += 64LL )
    std::_Func_class<void,>::operator()(i);
}
