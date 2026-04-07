/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x180101D74
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x180101B40 (-GetMany@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResiz.c)
 *     ?GetMany@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x180101C00 (-GetMany@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vect_ea_180101C00.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180056CD0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v8; // esi
  __int64 v9; // rax
  winrt::Windows::Foundation::IUnknown *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ebp
  winrt::Windows::Foundation::IUnknown *i; // rbx

  v3 = a2;
  v4 = a1 + 16;
  v5 = a1 + 8;
  if ( !a1 )
  {
    v5 = 48LL;
    v4 = 56LL;
  }
  if ( a2 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v5) >> 3) )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = a1 + 8;
  v10 = *(winrt::Windows::Foundation::IUnknown **)a3;
  v11 = a1 + 16;
  if ( !a1 )
  {
    v11 = 56LL;
    v9 = 48LL;
  }
  v12 = *(_QWORD *)v11 - *(_QWORD *)v9;
  v13 = a1 + 8;
  v14 = (v12 >> 3) - v3;
  if ( v8 >= v14 )
    v8 = v14;
  v15 = v8;
  if ( !a1 )
    v13 = 48LL;
  if ( v8 )
  {
    for ( i = (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v13 + 8 * v3);
          ;
          i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
    {
      winrt::Windows::Foundation::IUnknown::operator=(v10, i);
      v10 = (winrt::Windows::Foundation::IUnknown *)((char *)v10 + 8);
      if ( !--v15 )
        break;
    }
  }
  return v8;
}
