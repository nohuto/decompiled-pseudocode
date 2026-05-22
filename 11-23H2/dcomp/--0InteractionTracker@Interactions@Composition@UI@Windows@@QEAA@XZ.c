/*
 * XREFs of ??0InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180135FD4
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA$$T@Z @ 0x180134AF8 (--$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompos.c)
 *     ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAUIInteractionTrackerOwner@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAUIInteractionTrackerOwner@4567@@Z @ 0x180134BB8 (--$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V123_ea_180134BB8.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800E3E84 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

Windows::UI::Composition::Interactions::InteractionTracker *__fastcall Windows::UI::Composition::Interactions::InteractionTracker::InteractionTracker(
        Windows::UI::Composition::Interactions::InteractionTracker *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::InteractionTracker::`vftable';
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Interactions::InteractionTracker::Api::`vftable';
  *((_QWORD *)this + 18) = &Windows::UI::Composition::Interactions::InteractionTracker::Api::`vftable'{for `Windows::UI::Composition::Interactions::IInteractionTracker2'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Interactions::InteractionTracker::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Interactions::IInteractionTracker3,Windows::UI::Composition::Interactions::IInteractionTracker4,Windows::UI::Composition::Interactions::IInteractionTracker5>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::Interactions::InteractionTracker::Api::`vftable'{for `Windows::UI::Composition::Interactions::IInteractionTracker4'};
  *((_QWORD *)this + 21) = &Windows::UI::Composition::Interactions::InteractionTracker::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Interactions::IInteractionTracker5>'};
  *((_QWORD *)this + 23) = &Windows::UI::Composition::Interactions::InteractionTracker::Test::`vftable';
  *((_BYTE *)this + 316) = 0;
  *((_BYTE *)this + 324) = 0;
  `vector constructor iterator'(
    (char *)this + 344,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
  *((_QWORD *)this + 47) = 0LL;
  `vector constructor iterator'(
    (char *)this + 384,
    8LL,
    3LL,
    (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
  return this;
}
