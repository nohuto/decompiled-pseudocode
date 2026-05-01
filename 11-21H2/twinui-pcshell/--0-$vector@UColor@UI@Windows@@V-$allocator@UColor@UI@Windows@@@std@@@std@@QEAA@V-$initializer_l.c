/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x1800873D0
 * Callers:
 *     _dynamic_initializer_for__BlockError__ @ 0x1800027B0 (_dynamic_initializer_for__BlockError__.c)
 *     _dynamic_initializer_for__BlockIdle__ @ 0x180002800 (_dynamic_initializer_for__BlockIdle__.c)
 *     _dynamic_initializer_for__BlockListening__ @ 0x180002850 (_dynamic_initializer_for__BlockListening__.c)
 *     _dynamic_initializer_for__BlockResponding__ @ 0x180002980 (_dynamic_initializer_for__BlockResponding__.c)
 *     _dynamic_initializer_for__BlockThinking__ @ 0x180002A90 (_dynamic_initializer_for__BlockThinking__.c)
 *     _dynamic_initializer_for__error__ @ 0x180002CA0 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x180003950 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__listening__ @ 0x180003A70 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180004D00 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180005D80 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

_QWORD *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(_QWORD *a1, __int64 a2)
{
  const void *v2; // r14
  signed __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rsi
  char *v7; // rax
  char *v8; // rdi

  v2 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = v4 >> 2;
  a1[2] = 0LL;
  if ( (unsigned __int64)v4 >= 4 )
  {
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v6 = 4 * v5;
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = &v7[v6];
    memmove_0(v7, v2, v4);
    a1[1] = &v8[v6];
  }
  return a1;
}
