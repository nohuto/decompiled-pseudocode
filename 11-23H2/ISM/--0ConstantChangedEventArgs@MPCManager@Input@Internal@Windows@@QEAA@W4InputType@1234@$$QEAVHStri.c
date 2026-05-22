/*
 * XREFs of ??0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@4@2@Z @ 0x180183AC8
 * Callers:
 *     ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x180189EC0 (-OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800BA464 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIPropertyValue@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1801839D8 (--0-$com_ptr_t@UIPropertyValue@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPr.c)
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::ConstantChangedEventArgs(
        __int64 a1,
        int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v9; // rsi

  v9 = (_QWORD *)(a1 + 16);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 72) = *a3;
  *a3 = 0LL;
  wil::com_ptr_t<Windows::Foundation::IPropertyValue,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::IPropertyValue,wil::err_exception_policy>(
    (_QWORD *)(a1 + 80),
    a4);
  wil::com_ptr_t<Windows::Foundation::IPropertyValue,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::IPropertyValue,wil::err_exception_policy>(
    (_QWORD *)(a1 + 88),
    a5);
  return a1;
}
