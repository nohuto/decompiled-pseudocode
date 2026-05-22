/*
 * XREFs of ?CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA?AW4CycleCheckResult@1234@AEAV?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@@Z @ 0x180046DE0
 * Callers:
 *     ?CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z @ 0x18004659C (-CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z.c)
 *     ?CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA?AW4CycleCheckResult@1234@AEAV?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@@Z @ 0x180046DE0 (-CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA-AW4CycleCheckResult@1234@A.c)
 *     ?Validate_Source@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047200 (-Validate_Source@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234.c)
 *     ?Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047EE0 (-Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPE.c)
 *     ?Validate_Source@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180048CD0 (-Validate_Source@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEA.c)
 * Callees:
 *     ?CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA?AW4CycleCheckResult@1234@AEAV?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@@Z @ 0x180046DE0 (-CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA-AW4CycleCheckResult@1234@A.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800A68C0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??1?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18010E31C (--1-$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V-$all.c)
 *     ??$_Find_last@PEBVCompositionBrush@Composition@UI@Windows@@@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@@1@AEBQEBVCompositionBrush@Composition@UI@Windows@@_K@Z @ 0x1801578E0 (--$_Find_last@PEBVCompositionBrush@Composition@UI@Windows@@@-$_Hash@V-$_Uset_traits@PEBVComposit.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180157A80 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V-$_Uhash_c.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBrush::CheckForCycleRecursive(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // r12
  _QWORD *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rbx
  _QWORD *v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r8
  unsigned int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // rax
  char v36[16]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v37; // [rsp+40h] [rbp-48h] BYREF
  __int64 v38; // [rsp+50h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = 0x100000001B3LL
     * (HIBYTE(a1) ^ (0x100000001B3LL
                    * (BYTE6(a1) ^ (0x100000001B3LL
                                  * (BYTE5(a1) ^ (0x100000001B3LL
                                                * (BYTE4(a1) ^ (0x100000001B3LL
                                                              * (BYTE3(a1) ^ (0x100000001B3LL
                                                                            * (BYTE2(a1) ^ (0x100000001B3LL
                                                                                          * (BYTE1(a1) ^ (0x100000001B3LL * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))))))));
  v8 = 2 * (v7 & *(_QWORD *)(a2 + 48));
  v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
  v10 = v9;
  if ( v9 == v6 )
  {
LABEL_2:
    v10 = 0LL;
  }
  else
  {
    while ( a1 != *(__int64 **)(v10 + 16) )
    {
      if ( v10 == *(_QWORD *)(v5 + 8 * v8) )
        goto LABEL_2;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  if ( v10 )
    return 1LL;
  if ( v9 == v6 )
  {
LABEL_5:
    v11 = (_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(a2 + 16) == 0xAAAAAAAAAAAAAAALL )
      std::_Dwm_Xlength_error((const char *)v9);
    ProcessHeap = GetProcessHeap();
    v13 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v14 = v13;
    if ( !v13 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v13[2] = a1;
    v15 = *v11 + 1LL;
    if ( v15 < 0 )
      v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
          + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
    else
      v16 = (float)(int)v15;
    v17 = *(_QWORD *)(a2 + 56);
    if ( v17 < 0 )
    {
      v34 = *(_QWORD *)(a2 + 56) & 1LL | (*(_QWORD *)(a2 + 56) >> 1);
      v18 = (float)(int)v34 + (float)(int)v34;
    }
    else
    {
      v18 = (float)(int)v17;
    }
    if ( (float)(v16 / v18) > *(float *)a2 )
    {
      v35 = std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Desired_grow_bucket_count(a2);
      std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Forced_rehash(
        a2,
        v35);
      v6 = *(_QWORD *)std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Find_last<Windows::UI::Composition::CompositionBrush const *>(
                        a2,
                        v36,
                        v14 + 2,
                        v7);
    }
    v19 = *(_QWORD **)(v6 + 8);
    ++*v11;
    *v14 = v6;
    v14[1] = v19;
    *v19 = v14;
    *(_QWORD *)(v6 + 8) = v14;
    v20 = *(_QWORD *)(a2 + 24);
    v21 = 2 * (*(_QWORD *)(a2 + 48) & v7);
    v22 = *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a2 + 48) & v7));
    if ( v22 == *(_QWORD *)(a2 + 8) )
    {
      *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a2 + 48) & v7)) = v14;
      *(_QWORD *)(v20 + 8 * v21 + 8) = v14;
    }
    else if ( v22 == v6 )
    {
      *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a2 + 48) & v7)) = v14;
    }
    else if ( *(_QWORD **)(v20 + 16 * (*(_QWORD *)(a2 + 48) & v7) + 8) == v19 )
    {
      *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a2 + 48) & v7) + 8) = v14;
    }
  }
  else
  {
    while ( a1 != *(__int64 **)(v9 + 16) )
    {
      if ( v9 == *(_QWORD *)(v5 + 8 * v8) )
      {
        v6 = v9;
        goto LABEL_5;
      }
      v9 = *(_QWORD *)(v9 + 8);
    }
    v11 = (_QWORD *)(a2 + 16);
  }
  if ( *v11 > 0x64uLL )
    return 2LL;
  v23 = *a1;
  v37 = 0LL;
  v38 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int128 *))(v23 + 304))(a1, &v37);
  v24 = (_QWORD *)*((_QWORD *)&v37 + 1);
  v25 = (_QWORD *)v37;
  if ( (_QWORD)v37 == *((_QWORD *)&v37 + 1) )
  {
LABEL_17:
    v26 = *(_QWORD *)(a2 + 24);
    v27 = 2 * (*(_QWORD *)(a2 + 48) & v7);
    v28 = *(_QWORD **)(a2 + 8);
    v29 = *(_QWORD **)(v26 + 8 * v27 + 8);
    v30 = v29;
    if ( v29 != v28 )
    {
      while ( a1 != (__int64 *)v30[2] )
      {
        if ( v30 == *(_QWORD **)(v26 + 8 * v27) )
          goto LABEL_20;
        v30 = (_QWORD *)v30[1];
      }
      v4 = v30;
    }
LABEL_20:
    if ( v4 )
    {
      if ( v29 == v4 )
      {
        if ( *(_QWORD **)(v26 + 8 * v27) == v4 )
          *(_QWORD *)(v26 + 8 * v27) = v28;
        else
          v28 = (_QWORD *)v4[1];
        *(_QWORD *)(v26 + 8 * v27 + 8) = v28;
      }
      else if ( *(_QWORD **)(v26 + 8 * v27) == v4 )
      {
        *(_QWORD *)(v26 + 8 * v27) = *v4;
      }
      v31 = *v4;
      --*v11;
      *(_QWORD *)v4[1] = v31;
      *(_QWORD *)(v31 + 8) = v4[1];
      operator delete(v4, 0x18uLL);
      v25 = (_QWORD *)v37;
    }
    if ( v25 )
      std::_Deallocate<16,0>(v25, (v38 - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF8uLL);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      if ( *v25 )
      {
        v33 = Windows::UI::Composition::CompositionBrush::CheckForCycleRecursive(*v25, a2);
        if ( v33 )
          break;
      }
      if ( ++v25 == v24 )
      {
        v25 = (_QWORD *)v37;
        goto LABEL_17;
      }
    }
    std::vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>::~vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>(&v37);
    return v33;
  }
}
