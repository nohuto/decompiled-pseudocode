/*
 * XREFs of ??$_Assign_range@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@0Uforward_iterator_tag@1@@Z @ 0x18014BB08
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x18014C480 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180025304 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Copy_unchecked@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@00@Z @ 0x18014BBC4 (--$_Copy_unchecked@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV-$ComPtr@VInputS.c)
 *     ??$_Uninitialized_copy@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18014BFC8 (--$_Uninitialized_copy@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x18014C850 (-_Clear_and_reserve_geometric@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$Com.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Assign_range<Microsoft::WRL::ComPtr<InputSite> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 *v11; // rbx

  v6 = (a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    v11 = (__int64 *)(v7 + 8 * v6);
    std::_Copy_unchecked<Microsoft::WRL::ComPtr<InputSite> *,Microsoft::WRL::ComPtr<InputSite> *>(a2, a3);
    result = std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v11, (__int64 *)a1[1]);
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = a2 + 8 * v8;
    std::_Copy_unchecked<Microsoft::WRL::ComPtr<InputSite> *,Microsoft::WRL::ComPtr<InputSite> *>(a2, v9);
    result = std::_Uninitialized_copy<Microsoft::WRL::ComPtr<InputSite> *,std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(
               v9,
               a3,
               a1[1]);
    v11 = (__int64 *)result;
  }
  a1[1] = (__int64)v11;
  return result;
}
