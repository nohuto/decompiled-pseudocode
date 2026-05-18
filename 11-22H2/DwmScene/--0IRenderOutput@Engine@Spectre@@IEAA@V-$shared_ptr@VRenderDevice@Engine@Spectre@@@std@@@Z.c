/*
 * XREFs of ??0IRenderOutput@Engine@Spectre@@IEAA@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18002B3C4
 * Callers:
 *     ??0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@@Z @ 0x18002B424 (--0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V-$shared_ptr@VRenderDevice@Engine@Sp.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z @ 0x180029EDC (--0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z.c)
 *     ?GetThreadingMode@Lockable@Engine@Spectre@@QEBA?AW4ThreadingMode@123@XZ @ 0x18002A254 (-GetThreadingMode@Lockable@Engine@Spectre@@QEBA-AW4ThreadingMode@123@XZ.c)
 */

_QWORD *__fastcall Spectre::Engine::IRenderOutput::IRenderOutput(_QWORD *a1, _QWORD *a2)
{
  int ThreadingMode; // eax
  std::_Ref_count_base *v5; // rcx

  ThreadingMode = Spectre::Engine::Lockable::GetThreadingMode(*a2 + 24LL);
  Spectre::Engine::Lockable::Lockable((__int64)(a1 + 1), ThreadingMode);
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v5 = (std::_Ref_count_base *)a2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
