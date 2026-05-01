/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@4PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180080A08
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076D520 (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18005FF2C (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180080B0C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourc.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180080C2C (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOption.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x18028DE04 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 *     ??$convert_from_abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@wil@@YA?AUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18078DF70 (--$convert_from_abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@wil@@YA-AUIWindowTabE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 AppViewDataSourceAdapter_CreateInstance(int a1, ...)
{
  _QWORD *v1; // rbx
  int v2; // eax
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-48h]
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+78h] [rbp+10h]
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  va_list va1; // [rsp+80h] [rbp+18h]
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF
  va_list va2; // [rsp+88h] [rbp+20h]
  __int64 v17; // [rsp+90h] [rbp+28h] BYREF
  va_list va3; // [rsp+90h] [rbp+28h]
  __int64 v19; // [rsp+98h] [rbp+30h]
  _QWORD *v20; // [rsp+A0h] [rbp+38h] BYREF
  va_list va4; // [rsp+A0h] [rbp+38h]
  va_list va5; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v15 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v17 = va_arg(va4, _QWORD);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD *);
  v10 = a1;
  v1 = v20;
  *v20 = 0LL;
  wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(
    v8,
    (__int64 *)va3);
  v20 = 0LL;
  if ( v19 )
  {
    v4 = wil::convert_from_abi<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>(&v6);
    winrt::Windows::Foundation::IUnknown::operator=((_QWORD **)va4, v4);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  v6 = v8[0];
  wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,winrt::Windows::Internal::UI::Shell::IWindowTabExtension &>(
    (unsigned int)&v7,
    (unsigned int)&v10,
    (unsigned int)va,
    (unsigned int)va1,
    (unsigned int)va2,
    (__int64)&v6,
    (__int64)va4);
  v2 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>>(
         v7,
         &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1,
         v1);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x21B,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v2,
      v5);
  Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&v7);
  if ( v20 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)va4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
  return 0LL;
}
