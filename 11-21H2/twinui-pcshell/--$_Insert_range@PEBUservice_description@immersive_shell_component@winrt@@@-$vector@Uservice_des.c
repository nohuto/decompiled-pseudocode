/*
 * XREFs of ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x18009D3E4
 * Callers:
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x18009D378 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 * Callees:
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18017AE50 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18017C508 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1803B5300 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Insert_range<winrt::immersive_shell_component::service_description const *>(
        _QWORD *a1,
        __int64 a2,
        char *a3,
        char *a4)
{
  unsigned __int64 v7; // r15
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  size_t size_of; // rax
  char *v19; // r12
  __int64 v20; // r9
  __int64 v21; // rax
  char *v22; // rax
  _DWORD *v23; // rcx
  signed __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  char *v31; // rsi
  char *v32; // rsi
  __int64 v33; // [rsp+30h] [rbp-48h]
  _DWORD *v35; // [rsp+88h] [rbp+10h]
  _QWORD *v36; // [rsp+90h] [rbp+18h]
  char *v37; // [rsp+90h] [rbp+18h]
  __int64 v38; // [rsp+98h] [rbp+20h]

  v7 = (a4 - a3) >> 5;
  v8 = a1 + 1;
  v36 = a1 + 1;
  v9 = *a1;
  v38 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  result = (v11 - v10) >> 5;
  if ( v7 )
  {
    if ( v7 <= result )
    {
      v29 = 32 * v7;
      if ( v7 >= (v10 - a2) >> 5 )
      {
        *v8 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(a2, v10, 32 * v7 + a2);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, v10);
        if ( a3 != a4 )
        {
          v32 = &a3[-a2];
          do
          {
            *(_OWORD *)a2 = *(_OWORD *)&v32[a2];
            *(_QWORD *)(a2 + 16) = *(_QWORD *)&v32[a2 + 16];
            winrt::com_ptr<IServiceProvider>::add_ref((__int64 *)(a2 + 16));
            *(_DWORD *)(a2 + 24) = *(_DWORD *)&v32[a2 + 24];
            a2 += 32LL;
          }
          while ( &v32[a2] != a4 );
        }
      }
      else
      {
        v30 = v10 - v29;
        *v36 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v10 - v29, v10, v10);
        std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
          a2,
          v30,
          v10);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, 32 * v7 + a2);
        if ( a3 != a4 )
        {
          v31 = &a3[-a2];
          do
          {
            *(_OWORD *)a2 = *(_OWORD *)&v31[a2];
            *(_QWORD *)(a2 + 16) = *(_QWORD *)&v31[a2 + 16];
            winrt::com_ptr<IServiceProvider>::add_ref((__int64 *)(a2 + 16));
            *(_DWORD *)(a2 + 24) = *(_DWORD *)&v31[a2 + 24];
            a2 += 32LL;
          }
          while ( &v31[a2] != a4 );
        }
      }
      return std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, a2);
    }
    else
    {
      v13 = (v10 - v9) >> 5;
      v33 = v13;
      v14 = 0x7FFFFFFFFFFFFFFLL;
      if ( v7 > 0x7FFFFFFFFFFFFFFLL - v13 )
        std::_Xlength_error("vector too long");
      v15 = v7 + v13;
      v16 = (v11 - v9) >> 5;
      v17 = v16 >> 1;
      if ( v16 <= 0x7FFFFFFFFFFFFFFLL - (v16 >> 1) )
      {
        v14 = v17 + v16;
        if ( v17 + v16 < v15 )
          v14 = v15;
      }
      size_of = std::_Get_size_of_n<32>(v14);
      v19 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v20 = v38;
      v21 = (a2 - v38) >> 5;
      v37 = &v19[32 * v21 + 32 * v7];
      v22 = &v19[32 * v21];
      if ( a3 != a4 )
      {
        v23 = v22 + 24;
        v35 = v22 + 24;
        v24 = a3 - v22;
        do
        {
          *(_OWORD *)(v23 - 6) = *(_OWORD *)((char *)v23 + v24 - 24);
          v25 = *(_QWORD *)((char *)v23 + v24 - 8);
          *((_QWORD *)v23 - 1) = v25;
          if ( v25 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
            v23 = v35;
          }
          *v23 = *(_DWORD *)((char *)v23 + v24);
          v23 += 8;
          v35 = v23;
        }
        while ( (char *)v23 + v24 - 24 != a4 );
        v20 = v38;
      }
      if ( v7 == 1 && a2 == v10 )
      {
        if ( v20 != v10 )
        {
          v26 = v20 + 16;
          v27 = &v19[-v20];
          do
          {
            *(_OWORD *)&v27[v26 - 16] = *(_OWORD *)(v26 - 16);
            v28 = *(_QWORD *)v26;
            *(_QWORD *)v26 = 0LL;
            *(_QWORD *)&v27[v26] = v28;
            *(_DWORD *)&v27[v26 + 8] = *(_DWORD *)(v26 + 8);
            v26 += 32LL;
          }
          while ( v26 - 16 != v10 );
        }
      }
      else
      {
        std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v20, a2, v19);
        std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(a2, v10, v37);
      }
      if ( *a1 )
      {
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(*a1, a1[1]);
        std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
      }
      *a1 = v19;
      result = (unsigned __int64)&v19[32 * v7 + 32 * v33];
      a1[1] = result;
      a1[2] = &v19[32 * v14];
    }
  }
  return result;
}
