/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@44PEAUITabViewManager@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180050608
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800507F8 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18002EC40 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180050580 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOption.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800506DC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourc.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x1801ADED4 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 */

// Hidden C++ exception states: #wind=2
__int64 AppViewDataSourceAdapter_CreateInstance(int a1, ...)
{
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v1; // rbx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h]
  struct IApplicationViewIconLoader *v5; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  struct IApplicationViewCollection *v8; // [rsp+58h] [rbp+10h] BYREF
  va_list va; // [rsp+58h] [rbp+10h]
  va_list va1; // [rsp+60h] [rbp+18h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  struct IImmersiveShellHookService *v12; // [rsp+68h] [rbp+20h] BYREF
  va_list va2; // [rsp+68h] [rbp+20h]
  __int64 v14; // [rsp+70h] [rbp+28h] BYREF
  va_list va3; // [rsp+70h] [rbp+28h]
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v16; // [rsp+78h] [rbp+30h] BYREF
  va_list va4; // [rsp+78h] [rbp+30h]
  __int64 v18; // [rsp+80h] [rbp+38h]
  __int64 v19; // [rsp+88h] [rbp+40h]
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v20; // [rsp+90h] [rbp+48h] BYREF
  va_list va5; // [rsp+90h] [rbp+48h]
  va_list va6; // [rsp+98h] [rbp+50h] BYREF

  va_start(va6, a1);
  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v8 = va_arg(va1, struct IApplicationViewCollection *);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, struct IImmersiveShellHookService *);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *);
  v18 = va_arg(va5, _QWORD);
  v19 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v20 = va_arg(va6, struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *);
  v7 = a1;
  v5 = 0LL;
  v1 = v20;
  *(_QWORD *)v20 = 0LL;
  wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(
    (struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **)va5,
    (__int64 *)va3);
  v16 = v20;
  wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *>(
    (__int64 *)va1,
    &v7,
    (struct IApplicationViewCollection **)va,
    &v5,
    (struct IImmersiveShellHookService **)va2,
    (struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **)va4);
  v2 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>>(
         v11,
         &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1,
         v1);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x209,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v2,
      v4);
  Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease((__int64 *)va1);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)va5);
  return 0LL;
}
