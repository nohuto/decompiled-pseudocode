/*
 * XREFs of ?GetResourceByIndex@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x1800346FC
 * Callers:
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DetachDevice@Engine@1Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18003395C (-DetachDevice@Engine@1Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::Engine::GetResourceByIndex(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx
  _QWORD *v6; // r8

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 888) + 16 * a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(std::_Ref_count_base **)(v4 + 8);
  if ( v5 && std::_Ref_count_base::_Incref_nz(v5) )
  {
    *v3 = *v6;
    v3[1] = v6[1];
  }
  return v3;
}
