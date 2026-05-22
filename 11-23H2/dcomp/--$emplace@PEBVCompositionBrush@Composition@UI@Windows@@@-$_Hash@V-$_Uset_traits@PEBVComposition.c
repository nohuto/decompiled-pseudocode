/*
 * XREFs of ??$emplace@PEBVCompositionBrush@Composition@UI@Windows@@@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@@std@@_N@1@$$QEAPEBVCompositionBrush@Composition@UI@Windows@@@Z @ 0x180047A80
 * Callers:
 *     ?CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z @ 0x18004659C (-CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z.c)
 *     ?Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047EE0 (-Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPE.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800A68C0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Find_last@PEBVCompositionBrush@Composition@UI@Windows@@@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@@1@AEBQEBVCompositionBrush@Composition@UI@Windows@@_K@Z @ 0x1801578E0 (--$_Find_last@PEBVCompositionBrush@Composition@UI@Windows@@@-$_Hash@V-$_Uset_traits@PEBVComposit.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180157A80 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V-$_Uhash_c.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::emplace<Windows::UI::Composition::CompositionBrush const *>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[40]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0x100000001B3LL
     * (a3[7] ^ (0x100000001B3LL
               * (a3[6] ^ (0x100000001B3LL
                         * (a3[5] ^ (0x100000001B3LL
                                   * (a3[4] ^ (0x100000001B3LL
                                             * (a3[3] ^ (0x100000001B3LL
                                                       * (a3[2] ^ (0x100000001B3LL
                                                                 * (a3[1] ^ (0x100000001B3LL
                                                                           * (*a3 ^ 0xCBF29CE484222325uLL)))))))))))))));
  v9 = 2 * (v8 & *(_QWORD *)(a1 + 48));
  v10 = *(_QWORD *)(v6 + 16 * (v8 & *(_QWORD *)(a1 + 48)) + 8);
  if ( v10 == v7 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
      std::_Dwm_Xlength_error((const char *)v10);
    ProcessHeap = GetProcessHeap();
    v12 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( !v12 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v12[2] = *(_QWORD *)a3;
    v13 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 56) & 1LL | (*(_QWORD *)(a1 + 56) >> 1);
      v16 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *(float *)a1 )
    {
      v23 = std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Forced_rehash(
        a1,
        v23);
      v7 = *(_QWORD *)std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Find_last<Windows::UI::Composition::CompositionBrush const *>(
                        a1,
                        v24,
                        v12 + 2,
                        v8);
    }
    v17 = *(_QWORD **)(v7 + 8);
    ++*(_QWORD *)(a1 + 16);
    *v12 = v7;
    v12[1] = v17;
    *v17 = v12;
    *(_QWORD *)(v7 + 8) = v12;
    v18 = *(_QWORD *)(a1 + 24);
    v19 = 2 * (v8 & *(_QWORD *)(a1 + 48));
    v20 = *(_QWORD *)(v18 + 16 * (v8 & *(_QWORD *)(a1 + 48)));
    if ( v20 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v18 + 16 * (v8 & *(_QWORD *)(a1 + 48))) = v12;
    }
    else
    {
      if ( v20 == v7 )
      {
        *(_QWORD *)(v18 + 16 * (v8 & *(_QWORD *)(a1 + 48))) = v12;
        goto LABEL_13;
      }
      if ( *(_QWORD **)(v18 + 16 * (v8 & *(_QWORD *)(a1 + 48)) + 8) != v17 )
        goto LABEL_13;
    }
    *(_QWORD *)(v18 + 8 * v19 + 8) = v12;
LABEL_13:
    *(_QWORD *)a2 = v12;
    result = a2;
    *(_BYTE *)(a2 + 8) = 1;
    return result;
  }
  while ( *(_QWORD *)a3 != *(_QWORD *)(v10 + 16) )
  {
    if ( v10 == *(_QWORD *)(v6 + 8 * v9) )
    {
      v7 = v10;
      goto LABEL_2;
    }
    v10 = *(_QWORD *)(v10 + 8);
  }
  *(_QWORD *)a2 = v10;
  result = a2;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
