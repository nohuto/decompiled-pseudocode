/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ab2348b23fbd360fe8da18a3127aa624__void_::_Do_call @ 0x18004BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ReconsiderSpatialOnComboEndpoints @ 0x18001F818 (ReconsiderSpatialOnComboEndpoints.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_ab2348b23fbd360fe8da18a3127aa624__void_::_Do_call(__int64 a1)
{
  ReconsiderSpatialOnComboEndpoints(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  CoTaskMemFree(*(LPVOID *)(a1 + 24));
}
