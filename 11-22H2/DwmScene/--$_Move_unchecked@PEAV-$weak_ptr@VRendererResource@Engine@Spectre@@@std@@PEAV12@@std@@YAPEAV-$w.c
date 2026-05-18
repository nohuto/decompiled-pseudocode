/*
 * XREFs of ??$_Move_unchecked@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18002F64C
 * Callers:
 *     ?erase@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@2@0@Z @ 0x18003879C (-erase@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VRe.c)
 * Callees:
 *     ??4?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800320E0 (--4-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<std::weak_ptr<Spectre::Engine::RendererResource> *,std::weak_ptr<Spectre::Engine::RendererResource> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 16LL )
  {
    std::weak_ptr<Spectre::Engine::RendererResource>::operator=(a3, i);
    a3 += 16LL;
  }
  return a3;
}
