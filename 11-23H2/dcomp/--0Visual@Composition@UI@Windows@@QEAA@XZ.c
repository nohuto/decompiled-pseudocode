/*
 * XREFs of ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570
 * Callers:
 *     ??0ShapeVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D430 (--0ShapeVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0InteropVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005E298 (--0InteropVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0ContainerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CFEC (--0ContainerVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x180086A74 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180111584 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE.c)
 *     ??0DelegatedInkTrailVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18011B054 (--0DelegatedInkTrailVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180121E0C (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TY.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121EE4 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MI_ea_180121EE4.c)
 *     ??$MakeAndInitialize2@VInteropCursorVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCursorVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEA_K@Z @ 0x18015BFA4 (--$MakeAndInitialize2@VInteropCursorVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall Windows::UI::Composition::Visual::Visual(unsigned __int64 this)
{
  unsigned __int64 result; // rax

  *(_QWORD *)(this + 8) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
  *(_DWORD *)(this + 16) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(this + 40) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
  *(_QWORD *)(this + 48) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
  *(_QWORD *)(this + 56) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
  *(_QWORD *)(this + 64) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
  *(_QWORD *)(this + 72) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
  *(_QWORD *)(this + 80) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
  *(_QWORD *)(this + 96) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
  *(_QWORD *)(this + 112) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *(_QWORD *)(this + 160) = this & -(__int64)(this != -136LL);
  *(_QWORD *)this = &Windows::UI::Composition::Visual::`vftable';
  *(_QWORD *)(this + 168) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Windows::UI::Composition::IVisual'};
  *(_QWORD *)(this + 176) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisual2,Windows::UI::Composition::IVisual3,Windows::UI::Composition::IVisual4>'};
  *(_QWORD *)(this + 184) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Windows::UI::Composition::IVisual3'};
  *(_QWORD *)(this + 192) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisual4>'};
  *(_QWORD *)(this + 208) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Windows::UI::Composition::ICompositionNotifyPropertyChangedPartner'};
  *(_QWORD *)(this + 216) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisualPartner,Windows::UI::Composition::Internal::IVisualInternal,Windows::UI::Composition::Private::IVisualPrivate>'};
  *(_QWORD *)(this + 224) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Windows::UI::Composition::Internal::IVisualInternal'};
  *(_QWORD *)(this + 232) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::IVisualPrivate>'};
  result = this;
  *(_QWORD *)(this + 288) = 0LL;
  return result;
}
