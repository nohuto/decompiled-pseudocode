/*
 * XREFs of ?_Reallocate_exactly@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAX_K@Z @ 0x1803DCCF4
 * Callers:
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1803D877C (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@YAPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1803D3D78 (--$_Uninitialized_move@PEAU-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString.c)
 */

void __fastcall std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // [rsp+40h] [rbp+8h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  size_of = std::_Get_size_of_n<16>(a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v12 = v6;
  try
  {
    std::_Uninitialized_move<std::pair<unsigned long,Windows::Internal::String> *,std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
      *(_QWORD **)a1,
      *(_QWORD **)(a1 + 8),
      v6);
    v8 = a2;
    v9 = v4;
    v10 = (__int64)v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, 16 * a2);
    throw;
  }
  std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Change_array(v11, v10, v9, v8);
}
