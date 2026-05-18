/*
 * XREFs of ??$_Uninitialized_move@PEAUD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU1@0PEAU1@AEAV?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@0@@Z @ 0x1800D3980
 * Callers:
 *     ??$_Emplace_reallocate@UD3D11_INPUT_ELEMENT_DESC@@@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@QEAAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU2@$$QEAU2@@Z @ 0x1800D386C (--$_Emplace_reallocate@UD3D11_INPUT_ELEMENT_DESC@@@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$alloca.c)
 *     ?_Reallocate_exactly@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAX_K@Z @ 0x1800D4568 (-_Reallocate_exactly@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@00@Z @ 0x1800D3834 (--$_Copy_memmove@PEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1.c)
 */

char *__fastcall std::_Uninitialized_move<D3D11_INPUT_ELEMENT_DESC *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<D3D11_INPUT_ELEMENT_DESC *,D3D11_INPUT_ELEMENT_DESC *>(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFE0uLL];
}
