/*
 * XREFs of ?_Change_array@?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@AEAAXQEAPEBVCompositionBrush@Composition@UI@Windows@@_K1@Z @ 0x1800825BC
 * Callers:
 *     ?_Reallocate_exactly@?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180082544 (-_Reallocate_exactly@-$vector@PEBVCompositionBrush@Composition@UI@Windows@@V-$allocator@PEBVComp.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::CompositionBrush const *>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
