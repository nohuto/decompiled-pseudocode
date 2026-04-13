/*
 * XREFs of ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008668
 * Callers:
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180005EC0 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800072C0 (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800079EC (-_Getffldx@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HAEBVlocale@2@@Z @ 0x1800081AC (-_Getifld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x18001CF20 (-_Getfmt@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEBA-AV-$istreamb.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D128 (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001D30C (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x18001FA80 (-do_get_date@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_time@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800200F0 (-do_get_time@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::istreambuf_iterator<char>::_Inc(__int64 *a1)
{
  char v2; // bl
  __int64 v3; // rcx
  int *v4; // rax
  unsigned __int8 **v5; // rcx
  unsigned __int8 *v6; // rdx
  int v7; // eax

  v2 = 0;
  v3 = *a1;
  if ( !v3
    || (!**(_QWORD **)(v3 + 56) || (v4 = *(int **)(v3 + 80), *v4 <= 0)
      ? (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3))
      : (--*v4, v5 = *(unsigned __int8 ***)(v3 + 56), v6 = *v5, ++*v5, v7 = *v6),
        v7 == -1) )
  {
    *a1 = 0LL;
    v2 = 1;
  }
  *((_BYTE *)a1 + 8) = v2;
}
