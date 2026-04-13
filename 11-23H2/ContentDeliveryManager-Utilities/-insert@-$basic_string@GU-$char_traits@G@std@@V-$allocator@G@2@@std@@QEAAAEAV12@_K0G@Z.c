/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001BD48
 * Callers:
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x180010710 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800147F4 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x180016994 (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     memmove_0 @ 0x180022B30 (memmove_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180043388 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800433A0 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180060338 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 */

__int64 *__fastcall std::wstring::insert(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 *v12; // rcx
  _WORD *v13; // rax
  char *v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rax
  _WORD *v17; // rdi
  unsigned __int64 i; // rcx
  __int64 *v19; // rax

  v6 = a1[2];
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    goto LABEL_36;
  if ( !a3 )
    return a1;
  v9 = v6 + a3;
  if ( v6 + a3 > 0x7FFFFFFFFFFFFFFELL )
LABEL_36:
    std::wstring::_Xlen();
  if ( a1[3] >= v9 )
  {
    if ( !v9 )
    {
      if ( (unsigned __int64)a1[3] < 8 )
        v13 = a1;
      else
        v13 = (_WORD *)*a1;
      a1[2] = 0LL;
      *v13 = 0;
      return a1;
    }
  }
  else
  {
    std::wstring::_Copy(a1, v6 + a3);
    if ( !v9 )
      return a1;
  }
  v10 = a1[3];
  v11 = a1[2] - a2;
  if ( v10 < 8 )
    v12 = a1;
  else
    v12 = (__int64 *)*a1;
  v14 = (char *)v12 + 2 * a2;
  if ( v10 < 8 )
    v15 = a1;
  else
    v15 = (__int64 *)*a1;
  if ( v11 )
  {
    memmove_0((char *)v15 + 2 * a2 + 2 * a3, v14, 2 * v11);
    v10 = a1[3];
  }
  if ( a3 == 1 )
  {
    if ( v10 < 8 )
      v16 = a1;
    else
      v16 = (__int64 *)*a1;
    *((_WORD *)v16 + a2) = a4;
  }
  else
  {
    if ( v10 < 8 )
      v17 = (_WORD *)a1 + a2;
    else
      v17 = (_WORD *)(*a1 + 2 * a2);
    for ( i = a3; i; --i )
      *v17++ = a4;
  }
  if ( (unsigned __int64)a1[3] < 8 )
    v19 = a1;
  else
    v19 = (__int64 *)*a1;
  a1[2] = v9;
  *((_WORD *)v19 + v9) = 0;
  return a1;
}
