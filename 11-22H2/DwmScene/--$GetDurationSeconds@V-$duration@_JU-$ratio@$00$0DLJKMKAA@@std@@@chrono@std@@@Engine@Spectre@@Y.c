/*
 * XREFs of ??$GetDurationSeconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x18002E000
 * Callers:
 *     ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0 (-UpdateFrameTime@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Engine::GetDurationSeconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(int a1)
{
  return (float)a1 / 1000000000.0;
}
