/*
 * XREFs of ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80
 * Callers:
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WBCBI@EAAXXZ @ 0x18009FB20 (-Reset@CommandListState@Engine@Spectre@@WBCBI@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WCECI@EAAXXZ @ 0x18009FB40 (-Reset@CommandListState@Engine@Spectre@@WCECI@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WCFOI@EAAXXZ @ 0x18009FB60 (-Reset@CommandListState@Engine@Spectre@@WCFOI@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WCGDA@EAAXXZ @ 0x18009FB80 (-Reset@CommandListState@Engine@Spectre@@WCGDA@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WCGHI@EAAXXZ @ 0x18009FBA0 (-Reset@CommandListState@Engine@Spectre@@WCGHI@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WDIII@EAAXXZ @ 0x18009FBC0 (-Reset@CommandListState@Engine@Spectre@@WDIII@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WDIMI@EAAXXZ @ 0x18009FBE0 (-Reset@CommandListState@Engine@Spectre@@WDIMI@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WDJCA@EAAXXZ @ 0x18009FC00 (-Reset@CommandListState@Engine@Spectre@@WDJCA@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WEA@EAAXXZ @ 0x18009FC20 (-Reset@CommandListState@Engine@Spectre@@WEA@EAAXXZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@WEII@EAAXXZ @ 0x18009FC40 (-Reset@CommandListState@Engine@Spectre@@WEII@EAAXXZ.c)
 * Callees:
 *     ?Reset@VertexLayoutState@Engine@Spectre@@UEAAXXZ @ 0x18009D8E0 (-Reset@VertexLayoutState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@ShaderState@Engine@Spectre@@UEAAXXZ @ 0x18009DAB0 (-Reset@ShaderState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@ConstantBufferState@Engine@Spectre@@UEAAXXZ @ 0x18009DD70 (-Reset@ConstantBufferState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@TextureState@Engine@Spectre@@UEAAXXZ @ 0x18009E110 (-Reset@TextureState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@SamplerState@Engine@Spectre@@UEAAXXZ @ 0x18009E460 (-Reset@SamplerState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@VertexBufferState@Engine@Spectre@@UEAAXXZ @ 0x18009E840 (-Reset@VertexBufferState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@RenderStateState@Engine@Spectre@@UEAAXXZ @ 0x18009EB00 (-Reset@RenderStateState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@IndexBufferState@Engine@Spectre@@UEAAXXZ @ 0x18009ED40 (-Reset@IndexBufferState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@RenderTargetState@Engine@Spectre@@UEAAXXZ @ 0x18009F110 (-Reset@RenderTargetState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Reset@ViewportState@Engine@Spectre@@UEAAXXZ @ 0x18009F370 (-Reset@ViewportState@Engine@Spectre@@UEAAXXZ.c)
 */

void __fastcall Spectre::Engine::CommandListState::Reset(Spectre::Engine::CommandListState *this)
{
  Spectre::Engine::VertexLayoutState::Reset((Spectre::Engine::CommandListState *)((char *)this + 9776));
  Spectre::Engine::ShaderState::Reset(this);
  Spectre::Engine::ConstantBufferState::Reset((Spectre::Engine::CommandListState *)((char *)this + 1160));
  Spectre::Engine::VertexBufferState::Reset((Spectre::Engine::CommandListState *)((char *)this + 64));
  Spectre::Engine::TextureState::Reset((Spectre::Engine::CommandListState *)((char *)this + 4632));
  Spectre::Engine::RenderTargetState::Reset((Spectre::Engine::CommandListState *)((char *)this + 9256));
  Spectre::Engine::IndexBufferState::Reset((Spectre::Engine::CommandListState *)((char *)this + 9704));
  Spectre::Engine::SamplerState::Reset((Spectre::Engine::CommandListState *)((char *)this + 9848));
  Spectre::Engine::RenderStateState::Reset((Spectre::Engine::CommandListState *)((char *)this + 14472));
  Spectre::Engine::ViewportState::Reset((Spectre::Engine::CommandListState *)((char *)this + 14536));
  Spectre::Engine::ScissorState::Reset((Spectre::Engine::CommandListState *)((char *)this + 14624));
}
