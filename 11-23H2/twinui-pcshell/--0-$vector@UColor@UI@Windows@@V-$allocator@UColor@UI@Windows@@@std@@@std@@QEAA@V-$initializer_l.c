/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18013FBE0
 * Callers:
 *     _dynamic_initializer_for__BlockError__ @ 0x1800030E0 (_dynamic_initializer_for__BlockError__.c)
 *     _dynamic_initializer_for__BlockIdle__ @ 0x180003130 (_dynamic_initializer_for__BlockIdle__.c)
 *     _dynamic_initializer_for__BlockListening__ @ 0x180003180 (_dynamic_initializer_for__BlockListening__.c)
 *     _dynamic_initializer_for__BlockResponding__ @ 0x1800032B0 (_dynamic_initializer_for__BlockResponding__.c)
 *     _dynamic_initializer_for__BlockThinking__ @ 0x1800033C0 (_dynamic_initializer_for__BlockThinking__.c)
 *     _dynamic_initializer_for__error__ @ 0x1800035D0 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x180004280 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__listening__ @ 0x1800043A0 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180005630 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x1800066B0 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18039122C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(_QWORD *a1, __int64 a2)
{
  const void *v2; // r14
  char *v3; // rdi
  signed __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  size_t v7; // rsi
  char *v8; // rax

  v2 = *(const void **)a2;
  v3 = 0LL;
  v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v6 = v5 >> 2;
  a1[2] = 0LL;
  if ( (unsigned __int64)v5 >= 4 )
  {
    if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v7 = 4 * v6;
    if ( v7 >= 0x1000 )
    {
      v8 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v7);
    }
    else
    {
      if ( !v7 )
      {
LABEL_7:
        *a1 = v3;
        a1[1] = v3;
        a1[2] = &v3[v7];
        memmove_0(v3, v2, v5);
        a1[1] = &v3[v7];
        return a1;
      }
      v8 = (char *)operator new(v7);
    }
    v3 = v8;
    goto LABEL_7;
  }
  return a1;
}
