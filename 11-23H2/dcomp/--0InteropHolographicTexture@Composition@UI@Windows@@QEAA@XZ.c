/*
 * XREFs of ??0InteropHolographicTexture@Composition@UI@Windows@@QEAA@XZ @ 0x18015B4AC
 * Callers:
 *     ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAXAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX2@Z @ 0x18015B094 (--$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@PEAVInteropDwmCom.c)
 *     ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F640 (--$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropHolographicTexture *__fastcall Windows::UI::Composition::InteropHolographicTexture::InteropHolographicTexture(
        Windows::UI::Composition::InteropHolographicTexture *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::InteropRemoteAppRenderTarget::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::InteropHolographicTexture::Partner::`vftable';
  return this;
}
