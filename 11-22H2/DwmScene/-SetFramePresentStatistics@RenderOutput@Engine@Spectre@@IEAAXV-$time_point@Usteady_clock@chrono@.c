/*
 * XREFs of ?SetFramePresentStatistics@RenderOutput@Engine@Spectre@@IEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@0V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@56@@Z @ 0x18002CA14
 * Callers:
 *     ?Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x180011560 (-Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderOutput::SetFramePresentStatistics(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  a1[34] = a2;
  a1[35] = a3;
  a1[36] = a4;
}
