/*
 * XREFs of ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800356B8
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003545C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x1800B4A4C (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800B49E4 (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(
        _QWORD *a1,
        unsigned __int64 a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // r10
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  char *v11; // rdi
  char *v12; // r13
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _OWORD *v15; // r9
  _OWORD *v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // r12
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  void *v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  _OWORD *v25; // [rsp+90h] [rbp+18h]
  char *v26; // [rsp+98h] [rbp+20h]

  v25 = a3;
  v24 = a2;
  v3 = a2;
  v5 = (__int64)(a2 - *a1) / 24;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v6 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v22 = v6 + 1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3);
  v8 = v7 >> 1;
  if ( v7 > 0xAAAAAAAAAAAAAAALL - (v7 >> 1) )
  {
    v23 = (void *)0xAAAAAAAAAAAAAAALL;
    v10 = -16LL;
LABEL_31:
    v11 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v10);
    v3 = v24;
    a3 = v25;
    goto LABEL_10;
  }
  v9 = v6 + 1;
  if ( v8 + v7 >= v6 + 1 )
    v9 = v8 + v7;
  if ( v9 > 0xAAAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v10 = 24 * v9;
  v23 = (void *)v9;
  if ( 24 * v9 >= 0x1000 )
    goto LABEL_31;
  if ( v10 )
  {
    v11 = (char *)operator new(24 * v9);
    v3 = v24;
    a3 = v25;
  }
  else
  {
    v11 = 0LL;
  }
  v23 = (void *)v9;
LABEL_10:
  v26 = v11;
  v12 = &v11[24 * v5];
  *(_OWORD *)v12 = *a3;
  v13 = v12 + 16;
  v14 = a3 + 1;
  *((_QWORD *)v12 + 2) = 0LL;
  if ( v12 + 16 != (char *)(a3 + 1) )
  {
    *v13 = *v14;
    *v14 = 0LL;
  }
  v15 = (_OWORD *)a1[1];
  v16 = (_OWORD *)*a1;
  if ( (_OWORD *)v3 == v15 )
  {
    if ( v16 != v15 )
    {
      a3 = v16 + 1;
      v13 = v11 + 16;
      do
      {
        *((_OWORD *)v13 - 1) = *v16;
        *v13 = 0LL;
        if ( v13 != (_QWORD *)a3 )
        {
          *v13 = *(_QWORD *)a3;
          *(_QWORD *)a3 = 0LL;
        }
        v13 += 3;
        v16 = (_OWORD *)((char *)v16 + 24);
        a3 = (_OWORD *)((char *)a3 + 24);
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    std::_Uninitialized_move<InputProvider *>(v16, v3, v11);
    std::_Uninitialized_move<InputProvider *>(v24, a1[1], v12 + 24);
  }
  v17 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v18 = (_QWORD *)a1[1];
    if ( v17 != v18 )
    {
      do
      {
        v19 = v17[2];
        if ( v19 )
        {
          v17[2] = 0LL;
          (*(void (__fastcall **)(__int64, _QWORD *, _OWORD *))(*(_QWORD *)v19 + 16LL))(v19, v13, a3);
        }
        v17 += 3;
      }
      while ( v17 != v18 );
      v17 = (_QWORD *)*a1;
    }
    v20 = 8 * ((__int64)(a1[2] - (_QWORD)v17) >> 3);
    v24 = v20;
    v23 = v17;
    if ( v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v23, &v24);
      v20 = v24;
      v17 = v23;
    }
    operator delete(v17, v20);
  }
  *a1 = v11;
  a1[1] = &v11[24 * v22];
  a1[2] = &v11[v10];
  return v12;
}
