/*
 * XREFs of ??0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005EFE4
 * Callers:
 *     ??$MakeAndInitialize2@VVector2KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVector2KeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005EE60 (--$MakeAndInitialize2@VVector2KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x18011C3EC (--$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVComposit.c)
 *     ??$MakeAndInitialize2@VInjectionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInjectionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180120EDC (--$MakeAndInitialize2@VInjectionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Deta.c)
 *     ??0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122AE8 (--0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::CompositionAnimation *__fastcall Windows::UI::Composition::CompositionAnimation::CompositionAnimation(
        Windows::UI::Composition::CompositionAnimation *this)
{
  Windows::UI::Composition::CompositionAnimation *result; // rax

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
  result = this;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_BYTE *)this + 336) &= 0xFCu;
  *((_DWORD *)this + 85) = 0;
  return result;
}
