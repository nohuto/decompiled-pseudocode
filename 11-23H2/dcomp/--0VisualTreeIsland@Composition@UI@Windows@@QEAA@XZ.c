/*
 * XREFs of ??0VisualTreeIsland@Composition@UI@Windows@@QEAA@XZ @ 0x18006C4C4
 * Callers:
 *     ??$MakeAndInitialize2@VVisualTreeIsland@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTreeIsland@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006C420 (--$MakeAndInitialize2@VVisualTreeIsland@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Detail.c)
 * Callees:
 *     ??0CompositionIsland@Composition@UI@Windows@@QEAA@XZ @ 0x18006C534 (--0CompositionIsland@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::VisualTreeIsland *__fastcall Windows::UI::Composition::VisualTreeIsland::VisualTreeIsland(
        Windows::UI::Composition::VisualTreeIsland *this)
{
  Windows::UI::Composition::CompositionIsland::CompositionIsland(this);
  *(_QWORD *)this = &Windows::UI::Composition::VisualTreeIsland::`vftable';
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 61) = &Windows::UI::Composition::VisualTreeIsland::Api::`vftable';
  *((_QWORD *)this + 63) = &Windows::UI::Composition::VisualTreeIsland::Partner::`vftable'{for `Windows::UI::Composition::Private::IVisualTreeIslandPartner'};
  *((_QWORD *)this + 64) = &Windows::UI::Composition::VisualTreeIsland::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::IVisualTreeIslandDesktopPartner>'};
  *((_QWORD *)this + 66) = &Windows::UI::Composition::VisualTreeIsland::Private::`vftable';
  return this;
}
