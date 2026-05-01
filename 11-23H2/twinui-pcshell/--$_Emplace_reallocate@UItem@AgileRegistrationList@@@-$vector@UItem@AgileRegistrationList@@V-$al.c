/*
 * XREFs of ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x18013DB60
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18013DA74 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1803959DC (--$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // r15
  char *v14; // rdx
  char *v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  char *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // r12
  __int64 v23; // rcx
  void *v24; // rcx
  unsigned __int64 v25; // rdx
  void *v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  char *v29; // [rsp+88h] [rbp+20h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  v28 = v8;
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  v29 = v14;
  v15 = v14 + 16;
  *(_DWORD *)v14 = *(_DWORD *)a3;
  v16 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a3 + 8) = 0LL;
  *((_QWORD *)v14 + 1) = v16;
  v27 = v14;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == (_BYTE *)v17 )
  {
    v19 = v13;
    while ( v18 != v17 )
    {
      *(_DWORD *)v19 = *(_DWORD *)v18;
      v20 = v18[1];
      v18[1] = 0LL;
      *((_QWORD *)v19 + 1) = v20;
      v19 += 16;
      v18 += 2;
    }
  }
  else
  {
    std::_Uninitialized_move<AgileRegistrationList::Item *>(v18, a2, v13);
    v27 = v13;
    std::_Uninitialized_move<AgileRegistrationList::Item *>(a2, a1[1], v15);
  }
  v21 = *a1;
  if ( *a1 )
  {
    v22 = a1[1];
    while ( v21 != v22 )
    {
      v23 = v21[1];
      if ( v23 )
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 16LL))(v23, v19);
      v21 += 2;
    }
    v24 = *a1;
    v25 = ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL;
    v28 = v25;
    v27 = v24;
    if ( v25 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v27, &v28);
      v24 = v27;
      v25 = v28;
    }
    operator delete(v24, v25);
  }
  *a1 = v13;
  a1[1] = &v13[16 * v9];
  a1[2] = &v13[16 * v8];
  return v29;
}
