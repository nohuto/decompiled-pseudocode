/*
 * XREFs of ??$make@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@PEAU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@3@@winrt@@YA?AU?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@0@$$QEAPEAU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@0@@Z @ 0x1800FC9FC
 * Callers:
 *     ?First@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FCFD0 (-First@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 *__fastcall winrt::make<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base> *>(
        unsigned __int64 *a1,
        signed __int64 **a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  signed __int64 *v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         56LL);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = *a2;
    *(_DWORD *)(v4 + 24) = *((_DWORD *)*a2 + 10);
    *(_QWORD *)(v4 + 16) = &winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *(_QWORD *)(v4 + 8) = 1LL;
    *(_QWORD *)v4 = &winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator::`vftable';
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = v6[6];
    *(_QWORD *)(v4 + 48) = v6[7];
    if ( v6 )
    {
      *(_QWORD *)(v4 + 32) = v6;
      v7 = v6[1];
      while ( v7 >= 0 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 1, v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
    }
LABEL_8:
    *v5 = &winrt::impl::heap_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = (unsigned __int64)(v5 + 2) & -(__int64)(v5 != 0LL);
  return a1;
}
