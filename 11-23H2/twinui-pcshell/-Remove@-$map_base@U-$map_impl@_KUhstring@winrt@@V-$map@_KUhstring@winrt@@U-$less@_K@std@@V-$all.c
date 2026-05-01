/*
 * XREFs of ?Remove@?$map_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@@winrt@@QEAAXAEB_K@Z @ 0x180717958
 * Callers:
 *     ?Remove@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_K@Z @ 0x180717B00 (-Remove@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1804A508C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Micr.c)
 *     ??$_Find@_K@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@1@AEB_K@Z @ 0x18070A66C (--$_Find@_K@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_.c)
 *     ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18070EE4C (--4-$_Node_handle@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V-$allocator@U-$pa.c)
 *     ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@AEAAXXZ @ 0x18071A4EC (-_Clear@-$_Node_handle@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V-$allocator@.c)
 */

__int64 __fastcall winrt::map_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring>::Remove(
        volatile signed __int32 *a1,
        unsigned __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  void *v8; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  void *pExceptionObject[3]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = 0;
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  v4 = std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Find<unsigned __int64>(
         (__int64 *)v3,
         a2);
  if ( v4 == *(_QWORD *)v3 )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  pExceptionObject[0] = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>>::_Extract(
                          (_QWORD *)v3,
                          v4,
                          v5,
                          v6);
  std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::operator=(
    &v8,
    pExceptionObject);
  std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::_Clear(pExceptionObject);
  return std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::_Clear(&v8);
}
