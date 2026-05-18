/*
 * XREFs of ??4?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800320E0
 * Callers:
 *     ??$_Insert_range@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@1@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x18002F200 (--$_Insert_range@PEAV-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VR.c)
 *     ??$_Move_unchecked@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18002F64C (--$_Move_unchecked@PEAV-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV-$w.c)
 *     ?RemoveExpiredResources@Engine@1Spectre@@QEAAXXZ @ 0x180035C08 (-RemoveExpiredResources@Engine@1Spectre@@QEAAXXZ.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ??0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x1800A2194 (--0GpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<Spectre::Engine::RendererResource>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
  return a1;
}
