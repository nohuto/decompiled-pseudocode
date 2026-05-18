/*
 * XREFs of ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@WBCBI@EAAXPEAVCommandList@23@@Z @ 0x18009FD20 (-Set@CommandListState@Engine@Spectre@@WBCBI@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WCECI@EAAXPEAVCommandList@23@@Z @ 0x18009FD40 (-Set@CommandListState@Engine@Spectre@@WCECI@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WCFOI@EAAXPEAVCommandList@23@@Z @ 0x18009FD60 (-Set@CommandListState@Engine@Spectre@@WCFOI@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WCGDA@EAAXPEAVCommandList@23@@Z @ 0x18009FD80 (-Set@CommandListState@Engine@Spectre@@WCGDA@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WCGHI@EAAXPEAVCommandList@23@@Z @ 0x18009FDA0 (-Set@CommandListState@Engine@Spectre@@WCGHI@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WDIII@EAAXPEAVCommandList@23@@Z @ 0x18009FDC0 (-Set@CommandListState@Engine@Spectre@@WDIII@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WDIMI@EAAXPEAVCommandList@23@@Z @ 0x18009FDE0 (-Set@CommandListState@Engine@Spectre@@WDIMI@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WDJCA@EAAXPEAVCommandList@23@@Z @ 0x18009FE00 (-Set@CommandListState@Engine@Spectre@@WDJCA@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WEA@EAAXPEAVCommandList@23@@Z @ 0x18009FE20 (-Set@CommandListState@Engine@Spectre@@WEA@EAAXPEAVCommandList@23@@Z.c)
 *     ?Set@CommandListState@Engine@Spectre@@WEII@EAAXPEAVCommandList@23@@Z @ 0x18009FE40 (-Set@CommandListState@Engine@Spectre@@WEII@EAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ?Set@VertexLayoutState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009D910 (-Set@VertexLayoutState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@ShaderState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009DAD0 (-Set@ShaderState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@ConstantBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009DDD0 (-Set@ConstantBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@TextureState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E170 (-Set@TextureState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@SamplerState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E4C0 (-Set@SamplerState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@VertexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E900 (-Set@VertexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@IndexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009ED70 (-Set@IndexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@RenderTargetState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F160 (-Set@RenderTargetState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@ViewportState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F390 (-Set@ViewportState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@ScissorState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F520 (-Set@ScissorState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 */

void __fastcall Spectre::Engine::CommandListState::Set(
        Spectre::Engine::CommandListState *this,
        struct Spectre::Engine::CommandList *a2)
{
  Spectre::Engine::RenderTargetState::Set((Spectre::Engine::CommandListState *)((char *)this + 9256), a2);
  Spectre::Engine::ViewportState::Set((Spectre::Engine::CommandListState *)((char *)this + 14536), a2);
  Spectre::Engine::ScissorState::Set((Spectre::Engine::CommandListState *)((char *)this + 14624), a2);
  Spectre::Engine::VertexLayoutState::Set((Spectre::Engine::CommandListState *)((char *)this + 9776), a2);
  Spectre::Engine::ShaderState::Set(this, a2);
  Spectre::Engine::ConstantBufferState::Set((Spectre::Engine::CommandListState *)((char *)this + 1160), a2);
  Spectre::Engine::VertexBufferState::Set((Spectre::Engine::CommandListState *)((char *)this + 64), a2);
  Spectre::Engine::TextureState::Set((Spectre::Engine::CommandListState *)((char *)this + 4632), a2);
  Spectre::Engine::IndexBufferState::Set((Spectre::Engine::CommandListState *)((char *)this + 9704), a2);
  Spectre::Engine::SamplerState::Set((Spectre::Engine::CommandListState *)((char *)this + 9848), a2);
  Spectre::Engine::RenderStateState::Set((Spectre::Engine::CommandListState *)((char *)this + 14472), a2);
}
