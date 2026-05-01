/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001ED88
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18001EBEC (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K1@Z @ 0x18001DD80 (-_Change_array@-$vector@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskWin.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // r10
  __int64 v14; // r9
  _QWORD *v15; // r14
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v20; // rdx
  __int64 v21; // r11

  v4 = a2;
  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = 8 * v6;
  v15 = (_QWORD *)(8 * v6 + v13);
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  v18 = (_QWORD *)v13;
  if ( v4 == v16 )
  {
    while ( v17 != v16 )
    {
      *v18 = 0LL;
      if ( v18 != v17 )
      {
        *v18 = *v17;
        *v17 = 0LL;
      }
      ++v18;
      ++v17;
    }
  }
  else
  {
    while ( v17 != v4 )
    {
      *v18 = 0LL;
      if ( v18 != v17 )
      {
        *v18 = *v17;
        *v17 = 0LL;
      }
      ++v18;
      ++v17;
    }
    v20 = (_QWORD *)a1[1];
    if ( v4 != v20 )
    {
      v21 = v13 + v14 - (_QWORD)v4 + 8;
      do
      {
        *(_QWORD *)((char *)v4 + v21) = 0LL;
        if ( (_QWORD *)((char *)v4 + v21) != v4 )
        {
          *(_QWORD *)((char *)v4 + v21) = *v4;
          *v4 = 0LL;
        }
        ++v4;
      }
      while ( v4 != v20 );
    }
  }
  std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Change_array(a1, v13, v9, v8);
  return v15;
}
