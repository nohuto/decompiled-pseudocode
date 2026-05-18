/*
 * XREFs of ??$_Find_upper_bound@M@?$_Tree@V?$_Tmap_traits@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@$00@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBM@Z @ 0x1800DAEE8
 * Callers:
 *     ??$_Emplace@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@Z @ 0x1800DAB48 (--$_Emplace@AEAMAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@MV-$ComPtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<float,Microsoft::WRL::ComPtr<IDXGIAdapter1>,std::greater<float>,std::allocator<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>,1>>::_Find_upper_bound<float>(
        __int64 *a1,
        __int64 a2,
        float *a3)
{
  __int64 v3; // rax
  float *v4; // rcx
  float v5; // xmm0_4
  bool v6; // cc
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(float **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      v6 = v5 <= v4[8];
      *(_QWORD *)a2 = v4;
      if ( v6 )
      {
        v4 = (float *)*((_QWORD *)v4 + 2);
        v7 = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v4;
        v7 = 1;
        v4 = *(float **)v4;
      }
      *(_DWORD *)(a2 + 8) = v7;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
