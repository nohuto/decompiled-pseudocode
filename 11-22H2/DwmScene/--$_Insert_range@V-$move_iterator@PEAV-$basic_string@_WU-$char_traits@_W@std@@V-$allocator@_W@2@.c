/*
 * XREFs of ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800DD700
 * Callers:
 *     ?GetKeys@JsonConfigurationManager@Utils@Spectre@@UEBA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800DE810 (-GetKeys@JsonConfigurationManager@Utils@Spectre@@UEBA-AV-$vector@V-$basic_string@_W_ea_1800DE810.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@YAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18001E93C (--$_Destroy_range@V-$allocator@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001E974 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18001EEB8 (--$_Uninitialized_move@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$al.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001F128 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x18001F508 (-_Calculate_growth@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$.c)
 *     ?_Change_array@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@_K1@Z @ 0x18001F5AC (-_Change_array@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allo.c)
 *     ??$_Uninitialized_copy@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@0PEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x1800DDCCC (--$_Uninitialized_copy@V-$move_iterator@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator.c)
 */

void __fastcall std::vector<std::wstring>::_Insert_range<std::move_iterator<std::wstring *>>(
        char **a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // r13
  char *v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v11; // rcx
  unsigned __int64 size_of; // rax
  char *v13; // r15
  __int64 v14; // r8
  char *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v4 = *a1;
  v5 = a1[1];
  v6 = (a4 - a3) >> 5;
  if ( v6 )
  {
    if ( v6 <= (a1[2] - v5) >> 5 )
    {
      v16 = 32 * v6;
      if ( v6 >= (v5 - a2) >> 5 )
      {
        a1[1] = (char *)std::_Uninitialized_move<std::wstring *>(a2, v5, (__int64)&a2[v16]);
        v18 = (__int64)v5;
      }
      else
      {
        v17 = (__int64)&v5[-v16];
        a1[1] = (char *)std::_Uninitialized_move<std::wstring *>(&v5[-v16], a1[1], (__int64)a1[1]);
        while ( (char *)v17 != a2 )
        {
          v17 -= 32LL;
          std::wstring::operator=((_OWORD *)(v16 + v17), v17);
        }
        v18 = (__int64)&a2[v16];
      }
      std::_Destroy_range<std::allocator<std::wstring>>((__int64)a2, v18);
      std::_Uninitialized_copy<std::move_iterator<std::wstring *>>(a3, a4, a2);
    }
    else
    {
      v11 = (v5 - v4) >> 5;
      if ( v6 > 0x7FFFFFFFFFFFFFFLL - v11 )
        std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
      v20 = v11 + v6;
      v19 = std::vector<std::wstring>::_Calculate_growth(a1, v11 + v6);
      size_of = std::_Get_size_of_n<32>(v19);
      v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      std::_Uninitialized_copy<std::move_iterator<std::wstring *>>(a3, a4, &v13[32 * ((a2 - v4) >> 5)]);
      if ( v6 == 1 && a2 == v5 )
      {
        v14 = (__int64)v13;
        v15 = v4;
      }
      else
      {
        std::_Uninitialized_move<std::wstring *>(v4, a2, (__int64)v13);
        v15 = a2;
        v14 = (__int64)&v13[32 * v6 + 32 * ((a2 - v4) >> 5)];
      }
      std::_Uninitialized_move<std::wstring *>(v15, v5, v14);
      std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v13, v20, v19);
    }
  }
}
