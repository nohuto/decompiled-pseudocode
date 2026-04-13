/*
 * XREFs of ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180019410
 * Callers:
 *     <none>
 * Callees:
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x1800161DC (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180069CAC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        _QWORD *a7)
{
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char v14; // si
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  _WORD *v17; // rcx
  unsigned __int64 i; // r8
  _QWORD *v19; // rcx
  _WORD *v20; // rax
  __int16 v21; // r10
  __int16 v22; // cx
  unsigned __int16 v23; // bx
  __int128 v26; // [rsp+68h] [rbp-71h] BYREF
  __int64 v27[5]; // [rsp+78h] [rbp-61h] BYREF
  void *v28[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v30; // [rsp+B8h] [rbp-21h]
  _WORD v31[12]; // [rsp+C0h] [rbp-19h] BYREF

  v27[4] = -2LL;
  v10 = a7;
  v11 = **(_QWORD **)(a5 + 64);
  *(_QWORD *)&v26 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<unsigned short>>(&v26);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = 0LL;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v12 + 88LL))(v12, "0123456789-", "", v31);
  v14 = v11;
  v15 = v11;
  v16 = a7[2];
  if ( v16 )
  {
    v17 = a7[3] < 8uLL ? a7 : (_WORD *)*a7;
    if ( *v17 == v31[10] )
    {
      v14 = 1;
      v15 = 1LL;
    }
  }
  for ( i = v15; i < v16; ++i )
  {
    if ( a7[3] < 8uLL )
      v19 = a7;
    else
      v19 = (_QWORD *)*a7;
    v20 = v31;
    if ( v31[0] )
    {
      v21 = *((_WORD *)v19 + i);
      v22 = v31[0];
      do
      {
        if ( v22 == v21 )
          break;
        v22 = *++v20;
      }
      while ( *v20 );
    }
    if ( (unsigned __int64)(v20 - v31) >= 0xA )
      break;
  }
  if ( a7[3] >= 8uLL )
    v10 = (_QWORD *)*a7;
  v30 = 7LL;
  v29 = v11;
  LOWORD(v28[0]) = v11;
  std::wstring::assign(v28, (char *)v10 + 2 * v15);
  if ( v29 == v11 )
    std::wstring::append(v28, 1LL, v31[0]);
  v23 = v31[0];
  v27[3] = 7LL;
  v27[2] = 0LL;
  LOWORD(v27[0]) = 0;
  std::wstring::assign(v27);
  v26 = *a3;
  std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Putmfld(
    a1,
    a2,
    &v26,
    a4,
    a5,
    a6,
    v14,
    v27,
    v23);
  if ( v30 >= 8 )
    operator delete(v28[0]);
  return a2;
}
