/*
 * XREFs of ??0?$SimpleVectorView@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@M@234@Upermission@01234@@Z @ 0x180170168
 * Callers:
 *     ?GetView@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IVectorView@M@Collections@Foundation@4@@Z @ 0x180170E30 (-GetView@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Compos.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 32) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<float>,Windows::Foundation::Collections::IIterable<float>>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<float>,Windows::Foundation::Collections::IIterable<float>>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<float>,Windows::Foundation::Collections::IIterable<float>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<float>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::Collections::Internal::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::Collections::Internal::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<float>>'};
  *(_QWORD *)(a1 + 40) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
