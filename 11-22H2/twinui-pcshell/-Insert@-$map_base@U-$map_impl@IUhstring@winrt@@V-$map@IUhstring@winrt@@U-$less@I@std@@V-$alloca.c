/*
 * XREFs of ?Insert@?$map_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@@winrt@@QEAA_NAEBIAEBUhstring@2@@Z @ 0x1807139EC
 * Callers:
 *     ?Insert@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAXPEA_N@Z @ 0x180713C10 (-Insert@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocat.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??$_Emplace@AEBIAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@_N@1@AEBIAEBUhstring@winrt@@@Z @ 0x18070A0D0 (--$_Emplace@AEBIAEBUhstring@winrt@@@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$a.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::map_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned int,winrt::hstring>::Insert(
        volatile signed __int32 *a1,
        unsigned int *a2,
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
  std::_Tree<std::_Tmap_traits<unsigned int,winrt::hstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,winrt::hstring>>,0>>::_Emplace<unsigned int const &,winrt::hstring const &>(
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
