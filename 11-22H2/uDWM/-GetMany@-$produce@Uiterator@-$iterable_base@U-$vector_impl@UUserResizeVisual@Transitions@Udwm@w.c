/*
 * XREFs of ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x180101CC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?GetMany@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@3@@Z @ 0x180101E38 (-GetMany@iterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+10h] BYREF

  memset_0(a3, 0, 8LL * a2);
  try
  {
    *a4 = winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator::GetMany();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
