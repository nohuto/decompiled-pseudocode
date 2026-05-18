/*
 * XREFs of ?count@?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800CB4C8
 * Callers:
 *     ?GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA?AT_LARGE_INTEGER@@I@Z @ 0x1800C9FE0 (-GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA-AT_LARGE_INTEGER@@I@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 */

_BOOL8 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::count(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 lower; // rax
  _DWORD *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rdx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  lower = std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
            a1,
            (__int64)v7,
            a2);
  v4 = 0LL;
  v5 = *(_QWORD *)(lower + 16);
  if ( !*(_BYTE *)(v5 + 25) )
    return *v3 >= *(_DWORD *)(v5 + 32);
  return v4;
}
