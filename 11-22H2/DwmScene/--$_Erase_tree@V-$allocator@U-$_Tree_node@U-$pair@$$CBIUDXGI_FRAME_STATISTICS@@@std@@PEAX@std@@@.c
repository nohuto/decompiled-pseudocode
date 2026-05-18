/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@1@@Z @ 0x1800C87F0
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@1@@Z @ 0x1800C87F0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800C8F64 (--1-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUDX.c)
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@1@@Z @ 0x1800C87F0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
