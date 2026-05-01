/*
 * XREFs of ?to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45@@Z @ 0x18072BEEC
 * Callers:
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x18072B4F0 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Emplace@Uhstring@winrt@@U12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@$$QEAUhstring@winrt@@0@Z @ 0x18072B14C (--$_Emplace@Uhstring@winrt@@U12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@I@Z @ 0x18072B3F0 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foun.c)
 *     ?Name@?$consume_Windows_Foundation_IWwwFormUrlDecoderEntry@UIWwwFormUrlDecoderEntry@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18072BD80 (-Name@-$consume_Windows_Foundation_IWwwFormUrlDecoderEntry@UIWwwFormUrlDecoderEntry@Foundation@W.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@XZ @ 0x18072BDD4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Found.c)
 *     ?Value@?$consume_Windows_Foundation_IWwwFormUrlDecoderEntry@UIWwwFormUrlDecoderEntry@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18072BE74 (-Value@-$consume_Windows_Foundation_IWwwFormUrlDecoderEntry@UIWwwFormUrlDecoderEntry@Foundation@.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Internal::Shell::implementation *__fastcall winrt::Windows::Internal::Shell::implementation::to_multimap(
        winrt::Windows::Internal::Shell::implementation *this,
        const struct winrt::Windows::Foundation::WwwFormUrlDecoder *a2)
{
  size_t size_of; // rax
  _QWORD *v5; // rax
  unsigned int i; // esi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rax
  volatile signed __int32 *v12; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)this = v5;
  for ( i = 0;
        i < (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Size((__int64 *)a2);
        ++i )
  {
    v7 = (__int64 *)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::GetAt(
                      (void (__fastcall ****)(_QWORD, void *, __int64 *))a2,
                      (winrt::Windows::Foundation::IUnknown *)&v16,
                      i);
    v8 = winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderEntry<winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Value(
           v7,
           &v13);
    v9 = (__int64 *)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::GetAt(
                      (void (__fastcall ****)(_QWORD, void *, __int64 *))a2,
                      (winrt::Windows::Foundation::IUnknown *)&v15,
                      i);
    v10 = winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderEntry<winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Name(
            v9,
            &v12);
    std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Emplace<winrt::hstring,winrt::hstring>(
      (__int64 *)this,
      (__int64)v14,
      v10,
      v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  }
  return this;
}
