/*
 * XREFs of ?_Change_array@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXQEAUD3D11_INPUT_ELEMENT_DESC@@_K1@Z @ 0x1800D44F8
 * Callers:
 *     ??$_Emplace_reallocate@UD3D11_INPUT_ELEMENT_DESC@@@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@QEAAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU2@$$QEAU2@@Z @ 0x1800D386C (--$_Emplace_reallocate@UD3D11_INPUT_ELEMENT_DESC@@@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$alloca.c)
 *     ?_Reallocate_exactly@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAX_K@Z @ 0x1800D4568 (-_Reallocate_exactly@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<D3D11_INPUT_ELEMENT_DESC>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
