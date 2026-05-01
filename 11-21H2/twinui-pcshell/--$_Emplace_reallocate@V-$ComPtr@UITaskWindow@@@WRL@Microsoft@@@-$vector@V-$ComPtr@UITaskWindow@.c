/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18009CC4C
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18009CDF4 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@0@@Z @ 0x18009CD44 (--$_Uninitialized_move@PEAV-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskW.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K1@Z @ 0x18009CD7C (-_Change_array@-$vector@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskWin.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
        __int64 *a1,
        __int64 a2,
        char *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // r10
  char *v14; // rdi
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r10
  char *v20; // r9
  char *v21; // [rsp+20h] [rbp-38h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v21 = v13;
  v14 = &v13[8 * v6];
  *(_QWORD *)v14 = 0LL;
  if ( v14 != a3 )
  {
    *(_QWORD *)v14 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ITaskWindow> *,std::allocator<Microsoft::WRL::ComPtr<ITaskWindow>>>(
      v17,
      a2,
      v13);
    v16 = v20;
    v15 = a1[1];
    v17 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<ITaskWindow> *,std::allocator<Microsoft::WRL::ComPtr<ITaskWindow>>>(
    v17,
    v15,
    v16);
  std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Change_array(a1, v18, v9, v8, v21);
  return v14;
}
