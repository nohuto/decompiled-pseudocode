/*
 * XREFs of ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180047FA4
 * Callers:
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180075E74 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180047B44 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 */

bool __fastcall std::string::_Grow(__int64 a1, unsigned __int64 a2, char a3)
{
  size_t v5; // rsi
  void *v6; // rbp
  bool v7; // zf
  _BYTE *v8; // rax

  if ( a2 == -1LL )
    std::wstring::_Xlen();
  if ( *(_QWORD *)(a1 + 24) < a2 )
  {
    std::string::_Copy((const void **)a1, a2, *(_QWORD *)(a1 + 16));
LABEL_18:
    v7 = a2 == 0;
    return !v7;
  }
  if ( a3 && a2 < 0x10 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( a2 < v5 )
      v5 = a2;
    if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
    {
      v6 = *(void **)a1;
      if ( v5 )
        memcpy_0((void *)a1, *(const void **)a1, v5);
      operator delete(v6);
    }
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_QWORD *)(a1 + 16) = v5;
    *(_BYTE *)(v5 + a1) = 0;
    goto LABEL_18;
  }
  v7 = a2 == 0;
  if ( !a2 )
  {
    if ( *(_QWORD *)(a1 + 24) < 0x10uLL )
      v8 = (_BYTE *)a1;
    else
      v8 = *(_BYTE **)a1;
    *(_QWORD *)(a1 + 16) = 0LL;
    *v8 = 0;
    goto LABEL_18;
  }
  return !v7;
}
