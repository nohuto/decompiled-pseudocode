/*
 * XREFs of ??$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1806C6D44
 * Callers:
 *     ?push_back@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAAX$$QEAUIAsyncAction@Foundation@Windows@winrt@@@Z @ 0x1806C8CB4 (-push_back@-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundatio.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@0@@Z @ 0x1806C6F08 (--$_Uninitialized_move@PEAUIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Fou.c)
 *     ?_Change_array@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIAsyncAction@Foundation@Windows@winrt@@_K1@Z @ 0x1806C8694 (-_Change_array@-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Found.c)
 */

char *__fastcall std::vector<winrt::Windows::Foundation::IAsyncAction>::_Emplace_reallocate<winrt::Windows::Foundation::IAsyncAction>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  winrt::Windows::Foundation::IUnknown *v12; // rax
  winrt::Windows::Foundation::IUnknown *v13; // rdi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  winrt::Windows::Foundation::IUnknown *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  winrt::Windows::Foundation::IUnknown *v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  winrt::Windows::Foundation::IUnknown *v22; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (winrt::Windows::Foundation::IUnknown *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  v14 = (char *)v12 + 8 * v5;
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v14 = v15;
    v22 = (winrt::Windows::Foundation::IUnknown *)v14;
    v16 = a1[1];
    v17 = v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<winrt::Windows::Foundation::IAsyncAction *>(v18, a2, v12);
      v22 = v13;
      v17 = (winrt::Windows::Foundation::IUnknown *)(v14 + 8);
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<winrt::Windows::Foundation::IAsyncAction *>(v18, v16, v17);
    std::vector<winrt::Windows::Foundation::IAsyncAction>::_Change_array(a1, v13, v8, v7, v20);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IAsyncAction>>(
      v22,
      (winrt::Windows::Foundation::IUnknown *)(v14 + 8));
    std::_Deallocate<16,0>(v21, 8 * v7);
    throw;
  }
  return result;
}
