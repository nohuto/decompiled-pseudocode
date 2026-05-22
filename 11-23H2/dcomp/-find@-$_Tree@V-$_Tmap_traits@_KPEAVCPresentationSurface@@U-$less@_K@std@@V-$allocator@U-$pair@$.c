/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1801B08DC
 * Callers:
 *     ??1CPresentationSurface@@MEAA@XZ @ 0x1801AFCA4 (--1CPresentationSurface@@MEAA@XZ.c)
 * Callees:
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1801AFA98 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCPresentationSurface@@U-$less@_K@std@@V-$a.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,CPresentationSurface *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CPresentationSurface *>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned __int64,CPresentationSurface *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CPresentationSurface *>>,0>>::_Find_lower_bound<unsigned __int64>(
    a1,
    (__int64)v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
