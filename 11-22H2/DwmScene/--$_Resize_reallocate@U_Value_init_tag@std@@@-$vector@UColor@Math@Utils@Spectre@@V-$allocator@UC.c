/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F2C0
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F1B0 (--$_Resize@U_Value_init_tag@std@@@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@U.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@YAPEAUColor@Math@Utils@Spectre@@PEAU1234@_KAEAV?$allocator@UColor@Math@Utils@Spectre@@@0@@Z @ 0x18008F49C (--$_Uninitialized_value_construct_n@V-$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@YAPEAUCo.c)
 */

__int64 __fastcall std::vector<Spectre::Utils::Math::Color>::_Resize_reallocate<std::_Value_init_tag>(
        __int128 **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 size_of; // rax
  char *v10; // rax
  _OWORD *v11; // r10
  __int128 *v12; // rcx
  _OWORD *v13; // rdx
  __int128 *v14; // r8
  __int128 v15; // xmm0

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v5 = (char *)a1[1] - (char *)*a1;
  v6 = a1[2] - *a1;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<Spectre::Utils::Math::Color>>(&v10[16 * v7], a2 - v7);
  v12 = *a1;
  v13 = v11;
  v14 = a1[1];
  while ( v12 != v14 )
  {
    v15 = *v12++;
    *v13++ = v15;
  }
  return std::vector<Spectre::Utils::Math::Color>::_Change_array(a1, v11, a2, v2);
}
