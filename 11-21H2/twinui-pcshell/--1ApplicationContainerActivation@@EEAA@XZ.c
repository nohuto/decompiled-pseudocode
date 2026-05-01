/*
 * XREFs of ??1ApplicationContainerActivation@@EEAA@XZ @ 0x1805715E4
 * Callers:
 *     ??_GApplicationContainerActivation@@EEAAPEAXI@Z @ 0x180571810 (--_GApplicationContainerActivation@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplicationContainerActivation::~ApplicationContainerActivation(__int64 this)
{
  *(_QWORD *)this = &ApplicationContainerActivation::`vftable';
  *(_QWORD *)(this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ApplicationModel::Activation::ContainerActivation::IApplicationHostContainerActivation,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ApplicationModel::Activation::ContainerActivation::IApplicationHostContainerActivation,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>(this);
}
