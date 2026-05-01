/*
 * XREFs of ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805C07D0
 * Callers:
 *     ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805C0C4C (--_E-$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@_ea_1805C0C4C.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     CoTaskMemFree_0 @ 0x180189A5F (CoTaskMemFree_0.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1805C0798 (--1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::~MeetAndChatIris(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::_Ref_count_base *v5; // rcx
  volatile __int64 **v6; // rdi
  volatile __int64 **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  winrt::Windows::Foundation::IUnknown *v11; // rdi
  winrt::Windows::Foundation::IUnknown *v12; // rsi

  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (volatile __int64 **)*((_QWORD *)this + 14);
  if ( v6 )
  {
    v7 = (volatile __int64 **)*((_QWORD *)this + 15);
    if ( v6 != v7 )
    {
      do
      {
        if ( *v6 )
          winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(v6);
        ++v6;
      }
      while ( v6 != v7 );
      v6 = (volatile __int64 **)*((_QWORD *)this + 14);
    }
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  winrt::Windows::Internal::Shell::MeetAndChatFallbackContent::~MeetAndChatFallbackContent(
    (volatile signed __int32 **)this + 10,
    a2,
    a3,
    a4);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 8, v8, v9, v10);
  if ( *((_QWORD *)this + 7) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 56));
  v11 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    v12 = (winrt::Windows::Foundation::IUnknown *)((char *)v11 + 8 * *((unsigned int *)this + 12));
    if ( v11 != v12 )
    {
      do
      {
        if ( *(_QWORD *)v11 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v11);
        v11 = (winrt::Windows::Foundation::IUnknown *)((char *)v11 + 8);
      }
      while ( v11 != v12 );
      v11 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 5);
    }
    CoTaskMemFree_0(v11);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = 0;
  }
  if ( *((_QWORD *)this + 4) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 32));
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 8);
}
