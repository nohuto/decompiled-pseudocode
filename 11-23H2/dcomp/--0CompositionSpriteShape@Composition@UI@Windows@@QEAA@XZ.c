/*
 * XREFs of ??0CompositionSpriteShape@Composition@UI@Windows@@QEAA@XZ @ 0x18005B138
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSpriteShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSpriteShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005B054 (--$MakeAndInitialize2@VCompositionSpriteShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::CompositionSpriteShape *__fastcall Windows::UI::Composition::CompositionSpriteShape::CompositionSpriteShape(
        Windows::UI::Composition::CompositionSpriteShape *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
  *((_DWORD *)this + 4) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
  *((_QWORD *)this + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
  *((_QWORD *)this + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
  *((_QWORD *)this + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
  *((_QWORD *)this + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
  *((_QWORD *)this + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
  *((_QWORD *)this + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
  *((_QWORD *)this + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionShape::Api::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_BYTE *)this + 176) &= 0xFCu;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::CompositionSpriteShape::`vftable'{for `Windows::UI::Composition::CompositionShape'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionSpriteShape::`vftable'{for `DirectComposition::CRebuildableObject'};
  *((_QWORD *)this + 24) = &Windows::UI::Composition::CompositionSpriteShape::Api::`vftable';
  return this;
}
