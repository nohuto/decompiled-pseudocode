/*
 * XREFs of ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x180010C70
 * Callers:
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WN@Z @ 0x18001B0A0 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18001B0A0.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WO@Z @ 0x18001B270 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18001B270.c)
 * Callees:
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x180010454 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x18001BEA0 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC84 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x1800B6AC4 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800B8D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Fput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v10; // r13
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
  __int64 v22; // rsi
  void (__fastcall ***v23)(_QWORD, __int64); // r8
  void (__fastcall ***v24)(_QWORD, __int64); // rax
  size_t v25; // rbx
  unsigned __int16 v26; // r14
  __int16 v27; // ax
  void **v28; // rcx
  size_t v29; // rsi
  void **v30; // rbx
  char v31; // al
  unsigned __int16 v32; // r14
  unsigned __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  int v36; // eax
  __int128 v37; // xmm0
  void **v38; // r14
  __int64 v39; // r12
  void **v40; // r14
  __int64 v41; // r12
  void **v42; // r14
  __int64 v43; // r12
  void **v44; // rax
  unsigned __int16 *v45; // r14
  unsigned __int64 v46; // rsi
  _OWORD *v47; // rbx
  __int16 Control; // [rsp+3Ch] [rbp-85h] BYREF
  unsigned __int16 v50; // [rsp+40h] [rbp-81h]
  __int128 v51; // [rsp+48h] [rbp-79h] BYREF
  __int64 v52; // [rsp+58h] [rbp-69h] BYREF
  __int64 v53; // [rsp+60h] [rbp-61h]
  _OWORD *v54; // [rsp+68h] [rbp-59h]
  __int64 v55; // [rsp+70h] [rbp-51h]
  void *v56[2]; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-39h]
  unsigned __int64 v58; // [rsp+90h] [rbp-31h]
  void *v59[3]; // [rsp+98h] [rbp-29h] BYREF
  unsigned __int64 v60; // [rsp+B0h] [rbp-11h]

  v55 = -2LL;
  v10 = a4;
  v53 = a4;
  v54 = a2;
  if ( !a10 || (v12 = 1LL, ((*Str - 43) & 0xFD) != 0) )
    v12 = 0LL;
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
  Control = 46;
  LOBYTE(Control) = *localeconv()->decimal_point;
  *(_QWORD *)&v51 = strcspn(Str, (const char *)&Control);
  v15 = **(_QWORD **)(v10 + 64);
  v52 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v52 = std::use_facet<std::ctype<wchar_t>>((std::locale *)&v52);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = v52;
  LOBYTE(v16) = 48;
  v50 = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v52 + 96LL))(
          v52,
          v16,
          v17);
  v58 = 7LL;
  v57 = 0LL;
  LOWORD(v56[0]) = 0;
  std::wstring::assign(v56, a10, 0LL);
  v20 = v56;
  if ( v58 >= 8 )
    v20 = (void **)v56[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 88LL))(v19, Str, &Str[a10], v20);
  v21 = **(_QWORD **)(v10 + 64);
  v52 = v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = std::use_facet<std::numpunct<wchar_t>>((std::locale *)&v52);
  if ( v21 )
  {
    v24 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v23 = v24;
    if ( v24 )
      (**v24)(v24, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v22 + 40LL))(
    v22,
    v59,
    v23);
  LOWORD(v52) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
  v25 = v51;
  v26 = v50;
  if ( (_QWORD)v51 != a10 )
  {
    std::wstring::insert(v56, v14, a9, v50);
    std::wstring::insert(v56, v25 + 1, a8, v26);
    v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
    v28 = v56;
    if ( v58 >= 8 )
      v28 = (void **)v56[0];
    *((_WORD *)v28 + v25) = v27;
    v14 = v25;
  }
  v29 = v14 + a7;
  std::wstring::insert(v56, v14, a7, v26);
  v30 = v59;
  if ( v60 >= 0x10 )
    v30 = (void **)v59[0];
  v31 = *(_BYTE *)v30;
  if ( *(_BYTE *)v30 != 127 )
  {
    v32 = v52;
    do
    {
      if ( v31 <= 0 || v31 >= v29 - v12 )
        break;
      v29 -= v31;
      std::wstring::insert(v56, v29, 1LL, v32);
      if ( *((char *)v30 + 1) > 0 )
        v30 = (void **)((char *)v30 + 1);
      v31 = *(_BYTE *)v30;
    }
    while ( *(_BYTE *)v30 != 127 );
  }
  v33 = v57;
  v34 = *(_QWORD *)(v10 + 40);
  if ( v34 <= 0 || v34 <= v57 )
    v35 = 0LL;
  else
    v35 = v34 - v57;
  v36 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v37 = *a3;
  v51 = *a3;
  if ( v36 == 64 )
  {
    v42 = v56;
    if ( v58 >= 8 )
      v42 = (void **)v56[0];
    v43 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *(unsigned __int16 *)v42);
        v42 = (void **)((char *)v42 + 2);
        --v43;
      }
      while ( v43 );
      goto LABEL_58;
    }
  }
  else if ( v36 == 256 )
  {
    v40 = v56;
    if ( v58 >= 8 )
      v40 = (void **)v56[0];
    v41 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *(unsigned __int16 *)v40);
        v40 = (void **)((char *)v40 + 2);
        --v41;
      }
      while ( v41 );
      v37 = v51;
      v10 = v53;
    }
    v51 = v37;
    if ( v35 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
        --v35;
      }
      while ( v35 );
      v37 = v51;
    }
    v35 = 0LL;
  }
  else
  {
    if ( v35 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
        --v35;
      }
      while ( v35 );
      v37 = v51;
    }
    v35 = 0LL;
    v38 = v56;
    if ( v58 >= 8 )
      v38 = (void **)v56[0];
    v51 = v37;
    v39 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *(unsigned __int16 *)v38);
        v38 = (void **)((char *)v38 + 2);
        --v39;
      }
      while ( v39 );
LABEL_58:
      v37 = v51;
      v10 = v53;
    }
  }
  *a3 = v37;
  v44 = v56;
  if ( v58 >= 8 )
    v44 = (void **)v56[0];
  v45 = (unsigned __int16 *)v44 + v12;
  v51 = v37;
  v46 = v33 - v12;
  if ( v46 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v45++);
      --v46;
    }
    while ( v46 );
    v37 = v51;
    v10 = v53;
  }
  *(_QWORD *)(v10 + 40) = 0LL;
  v51 = v37;
  if ( v35 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
      --v35;
    }
    while ( v35 );
    v37 = v51;
  }
  v47 = v54;
  *v54 = v37;
  if ( v60 >= 0x10 )
    operator delete(v59[0]);
  v60 = 15LL;
  v59[2] = 0LL;
  LOBYTE(v59[0]) = 0;
  if ( v58 >= 8 )
    operator delete(v56[0]);
  return v47;
}
