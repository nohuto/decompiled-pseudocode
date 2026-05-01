/*
 * XREFs of _lambda_2da415b89f76c27a0f54e8c02bb30f50_::operator() @ 0x1802584D8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageInstallingEventArgs___lambda_2da415b89f76c27a0f54e8c02bb30f50___::Invoke @ 0x180258730 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180258730.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7F8 (-Id@-$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AA170 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c6ba9d0e3b7f29cae293d336d79dd692___ @ 0x180258400 (Windows--Internal--ComTaskPool--QueueTask__lambda_c6ba9d0e3b7f29cae293d336d79dd692___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsComplete@?$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806E2DC4 (-IsComplete@-$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEv.c)
 *     ?Package@?$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806E32BC (-Package@-$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEvent.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_2da415b89f76c27a0f54e8c02bb30f50_::operator()(
        __int64 *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // esi
  void *v12; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  if ( (unsigned __int8)winrt::impl::consume_Windows_ApplicationModel_IPackageInstallingEventArgs<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs>::IsComplete(a3) )
  {
    v6 = (__int64 *)winrt::impl::consume_Windows_ApplicationModel_IPackageInstallingEventArgs<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs>::Package(
                      a3,
                      v13);
    v7 = winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(
           v6,
           &v15);
    winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
      v7,
      &v12);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v15);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v13);
    if ( (unsigned __int8)winrt::operator==((__int64)&v12, (__int64)&unk_18098F1F0, v8) )
    {
      v9 = *a1;
      v15 = v9;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v15);
      v15 = v9;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v15);
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_c6ba9d0e3b7f29cae293d336d79dd692___(
              v10,
              (volatile signed __int32 *)&v15);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
          (const char *)(unsigned int)v11);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    winrt::hstring::~hstring(&v12);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
}
