/*
 * XREFs of ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x18015276C
 * Callers:
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180154004 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x180152944 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x18015732C (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

char *__fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char *v11; // rax
  __int64 v12; // rdi
  char *v13; // rsi
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rcx
  char *result; // rax
  char *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]
  __int64 v21; // [rsp+78h] [rbp+10h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 5;
  v9 = v8 >> 1;
  if ( v8 <= 0x7FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v6 + 1;
    if ( v9 + v8 >= v7 )
      v10 = v9 + v8;
    v21 = v10;
    if ( v10 > 0x7FFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x7FFFFFFFFFFFFFFLL;
    v21 = 0x7FFFFFFFFFFFFFFLL;
  }
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(32 * v10);
  v12 = (__int64)v11;
  v18 = v11;
  v13 = &v11[v5 & 0xFFFFFFFFFFFFFFE0uLL];
  try
  {
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_WORD *)a3 = 0;
    v20 = (__int64)v13;
    v14 = a1[1];
    v15 = v11;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::wstring *>(v16, a2, v11);
      v20 = v12;
      v15 = v13 + 32;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::wstring *>(v16, v14, v15);
    std::vector<std::wstring>::_Change_array(a1, v12, v7, v10, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v20, (__int64)(v13 + 32));
    std::_Deallocate<16,0>(v19, 32 * v21);
    throw;
  }
  return result;
}
