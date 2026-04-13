/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062924
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180063920 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180063920.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800719BC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800049B4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x1800049E0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x1800619C0 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x180062EAC (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  _QWORD *v13; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::_Xout_of_range("invalid string position");
  v9 = a1[2];
  v10 = v4 - a3;
  if ( v10 < a4 )
    v5 = v10;
  if ( ~v9 <= v5 )
    std::_Xlength_error("string too long");
  if ( v5 )
  {
    v11 = v9 + v5;
    if ( std::wstring::_Grow(a1, v9 + v5, 0) )
    {
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      if ( a1[3] < 8uLL )
        v12 = a1;
      else
        v12 = (_QWORD *)*a1;
      std::char_traits<wchar_t>::copy((char *)v12 + 2 * a1[2], (char *)v7 + 2 * a3, v5);
      if ( a1[3] < 8uLL )
        v13 = a1;
      else
        v13 = (_QWORD *)*a1;
      a1[2] = v11;
      *((_WORD *)v13 + v11) = 0;
    }
  }
  return a1;
}
