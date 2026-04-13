/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B34
 * Callers:
 *     ?do_get@?$messages@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@HHHAEBV32@@Z @ 0x180017DB0 (-do_get@-$messages@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@HHHAE.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180019B70 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x180019DE0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_180019DE0.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800518A0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180062C40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1800652EC (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x1800049E0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x1800619C0 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x180062EAC (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x180064300 (-erase@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K@Z @ 0x1800643B0 (-erase@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K@Z.c)
 */

_QWORD *__fastcall std::wstring::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  _QWORD *v6; // rsi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  v4 = a2[2];
  v6 = a2;
  if ( v4 < a3 )
    std::_Xout_of_range("invalid string position");
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 == a2 )
  {
    std::wstring::erase(a1, v8 + a3);
    std::wstring::erase(a1, 0LL, a3);
  }
  else if ( std::wstring::_Grow(a1, v8, 0) )
  {
    if ( v6[3] >= 8uLL )
      v6 = (_QWORD *)*v6;
    if ( a1[3] < 8uLL )
      v9 = a1;
    else
      v9 = (_QWORD *)*a1;
    std::char_traits<wchar_t>::copy(v9, (char *)v6 + 2 * a3, v8);
    if ( a1[3] < 8uLL )
      v10 = a1;
    else
      v10 = (_QWORD *)*a1;
    a1[2] = v8;
    *((_WORD *)v10 + v8) = 0;
  }
  return a1;
}
