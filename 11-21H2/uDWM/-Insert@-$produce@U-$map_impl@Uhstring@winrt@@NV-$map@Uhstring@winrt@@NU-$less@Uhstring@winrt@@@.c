/*
 * XREFs of ?Insert@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXNPEA_N@Z @ 0x1800FA5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBN@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBN@Z @ 0x1800F8B0C (--$_Emplace@AEBUhstring@winrt@@AEBN@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@wi.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>::Insert(
        __int64 a1,
        struct winrt::impl::hstring_header *a2,
        double a3,
        bool *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rcx
  bool v8; // zf
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  struct winrt::impl::hstring_header *v13; // [rsp+48h] [rbp+10h] BYREF
  double v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v5 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 40));
  v6 = -(__int64)(v5 != -40);
  v7 = (__int64 *)((v6 & v5) + 48);
  try
  {
    std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Emplace<winrt::hstring const &,double const &>(
      v7,
      (__int64)&v10,
      &v13,
      &v14);
    v8 = v11 == 0;
    if ( !v11 )
      *(double *)(v10 + 40) = v14;
    *a4 = v8;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v12);
  }
  return result;
}
