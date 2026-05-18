/*
 * XREFs of ?_Reallocate_exactly@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAX_K@Z @ 0x1800D4568
 * Callers:
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001E974 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU1@0PEAU1@AEAV?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@0@@Z @ 0x1800D3980 (--$_Uninitialized_move@PEAUD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@st.c)
 */

void __fastcall std::vector<D3D11_INPUT_ELEMENT_DESC>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  char *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  size_of = std::_Get_size_of_n<32>(a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<D3D11_INPUT_ELEMENT_DESC *>(*(void **)a1, *(_QWORD *)(a1 + 8), v6);
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Change_array(a1, (__int64)v6, v4, a2);
}
