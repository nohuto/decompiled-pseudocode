/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800CCB50
 * Callers:
 *     ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x180010460 (-_Fput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x180014400 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x180019B70 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_180019B70.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800A3D30 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 */

_QWORD *__fastcall std::wstring::assign(_QWORD *a1, unsigned __int64 a2, __int16 a3)
{
  _WORD *v6; // rax
  _WORD *v7; // rdi
  unsigned __int64 i; // rcx
  _QWORD *v9; // rax

  if ( a2 == -1LL )
    std::wstring::_Xlen();
  if ( std::wstring::_Grow((__int64)a1, a2, 0) )
  {
    if ( a2 == 1 )
    {
      if ( a1[3] < 8uLL )
        v6 = a1;
      else
        v6 = (_WORD *)*a1;
      *v6 = a3;
    }
    else
    {
      if ( a1[3] < 8uLL )
        v7 = a1;
      else
        v7 = (_WORD *)*a1;
      if ( a2 )
      {
        for ( i = a2; i; --i )
          *v7++ = a3;
      }
    }
    if ( a1[3] < 8uLL )
      v9 = a1;
    else
      v9 = (_QWORD *)*a1;
    a1[2] = a2;
    *((_WORD *)v9 + a2) = 0;
  }
  return a1;
}
