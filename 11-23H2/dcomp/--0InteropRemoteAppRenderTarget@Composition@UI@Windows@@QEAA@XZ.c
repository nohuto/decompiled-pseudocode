/*
 * XREFs of ??0InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18015B4EC
 * Callers:
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAXAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX2@Z @ 0x18015B238 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@PEAVInteropDwm.c)
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAPEAUHWND__@@AEBUtagRECT@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAPEAUHWND__@@AEBUtagRECT@@$$QEA_N@Z @ 0x18015F708 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInterop.c)
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F7E8 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@A_ea_18015F7E8.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropRemoteAppRenderTarget *__fastcall Windows::UI::Composition::InteropRemoteAppRenderTarget::InteropRemoteAppRenderTarget(
        Windows::UI::Composition::InteropRemoteAppRenderTarget *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::InteropRemoteAppRenderTarget::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::InteropRemoteAppRenderTarget::Partner::`vftable';
  return this;
}
