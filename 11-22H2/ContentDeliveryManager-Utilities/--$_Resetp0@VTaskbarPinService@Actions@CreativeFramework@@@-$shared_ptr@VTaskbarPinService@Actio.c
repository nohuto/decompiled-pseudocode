/*
 * XREFs of ??$_Resetp0@VTaskbarPinService@Actions@CreativeFramework@@@?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAAXPEAVTaskbarPinService@Actions@CreativeFramework@@PEAV_Ref_count_base@1@@Z @ 0x1800B5BB0
 * Callers:
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x1800B5CC4 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA-AV-$shared_ptr.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x1800B5DBC (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CreativeFramework::Actions::TaskbarPinService>::_Resetp0<CreativeFramework::Actions::TaskbarPinService>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
