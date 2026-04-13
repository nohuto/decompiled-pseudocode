/*
 * XREFs of ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180068B34
 * Callers:
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180054274 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_st.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069BC8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180069CAC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18006A01C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18007BA24 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180066C28 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 */

bool __fastcall std::wstring::_Grow(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  void *v6; // rbp
  bool v7; // zf
  _WORD *v8; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  if ( *(_QWORD *)(a1 + 24) < a2 )
  {
    std::wstring::_Copy((const void **)a1, a2, *(_QWORD *)(a1 + 16));
LABEL_18:
    v7 = a2 == 0;
    return !v7;
  }
  if ( a3 && a2 < 8 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( a2 < v5 )
      v5 = a2;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    {
      v6 = *(void **)a1;
      if ( v5 )
        memcpy_0((void *)a1, *(const void **)a1, 2 * v5);
      operator delete(v6);
    }
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = v5;
    *(_WORD *)(a1 + 2 * v5) = 0;
    goto LABEL_18;
  }
  v7 = a2 == 0;
  if ( !a2 )
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v8 = (_WORD *)a1;
    else
      v8 = *(_WORD **)a1;
    *(_QWORD *)(a1 + 16) = 0LL;
    *v8 = 0;
    goto LABEL_18;
  }
  return !v7;
}
