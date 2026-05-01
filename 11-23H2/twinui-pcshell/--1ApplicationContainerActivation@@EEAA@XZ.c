/*
 * XREFs of ??1ApplicationContainerActivation@@EEAA@XZ @ 0x18062F3BC
 * Callers:
 *     ??_GApplicationContainerActivation@@EEAAPEAXI@Z @ 0x18062F630 (--_GApplicationContainerActivation@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplicationContainerActivation::~ApplicationContainerActivation(__int64 this)
{
  *(_QWORD *)this = &ApplicationContainerActivation::`vftable';
  *(_QWORD *)(this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ApplicationModel::Activation::ContainerActivation::IApplicationHostContainerActivation,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ApplicationModel::Activation::ContainerActivation::IApplicationHostContainerActivation,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>(this);
}
