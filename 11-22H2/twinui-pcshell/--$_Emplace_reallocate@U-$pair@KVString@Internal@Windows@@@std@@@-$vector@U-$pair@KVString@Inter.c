/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@KVString@Internal@Windows@@@std@@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@QEAAPEAU?$pair@KVString@Internal@Windows@@@1@QEAU21@$$QEAU21@@Z @ 0x1803D2F0C
 * Callers:
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1803D877C (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@YAPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1803D3D78 (--$_Uninitialized_move@PEAU-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString.c)
 *     ?_Change_array@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXQEAU?$pair@KVString@Internal@Windows@@@2@_K1@Z @ 0x1803DC72C (-_Change_array@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@I.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Emplace_reallocate<std::pair<unsigned long,Windows::Internal::String>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  __int64 v14; // rdi
  char *v15; // r14
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  char *v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v20 = v13;
  v15 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    *(_DWORD *)v15 = *(_DWORD *)a3;
    *((_QWORD *)v15 + 1) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = 0LL;
    v22 = (__int64)v15;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<std::pair<unsigned long,Windows::Internal::String> *,std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
        v18,
        a2,
        v13);
      v22 = v14;
      v17 = v15 + 16;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<std::pair<unsigned long,Windows::Internal::String> *,std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
      v18,
      v16,
      v17);
    std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Change_array(a1, v14, v9, v8, v20);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(v22, (__int64)(v15 + 16));
    std::_Deallocate<16,0>(v21, 16 * v8);
    throw;
  }
  return result;
}
