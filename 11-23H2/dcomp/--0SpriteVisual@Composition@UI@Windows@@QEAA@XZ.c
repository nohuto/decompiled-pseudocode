/*
 * XREFs of ??0SpriteVisual@Composition@UI@Windows@@QEAA@XZ @ 0x180015DDC
 * Callers:
 *     ??$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpriteVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015D30 (--$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details.c)
 * Callees:
 *     ??0ContainerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CFEC (--0ContainerVisual@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::SpriteVisual *__fastcall Windows::UI::Composition::SpriteVisual::SpriteVisual(
        Windows::UI::Composition::SpriteVisual *this)
{
  Windows::UI::Composition::ContainerVisual::ContainerVisual(this);
  *(_QWORD *)this = &Windows::UI::Composition::SpriteVisual::`vftable';
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 39) = &Windows::UI::Composition::SpriteVisual::Api::`vftable'{for `Windows::UI::Composition::ISpriteVisual'};
  *((_QWORD *)this + 40) = &Windows::UI::Composition::SpriteVisual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ISpriteVisual2>'};
  return this;
}
