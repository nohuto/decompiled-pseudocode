/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUpdatingEventArgs___Windows::ApplicationModel::IPackageUpdatingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_584c7311ea728c54c4a47fc057f19078___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_584c7311ea728c54c4a47fc057f19078___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___ @ 0x18005846C
 * Callers:
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180058158 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUpdatingEventArgs___Windows::ApplicationModel::IPackageUpdatingEventArgs_____::___Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_584c7311ea728c54c4a47fc057f19078___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_584c7311ea728c54c4a47fc057f19078___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUpdatingEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUpdatingEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = off_18016A9C0;
  return a1;
}
