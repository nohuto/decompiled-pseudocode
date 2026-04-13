/*
 * XREFs of ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180008F0C
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DJ@Z @ 0x18000ABE0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DK@Z @ 0x18000ACA0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000ACA0.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBX@Z @ 0x18000B0D0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B0D0.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_J@Z @ 0x18000B190 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B190.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_K@Z @ 0x18000B250 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B250.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006C7C (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180006DD4 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000B7F0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180062B0C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int8 a5,
        _BYTE *a6,
        unsigned __int64 a7)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  void **v13; // r9
  __int64 v14; // rbx
  struct std::_Facet_base *v15; // r14
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  void **v17; // rbx
  __int64 v18; // r9
  char v19; // r14
  char v20; // cl
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  int v24; // eax
  __int128 v25; // xmm0
  unsigned __int8 *v26; // r14
  __int64 v27; // r12
  unsigned __int8 *v28; // r14
  __int64 v29; // r12
  unsigned __int8 v30; // r12
  unsigned __int8 *v31; // r14
  __int64 v32; // r12
  void **v33; // r14
  unsigned __int8 *v34; // r14
  __int64 v35; // rsi
  _OWORD *v36; // rbx
  __int128 v38; // [rsp+48h] [rbp-61h] BYREF
  _OWORD *v39; // [rsp+58h] [rbp-51h]
  __int64 v40; // [rsp+60h] [rbp-49h]
  void *v41[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-31h]
  unsigned __int64 v43; // [rsp+80h] [rbp-29h]
  void *v44[3]; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v45; // [rsp+A0h] [rbp-9h]

  v40 = -2LL;
  v39 = a2;
  v9 = a7;
  v10 = a7 && ((*a6 - 43) & 0xFD) == 0;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v10 + 2 <= a7 && a6[v10] == 48 && ((a6[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2LL;
  v11 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v38 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *(_QWORD *)&v38 = std::use_facet<std::ctype<char>>((__int64 *)&v38);
  if ( v11 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  v43 = 15LL;
  v42 = 0LL;
  LOBYTE(v41[0]) = 0;
  std::string::assign(v41, a7, 0LL);
  v13 = v41;
  if ( v43 >= 0x10 )
    v13 = (void **)v41[0];
  (*(void (__fastcall **)(_QWORD, _BYTE *, _BYTE *, void **))(*(_QWORD *)v38 + 56LL))(v38, a6, &a6[a7], v13);
  v14 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v38 = v14;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = std::use_facet<std::numpunct<char>>((__int64 *)&v38);
  if ( v14 )
  {
    v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v15 + 40LL))(v15, v44);
  v17 = v44;
  if ( v45 >= 0x10 )
    v17 = (void **)v44[0];
  if ( (unsigned __int8)(*(_BYTE *)v17 - 1) <= 0x7Du )
  {
    v19 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v15 + 32LL))(v15);
    while ( 1 )
    {
      v20 = *(_BYTE *)v17;
      if ( *(_BYTE *)v17 == 127 || v20 <= 0 || v20 >= v9 - v10 )
        break;
      v9 -= v20;
      LOBYTE(v18) = v19;
      std::string::insert(v41, v9, 1LL, v18);
      if ( *((char *)v17 + 1) > 0 )
        v17 = (void **)((char *)v17 + 1);
    }
  }
  v21 = v42;
  v22 = *(_QWORD *)(a4 + 40);
  if ( v22 <= 0 || v22 <= v42 )
    v23 = 0LL;
  else
    v23 = v22 - v42;
  v24 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v25 = *a3;
  v38 = *a3;
  if ( v24 == 64 )
  {
    v31 = (unsigned __int8 *)v41;
    if ( v43 >= 0x10 )
      v31 = (unsigned __int8 *)v41[0];
    v32 = v10;
    if ( !v10 )
      goto LABEL_55;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v31++);
      --v32;
    }
    while ( v32 );
    goto LABEL_54;
  }
  if ( v24 != 256 )
  {
    if ( v23 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v38, a5);
        --v23;
      }
      while ( v23 );
      v25 = v38;
    }
    v23 = 0LL;
    v26 = (unsigned __int8 *)v41;
    if ( v43 >= 0x10 )
      v26 = (unsigned __int8 *)v41[0];
    v38 = v25;
    v27 = v10;
    if ( !v10 )
      goto LABEL_55;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v26++);
      --v27;
    }
    while ( v27 );
LABEL_54:
    v25 = v38;
LABEL_55:
    v30 = a5;
    goto LABEL_56;
  }
  v28 = (unsigned __int8 *)v41;
  if ( v43 >= 0x10 )
    v28 = (unsigned __int8 *)v41[0];
  v29 = v10;
  if ( v10 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v28++);
      --v29;
    }
    while ( v29 );
    v25 = v38;
  }
  v38 = v25;
  v30 = a5;
  if ( v23 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, a5);
      --v23;
    }
    while ( v23 );
    v25 = v38;
  }
  v23 = 0LL;
LABEL_56:
  *a3 = v25;
  v33 = v41;
  if ( v43 >= 0x10 )
    v33 = (void **)v41[0];
  v34 = (unsigned __int8 *)v33 + v10;
  v38 = v25;
  v35 = v21 - v10;
  if ( v35 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v34++);
      --v35;
    }
    while ( v35 );
    v25 = v38;
  }
  *(_QWORD *)(a4 + 40) = 0LL;
  v38 = v25;
  if ( v23 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, v30);
      --v23;
    }
    while ( v23 );
    v25 = v38;
  }
  v36 = v39;
  *v39 = v25;
  if ( v45 >= 0x10 )
    operator delete(v44[0]);
  v45 = 15LL;
  v44[2] = 0LL;
  LOBYTE(v44[0]) = 0;
  if ( v43 >= 0x10 )
    operator delete(v41[0]);
  return v36;
}
