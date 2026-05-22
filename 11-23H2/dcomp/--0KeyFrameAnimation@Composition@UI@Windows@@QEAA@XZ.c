/*
 * XREFs of ??0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FA38
 * Callers:
 *     ??$MakeAndInitialize2@VBooleanKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBooleanKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005E8D0 (--$MakeAndInitialize2@VBooleanKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??$MakeAndInitialize2@VColorKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVColorKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005EBC0 (--$MakeAndInitialize2@VColorKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ??$MakeAndInitialize2@VVector3KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVector3KeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180060DB0 (--$MakeAndInitialize2@VVector3KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??$MakeAndInitialize2@VQuaternionKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVQuaternionKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121314 (--$MakeAndInitialize2@VQuaternionKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@.c)
 *     ??$MakeAndInitialize2@VVector4KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVector4KeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121D34 (--$MakeAndInitialize2@VVector4KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??0PathKeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122B2C (--0PathKeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::KeyFrameAnimation *__fastcall Windows::UI::Composition::KeyFrameAnimation::KeyFrameAnimation(
        Windows::UI::Composition::KeyFrameAnimation *this)
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
  *(_QWORD *)this = &Windows::UI::Composition::CompositionAnimation::`vftable';
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimation'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionAnimation2,Windows::UI::Composition::ICompositionAnimation3,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimation3'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimationBase'};
  *((_QWORD *)this + 21) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionAnimationBaseInternal>'};
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 192),
    CGenericTableMap<HSTRING__ *,ParameterEntry>::CompareTableData,
    CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::AllocTableData,
    CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyMapEntry>::FreeTableData,
    0LL);
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_BYTE *)this + 336) &= 0xFCu;
  *((_DWORD *)this + 85) = 0;
  *(_QWORD *)this = &Windows::UI::Composition::KeyFrameAnimation::`vftable';
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 43) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable';
  *((_QWORD *)this + 44) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable'{for `Windows::UI::Composition::IKeyFrameAnimation2'};
  *((_QWORD *)this + 45) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IKeyFrameAnimation3>'};
  *((_QWORD *)this + 47) = &Windows::UI::Composition::KeyFrameAnimation::Partner::`vftable';
  *((_QWORD *)this + 49) = &Windows::UI::Composition::KeyFrameAnimation::Internal::`vftable'{for `Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal'};
  *((_QWORD *)this + 50) = &Windows::UI::Composition::KeyFrameAnimation::Internal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Internal::IKeyFrameAnimationInternal>'};
  return this;
}
