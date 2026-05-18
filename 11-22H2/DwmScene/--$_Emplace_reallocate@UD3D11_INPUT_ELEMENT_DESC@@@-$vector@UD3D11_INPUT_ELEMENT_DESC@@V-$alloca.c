/*
 * XREFs of ??$_Emplace_reallocate@UD3D11_INPUT_ELEMENT_DESC@@@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@QEAAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU2@$$QEAU2@@Z @ 0x1800D386C
 * Callers:
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001E974 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU1@0PEAU1@AEAV?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@0@@Z @ 0x1800D3980 (--$_Uninitialized_move@PEAUD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@st.c)
 *     ?_Change_array@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXQEAUD3D11_INPUT_ELEMENT_DESC@@_K1@Z @ 0x1800D44F8 (-_Change_array@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@.c)
 */

char *__fastcall std::vector<D3D11_INPUT_ELEMENT_DESC>::_Emplace_reallocate<D3D11_INPUT_ELEMENT_DESC>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // r14
  _OWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFE0uLL];
  v16 = v13;
  *(_OWORD *)v15 = *a3;
  *((_OWORD *)v15 + 1) = a3[1];
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<D3D11_INPUT_ELEMENT_DESC *>(v18, a2, v13);
    v17 = a1[1];
    v16 = v15 + 32;
    v18 = a2;
  }
  std::_Uninitialized_move<D3D11_INPUT_ELEMENT_DESC *>(v18, v17, v16);
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Change_array(a1, v14, v9, v3);
  return v15;
}
