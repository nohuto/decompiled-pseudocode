/*
 * XREFs of ??0ApplicationContainerActivationPolicy@@QEAA@XZ @ 0x18062F0BC
 * Callers:
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18062DD04 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivati.c)
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180633940 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationCont_ea_180633940.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18062EE70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@UIServiceProvi.c)
 */

ApplicationContainerActivationPolicy *__fastcall ApplicationContainerActivationPolicy::ApplicationContainerActivationPolicy(
        ApplicationContainerActivationPolicy *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>((__int64)this);
  *((_BYTE *)this + 104) = 1;
  *(_QWORD *)this = &ApplicationContainerActivationPolicy::`vftable';
  *((_QWORD *)this + 5) = &ApplicationContainerActivationPolicy::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 6) = &ApplicationContainerActivationPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 7) = &ApplicationContainerActivationPolicy::`vftable'{for `ICreatedProcess'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_OWORD *)((char *)this + 108) = 0LL;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  return this;
}
