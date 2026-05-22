/*
 * XREFs of ??0?$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@234@Upermission@01234@@Z @ 0x1801A0690
 * Callers:
 *     ?Make@?$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@345@PEAPEAV12345@@Z @ 0x1801A137C (-Make@-$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U-$IVector@PEAVComposi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$AtomicUpdater@$0A@@detail@XWinRT@@QEAA@XZ @ 0x180140F7C (--0-$AtomicUpdater@$0A@@detail@XWinRT@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::SimpleVectorIterator<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::UI::Composition::CompositionShape *>>::`vftable'{for `Windows::Foundation::Collections::IIterator<Windows::UI::Composition::CompositionShape *>'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::UI::Composition::CompositionShape *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::`vftable'{for `Windows::Foundation::Collections::IIterator<Windows::UI::Composition::CompositionShape *>'};
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  *(_QWORD *)(a1 + 32) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  XWinRT::detail::AtomicUpdater<0>::AtomicUpdater<0>((char *)(a1 + 56));
  return a1;
}
