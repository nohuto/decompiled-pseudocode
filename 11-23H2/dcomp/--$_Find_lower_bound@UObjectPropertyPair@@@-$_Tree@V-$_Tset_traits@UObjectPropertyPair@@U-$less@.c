/*
 * XREFs of ??$_Find_lower_bound@UObjectPropertyPair@@@?$_Tree@V?$_Tset_traits@UObjectPropertyPair@@U?$less@UObjectPropertyPair@@@std@@V?$allocator@UObjectPropertyPair@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@AEBUObjectPropertyPair@@@Z @ 0x18004C2F8
 * Callers:
 *     ?put_Color@Api@?$CompositionColorBrushT@VCompositionColorBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18004B850 (-put_Color@Api@-$CompositionColorBrushT@VCompositionColorBrush@Composition@UI@Windows@@VComposit.c)
 *     ??$_Emplace@AEBUObjectPropertyPair@@@?$_Tree@V?$_Tset_traits@UObjectPropertyPair@@U?$less@UObjectPropertyPair@@@std@@V?$allocator@UObjectPropertyPair@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@std@@_N@1@AEBUObjectPropertyPair@@@Z @ 0x180169D3C (--$_Emplace@AEBUObjectPropertyPair@@@-$_Tree@V-$_Tset_traits@UObjectPropertyPair@@U-$less@UObjec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<ObjectPropertyPair,std::less<ObjectPropertyPair>,std::allocator<ObjectPropertyPair>,0>>::_Find_lower_bound<ObjectPropertyPair>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  __int64 *v5; // rcx
  unsigned int v7; // r8d
  int v8; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v5 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a3;
    do
    {
      *(_QWORD *)a2 = v5;
      if ( *((_DWORD *)v5 + 7) < v7 || *((_DWORD *)v5 + 7) == v7 && *((_DWORD *)v5 + 8) < a3[1] )
      {
        v5 = (__int64 *)v5[2];
        v8 = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v5;
        v8 = 1;
        v5 = (__int64 *)*v5;
      }
      *(_DWORD *)(a2 + 8) = v8;
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  return a2;
}
