/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180020220
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x18001FE50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800979BC (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800E7574 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ??$_Uninitialized_move@PEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@YAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1801B6D30 (--$_Uninitialized_move@PEAV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 */

char *__fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // r11
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  size_t v13; // rcx
  __int64 v14; // r13
  char *v15; // rsi
  char *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 *v21; // r10
  _QWORD *v23; // r11
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v6 = (unsigned __int128)(((char *)a2 - (char *)*a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 2);
  v8 = 0xAAAAAAAAAAAAAAABuLL * (a1[1] - *a1);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * (a1[2] - *a1);
  v11 = v10 >> 1;
  if ( v10 > 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v14 = -16LL;
LABEL_18:
    v15 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
    v4 = a2;
    goto LABEL_9;
  }
  v12 = v11 + v10;
  if ( v11 + v10 < v9 )
    v12 = v9;
  if ( v12 > 0xAAAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v13 = 24 * v12;
  v14 = 24 * v12;
  if ( 24 * v12 >= 0x1000 )
    goto LABEL_18;
  if ( v13 )
  {
    v15 = (char *)operator new(v13);
    v4 = a2;
  }
  else
  {
    v15 = 0LL;
  }
LABEL_9:
  v16 = &v15[24 * v7];
  v17 = a3[2];
  a3[2] = 0LL;
  v18 = a3[1];
  a3[1] = 0LL;
  v19 = *a3;
  *a3 = 0LL;
  *(_QWORD *)v16 = v19;
  *((_QWORD *)v16 + 1) = v18;
  *((_QWORD *)v16 + 2) = v17;
  v20 = a1[1];
  v21 = *a1;
  if ( v4 == v20 )
  {
    if ( v21 != v20 )
    {
      v23 = v15 + 16;
      do
      {
        v24 = v21[2];
        v21[2] = 0LL;
        v25 = v21[1];
        v21[1] = 0LL;
        v26 = *v21;
        *v21 = 0LL;
        *(v23 - 2) = v26;
        *(v23 - 1) = v25;
        *v23 = v24;
        v23 += 3;
        v21 += 3;
      }
      while ( v21 != v20 );
    }
  }
  else
  {
    std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
      *a1,
      v4,
      v15,
      0LL,
      v16,
      v16 + 24);
    std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
      a2,
      a1[1],
      v16 + 24,
      v27,
      v15,
      v28);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, 8 * (a1[2] - *a1));
  }
  *a1 = (__int64 *)v15;
  a1[1] = (__int64 *)&v15[24 * v9];
  a1[2] = (__int64 *)&v15[v14];
  return &v15[24 * v7];
}
