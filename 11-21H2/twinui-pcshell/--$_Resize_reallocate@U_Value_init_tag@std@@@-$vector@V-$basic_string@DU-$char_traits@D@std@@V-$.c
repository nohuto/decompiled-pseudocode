/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180349570
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180349400 (--$_Resize@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180348A64 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 */

__int64 __fastcall std::vector<std::string>::_Resize_reallocate<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t size_of; // rax
  void *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  void *v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+70h] [rbp+18h]
  __int64 v22; // [rsp+78h] [rbp+20h]

  v4 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (a1[1] - *a1) >> 5;
  v6 = (a1[2] - *a1) >> 5;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v4);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = (__int64)v9;
  v20 = v9;
  v12 = (__int64)v9 + 32 * v5;
  v22 = v12;
  try
  {
    v21 = (__int64)v9 + 32 * v5;
    v13 = a2 - v5;
    if ( a2 != v5 )
    {
      do
      {
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_QWORD *)(v12 + 24) = 15LL;
        *(_BYTE *)v12 = 0;
        v12 += 32LL;
        v21 = v12;
        --v13;
      }
      while ( v13 );
    }
    std::_Destroy_range<std::allocator<std::string>>(v12, v12, v10);
    v15 = a1[1];
    v16 = *a1;
    v17 = v11;
    while ( v16 != v15 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_QWORD *)(v17 + 24) = 0LL;
      *(_OWORD *)v17 = *(_OWORD *)v16;
      *(_OWORD *)(v17 + 16) = *(_OWORD *)(v16 + 16);
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_QWORD *)(v16 + 24) = 15LL;
      *(_BYTE *)v16 = 0;
      v17 += 32LL;
      v16 += 32LL;
    }
    std::_Destroy_range<std::allocator<std::string>>(v17, v17, v14);
    v18 = a2;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::string>>(v22, v21, v18);
    std::_Deallocate<16,0>(v20, 32 * v4);
    throw;
  }
  return std::vector<std::string>::_Change_array();
}
