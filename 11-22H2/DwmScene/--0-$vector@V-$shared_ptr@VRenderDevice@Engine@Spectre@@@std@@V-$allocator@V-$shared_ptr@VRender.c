/*
 * XREFs of ??0?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180030F18
 * Callers:
 *     ?RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ @ 0x180035CAC (-RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBQEAV12@@?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@AEAAX_KAEBQEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@1@1@Z @ 0x18002E178 (--$_Construct_n@AEBQEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBQEAV12@@-$vector@V-$s.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::RenderDevice>>::vector<std::shared_ptr<Spectre::Engine::RenderDevice>>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<std::shared_ptr<Spectre::Engine::RenderDevice>>::_Construct_n<std::shared_ptr<Spectre::Engine::RenderDevice> * const &,std::shared_ptr<Spectre::Engine::RenderDevice> * const &>(
    a1,
    (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4,
    (_QWORD **)a2,
    (_QWORD *)(a2 + 8));
  return a1;
}
