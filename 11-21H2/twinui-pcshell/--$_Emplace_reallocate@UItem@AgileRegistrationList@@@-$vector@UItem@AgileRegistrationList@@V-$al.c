/*
 * XREFs of ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x180111D80
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180111C84 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1802DEB0C (--$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  char *v12; // r14
  __int64 v13; // r9
  char *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  char *i; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v25; // r9
  __int64 v26; // [rsp+28h] [rbp-40h]
  void *v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  __int64 v29; // [rsp+80h] [rbp+18h]
  char *v30; // [rsp+88h] [rbp+20h]

  v29 = a3;
  v28 = a2;
  v3 = a2;
  v5 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = (__int64)(a1[2] - *a1) >> 4;
  v9 = v8 >> 1;
  if ( v8 > 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v27 = (void *)0xFFFFFFFFFFFFFFFLL;
    v11 = -16LL;
LABEL_26:
    v12 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    v30 = v12;
    v13 = 0LL;
    a3 = v29;
    v3 = v28;
    goto LABEL_10;
  }
  v10 = v6 + 1;
  if ( v9 + v8 >= v7 )
    v10 = v9 + v8;
  if ( v10 > 0xFFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 16 * v10;
  v27 = (void *)v10;
  if ( 16 * v10 >= 0x1000 )
    goto LABEL_26;
  if ( v11 )
  {
    v12 = (char *)operator new(16 * v10);
    v30 = v12;
    v13 = 0LL;
    a3 = v29;
    v3 = v28;
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
    v30 = 0LL;
  }
  v27 = (void *)v10;
LABEL_10:
  v14 = &v12[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  *(_DWORD *)v14 = *(_DWORD *)a3;
  v15 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a3 + 8) = 0LL;
  *((_QWORD *)v14 + 1) = v15;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( (_QWORD *)v3 == v16 )
  {
    for ( i = v12; v17 != v16; v17 += 2 )
    {
      *(_DWORD *)i = *(_DWORD *)v17;
      v19 = v17[1];
      v17[1] = 0LL;
      *((_QWORD *)i + 1) = v19;
      i += 16;
    }
  }
  else
  {
    std::_Uninitialized_move<AgileRegistrationList::Item *>(v17, v3, v12, 0LL, v14, v14 + 16);
    std::_Uninitialized_move<AgileRegistrationList::Item *>(v28, a1[1], v14 + 16, v25, v12, v26);
  }
  v20 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v21 = (_QWORD *)a1[1];
    if ( v20 != v21 )
    {
      do
      {
        v22 = v20[1];
        if ( v22 )
          (*(void (__fastcall **)(__int64, char *, _QWORD *, __int64))(*(_QWORD *)v22 + 16LL))(v22, i, v16, v13);
        v20 += 2;
      }
      while ( v20 != v21 );
      v20 = (_QWORD *)*a1;
    }
    v23 = (a1[2] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF0uLL;
    v28 = v23;
    v27 = v20;
    if ( v23 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v27, &v28);
      v23 = v28;
      v20 = v27;
    }
    operator delete(v20, v23);
  }
  *a1 = v12;
  a1[1] = &v12[16 * v7];
  a1[2] = &v12[v11];
  return v14;
}
