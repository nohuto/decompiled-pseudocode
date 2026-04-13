/*
 * XREFs of ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x180007064
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DN@Z @ 0x18000AD60 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000AD60.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DO@Z @ 0x18000AF20 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000AF20.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006C7C (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180006DD4 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000B7F0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180062ABC (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Fput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        char a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v12; // rdi
  const char *v13; // rdx
  size_t v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdx
  void (__fastcall ***v17)(_QWORD, __int64); // r8
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  __int64 v19; // rbx
  void **v20; // r9
  __int64 v21; // rbx
  struct std::_Facet_base *v22; // rsi
  void (__fastcall ***v23)(_QWORD, __int64); // r8
  void (__fastcall ***v24)(_QWORD, __int64); // rax
  __int64 v25; // r9
  size_t v26; // rbx
  __int64 v27; // r9
  char v28; // al
  void **v29; // rcx
  size_t v30; // rsi
  __int64 v31; // r9
  void **v32; // rbx
  char i; // al
  unsigned __int64 v34; // rsi
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  int v37; // eax
  __int128 v38; // xmm0
  unsigned __int8 *v39; // r14
  __int64 v40; // r12
  unsigned __int8 *v41; // r14
  __int64 v42; // r12
  unsigned __int8 *v43; // r14
  __int64 v44; // r12
  void **v45; // r14
  unsigned __int8 *v46; // r14
  __int64 v47; // rsi
  _OWORD *v48; // rbx
  char v50; // [rsp+39h] [rbp-88h]
  char v51; // [rsp+3Ah] [rbp-87h]
  __int128 v52; // [rsp+48h] [rbp-79h] BYREF
  char Control[8]; // [rsp+58h] [rbp-69h] BYREF
  struct std::_Facet_base *v54; // [rsp+60h] [rbp-61h] BYREF
  _OWORD *v55; // [rsp+68h] [rbp-59h]
  __int64 v56; // [rsp+70h] [rbp-51h]
  void *v57[2]; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v58; // [rsp+88h] [rbp-39h]
  unsigned __int64 v59; // [rsp+90h] [rbp-31h]
  void *v60[3]; // [rsp+98h] [rbp-29h] BYREF
  unsigned __int64 v61; // [rsp+B0h] [rbp-11h]

  v56 = -2LL;
  v55 = a2;
  v12 = a10 && ((*Str - 43) & 0xFD) == 0;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x3000 )
  {
    v13 = "pP";
    if ( v12 + 2 <= a10 && Str[v12] == 48 && ((Str[v12 + 1] - 88) & 0xDF) == 0 )
      v12 += 2LL;
  }
  else
  {
    v13 = "eE";
  }
  v14 = strcspn(Str, v13);
  strcpy(Control, ".");
  Control[0] = *localeconv()->decimal_point;
  *(_QWORD *)&v52 = strcspn(Str, Control);
  v15 = **(_QWORD **)(a4 + 64);
  v54 = (struct std::_Facet_base *)v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v54 = std::use_facet<std::ctype<char>>((__int64 *)&v54);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = (__int64)v54;
  LOBYTE(v16) = 48;
  v50 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v54 + 64LL))(
          v54,
          v16,
          v17);
  v59 = 15LL;
  v58 = 0LL;
  LOBYTE(v57[0]) = 0;
  std::string::assign(v57, a10, 0LL);
  v20 = v57;
  if ( v59 >= 0x10 )
    v20 = (void **)v57[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 56LL))(v19, Str, &Str[a10], v20);
  v21 = **(_QWORD **)(a4 + 64);
  v54 = (struct std::_Facet_base *)v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = std::use_facet<std::numpunct<char>>((__int64 *)&v54);
  if ( v21 )
  {
    v24 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v23 = v24;
    if ( v24 )
      (**v24)(v24, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v22 + 40LL))(
    v22,
    v60,
    v23);
  v51 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v22 + 32LL))(v22);
  v26 = v52;
  if ( (_QWORD)v52 != a10 )
  {
    LOBYTE(v25) = v50;
    std::string::insert(v57, v14, a9, v25);
    LOBYTE(v27) = v50;
    std::string::insert(v57, v52 + 1, a8, v27);
    v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v22 + 24LL))(v22);
    v29 = v57;
    if ( v59 >= 0x10 )
      v29 = (void **)v57[0];
    *((_BYTE *)v29 + v52) = v28;
    v14 = v26;
  }
  v30 = v14 + a7;
  LOBYTE(v25) = v50;
  std::string::insert(v57, v14, a7, v25);
  v32 = v60;
  if ( v61 >= 0x10 )
    v32 = (void **)v60[0];
  for ( i = *(_BYTE *)v32; *(_BYTE *)v32 != 127; i = *(_BYTE *)v32 )
  {
    if ( i <= 0 || i >= v30 - v12 )
      break;
    v30 -= i;
    LOBYTE(v31) = v51;
    std::string::insert(v57, v30, 1LL, v31);
    if ( *((char *)v32 + 1) > 0 )
      v32 = (void **)((char *)v32 + 1);
  }
  v34 = v58;
  v35 = *(_QWORD *)(a4 + 40);
  if ( v35 <= 0 || v35 <= v58 )
    v36 = 0LL;
  else
    v36 = v35 - v58;
  v37 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v38 = *a3;
  v52 = *a3;
  if ( v37 == 64 )
  {
    v43 = (unsigned __int8 *)v57;
    if ( v59 >= 0x10 )
      v43 = (unsigned __int8 *)v57[0];
    v44 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v52, *v43++);
        --v44;
      }
      while ( v44 );
      goto LABEL_58;
    }
  }
  else if ( v37 == 256 )
  {
    v41 = (unsigned __int8 *)v57;
    if ( v59 >= 0x10 )
      v41 = (unsigned __int8 *)v57[0];
    v42 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v52, *v41++);
        --v42;
      }
      while ( v42 );
      v38 = v52;
    }
    v52 = v38;
    if ( v36 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v52, a5);
        --v36;
      }
      while ( v36 );
      v38 = v52;
    }
    v36 = 0LL;
  }
  else
  {
    if ( v36 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v52, a5);
        --v36;
      }
      while ( v36 );
      v38 = v52;
    }
    v36 = 0LL;
    v39 = (unsigned __int8 *)v57;
    if ( v59 >= 0x10 )
      v39 = (unsigned __int8 *)v57[0];
    v52 = v38;
    v40 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v52, *v39++);
        --v40;
      }
      while ( v40 );
LABEL_58:
      v38 = v52;
    }
  }
  *a3 = v38;
  v45 = v57;
  if ( v59 >= 0x10 )
    v45 = (void **)v57[0];
  v46 = (unsigned __int8 *)v45 + v12;
  v52 = v38;
  v47 = v34 - v12;
  if ( v47 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v52, *v46++);
      --v47;
    }
    while ( v47 );
    v38 = v52;
  }
  *(_QWORD *)(a4 + 40) = 0LL;
  v52 = v38;
  if ( v36 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v52, a5);
      --v36;
    }
    while ( v36 );
    v38 = v52;
  }
  v48 = v55;
  *v55 = v38;
  if ( v61 >= 0x10 )
    operator delete(v60[0]);
  v61 = 15LL;
  v60[2] = 0LL;
  LOBYTE(v60[0]) = 0;
  if ( v59 >= 0x10 )
    operator delete(v57[0]);
  return v48;
}
