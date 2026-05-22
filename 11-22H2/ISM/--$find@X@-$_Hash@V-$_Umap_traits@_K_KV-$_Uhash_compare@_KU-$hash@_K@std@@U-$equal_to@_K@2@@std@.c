/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x180009E30
 * Callers:
 *     NotifyInputSinkTransformChanged @ 0x180009C70 (NotifyInputSinkTransformChanged.c)
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x1800AA484 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x180114060 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *result; // rax

  v5 = a1[1];
  v6 = (_QWORD *)(a1[3]
                + 16
                * ((0x100000001B3LL
                  * (a3[7] ^ (0x100000001B3LL
                            * (a3[6] ^ (0x100000001B3LL
                                      * (a3[5] ^ (0x100000001B3LL
                                                * (a3[4] ^ (0x100000001B3LL
                                                          * (a3[3] ^ (0x100000001B3LL
                                                                    * (a3[2] ^ (0x100000001B3LL
                                                                              * (a3[1] ^ (0x100000001B3LL
                                                                                        * (*a3 ^ 0xCBF29CE484222325uLL)))))))))))))))) & a1[6]));
  v7 = v6[1];
  if ( v7 == v5 )
  {
LABEL_8:
    v7 = 0LL;
  }
  else
  {
    while ( *(_QWORD *)a3 != *(_QWORD *)(v7 + 16) )
    {
      if ( v7 == *v6 )
        goto LABEL_8;
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  if ( v7 )
    v5 = v7;
  result = a2;
  *a2 = v5;
  return result;
}
