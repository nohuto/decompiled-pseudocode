/*
 * XREFs of ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x180013F9C
 * Callers:
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GJ@Z @ 0x180019DF0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GK@Z @ 0x180019EB0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180019EB0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBX@Z @ 0x18001A2F0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001A2F0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_J@Z @ 0x18001A3B0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001A3B0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_K@Z @ 0x18001A470 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001A470.c)
 * Callees:
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x18000FC40 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001B5E8 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180054EE0 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18006A01C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Iput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        _BYTE *a6,
        unsigned __int64 a7)
{
  __int64 v7; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void **v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r15
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void **v18; // rbx
  unsigned __int16 v19; // r15
  char v20; // cl
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  int v24; // eax
  __int128 v25; // xmm0
  void **v26; // r15
  __int64 v27; // r12
  void **v28; // r15
  __int64 v29; // r12
  void **v30; // r15
  __int64 v31; // r12
  void **v32; // rax
  unsigned __int16 *v33; // r15
  unsigned __int64 v34; // rsi
  _OWORD *v35; // rbx
  __int128 v37; // [rsp+48h] [rbp-61h] BYREF
  __int64 v38; // [rsp+58h] [rbp-51h]
  _OWORD *v39; // [rsp+60h] [rbp-49h]
  __int64 v40; // [rsp+68h] [rbp-41h]
  void *v41[2]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-29h]
  unsigned __int64 v43; // [rsp+88h] [rbp-21h]
  void *v44[3]; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp-1h]

  v40 = -2LL;
  v7 = a4;
  v38 = a4;
  v39 = a2;
  v9 = a7;
  if ( !a7 || (v10 = 1LL, ((*a6 - 43) & 0xFD) != 0) )
    v10 = 0LL;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v10 + 2 <= a7 && a6[v10] == 48 && ((a6[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2LL;
  v11 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v37 = v11;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<unsigned short>>(&v37);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = 0LL;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v43 = 7LL;
  v42 = v11;
  LOWORD(v41[0]) = v11;
  std::wstring::assign(v41, a7, 0LL);
  v14 = v41;
  if ( v43 >= 8 )
    v14 = (void **)v41[0];
  (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *, void **))(*(_QWORD *)v12 + 88LL))(v12, a6, &a6[a7], v14);
  v15 = **(_QWORD **)(v7 + 64);
  *(_QWORD *)&v37 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::numpunct<unsigned short>>(&v37);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 40LL))(v16, v44);
  v18 = v44;
  if ( v45 >= 0x10 )
    v18 = (void **)v44[0];
  if ( (unsigned __int8)(*(_BYTE *)v18 - 1) <= 0x7Du )
  {
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    while ( 1 )
    {
      v20 = *(_BYTE *)v18;
      if ( *(_BYTE *)v18 == 127 || v20 <= 0 || v20 >= v9 - v10 )
        break;
      v9 -= v20;
      std::wstring::insert(v41, v9, 1LL, v19);
      if ( *((char *)v18 + 1) > 0 )
        v18 = (void **)((char *)v18 + 1);
    }
  }
  v21 = v42;
  v22 = *(_QWORD *)(v7 + 40);
  if ( v22 <= 0 || v22 <= v42 )
    v23 = 0LL;
  else
    v23 = v22 - v42;
  v24 = *(_DWORD *)(v7 + 24) & 0x1C0;
  v25 = *a3;
  v37 = *a3;
  if ( v24 == 64 )
  {
    v30 = v41;
    if ( v43 >= 8 )
      v30 = (void **)v41[0];
    v31 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v37, *(unsigned __int16 *)v30);
        v30 = (void **)((char *)v30 + 2);
        --v31;
      }
      while ( v31 );
      goto LABEL_53;
    }
  }
  else if ( v24 == 256 )
  {
    v28 = v41;
    if ( v43 >= 8 )
      v28 = (void **)v41[0];
    v29 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v37, *(unsigned __int16 *)v28);
        v28 = (void **)((char *)v28 + 2);
        --v29;
      }
      while ( v29 );
      v25 = v37;
      v7 = v38;
    }
    v37 = v25;
    if ( v23 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v37, a5);
        --v23;
      }
      while ( v23 );
      v25 = v37;
    }
    v23 = 0LL;
  }
  else
  {
    if ( v23 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v37, a5);
        --v23;
      }
      while ( v23 );
      v25 = v37;
    }
    v23 = 0LL;
    v26 = v41;
    if ( v43 >= 8 )
      v26 = (void **)v41[0];
    v37 = v25;
    v27 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v37, *(unsigned __int16 *)v26);
        v26 = (void **)((char *)v26 + 2);
        --v27;
      }
      while ( v27 );
LABEL_53:
      v25 = v37;
      v7 = v38;
    }
  }
  *a3 = v25;
  v32 = v41;
  if ( v43 >= 8 )
    v32 = (void **)v41[0];
  v33 = (unsigned __int16 *)v32 + v10;
  v37 = v25;
  v34 = v21 - v10;
  if ( v34 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v37, *v33++);
      --v34;
    }
    while ( v34 );
    v25 = v37;
    v7 = v38;
  }
  *(_QWORD *)(v7 + 40) = 0LL;
  v37 = v25;
  if ( v23 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v37, a5);
      --v23;
    }
    while ( v23 );
    v25 = v37;
  }
  v35 = v39;
  *v39 = v25;
  if ( v45 >= 0x10 )
    operator delete(v44[0]);
  v45 = 15LL;
  v44[2] = 0LL;
  LOBYTE(v44[0]) = 0;
  if ( v43 >= 8 )
    operator delete(v41[0]);
  return v35;
}
