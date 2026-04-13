/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18006AF60
 * Callers:
 *     <none>
 * Callees:
 *     _Stoulx @ 0x1800047B0 (_Stoulx.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18005430C (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180054EE0 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180068608 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069BC8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180069CAC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v10; // esi
  struct std::_Facet_base **v11; // rcx
  struct std::_Facet_base *v12; // rbx
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  struct std::_Facet_base *v14; // rbx
  __int16 *v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // ebx
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  _OWORD *result; // rax
  struct std::_Facet_base *v20; // [rsp+30h] [rbp-91h] BYREF
  int v21; // [rsp+38h] [rbp-89h] BYREF
  char *v22; // [rsp+40h] [rbp-81h] BYREF
  bool *v23; // [rsp+48h] [rbp-79h]
  _OWORD *v24; // [rsp+50h] [rbp-71h]
  void *v25[3]; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-51h]
  void *v27[3]; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-31h]
  char v29[32]; // [rsp+98h] [rbp-29h] BYREF

  v24 = a2;
  v23 = a7;
  v10 = -1;
  v11 = *(struct std::_Facet_base ***)(a5 + 64);
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = *v11;
    v20 = v12;
    (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 8LL))(v12);
    v20 = std::use_facet<std::numpunct<unsigned short>>((__int64 *)&v20);
    if ( v12 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v13 )
        (**v13)(v13, 1LL);
    }
    v26 = 7LL;
    LODWORD(v25[0]) = 0;
    v25[2] = (void *)1;
    v14 = v20;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v20 + 48LL))(v20, v27);
    std::wstring::append(v25, v27, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v28 >= 8 )
      operator delete(v27[0]);
    std::wstring::append(v25, 1uLL, 0);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 56LL))(v14, v27);
    std::wstring::append(v25, v27, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v28 >= 8 )
      operator delete(v27[0]);
    v15 = (__int16 *)v25;
    if ( v26 >= 8 )
      v15 = (__int16 *)v25[0];
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, a4, 2uLL, v15);
    if ( v26 >= 8 )
      operator delete(v25[0]);
  }
  else
  {
    v21 = 0;
    v20 = *v11;
    (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v20 + 8LL))(v20);
    v16 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
            a1,
            v29,
            a3,
            a4,
            *(_DWORD *)(a5 + 24),
            (__int64 *)&v20);
    v17 = Stoulx(v29, &v22, v16, &v21);
    if ( v20 )
    {
      v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v18 )
        (**v18)(v18, 1LL);
    }
    if ( v22 != v29 && !v21 && v17 <= 1 )
      v10 = v17;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( !*(_QWORD *)a4 )
LABEL_28:
    *a6 |= 1u;
LABEL_29:
  if ( v10 >= 0 )
    *v23 = v10 != 0;
  else
    *a6 |= 2u;
  result = v24;
  *v24 = *(_OWORD *)a3;
  return result;
}
