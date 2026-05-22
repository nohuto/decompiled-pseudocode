/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180119F78
 * Callers:
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180119508 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA1C4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180119E38 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::clear(
        _QWORD *a1)
{
  __int64 *v2; // rdx
  void *v3; // rdx
  unsigned __int64 v4; // rcx

  if ( a1[2] )
  {
    v2 = (__int64 *)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
        (__int64)a1,
        (_QWORD **)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v3 = (void *)a1[3];
      v4 = (unsigned __int64)(a1[4] - (_QWORD)v3 + 7LL) >> 3;
      if ( (unsigned __int64)v3 > a1[4] )
        v4 = 0LL;
      if ( v4 )
        memset64(v3, a1[1], v4);
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Unchecked_erase(
        a1,
        *v2,
        a1[1]);
    }
  }
}
