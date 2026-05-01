/*
 * XREFs of ?_Reallocate_exactly@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1803DCD8C
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1803D89EC (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1803D3DD0 (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 */

__int64 __fastcall std::vector<Windows::Internal::String>::_Reallocate_exactly(HSTRING **a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  HSTRING *v6; // rax
  HSTRING *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  HSTRING *v13; // [rsp+40h] [rbp+8h]

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (HSTRING *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v13 = v6;
  try
  {
    std::_Uninitialized_move<Windows::Internal::String *>(*a1, a1[1], v6);
    v8 = a2;
    v9 = v4;
    v10 = (__int64)v7;
    v11 = (__int64)a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v13, 8 * a2);
    throw;
  }
  return std::vector<Windows::Internal::String>::_Change_array(v11, v10, v9, v8);
}
