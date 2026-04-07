/*
 * XREFs of ?Clear@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1801012F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x180100424 (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::Clear(
        __int64 a1)
{
  __int64 v1; // rcx
  winrt::Udwm::Transitions::UserResizeVisual *v2; // rdi
  winrt::Udwm::Transitions::UserResizeVisual *v3; // rdx
  __int64 v4; // rbx
  char v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 40));
  if ( &v6 != (char *)((v1 & -(__int64)(v1 != -40)) + 48) )
  {
    v2 = *(winrt::Udwm::Transitions::UserResizeVisual **)((v1 & -(__int64)(v1 != -40)) + 0x30);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30) = 0LL;
    v3 = *(winrt::Udwm::Transitions::UserResizeVisual **)((v1 & -(__int64)(v1 != -40)) + 0x38);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) = 0LL;
    v4 = *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40) = 0LL;
    if ( v2 )
    {
      std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v2, v3);
      std::_Deallocate<16,0>(v2, 8 * ((v4 - (__int64)v2) >> 3));
    }
  }
  return 0LL;
}
