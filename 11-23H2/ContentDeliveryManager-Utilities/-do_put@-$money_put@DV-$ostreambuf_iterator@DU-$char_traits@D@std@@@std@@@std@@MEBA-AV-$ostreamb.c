/*
 * XREFs of ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x180020CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001F0C4 (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180043664 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180043768 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180062888 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        _QWORD *a7)
{
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char v14; // si
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  _BYTE *v17; // rcx
  unsigned __int64 i; // r8
  _QWORD *v19; // rcx
  _BYTE *v20; // rax
  char v21; // r10
  char v22; // cl
  char v23; // bl
  __int128 v26; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int8 v27[16]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v28; // [rsp+88h] [rbp-41h]
  __int64 v29; // [rsp+90h] [rbp-39h]
  __int64 v30; // [rsp+98h] [rbp-31h]
  void *v31[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-19h]
  unsigned __int64 v33; // [rsp+B8h] [rbp-11h]
  _BYTE v34[16]; // [rsp+C0h] [rbp-9h] BYREF

  v30 = -2LL;
  v10 = a7;
  v11 = **(_QWORD **)(a5 + 64);
  *(_QWORD *)&v26 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<char>>((__int64 *)&v26);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v12 + 56LL))(
    v12,
    "0123456789-",
    "",
    v34);
  v14 = 0;
  v15 = 0LL;
  v16 = a7[2];
  if ( v16 )
  {
    v17 = a7[3] < 0x10uLL ? a7 : (_BYTE *)*a7;
    if ( *v17 == v34[10] )
    {
      v14 = 1;
      v15 = 1LL;
    }
  }
  for ( i = v15; i < v16; ++i )
  {
    if ( a7[3] < 0x10uLL )
      v19 = a7;
    else
      v19 = (_QWORD *)*a7;
    v20 = v34;
    if ( v34[0] )
    {
      v21 = *((_BYTE *)v19 + i);
      v22 = v34[0];
      do
      {
        if ( v22 == v21 )
          break;
        v22 = *++v20;
      }
      while ( *v20 );
    }
    if ( (unsigned __int64)(v20 - v34) >= 0xA )
      break;
  }
  if ( a7[3] >= 0x10uLL )
    v10 = (_QWORD *)*a7;
  v33 = 15LL;
  v32 = 0LL;
  LOBYTE(v31[0]) = 0;
  std::string::assign(v31, (char *)v10 + v15, i - v15);
  if ( !v32 )
    std::string::append(v31, 1LL);
  v23 = v34[0];
  v29 = 15LL;
  v28 = 0LL;
  v27[0] = 0;
  std::string::assign(v27);
  v26 = *a3;
  std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(a1, a2, &v26, a4, a5, a6, v14, v27, v23);
  if ( v33 >= 0x10 )
    operator delete(v31[0]);
  return a2;
}
