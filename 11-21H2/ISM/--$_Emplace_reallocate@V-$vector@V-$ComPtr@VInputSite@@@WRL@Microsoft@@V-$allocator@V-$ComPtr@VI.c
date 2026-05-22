/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180018030
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800CDF40 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ??$_Uninitialized_move@PEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@YAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180198CF8 (--$_Uninitialized_move@PEAV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 */

char *__fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // r10
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  char *v14; // rsi
  char *v15; // rbx
  _QWORD *v16; // rdx
  _QWORD *v17; // r9
  _QWORD *v19; // r8

  v4 = a2;
  v6 = (unsigned __int128)(((__int64)a2 - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 2);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 > 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v13 = -16LL;
LABEL_18:
    v14 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v13);
    v4 = a2;
    goto LABEL_9;
  }
  v12 = v11 + v10;
  if ( v11 + v10 < v9 )
    v12 = v9;
  if ( v12 > 0xAAAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v13 = 24 * v12;
  if ( 24 * v12 >= 0x1000 )
    goto LABEL_18;
  if ( v13 )
  {
    v14 = (char *)operator new(24 * v12);
    v4 = a2;
  }
  else
  {
    v14 = 0LL;
  }
LABEL_9:
  v15 = &v14[24 * v7];
  *(_QWORD *)v15 = 0LL;
  *((_QWORD *)v15 + 1) = 0LL;
  *((_QWORD *)v15 + 2) = 0LL;
  *(_QWORD *)v15 = *a3;
  *((_QWORD *)v15 + 1) = a3[1];
  *((_QWORD *)v15 + 2) = a3[2];
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( v4 == v16 )
  {
    if ( v17 != v16 )
    {
      v19 = v14 + 16;
      do
      {
        *(v19 - 2) = 0LL;
        *(v19 - 1) = 0LL;
        *v19 = 0LL;
        *(v19 - 2) = *v17;
        *(v19 - 1) = v17[1];
        *v19 = v17[2];
        *v17 = 0LL;
        v17[1] = 0LL;
        v17[2] = 0LL;
        v19 += 3;
        v17 += 3;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
      *a1,
      v4,
      v14);
    std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
      a2,
      a1[1],
      v15 + 24);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, 8 * ((__int64)(a1[2] - *a1) >> 3));
  }
  *a1 = v14;
  a1[1] = &v14[24 * v9];
  a1[2] = &v14[v13];
  return &v14[24 * v7];
}
