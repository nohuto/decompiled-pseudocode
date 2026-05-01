/*
 * XREFs of ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x18070A360
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAPEAURemoteSystem@RemoteSystemData@@QEAU12@0PEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x18070B21C (--$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSyste.c)
 *     ?_Change_array@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAXQEAURemoteSystem@RemoteSystemData@@_K1@Z @ 0x18071A470 (-_Change_array@-$vector@URemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSystemD.c)
 */

char *__fastcall std::vector<RemoteSystemData::RemoteSystem>::_Emplace_reallocate<RemoteSystemData::RemoteSystem &>(
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
  struct winrt::impl::hstring_header *v13; // rdx
  volatile signed __int32 **v14; // rsi
  unsigned int v15; // r8d
  char *v16; // r14
  __int64 v17; // rdx
  volatile signed __int32 **v18; // r8
  __int64 v19; // rcx
  volatile signed __int32 **v21; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  v8 = 0x7FFFFFFFFFFFFFFLL;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v8);
  v14 = (volatile signed __int32 **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = (char *)v14 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  try
  {
    *(_QWORD *)v16 = winrt::impl::duplicate_hstring(*(winrt::impl **)a3, v13, v15);
    *((_DWORD *)v16 + 2) = *(_DWORD *)(a3 + 8);
    *((_QWORD *)v16 + 2) = *(_QWORD *)(a3 + 16);
    *((_WORD *)v16 + 12) = *(_WORD *)(a3 + 24);
    v21 = (volatile signed __int32 **)v16;
    v17 = a1[1];
    v18 = v14;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<RemoteSystemData::RemoteSystem *>(v19, a2, v14);
      v21 = v14;
      v18 = (volatile signed __int32 **)(v16 + 32);
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<RemoteSystemData::RemoteSystem *>(v19, v17, v18);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(v21, (volatile signed __int32 **)v16 + 4);
    std::_Deallocate<16,0>(v14, 32 * v8);
    throw;
  }
  std::vector<RemoteSystemData::RemoteSystem>::_Change_array(a1, v14, v9, v8, v14);
  return v16;
}
