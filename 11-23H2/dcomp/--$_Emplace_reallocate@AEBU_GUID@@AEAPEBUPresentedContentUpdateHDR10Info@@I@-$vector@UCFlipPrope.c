/*
 * XREFs of ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@$$QEAI@Z @ 0x1801AF7A4
 * Callers:
 *     ?PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801B0070 (-PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18007FE7C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAUCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@YAPEAUCFlipPropertyItem@@QEAU1@0PEAU1@AEAV?$allocator@UCFlipPropertyItem@@@0@@Z @ 0x1801ACE2C (--$_Uninitialized_move@PEAUCFlipPropertyItem@@V-$allocator@UCFlipPropertyItem@@@std@@@std@@YAPEA.c)
 *     ?_Calculate_growth@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@AEBA_K_K@Z @ 0x1801AE764 (-_Calculate_growth@-$vector@UCFlipPropertyItem@@V-$allocator@UCFlipPropertyItem@@@std@@@std@@AEB.c)
 *     ?_Change_array@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@AEAAXQEAUCFlipPropertyItem@@_K1@Z @ 0x1801AE870 (-_Change_array@-$vector@UCFlipPropertyItem@@V-$allocator@UCFlipPropertyItem@@@std@@@std@@AEAAXQE.c)
 */

char *__fastcall std::vector<CFlipPropertyItem>::_Emplace_reallocate<_GUID const &,PresentedContentUpdateHDR10Info const * &,unsigned int>(
        char **a1,
        char *a2,
        __int128 *a3,
        _QWORD *a4,
        int *a5)
{
  char *v5; // rsi
  __int64 v8; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  SIZE_T size_of; // rax
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  _OWORD *v16; // r8
  char *v17; // rsi
  int v18; // edx
  char *v19; // rdx
  char *v20; // rcx
  __int64 v21; // r10

  v5 = *a1;
  v8 = (a1[1] - *a1) >> 5;
  if ( v8 == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x7FFFFFFFFFFFFFFLL);
  v11 = v8 + 1;
  v12 = std::vector<CFlipPropertyItem>::_Calculate_growth(a1, v8 + 1);
  size_of = std::_Get_size_of_n<32>(v12);
  v14 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = *a3;
  v16 = v14;
  v17 = (char *)v14 + ((a2 - v5) & 0xFFFFFFFFFFFFFFE0uLL);
  v18 = *a5;
  *((_QWORD *)v17 + 3) = *a4;
  *(_OWORD *)v17 = v15;
  *((_DWORD *)v17 + 4) = v18;
  v19 = a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<CFlipPropertyItem *>(v20, a2, v14);
    v19 = a1[1];
    v16 = v17 + 32;
    v20 = a2;
  }
  std::_Uninitialized_move<CFlipPropertyItem *>(v20, v19, v16);
  std::vector<CFlipPropertyItem>::_Change_array((__int64)a1, v21, v11, v12);
  return v17;
}
