/*
 * XREFs of ??$make@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@winrt@@YA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@Z @ 0x1800FC84C
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800FE244 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::make<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Udwm::Transitions::UserResizeVisual>>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         72LL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = &winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::`vftable';
    *(_QWORD *)(v4 + 24) = &winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>::`vftable';
    *(_QWORD *)(v4 + 32) = &winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *(_QWORD *)(v4 + 8) = 1LL;
    *(_DWORD *)(v4 + 40) = 0;
    *(_QWORD *)v4 = &winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>::`vftable';
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 48) = *a2;
    *(_QWORD *)(v4 + 56) = a2[1];
    *(_QWORD *)(v4 + 64) = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = (v5 + 16) & -(__int64)(v5 != 0);
  return a1;
}
