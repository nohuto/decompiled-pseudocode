/*
 * XREFs of ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1801AFA98
 * Callers:
 *     ??$_Emplace@AEA_KAEAPEAVCPresentationSurface@@@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@_N@1@AEA_KAEAPEAVCPresentationSurface@@@Z @ 0x1801AF6C0 (--$_Emplace@AEA_KAEAPEAVCPresentationSurface@@@-$_Tree@V-$_Tmap_traits@_KPEAVCPresentationSurfac.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1801B08DC (-find@-$_Tree@V-$_Tmap_traits@_KPEAVCPresentationSurface@@U-$less@_K@std@@V-$allocator@U-$pair@$.c)
 *     ?GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z @ 0x1801B0D28 (-GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,CPresentationSurface *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CPresentationSurface *>>,0>>::_Find_lower_bound<unsigned __int64>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
