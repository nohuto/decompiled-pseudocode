/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180001B80
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18004E6D0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18004E2B4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x180199970 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // r10
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx
  _QWORD *v16; // r9
  _QWORD *v17; // r8

  v4 = a2;
  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v12 = 0x1FFFFFFFFFFFFFFFLL;
LABEL_19:
    v13 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v12 * 8);
    v4 = a2;
    goto LABEL_9;
  }
  v11 = v10 + v9;
  if ( v10 + v9 < v8 )
    v11 = v7 + 1;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v12 = v11;
  if ( 8 * v11 >= 0x1000 )
    goto LABEL_19;
  if ( v12 * 8 )
  {
    v13 = operator new(8 * v11);
    v4 = a2;
  }
  else
  {
    v13 = 0LL;
  }
LABEL_9:
  v14 = &v13[v6];
  *v14 = 0LL;
  if ( v14 != a3 )
  {
    *v14 = *a3;
    *a3 = 0LL;
  }
  v15 = (_QWORD *)a1[1];
  v16 = (_QWORD *)*a1;
  v17 = v13;
  if ( v4 == v15 )
  {
    for ( ; v16 != v15; ++v16 )
    {
      *v17 = 0LL;
      if ( v17 != v16 )
      {
        *v17 = *v16;
        *v16 = 0LL;
      }
      ++v17;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      *a1,
      v4,
      v13);
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      a2,
      a1[1],
      v14 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(*a1, a1[1], v17);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = &v13[v8];
  a1[2] = &v13[v12];
  return (char *)&v13[v6];
}
