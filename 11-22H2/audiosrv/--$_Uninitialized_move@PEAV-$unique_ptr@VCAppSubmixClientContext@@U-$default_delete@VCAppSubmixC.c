/*
 * XREFs of ??$_Uninitialized_move@PEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800D0CC4
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800D0A5C (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClie.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800D08B4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 */

CAppSubmixClientContext **__fastcall std::_Uninitialized_move<std::unique_ptr<CAppSubmixClientContext> *,std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
        CAppSubmixClientContext **a1,
        CAppSubmixClientContext **a2,
        CAppSubmixClientContext **a3)
{
  CAppSubmixClientContext *v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(a3, a3);
  return a3;
}
