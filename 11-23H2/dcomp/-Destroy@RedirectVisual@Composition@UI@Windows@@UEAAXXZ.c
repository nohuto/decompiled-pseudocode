/*
 * XREFs of ?Destroy@RedirectVisual@Composition@UI@Windows@@UEAAXXZ @ 0x18016F280
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSource@RedirectVisual@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18016F2A4 (-SetSource@RedirectVisual@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::RedirectVisual::Destroy(Windows::UI::Composition::RedirectVisual *this)
{
  Windows::UI::Composition::RedirectVisual::SetSource(this, 0LL);
  Windows::UI::Composition::Visual::Destroy(this);
}
