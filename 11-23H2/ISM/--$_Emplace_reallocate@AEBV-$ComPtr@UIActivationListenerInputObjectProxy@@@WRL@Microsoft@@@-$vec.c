/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800246E0
 * Callers:
 *     ??$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180022000 (--$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA-AV-$vector.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180024924 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800979BC (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800FF960 (--$_Uninitialized_move@PEAV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$all.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  size_t v11; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rsi
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // r9
  _QWORD *i; // rdx
  _QWORD *v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v5 = ((__int64)a2 - *a1) >> 3;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = (__int64)(a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v11 = -8LL;
    v12 = 0x1FFFFFFFFFFFFFFFLL;
LABEL_19:
    v13 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    a3 = v20;
    goto LABEL_9;
  }
  v10 = v9 + v8;
  if ( v9 + v8 < v7 )
    v10 = v6 + 1;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 8 * v10;
  v12 = v10;
  if ( 8 * v10 >= 0x1000 )
    goto LABEL_19;
  if ( v11 )
  {
    v13 = operator new(v11);
    a3 = v20;
  }
  else
  {
    v13 = 0LL;
  }
LABEL_9:
  v14 = &v13[v5];
  v15 = *a3;
  *v14 = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    for ( i = v13; v17 != v16; ++v17 )
    {
      *i = 0LL;
      if ( i != v17 )
      {
        *i = *v17;
        *v17 = 0LL;
      }
      ++i;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> *,std::allocator<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>>(
      *a1,
      a2,
      v13);
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> *,std::allocator<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>>(
      a2,
      a1[1],
      v14 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = &v13[v7];
  a1[2] = &v13[v12];
  return (char *)&v13[v5];
}
