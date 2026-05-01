/*
 * XREFs of ?Insert@?$map_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@@winrt@@QEAA_NAEB_KAEBUhstring@2@@Z @ 0x180713B5C
 * Callers:
 *     ?Insert@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAXPEA_N@Z @ 0x180713D10 (-Insert@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??$_Emplace@AEB_KAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEBUhstring@winrt@@@Z @ 0x18070A28C (--$_Emplace@AEB_KAEBUhstring@winrt@@@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V.c)
 */

bool __fastcall winrt::map_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring>::Insert(
        volatile signed __int32 *a1,
        unsigned __int64 *a2,
        winrt::impl **a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r8d
  char v7; // bl
  volatile signed __int32 **v8; // rcx
  volatile signed __int32 *v9; // rax
  bool v10; // bl
  volatile signed __int32 *v12; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]

  v13 = 0;
  _InterlockedIncrement(a1);
  v5 = (__int64)(a1 + 2);
  if ( !a1 )
    v5 = 48LL;
  std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Emplace<unsigned __int64 const &,winrt::hstring const &>(
    (__int64 *)v5,
    (__int64)&v14,
    a2);
  v7 = v15;
  if ( !v15 )
  {
    v8 = (volatile signed __int32 **)(v14 + 40);
    v9 = *(volatile signed __int32 **)(v14 + 40);
    *(_QWORD *)(v14 + 40) = 0LL;
    v12 = v9;
    v13 = 1;
    winrt::hstring::operator=(v8, a3, v6);
  }
  v10 = v7 == 0;
  if ( v13 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  return v10;
}
