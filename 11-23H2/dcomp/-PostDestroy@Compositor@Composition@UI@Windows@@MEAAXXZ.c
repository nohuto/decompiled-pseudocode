/*
 * XREFs of ?PostDestroy@Compositor@Composition@UI@Windows@@MEAAXXZ @ 0x18001C650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Compositor::PostDestroy(Windows::UI::Composition::Compositor *this)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((char *)this + 1192);
  Windows::UI::Composition::CompositorCommon::PostDestroy(this);
}
