/*
 * XREFs of ??$_Find_last@PEBVCompositionBrush@Composition@UI@Windows@@@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@@1@AEBQEBVCompositionBrush@Composition@UI@Windows@@_K@Z @ 0x1801578E0
 * Callers:
 *     ?CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA?AW4CycleCheckResult@1234@AEAV?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@@Z @ 0x180046DE0 (-CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA-AW4CycleCheckResult@1234@A.c)
 *     ?Validate_Source@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047200 (-Validate_Source@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234.c)
 *     ??$emplace@PEBVCompositionBrush@Composition@UI@Windows@@@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@@std@@_N@1@$$QEAPEBVCompositionBrush@Composition@UI@Windows@@@Z @ 0x180047A80 (--$emplace@PEBVCompositionBrush@Composition@UI@Windows@@@-$_Hash@V-$_Uset_traits@PEBVComposition.c)
 *     ?Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047EE0 (-Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPE.c)
 *     ?Validate_Source@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180048CD0 (-Validate_Source@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEA.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Find_last<Windows::UI::Composition::CompositionBrush const *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9

  v4 = a1[3];
  v5 = (_QWORD *)a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD **)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v7[2] )
    {
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
      {
        *a2 = v7;
        goto LABEL_3;
      }
      v7 = (_QWORD *)v7[1];
    }
    *a2 = *v7;
    a2[1] = v7;
  }
  return a2;
}
