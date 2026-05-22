/*
 * XREFs of ??0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FC0C
 * Callers:
 *     ??$MakeAndInitialize2@VExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUHSTRING__@@@Details@WRL2@Microsoft@@YAJPEAPEAVExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUHSTRING__@@@Z @ 0x18005EA68 (--$MakeAndInitialize2@VExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAP.c)
 *     ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z @ 0x18005F160 (-CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 * Callees:
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::ExpressionAnimation *__fastcall Windows::UI::Composition::ExpressionAnimation::ExpressionAnimation(
        Windows::UI::Composition::ExpressionAnimation *this)
{
  Windows::UI::Composition::ExpressionAnimation *result; // rax

  *(_QWORD *)this = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 1) = 0LL;
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
  *((_BYTE *)this + 336) &= 0xFCu;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 85) = 0;
  *(_QWORD *)this = &Windows::UI::Composition::ExpressionAnimation::`vftable';
  *((_QWORD *)this + 43) = &Windows::UI::Composition::ExpressionAnimation::Api::`vftable';
  *((_QWORD *)this + 46) = this;
  *((_QWORD *)this + 47) = (char *)this + 408;
  *((_QWORD *)this + 48) = (char *)this + 408;
  *((_DWORD *)this + 98) = 4;
  *(_QWORD *)((char *)this + 396) = 4LL;
  *((_QWORD *)this + 55) = (char *)this + 472;
  *((_QWORD *)this + 56) = (char *)this + 472;
  *((_DWORD *)this + 114) = 1;
  *(_QWORD *)((char *)this + 460) = 1LL;
  *((_QWORD *)this + 60) = (char *)this + 512;
  *((_QWORD *)this + 61) = (char *)this + 512;
  *((_DWORD *)this + 124) = 1;
  *(_QWORD *)((char *)this + 500) = 1LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = (char *)this + 616;
  *((_QWORD *)this + 74) = (char *)this + 616;
  *((_DWORD *)this + 150) = 1;
  *(_QWORD *)((char *)this + 604) = 1LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_DWORD *)this + 244) = 0;
  Windows::UI::Composition::ExpressionAnimationBuilder::Reset((Windows::UI::Composition::ExpressionAnimation *)((char *)this + 360));
  *((_QWORD *)this + 125) = 1LL;
  result = this;
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  return result;
}
