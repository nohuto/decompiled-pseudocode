/*
 * XREFs of ??0StartupTaskActivatedEventArgsImpl@@QEAA@XZ @ 0x1805713C8
 * Callers:
 *     ??$MakeAndInitialize@VStartupTaskActivatedEventArgsImpl@@V1@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVStartupTaskActivatedEventArgsImpl@@$$QEAPEAUHSTRING__@@@Z @ 0x18056FD00 (--$MakeAndInitialize@VStartupTaskActivatedEventArgsImpl@@V1@PEAUHSTRING__@@@Details@WRL@Microsof.c)
 * Callees:
 *     ??0?$RuntimeClass@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18057119C (--0-$RuntimeClass@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@Applicati.c)
 */

StartupTaskActivatedEventArgsImpl *__fastcall StartupTaskActivatedEventArgsImpl::StartupTaskActivatedEventArgsImpl(
        StartupTaskActivatedEventArgsImpl *this)
{
  Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>(this);
  *((_QWORD *)this + 23) = &CThreadRefTaker::`vftable';
  *((_QWORD *)this + 24) = 0LL;
  SHGetThreadRef((IUnknown **)this + 24);
  *(_QWORD *)this = &StartupTaskActivatedEventArgsImpl::`vftable'{for `Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>'};
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 1) = &StartupTaskActivatedEventArgsImpl::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 2) = &StartupTaskActivatedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &StartupTaskActivatedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 4) = &StartupTaskActivatedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 19) = &StartupTaskActivatedEventArgsImpl::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 20) = &StartupTaskActivatedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>'};
  *((_QWORD *)this + 23) = &StartupTaskActivatedEventArgsImpl::`vftable'{for `CThreadRefTaker'};
  return this;
}
