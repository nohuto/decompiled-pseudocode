/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x18006632C
 * Callers:
 *     ?NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z @ 0x180066A50 (-NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x18006660C (--$_Uninitialized_move@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800666D4 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AX_N@Z@2@_K1@Z @ 0x180066D84 (-_Change_array@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@.c)
 *     ?_Xlength@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@CAXXZ @ 0x180067440 (-_Xlength@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rsi
  char *v13; // r14
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *result; // rax
  __int64 v19; // rcx
  char *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  char *v22; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+10h]
  char *v25; // [rsp+88h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<std::function<void (bool)>>::_Xlength();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 6;
  v9 = v8 >> 1;
  if ( v8 <= 0x3FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v6 + 1;
    if ( v9 + v8 >= v7 )
      v10 = v9 + v8;
    v23 = v10;
    if ( v10 > 0x3FFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x3FFFFFFFFFFFFFFLL;
    v23 = 0x3FFFFFFFFFFFFFFLL;
  }
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10 << 6);
  try
  {
    v12 = v11;
    v20 = v11;
    v13 = &v11[v5 & 0xFFFFFFFFFFFFFFC0uLL];
    v25 = v13 + 64;
    std::function<void (bool)>::function<void (bool)>(v13, a3);
    v22 = v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(v16, a2, v12);
      v22 = v12;
      v15 = v13 + 64;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(v16, v14, v15);
    std::vector<std::function<void (bool)>>::_Change_array(a1, v12, v7, v10, v20);
    result = v13;
  }
  catch ( ... )
  {
    std::vector<std::function<void (bool)>>::_Destroy(v17, v22, v25);
    std::allocator<std::function<void (bool)>>::deallocate(v19, v21, v23);
    throw;
  }
  return result;
}
