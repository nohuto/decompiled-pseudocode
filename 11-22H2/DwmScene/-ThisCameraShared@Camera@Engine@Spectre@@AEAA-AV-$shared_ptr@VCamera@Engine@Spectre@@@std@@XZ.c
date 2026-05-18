/*
 * XREFs of ?ThisCameraShared@Camera@Engine@Spectre@@AEAA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x18005D5DC
 * Callers:
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ??$static_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800591FC (--$static_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VCamera@Eng.c)
 */

_QWORD *__fastcall Spectre::Engine::Camera::ThisCameraShared(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v5; // [rsp+30h] [rbp-18h]

  std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this(a1 + 8, &v4);
  std::static_pointer_cast<Spectre::Engine::Camera,Spectre::Engine::Component>(a2, &v4);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a2;
}
