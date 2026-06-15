/*
 * XREFs of ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180034B20
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_365355403e96d7deb3da145a5ed01100___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::Invoke @ 0x1800348D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     _lambda_1df835b24497147b2d93aade403b0d0c_::operator() @ 0x18004A6F0 (_lambda_1df835b24497147b2d93aade403b0d0c_--operator().c)
 *     _lambda_aa5001744ce94bbd4d4a1356ce3da641_::operator() @ 0x18015A4AC (_lambda_aa5001744ce94bbd4d4a1356ce3da641_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall AtmosCheck::IsUsefulPackage(AtmosCheck *this, struct Windows::ApplicationModel::IPackage *a2)
{
  int (__fastcall *v3)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *); // rdi
  __int64 v4; // rcx
  __int64 v6; // rcx
  struct Windows::ApplicationModel::IPackage *v7; // [rsp+20h] [rbp-28h] BYREF
  AtmosCheck *v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v8 = this;
  v7 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *))(*(_QWORD *)a2 + 8LL))(a2);
  v11 = 0LL;
  LOBYTE(v8) = 0;
  v9 = 0;
  v10 = 0;
  (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *, AtmosCheck **))(*(_QWORD *)a2 + 64LL))(a2, &v8);
  v3 = **(int (__fastcall ***)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *))a2;
  v4 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v3(a2, &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01, &v11) >= 0 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 88LL))(v11, &v9);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 80LL))(v11, &v10);
  }
  if ( (_BYTE)v8 || v10 || v9 )
  {
    v6 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *))(*(_QWORD *)a2 + 16LL))(a2);
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v7);
    return 1;
  }
}
