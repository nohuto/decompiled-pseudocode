/*
 * XREFs of ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18008FABC
 * Callers:
 *     ?GetDisplayRegionId@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@PEAI@Z @ 0x180055120 (-GetDisplayRegionId@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@PEAI@Z.c)
 *     ??$_Emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x18008F518 (--$_Emplace@AEAKAEAUDisplayRegionInfo@@@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@s.c)
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x18008F614 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 *     ?RemoveDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804F4E10 (-RemoveDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1804F5000 (-UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned int v6; // r8d
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 7) < v6 )
      {
        v4 = (__int64 *)v4[2];
        v7 = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v4;
        v7 = 1;
        v4 = (__int64 *)*v4;
      }
      *(_DWORD *)(a2 + 8) = v7;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
