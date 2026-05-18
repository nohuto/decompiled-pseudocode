/*
 * XREFs of ?CreateSceneStandardContent@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180033324
 * Callers:
 *     ?CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z @ 0x1800187F0 (-CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z.c)
 *     ?OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z @ 0x1800352A0 (-OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z.c)
 * Callees:
 *     ?CreateScene@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x1800332A4 (-CreateScene@Engine@1Spectre@@QEAA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::Engine::CreateSceneStandardContent(__int64 a1, __int64 *a2)
{
  Spectre::Engine::Engine::CreateScene(a1, a2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, a2);
  return a2;
}
