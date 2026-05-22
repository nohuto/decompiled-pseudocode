/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x180003E80
 * Callers:
 *     NotifyInputSinkTransformChanged @ 0x180003A70 (NotifyInputSinkTransformChanged.c)
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18008099C (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800EC8A0 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  __int64 v3; // r11
  _QWORD *v4; // r9
  __int64 v5; // rax

  v3 = a1[1];
  v4 = (_QWORD *)(a1[3]
                + 16
                * (a1[6] & (0x100000001B3LL
                          * (a3[7] ^ (0x100000001B3LL
                                    * (a3[6] ^ (0x100000001B3LL
                                              * (a3[5] ^ (0x100000001B3LL
                                                        * (a3[4] ^ (0x100000001B3LL
                                                                  * (a3[3] ^ (0x100000001B3LL
                                                                            * (a3[2] ^ (0x100000001B3LL
                                                                                      * (a3[1] ^ (0x100000001B3LL
                                                                                                * (*a3 ^ 0xCBF29CE484222325uLL))))))))))))))))));
  v5 = v4[1];
  if ( v5 == v3 )
  {
LABEL_5:
    *a2 = v3;
  }
  else
  {
    while ( *(_QWORD *)a3 != *(_QWORD *)(v5 + 16) )
    {
      if ( v5 == *v4 )
        goto LABEL_5;
      v5 = *(_QWORD *)(v5 + 8);
    }
    *a2 = v5;
  }
  return a2;
}
