/*
 * XREFs of ??0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ @ 0x180092678
 * Callers:
 *     ??$MakeAndInitialize2@VInteropRemoteRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@@Z @ 0x180091764 (--$MakeAndInitialize2@VInteropRemoteRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 *     ??$MakeAndInitialize2@VInteropLegacyRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropLegacyRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@3AEA_N@Z @ 0x180092574 (--$MakeAndInitialize2@VInteropLegacyRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 *     ??$MakeAndInitialize2@VInteropDDisplayRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAPEAXAEAIAEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@AEAI@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDDisplayRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAPEAXAEAIAEAU_LUID@@3AEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@3@Z @ 0x18015F500 (--$MakeAndInitialize2@VInteropDDisplayRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropC.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropRenderTarget *__fastcall Windows::UI::Composition::InteropRenderTarget::InteropRenderTarget(
        Windows::UI::Composition::InteropRenderTarget *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::InteropRemoteRenderTarget::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::InteropRenderTarget::Partner::`vftable';
  return this;
}
