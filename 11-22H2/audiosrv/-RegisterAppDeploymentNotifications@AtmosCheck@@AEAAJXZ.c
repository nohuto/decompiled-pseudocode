/*
 * XREFs of ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18005C7B8
 * Callers:
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x18005D864 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180034A10 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUpdatingEventArgs___Windows::ApplicationModel::IPackageUpdatingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_aa5001744ce94bbd4d4a1356ce3da641___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_aa5001744ce94bbd4d4a1356ce3da641___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___ @ 0x18005D1A8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18005D1A8.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs___Windows::ApplicationModel::IPackageUninstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_1df835b24497147b2d93aade403b0d0c___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_1df835b24497147b2d93aade403b0d0c___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___ @ 0x18005D230 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18005D230.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_365355403e96d7deb3da145a5ed01100___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_365355403e96d7deb3da145a5ed01100___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___ @ 0x18005D2B8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18005D2B8.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall AtmosCheck::RegisterAppDeploymentNotifications(AtmosCheck *this)
{
  HSTRING v2; // rbx
  AtmosCheck *v3; // rcx
  __int64 v4; // r9
  int ActivationFactory; // r15d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, char *); // rdi
  _QWORD *v8; // r12
  void *v9; // rax
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // rdi
  void *v13; // rax
  __int64 v14; // rsi
  AtmosCheck *v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18[5]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF

  v17 = 0LL;
  v18[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v18);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v17);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_5cc754cf_f82f_471b_ba04_1783588b7144, &v17);
  if ( ActivationFactory >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v18[1] = (__int64)this + 56;
    v6 = v17;
    v7 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 48LL);
    v8 = (_QWORD *)((char *)this + 48);
    Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)this + 6);
    ActivationFactory = v7(v6, (char *)this + 48);
    if ( ActivationFactory >= 0 )
    {
      v16 = this;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
      v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9 )
        v10 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::___Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_365355403e96d7deb3da145a5ed01100___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_365355403e96d7deb3da145a5ed01100___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___(
                v9,
                &v16);
      else
        v10 = 0LL;
      v18[2] = v10;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v16);
      v16 = this;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
      v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v11 )
        v12 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs___Windows::ApplicationModel::IPackageUninstallingEventArgs_____::___Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_1df835b24497147b2d93aade403b0d0c___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_1df835b24497147b2d93aade403b0d0c___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___(
                v11,
                &v16);
      else
        v12 = 0LL;
      v18[3] = v12;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v16);
      v16 = this;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
      v13 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v13 )
        v14 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUpdatingEventArgs___Windows::ApplicationModel::IPackageUpdatingEventArgs_____::___Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_aa5001744ce94bbd4d4a1356ce3da641___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_aa5001744ce94bbd4d4a1356ce3da641___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___(
                v13,
                &v16);
      else
        v14 = 0LL;
      v18[4] = v14;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v16);
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v8 + 64LL))(
                            *v8,
                            v10,
                            (char *)this + 144);
      if ( ActivationFactory < 0 )
      {
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      else
      {
        ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v8 + 96LL))(
                              *v8,
                              v12,
                              (char *)this + 152);
        if ( ActivationFactory < 0 )
        {
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        else
        {
          ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v8 + 80LL))(
                                *v8,
                                v14,
                                (char *)this + 160);
          if ( ActivationFactory < 0 )
          {
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          else
          {
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
        }
      }
    }
    if ( this != (AtmosCheck *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  }
  AtmosCheck::Trace(v3, "RegAppDepNotification result", (unsigned int)ActivationFactory, v4);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v18);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v17);
  return (unsigned int)ActivationFactory;
}
