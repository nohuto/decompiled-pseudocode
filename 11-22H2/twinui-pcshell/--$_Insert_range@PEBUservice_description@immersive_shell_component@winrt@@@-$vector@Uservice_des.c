/*
 * XREFs of ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1800BDE54
 * Callers:
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1800BD88C (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 * Callees:
 *     ?_Change_array@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXQEAUservice_description@immersive_shell_component@winrt@@_K1@Z @ 0x1800BDA5C (-_Change_array@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Userv.c)
 *     ??$_Uninitialized_copy@PEBUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEBU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800BDDC4 (--$_Uninitialized_copy@PEBUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800BDFE0 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1801109D4 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x180391274 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 */

unsigned __int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Insert_range<winrt::immersive_shell_component::service_description const *>(
        char **a1,
        char *a2,
        char *a3,
        char *a4)
{
  unsigned __int64 v7; // r15
  char *v8; // r13
  char *v9; // r14
  char *v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 size_of; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r8
  char *v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // r11
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 *v26; // r11
  __int64 v27; // rdx
  __int64 v28; // [rsp+30h] [rbp-48h]
  unsigned __int64 v30; // [rsp+88h] [rbp+10h]

  v7 = (a4 - a3) >> 5;
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  result = (v10 - v9) >> 5;
  if ( v7 )
  {
    if ( v7 <= result )
    {
      if ( v7 >= (v9 - a2) >> 5 )
      {
        v25 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(a2, v9, &a2[32 * v7]);
        *v26 = v25;
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, v27);
      }
      else
      {
        v22 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(&v9[-32 * v7], v9, v9);
        *v23 = v22;
        std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
          a2,
          v24,
          v9);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, &a2[32 * v7]);
      }
      return (unsigned __int64)std::_Uninitialized_copy<winrt::immersive_shell_component::service_description const *>(
                                 a3,
                                 a4,
                                 a2);
    }
    else
    {
      v12 = (v9 - v8) >> 5;
      v13 = 0x7FFFFFFFFFFFFFFLL;
      if ( v7 > 0x7FFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v14 = v12 + v7;
      v28 = v12 + v7;
      v15 = (v10 - v8) >> 5;
      v16 = v15 >> 1;
      if ( v15 <= 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v13 = v16 + v15;
        if ( v16 + v15 < v14 )
          v13 = v14;
      }
      size_of = std::_Get_size_of_n<32>(v13);
      v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v19 = (a2 - v8) >> 5;
      v30 = v18 + 32 * (v19 + v7);
      std::_Uninitialized_copy<winrt::immersive_shell_component::service_description const *>(
        a3,
        a4,
        (_OWORD *)(32 * v19 + v18));
      if ( v7 == 1 && a2 == v9 )
      {
        v20 = v18;
        v21 = v8;
      }
      else
      {
        std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v8, a2, v18);
        v20 = v30;
        v21 = a2;
      }
      std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v21, v9, v20);
      return std::vector<winrt::immersive_shell_component::service_description>::_Change_array(a1, v18, v28, v13);
    }
  }
  return result;
}
