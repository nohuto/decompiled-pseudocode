/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069BC8
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18006AF60 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18006AF60.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18007BA24 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800484D0 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180068B34 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rcx
  _QWORD *v13; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = a1[2];
  v10 = v4 - a3;
  if ( v10 < a4 )
    v5 = v10;
  if ( ~v9 <= v5 )
    std::wstring::_Xlen();
  if ( v5 )
  {
    v11 = v9 + v5;
    if ( std::wstring::_Grow((__int64)a1, v9 + v5, 0) )
    {
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      if ( a1[3] < 8uLL )
        v12 = a1;
      else
        v12 = (_QWORD *)*a1;
      memcpy_0((char *)v12 + 2 * a1[2], (char *)v7 + 2 * a3, 2 * v5);
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
