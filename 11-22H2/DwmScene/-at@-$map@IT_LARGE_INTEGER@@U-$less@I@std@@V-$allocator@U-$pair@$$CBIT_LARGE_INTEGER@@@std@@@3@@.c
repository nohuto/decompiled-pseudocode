/*
 * XREFs of ?at@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEBAAEBT_LARGE_INTEGER@@AEBI@Z @ 0x1800CB478
 * Callers:
 *     ?GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA?AT_LARGE_INTEGER@@I@Z @ 0x1800C9FE0 (-GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA-AT_LARGE_INTEGER@@I@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 */

__int64 __fastcall std::map<unsigned int,_LARGE_INTEGER>::at(__int64 *a1, unsigned int *a2)
{
  _DWORD *v2; // r11
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
    a1,
    (__int64)v4,
    a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_DWORD *)(v5 + 32) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800CB4BFLL);
  }
  return v5 + 40;
}
