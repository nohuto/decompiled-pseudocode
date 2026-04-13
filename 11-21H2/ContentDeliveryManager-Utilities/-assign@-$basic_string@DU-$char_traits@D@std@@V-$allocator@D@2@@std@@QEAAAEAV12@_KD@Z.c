/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180069D80
 * Callers:
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180005EC0 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x180006984 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180008804 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBD@Z @ 0x18000DE34 (--$_Getloctxt@DV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800207E0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800207E0.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18005430C (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@0@0_KPEBD@Z @ 0x1800E7FD8 (--$_Getloctxt@DV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@YAHAEAV-$istreambuf_i.c)
 * Callees:
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180047B44 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, size_t Size, char a3)
{
  int v3; // esi
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  void *v8; // rcx
  _QWORD *v9; // rax

  v3 = a3;
  if ( Size == -1LL )
    std::wstring::_Xlen();
  if ( a1[3] >= Size )
  {
    if ( !Size )
    {
      if ( a1[3] < 0x10uLL )
        v7 = a1;
      else
        v7 = (_BYTE *)*a1;
      a1[2] = 0LL;
      *v7 = 0;
      return a1;
    }
  }
  else
  {
    std::string::_Copy((const void **)a1, Size, a1[2]);
    if ( !Size )
      return a1;
  }
  if ( Size == 1 )
  {
    if ( a1[3] < 0x10uLL )
      v6 = a1;
    else
      v6 = (_BYTE *)*a1;
    *v6 = v3;
  }
  else
  {
    if ( a1[3] < 0x10uLL )
      v8 = a1;
    else
      v8 = (void *)*a1;
    memset_0(v8, v3, Size);
  }
  if ( a1[3] < 0x10uLL )
    v9 = a1;
  else
    v9 = (_QWORD *)*a1;
  a1[2] = Size;
  *((_BYTE *)v9 + Size) = 0;
  return a1;
}
