/*
 * XREFs of ??$_Emplace_reallocate@N@?$vector@NV?$allocator@N@std@@@std@@QEAAPEANQEAN$$QEAN@Z @ 0x180327E34
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Calculate_growth@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEBA_K_K@Z @ 0x18033B9C0 (-_Calculate_growth@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@NV?$allocator@N@std@@@std@@AEAAXQEAN_K1@Z @ 0x18033BAA0 (-_Change_array@-$vector@NV-$allocator@N@std@@@std@@AEAAXQEAN_K1@Z.c)
 */

char *__fastcall std::vector<double>::_Emplace_reallocate<double>(const void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  size_t size_of; // rax
  char *v11; // rax
  char *v12; // rdi
  char *v13; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  void *v19; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<HMONITOR__ *>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v19 = v11;
  try
  {
    v13 = &v11[8 * v6];
    *(_QWORD *)v13 = *a3;
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 8;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<double>::_Change_array(a1, v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, 8 * v9);
    throw;
  }
  return result;
}
