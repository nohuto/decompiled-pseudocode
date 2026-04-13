/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180071934
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x180072510 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800049B4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     memcpy_0 @ 0x180022B24 (memcpy_0.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180042EA0 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Inside@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_NPEBD@Z @ 0x180042F1C (-_Inside@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_NPEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180071850 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *a1, _BYTE *a2, size_t a3)
{
  _QWORD *v6; // rax
  __int64 v8; // rcx
  size_t v9; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax

  if ( std::string::_Inside(a1, (unsigned __int64)a2) )
  {
    if ( a1[3] < 0x10uLL )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    return std::string::append(a1, a1, a2 - (_BYTE *)v6, a3);
  }
  else
  {
    v8 = a1[2];
    if ( ~v8 <= a3 )
      std::_Xlength_error("string too long");
    if ( a3 )
    {
      v9 = v8 + a3;
      if ( std::string::_Grow((__int64)a1, v8 + a3, 0) )
      {
        if ( a1[3] < 0x10uLL )
          v10 = a1;
        else
          v10 = (_QWORD *)*a1;
        memcpy_0((char *)v10 + a1[2], a2, a3);
        if ( a1[3] < 0x10uLL )
          v11 = a1;
        else
          v11 = (_QWORD *)*a1;
        a1[2] = v9;
        *((_BYTE *)v11 + v9) = 0;
      }
    }
    return a1;
  }
}
