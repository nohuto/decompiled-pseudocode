/*
 * XREFs of ?_Calculate_growth@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18005E5F0
 * Callers:
 *     ??$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@QEAAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180058988 (--$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@-$vector@URenderPassInfo@Camer.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058CA0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x555555555555555LL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) <= 0x555555555555555LL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 4);
    if ( result < a2 )
      return a2;
  }
  return result;
}
