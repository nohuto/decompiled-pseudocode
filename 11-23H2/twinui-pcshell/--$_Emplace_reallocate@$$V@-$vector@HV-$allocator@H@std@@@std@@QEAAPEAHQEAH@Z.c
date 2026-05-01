/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH@Z @ 0x180229A48
 * Callers:
 *     ??$emplace_back@$$V@?$vector@HV?$allocator@H@std@@@std@@QEAA?A_TXZ @ 0x180229CBC (--$emplace_back@$$V@-$vector@HV-$allocator@H@std@@@std@@QEAA-A_TXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180093BA4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801AD05C (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x180409824 (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 */

char *__fastcall std::vector<int>::_Emplace_reallocate<>(const void **a1, _BYTE *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  size_t size_of; // rax
  char *v9; // rax
  char *v10; // rsi
  char *v11; // rdi
  _BYTE *v12; // r8
  _BYTE *v13; // rdx
  void *v14; // rcx
  size_t v15; // r8
  __int64 v16; // rcx
  char *result; // rax
  char *v18; // [rsp+58h] [rbp+10h]

  v4 = (a2 - (_BYTE *)*a1) >> 2;
  v5 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v5 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v6 = v5 + 1;
  v7 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(
         a1,
         v5 + 1);
  size_of = std::_Get_size_of_n<4>(v7);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v10 = v9;
  v18 = v9;
  try
  {
    v11 = &v9[4 * v4];
    *(_DWORD *)v11 = 0;
    v12 = a1[1];
    v13 = *a1;
    v14 = v9;
    if ( a2 == v12 )
    {
      v15 = v12 - v13;
    }
    else
    {
      memmove_0(v9, v13, a2 - (_BYTE *)*a1);
      v14 = v11 + 4;
      v15 = (_BYTE *)a1[1] - a2;
      v13 = a2;
    }
    memmove_0(v14, v13, v15);
    std::vector<int>::_Change_array(a1, v10, v6, v7);
    result = v11;
  }
  catch ( ... )
  {
    std::allocator<int>::deallocate(v16, v18, v7);
    throw;
  }
  return result;
}
