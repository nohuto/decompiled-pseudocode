/*
 * XREFs of ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801C4B04
 * Callers:
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801C524C (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801C5CCC (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801C60C0 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 * Callees:
 *     <none>
 */

char __fastcall std::operator==<enum _Button,std::allocator<enum _Button>>(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r10
  _DWORD *v3; // r8
  __int64 v4; // r9

  v2 = *(_DWORD **)(a1 + 8);
  v3 = *(_DWORD **)a1;
  if ( ((((unsigned __int64)v2 - *(_QWORD *)a1) ^ (a2[1] - *a2)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
  {
    if ( v3 == v2 )
      return 1;
    v4 = *a2 - (_QWORD)v3;
    while ( *v3 == *(_DWORD *)((char *)v3 + v4) )
    {
      if ( ++v3 == v2 )
        return 1;
    }
  }
  return 0;
}
