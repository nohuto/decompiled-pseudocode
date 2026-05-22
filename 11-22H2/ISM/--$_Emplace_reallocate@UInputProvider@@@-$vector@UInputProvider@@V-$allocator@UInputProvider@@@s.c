/*
 * XREFs of ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x18003BEC0
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003BC78 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA?A_T$$QEAUInputProvider@@@Z @ 0x1800DCDA0 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800DCD38 (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(_QWORD *a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // r8
  char *v14; // r15
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _OWORD *v17; // r9
  _OWORD *v18; // rcx
  _OWORD *v19; // rdi
  _OWORD *v20; // r14
  __int64 v21; // rcx
  _OWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  void *v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp+10h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3);
  if ( v9 > 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = 0xAAAAAAAAAAAAAAALL;
    v26 = 0xAAAAAAAAAAAAAAALL;
  }
  else
  {
    v10 = (v9 >> 1) + v9;
    v11 = v8;
    if ( v10 >= v8 )
      v11 = v10;
    v26 = v11;
    if ( v11 > 0xAAAAAAAAAAAAAAALL )
      std::_Throw_bad_array_new_length();
  }
  v27 = 24 * v11;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(24 * v11);
  v14 = (char *)&v12[3 * v6];
  *(_OWORD *)v14 = *a3;
  v15 = v14 + 16;
  v16 = a3 + 1;
  *((_QWORD *)v14 + 2) = 0LL;
  if ( v14 + 16 != (char *)(a3 + 1) )
  {
    *v15 = *v16;
    *v16 = 0LL;
  }
  v25 = &v12[3 * v6];
  v17 = (_OWORD *)a1[1];
  v18 = (_OWORD *)*a1;
  if ( a2 == v17 )
  {
    if ( v18 != v17 )
    {
      v13 = v18 + 1;
      v15 = v12 + 2;
      do
      {
        *((_OWORD *)v15 - 1) = *v18;
        *v15 = 0LL;
        if ( v15 != v13 )
        {
          *v15 = *v13;
          *v13 = 0LL;
        }
        v15 += 3;
        v18 = (_OWORD *)((char *)v18 + 24);
        v13 += 3;
      }
      while ( v18 != v17 );
    }
  }
  else
  {
    std::_Uninitialized_move<InputProvider *>(v18, a2, v12);
    v25 = v12;
    std::_Uninitialized_move<InputProvider *>(a2, a1[1], v14 + 24);
  }
  v19 = (_OWORD *)*a1;
  if ( *a1 )
  {
    v20 = (_OWORD *)a1[1];
    while ( v19 != v20 )
    {
      v21 = *((_QWORD *)v19 + 2);
      if ( v21 )
      {
        *((_QWORD *)v19 + 2) = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v21 + 16LL))(v21, v15, v13);
      }
      v19 = (_OWORD *)((char *)v19 + 24);
    }
    v22 = (_OWORD *)*a1;
    v23 = 8 * ((__int64)(a1[2] - *a1) >> 3);
    v26 = v23;
    v25 = v22;
    if ( v23 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v25, &v26);
      v22 = v25;
      v23 = v26;
    }
    operator delete(v22, v23);
  }
  *a1 = v12;
  a1[1] = &v12[3 * v8];
  a1[2] = &v12[(unsigned __int64)v27 / 8];
  return v14;
}
