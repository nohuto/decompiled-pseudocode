/*
 * XREFs of ?reserve@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180038B3C
 * Callers:
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x18002F69C (--$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@-$basic_string@DU-$char_t.c)
 *     ?_Become_small@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180037ED4 (-_Become_small@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::string::reserve(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 <= a2 && *(_QWORD *)(a1 + 24) != a2 )
  {
    if ( *(_QWORD *)(a1 + 24) >= a2 )
    {
      if ( a2 < 0x10 && *(_QWORD *)(a1 + 24) >= 0x10uLL )
        std::string::_Become_small((void **)a1);
    }
    else
    {
      std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>((void **)a1, a2 - v2);
      *(_QWORD *)(a1 + 16) = v2;
    }
  }
}
