/*
 * XREFs of ?SetRenderTargetDynamicScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAA_NMM@Z @ 0x1800CA8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEBAHXZ @ 0x18002C2B0 (-GetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEBAHXZ.c)
 *     ?SetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEAAXH@Z @ 0x18002CB00 (-SetMustSetRTActiveSizeCounter@RenderOutput@Engine@Spectre@@IEAAXH@Z.c)
 *     ?SetRenderTargetDynamicScaling@RenderOutput@Engine@Spectre@@UEAA_NMM@Z @ 0x18002CB50 (-SetRenderTargetDynamicScaling@RenderOutput@Engine@Spectre@@UEAA_NMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Xaml::SetRenderTargetDynamicScaling(
        Spectre::Engine::D3D11::RenderOutputD3D11Xaml *this,
        float a2,
        float a3)
{
  int MustSetRTActiveSizeCounter; // eax
  Spectre::Engine::RenderOutput *v6; // rcx

  if ( a2 == (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 128LL))(this)
    && a3 == (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 136LL))(this)
    && !(unsigned int)Spectre::Engine::RenderOutput::GetMustSetRTActiveSizeCounter(this) )
  {
    return 1;
  }
  MustSetRTActiveSizeCounter = Spectre::Engine::RenderOutput::GetMustSetRTActiveSizeCounter(this);
  if ( MustSetRTActiveSizeCounter > 0 )
    Spectre::Engine::RenderOutput::SetMustSetRTActiveSizeCounter(v6, MustSetRTActiveSizeCounter - 1);
  if ( Spectre::Engine::RenderOutput::SetRenderTargetDynamicScaling(this, a2, a3) )
  {
    (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 416LL))(this);
    return 1;
  }
  return 0;
}
