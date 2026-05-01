/*
 * XREFs of ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801AB16C
 * Callers:
 *     ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801AB130 (--_E-$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801AB204 (--1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::~MeetAndChatIris(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *this)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // rdi
  winrt::Windows::Foundation::IUnknown *v4; // rdi
  _QWORD *v5; // rsi
  winrt::Windows::Foundation::IUnknown *v6; // rsi

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 15);
    while ( v3 != v5 )
    {
      if ( *v3 )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v3);
      ++v3;
    }
    std::_Deallocate<16,0>(
      *((void **)this + 14),
      (*((_QWORD *)this + 16) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  winrt::Windows::Internal::Shell::MeetAndChatFallbackContent::~MeetAndChatFallbackContent((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 80));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 8);
  if ( *((_QWORD *)this + 7) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 56));
  v4 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    v6 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 8 * *((unsigned int *)this + 12));
    while ( v4 != v6 )
    {
      if ( *(_QWORD *)v4 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
      v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 8);
    }
    CoTaskMemFree_0(*((LPVOID *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = 0;
  }
  if ( *((_QWORD *)this + 4) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 32));
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 8);
}
