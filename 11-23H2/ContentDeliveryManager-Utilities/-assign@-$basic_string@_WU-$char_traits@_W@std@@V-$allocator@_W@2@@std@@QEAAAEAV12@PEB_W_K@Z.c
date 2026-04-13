/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180096D64
 * Callers:
 *     ?do_curr_symbol@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180017D20 (-do_curr_symbol@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 *     ?do_negative_sign@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180019910 (-do_negative_sign@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@.c)
 *     ?do_positive_sign@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180019B20 (-do_positive_sign@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18001A060 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180096D2C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W_K@Z @ 0x18009AE60 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W_K@Z.c)
 * Callees:
 *     ?_Inside@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_NPEB_W@Z @ 0x180061FF8 (-_Inside@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_NPEB_W@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x180062EAC (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800968B8 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180096C58 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

void **__fastcall std::wstring::assign(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  _BYTE *v6; // rax
  _BYTE *v8; // rcx
  _BYTE *v9; // rax

  if ( std::wstring::_Inside((_QWORD *)a1, (unsigned __int64)a2) )
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v6 = (_BYTE *)a1;
    else
      v6 = *(_BYTE **)a1;
    return std::wstring::assign((void **)a1, (void **)a1, (a2 - v6) >> 1, a3);
  }
  else
  {
    if ( std::wstring::_Grow(a1, a3, 0) )
    {
      if ( *(_QWORD *)(a1 + 24) < 8uLL )
        v8 = (_BYTE *)a1;
      else
        v8 = *(_BYTE **)a1;
      std::char_traits<wchar_t>::copy(v8, a2, a3);
      if ( *(_QWORD *)(a1 + 24) < 8uLL )
        v9 = (_BYTE *)a1;
      else
        v9 = *(_BYTE **)a1;
      *(_QWORD *)(a1 + 16) = a3;
      *(_WORD *)&v9[2 * a3] = 0;
    }
    return (void **)a1;
  }
}
