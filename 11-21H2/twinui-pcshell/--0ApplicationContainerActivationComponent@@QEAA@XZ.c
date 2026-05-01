/*
 * XREFs of ??0ApplicationContainerActivationComponent@@QEAA@XZ @ 0x1805712D4
 * Callers:
 *     ??$MakeAndInitialize@VApplicationContainerActivationComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18056FB88 (--$MakeAndInitialize@VApplicationContainerActivationComponent@@UIUnknown@@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIApplicationContainerActivationComponent@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180571010 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_180571010.c)
 */

ApplicationContainerActivationComponent *__fastcall ApplicationContainerActivationComponent::ApplicationContainerActivationComponent(
        ApplicationContainerActivationComponent *this)
{
  ApplicationContainerActivationComponent *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IApplicationContainerActivationComponent,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IApplicationContainerActivationComponent,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &ApplicationContainerActivationComponent::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IPrivilegedOperationsConsumer,IApplicationContainerActivationComponent,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 5) = &ApplicationContainerActivationComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IApplicationContainerActivationComponent,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &ApplicationContainerActivationComponent::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer,IApplicationContainerActivationComponent,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IPrivilegedOperationsConsumer,IApplicationContainerActivationComponent,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 14) = &ApplicationContainerActivationComponent::`vftable'{for `IApplicationContainerActivationComponent'};
  *((_QWORD *)this + 15) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IApplicationContainerActivationComponent,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  return result;
}
