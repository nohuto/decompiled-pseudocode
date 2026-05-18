/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800C8F64
 * Callers:
 *     ??1?$map@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@@std@@QEAA@XZ @ 0x1800C8F94 (--1-$map@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUDXGI_FRAME_STATISTIC.c)
 *     ??1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ @ 0x1800C8FA0 (--1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@1@@Z @ 0x1800C87F0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x48uLL);
}
