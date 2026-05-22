/*
 * XREFs of ??0CompositorCommon@Composition@UI@Windows@@IEAA@XZ @ 0x1800400D0
 * Callers:
 *     ??0Compositor@Composition@UI@Windows@@QEAA@XZ @ 0x18004000C (--0Compositor@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0BatchController@Composition@UI@Windows@@QEAA@XZ @ 0x180040368 (--0BatchController@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositorCommon *__fastcall Windows::UI::Composition::CompositorCommon::CompositorCommon(
        Windows::UI::Composition::CompositorCommon *this)
{
  Windows::UI::Composition::CompositorCommon *result; // rax

  Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(this);
  *(_QWORD *)this = &Microsoft::WRL2::ContextSession::`vftable';
  *((_BYTE *)this + 97) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 19) = &Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>::`vftable';
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositorCommon::Api::`vftable'{for `Windows::UI::Composition::ICompositor2'};
  *((_QWORD *)this + 21) = &Windows::UI::Composition::CompositorCommon::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositor4,Windows::UI::Composition::ICompositor5,Windows::UI::Composition::ICompositor6,Windows::UI::Composition::ICompositor7,Windows::UI::Composition::ICompositor8>'};
  *((_QWORD *)this + 22) = &Windows::UI::Composition::CompositorCommon::Api::`vftable'{for `Windows::UI::Composition::ICompositor5'};
  *((_QWORD *)this + 23) = &Windows::UI::Composition::CompositorCommon::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositor6,Windows::UI::Composition::ICompositor7,Windows::UI::Composition::ICompositor8>'};
  *((_QWORD *)this + 24) = &Windows::UI::Composition::CompositorCommon::Api::`vftable'{for `Windows::UI::Composition::ICompositor7'};
  *((_QWORD *)this + 25) = &Windows::UI::Composition::CompositorCommon::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositor8>'};
  *((_QWORD *)this + 27) = &Windows::UI::Composition::CompositorCommon::XUCPrivate::`vftable';
  *((_QWORD *)this + 29) = &Windows::UI::Composition::CompositorCommon::XUCPrivate2::`vftable';
  *((_QWORD *)this + 31) = &Windows::UI::Composition::CompositorCommon::Velocity_RadialGradient::`vftable';
  *((_QWORD *)this + 33) = &Windows::UI::Composition::CompositorCommon::VisualSurface::`vftable';
  *((_QWORD *)this + 35) = &Windows::UI::Composition::CompositorCommon::Native::`vftable';
  *((_QWORD *)this + 37) = &Windows::UI::Composition::CompositorCommon::Partner::`vftable';
  *((_QWORD *)this + 39) = &Windows::UI::Composition::CompositorCommon::Restricted::`vftable';
  *((_QWORD *)this + 41) = &Windows::UI::Composition::CompositorCommon::DCPrivate::`vftable';
  *((_QWORD *)this + 43) = &Windows::UI::Composition::CompositorCommon::VelocityPartnerProjectedShadow::`vftable';
  *((_QWORD *)this + 45) = &Windows::UI::Composition::CompositorCommon::Test::`vftable';
  *((_QWORD *)this + 47) = &Windows::UI::Composition::CompositorCommon::CaptureTest::`vftable';
  *((_QWORD *)this + 49) = &Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow::`vftable';
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 536),
    CGenericTableMap<Windows::UI::Composition::CompositionObject *,CWeakReferenceMappingEntry>::CompareTableData,
    CGenericTableMap<Windows::UI::Composition::CompositionObject *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyChangeIdsMapEntry>::FreeTableData,
    0LL);
  Windows::UI::Composition::BatchController::BatchController((Windows::UI::Composition::CompositorCommon *)((char *)this + 608));
  Windows::UI::Composition::BatchController::BatchController((Windows::UI::Composition::CompositorCommon *)((char *)this + 680));
  Windows::UI::Composition::BatchController::BatchController((Windows::UI::Composition::CompositorCommon *)((char *)this + 752));
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  result = this;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 1000;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  return result;
}
