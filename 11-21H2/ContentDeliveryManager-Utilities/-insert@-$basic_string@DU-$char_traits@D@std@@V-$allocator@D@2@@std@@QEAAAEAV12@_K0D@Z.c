/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000B0F0
 * Callers:
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x180006984 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180008804 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x180011DB8 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x180012CDC (-_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$bas.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001D30C (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001E93C (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     memmove_0 @ 0x180022320 (memmove_0.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180047B44 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800484D0 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 */

_QWORD *__fastcall std::string::insert(_QWORD *a1, unsigned __int64 a2, size_t a3, char a4)
{
  int v5; // ebp
  unsigned __int64 v6; // r8
  size_t v9; // rdi
  unsigned __int64 v10; // rcx
  size_t v11; // r8
  _QWORD *v12; // rax
  char *v13; // rdx
  _BYTE *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax

  v5 = a4;
  v6 = a1[2];
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    goto LABEL_31;
  if ( !a3 )
    return a1;
  v9 = v6 + a3;
  if ( v6 + a3 == -1LL )
LABEL_31:
    std::wstring::_Xlen();
  if ( a1[3] >= v9 )
  {
    if ( !v9 )
    {
      if ( a1[3] < 0x10uLL )
        v14 = a1;
      else
        v14 = (_BYTE *)*a1;
      a1[2] = 0LL;
      *v14 = 0;
      return a1;
    }
  }
  else
  {
    std::string::_Copy(a1);
    if ( !v9 )
      return a1;
  }
  v10 = a1[3];
  v11 = a1[2] - a2;
  if ( v10 < 0x10 )
  {
    v13 = (char *)a1 + a2;
    v12 = a1;
  }
  else
  {
    v12 = (_QWORD *)*a1;
    v13 = (char *)(a2 + *a1);
  }
  if ( v11 )
  {
    memmove_0((char *)v12 + a2 + a3, v13, v11);
    v10 = a1[3];
  }
  if ( a3 == 1 )
  {
    if ( v10 < 0x10 )
      v15 = a1;
    else
      v15 = (_QWORD *)*a1;
    *((_BYTE *)v15 + a2) = v5;
  }
  else
  {
    if ( v10 < 0x10 )
      v16 = a1;
    else
      v16 = (_QWORD *)*a1;
    memset_0((char *)v16 + a2, v5, a3);
  }
  if ( a1[3] < 0x10uLL )
    v17 = a1;
  else
    v17 = (_QWORD *)*a1;
  a1[2] = v9;
  *((_BYTE *)v17 + v9) = 0;
  return a1;
}
