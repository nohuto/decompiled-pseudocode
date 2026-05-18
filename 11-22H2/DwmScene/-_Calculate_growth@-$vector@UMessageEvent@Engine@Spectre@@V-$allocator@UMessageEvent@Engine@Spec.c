/*
 * XREFs of ?_Calculate_growth@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x180074490
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x1800744CC (-_Clear_and_reserve_geometric@-$vector@UMessageEvent@Engine@Spectre@@V-$allocator@UMessageEvent@.c)
 *     ??$_Emplace_reallocate@U?$pair@II@std@@@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@QEAAPEAU?$pair@II@1@QEAU21@$$QEAU21@@Z @ 0x180081864 (--$_Emplace_reallocate@U-$pair@II@std@@@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2.c)
 *     ??$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C8D8 (--$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@-$vector@UVector2@Math@Utils@Spectre@@V-.c)
 *     ??$_Emplace_reallocate@UVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18008CBD4 (--$_Emplace_reallocate@UVector2@Math@Utils@Spectre@@@-$vector@UVector2@Math@Utils@Spectre@@V-$al.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Spectre::Engine::MessageEvent>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
