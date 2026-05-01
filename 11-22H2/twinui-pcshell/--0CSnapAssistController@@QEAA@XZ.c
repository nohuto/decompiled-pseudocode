/*
 * XREFs of ??0CSnapAssistController@@QEAA@XZ @ 0x18010B168
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistController@@@Z @ 0x18010B0DC (--$MakeAndInitialize@VCSnapAssistController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssist.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCSnapAssistControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18010B1E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCSnapAssistControllerBase@@@WRL@Micro.c)
 */

CSnapAssistController *__fastcall CSnapAssistController::CSnapAssistController(CSnapAssistController *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>();
  *(_QWORD *)this = &CSnapAssistController::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSnapAssistController::`vftable'{for `ISnapAssistController'};
  *((_QWORD *)this + 2) = &CSnapAssistController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 3) = &CSnapAssistController::`vftable'{for `ISnapAssistCallback'};
  *((_QWORD *)this + 4) = &CSnapAssistController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 5) = &CSnapAssistController::`vftable'{for `Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2'};
  *((_QWORD *)this + 6) = &CSnapAssistController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 41) = &CSnapAssistController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CSnapAssistControllerBase>,IWeakReferenceSource>'};
  return this;
}
