/*
 * XREFs of ??0?$RuntimeClass@U?$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@234@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B162C
 * Callers:
 *     ??0?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultHash@W4WindowPosition@ContentManagement@@@1234@AEBU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@1234@Upermission@01234@@Z @ 0x1800B13B8 (--0-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@ContentManagem.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$IIterable@PEAUIInspectable@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18007D2FC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSou_ea_18007D2FC.c)
 *     ??0?$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@QEAA@XZ @ 0x1800B14CC (--0-$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::RuntimeClass<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>::IMap<enum ContentManagement::WindowPosition,unsigned int>();
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>(v2 + 8);
  a1[8] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>'};
  a1[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
