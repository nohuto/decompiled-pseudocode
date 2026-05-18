/*
 * XREFs of ??$_Assign_range@PEAUMessageEvent@Engine@Spectre@@@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAXPEAUMessageEvent@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x1800742D8
 * Callers:
 *     ?SetInput@FrameData@Engine@Spectre@@QEAAXAEBVInput@23@@Z @ 0x1800743D8 (-SetInput@FrameData@Engine@Spectre@@QEAAXAEBVInput@23@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUMessageEvent@Engine@Spectre@@PEAU123@@std@@YAPEAUMessageEvent@Engine@Spectre@@PEAU123@00@Z @ 0x180074338 (--$_Copy_memmove@PEAUMessageEvent@Engine@Spectre@@PEAU123@@std@@YAPEAUMessageEvent@Engine@Spectr.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x1800744CC (-_Clear_and_reserve_geometric@-$vector@UMessageEvent@Engine@Spectre@@V-$allocator@UMessageEvent@.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::MessageEvent>::_Assign_range<Spectre::Engine::MessageEvent *>(
        _QWORD *a1,
        void *a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 3 > (unsigned __int64)((__int64)(a1[2] - *a1) >> 3) )
    std::vector<Spectre::Engine::MessageEvent>::_Clear_and_reserve_geometric();
  result = std::_Copy_memmove<Spectre::Engine::MessageEvent *,Spectre::Engine::MessageEvent *>(a2);
  a1[1] = result;
  return result;
}
