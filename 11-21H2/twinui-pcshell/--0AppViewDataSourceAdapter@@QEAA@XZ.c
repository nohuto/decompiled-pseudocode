/*
 * XREFs of ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x18004F01C
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18005044C (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@A.c)
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@W4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@$$QEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180452C94 (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@W4DesktopSwitcherDataSourceScopeOptions@@AEAP.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18004EE94 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppVi.c)
 */

AppViewDataSourceAdapter *__fastcall AppViewDataSourceAdapter::AppViewDataSourceAdapter(AppViewDataSourceAdapter *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>(this);
  *((_DWORD *)this + 64) = 1;
  *(_QWORD *)this = &AppViewDataSourceAdapter::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &AppViewDataSourceAdapter::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification>'};
  *((_QWORD *)this + 23) = &AppViewDataSourceAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 24) = &AppViewDataSourceAdapter::`vftable'{for `IAppViewDataSourceAdapter'};
  *((_QWORD *)this + 25) = &AppViewDataSourceAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 31) = 0LL;
  *((_BYTE *)this + 260) = 1;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  return this;
}
