/*
 * XREFs of ??0?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIInspectable@@@1234@Upermission@01234@@Z @ 0x1800C6D7C
 * Callers:
 *     ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800C9350 (-GetStartDefaultPins@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScre.c)
 * Callees:
 *     ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x18002AD9C (--0ComLock@XWinRT@@QEAA@_N@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$IIterable@PEAUIInspectable@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18007D2FC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSou_ea_18007D2FC.c)
 *     ??0?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1800C6B34 (--0-$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>(
        __int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi

  Windows::Foundation::Collections::IVector<IInspectable *>::IVector<IInspectable *>();
  v3 = (_QWORD *)(v2 + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>(v2 + 8);
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<IInspectable *>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<IInspectable *>'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<IInspectable *>'};
  *v3 = &Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<IInspectable *>'};
  *(_QWORD *)(a1 + 24) = &Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  XWinRT::ComLock::ComLock((XWinRT::ComLock *)(a1 + 104), 1);
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  return a1;
}
