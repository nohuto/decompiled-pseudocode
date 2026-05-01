/*
 * XREFs of ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18007CAB0
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x180081080 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIApplicationViewIconLoader@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewIconLoader@@@Z @ 0x18007CBAC (--4-$com_ptr_t@UIApplicationViewIconLoader@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApp.c)
 *     ??4?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewCollection@@@Z @ 0x18007CBE8 (--4-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApp.c)
 *     ??$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18007EFF0 (--$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@.c)
 *     ??$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18007F07C (--$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA.c)
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18007F2A8 (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x18078F2AC (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewDataSourceAdapterBase::InitializeDataSource(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewIconLoader *a3,
        struct IImmersiveShellHookService *a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a5)
{
  __int64 *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v9 = (__int64 *)wil::ActivateInstance<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSink>(&v21);
  v10 = *v9;
  *v9 = 0LL;
  v11 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator=((char *)this + 32, a2);
  wil::com_ptr_t<IApplicationViewIconLoader,wil::err_exception_policy>::operator=((char *)this + 40, a3);
  v12 = *((_QWORD *)this + 7);
  v13 = a5;
  *((_QWORD *)this + 7) = a5;
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)v13 + 8LL))(v13);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v14 = (__int64 *)wil::GetActivationFactory<Windows::Internal::Shell::Multitasking::Desktop::IDesktopIconFactoryStatics>(&a5);
  v15 = *v14;
  *v14 = 0LL;
  v16 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v15;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&a5);
  v17 = AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Register(
          (char *)this + 64,
          *((_QWORD *)this + 4));
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA8,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v17,
      v19);
  if ( a4 )
  {
    v18 = AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Register(
            (char *)this + 80,
            a4);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAD,
        (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v18,
        v19);
  }
}
