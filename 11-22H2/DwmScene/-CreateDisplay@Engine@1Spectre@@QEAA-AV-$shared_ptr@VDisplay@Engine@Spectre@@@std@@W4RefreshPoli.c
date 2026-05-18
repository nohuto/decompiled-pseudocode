/*
 * XREFs of ?CreateDisplay@Engine@1Spectre@@QEAA?AV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPolicy@Display@12@W4RenderingMode@612@@Z @ 0x180033108
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 * Callees:
 *     ??$_Emplace@AEBV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@?$list@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@VDisplay@Engine@Spectre@@@1@@Z @ 0x18002E2A4 (--$_Emplace@AEBV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@@-$list@V-$shared_ptr@VDisplay@Engin.c)
 *     ??$make_shared@VDisplay@Engine@Spectre@@AEAV223@AEAW4RefreshPolicy@123@AEAW4RenderingMode@123@@std@@YA?AV?$shared_ptr@VDisplay@Engine@Spectre@@@0@AEAVEngine@2Spectre@@AEAW4RefreshPolicy@Display@23@AEAW4RenderingMode@523@@Z @ 0x1800301FC (--$make_shared@VDisplay@Engine@Spectre@@AEAV223@AEAW4RefreshPolicy@123@AEAW4RenderingMode@123@@s.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::Engine::CreateDisplay(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = 0;
  v7 = 1;
  std::make_shared<Spectre::Engine::Display,Spectre::Engine::Engine &,enum Spectre::Engine::Display::RefreshPolicy &,enum Spectre::Engine::Display::RenderingMode &>(
    a2,
    a1,
    &v7,
    &v9);
  v8 = 1;
  std::list<std::shared_ptr<Spectre::Engine::Display>>::_Emplace<std::shared_ptr<Spectre::Engine::Display> const &>(
    a1 + 168,
    *(_QWORD *)(a1 + 168),
    a2);
  return a2;
}
