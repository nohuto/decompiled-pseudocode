/*
 * XREFs of ??1Compositor@Composition@UI@Windows@@MEAA@XZ @ 0x18003DDEC
 * Callers:
 *     ??_EInteropCompositor@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x18003C7E0 (--_EInteropCompositor@Composition@UI@Windows@@MEAAPEAXI@Z.c)
 *     ??_GCompositor@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x18003CF50 (--_GCompositor@Composition@UI@Windows@@MEAAPEAXI@Z.c)
 *     ??_GInteropDwmCompositor@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18010E4B0 (--_GInteropDwmCompositor@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Compositor::~Compositor(Windows::UI::Composition::Compositor *this)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((char *)this + 1192);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 1184);
  Windows::UI::Composition::CompositorCommon::~CompositorCommon(this);
}
