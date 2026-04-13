/*
 * XREFs of ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x1800066F8
 * Callers:
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x180006984 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180008804 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_N@Z @ 0x18000AC10 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000AC10.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001E93C (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     ?do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z @ 0x180020A50 (-do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::ostreambuf_iterator<char>::operator=(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  int v5; // r8d
  int *v6; // rax
  unsigned __int8 **v7; // rcx
  unsigned __int8 *v8; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4
    || ((v5 = a2, !**(_QWORD **)(v4 + 64)) || (v6 = *(int **)(v4 + 88), *v6 <= 0)
      ? (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, a2))
      : (--*v6, v7 = *(unsigned __int8 ***)(v4 + 64), v8 = *v7, ++*v7, *v8 = a2),
        v5 == -1) )
  {
    *(_BYTE *)a1 = 1;
  }
  return a1;
}
