/*
 * XREFs of ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C889C (--$_Try_emplace@AEBI$$V@-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C8990 (--$_Try_emplace@AEBI$$V@-$map@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     ?GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA?AT_LARGE_INTEGER@@I@Z @ 0x1800C9FE0 (-GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA-AT_LARGE_INTEGER@@I@Z.c)
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?at@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEBAAEBT_LARGE_INTEGER@@AEBI@Z @ 0x1800CB478 (-at@-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800CB4C8 (-count@-$_Tree@V-$_Tmap_traits@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARG.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800D8A6C (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@S.c)
 *     ?GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAAEAV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@I@Z @ 0x1800D969C (-GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned int v5; // r8d
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
      if ( *((_DWORD *)v4 + 8) >= v5 )
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
