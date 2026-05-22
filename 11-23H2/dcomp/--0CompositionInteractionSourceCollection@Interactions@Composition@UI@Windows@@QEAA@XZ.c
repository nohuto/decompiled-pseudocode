/*
 * XREFs of ??0CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180135F70
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVInteractionTracker@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVInteractionTracker@4567@@Z @ 0x180134A34 (--$MakeAndInitialize2@VCompositionInteractionSourceCollection@Interactions@Composition@UI@Window.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *__fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::CompositionInteractionSourceCollection(
        Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::`vftable';
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::Api::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::ICompositionInteractionSource *>'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  return this;
}
