/*
 * XREFs of ?_Reallocate_exactly@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAX_K@Z @ 0x180060650
 * Callers:
 *     ?reserve@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAX_K@Z @ 0x18006071C (-reserve@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$p.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18001B4B4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800604A4 (--$_Uninitialized_move@PEAU-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$alloca.c)
 */

void __fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Reallocate_exactly(
        char **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // [rsp+40h] [rbp+8h]

  v4 = (a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = (__int64)v6;
  v12 = v6;
  try
  {
    std::_Uninitialized_move<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
      *a1,
      a1[1],
      (__int64)v6);
    v8 = a2;
    v9 = v4;
    v10 = v7;
    v11 = (__int64)a1;
  }
  catch ( ... )
  {
    std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::deallocate(v11, v12, a2);
    throw;
  }
  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Change_array(v11, v10, v9, v8);
}
