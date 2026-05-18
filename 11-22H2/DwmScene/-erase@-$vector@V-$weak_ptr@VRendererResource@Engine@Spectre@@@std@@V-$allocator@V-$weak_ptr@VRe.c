/*
 * XREFs of ?erase@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@2@0@Z @ 0x18003879C
 * Callers:
 *     ?RemoveExpiredResources@Engine@1Spectre@@QEAAXXZ @ 0x180035C08 (-RemoveExpiredResources@Engine@1Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x1800109B0 (--$_Destroy_range@V-$allocator@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 *     ??$_Move_unchecked@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18002F64C (--$_Move_unchecked@PEAV-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV-$w.c)
 */

__int64 *__fastcall std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdi
  __int64 *result; // rax

  if ( a3 != a4 )
  {
    v7 = std::_Move_unchecked<std::weak_ptr<Spectre::Engine::RendererResource> *,std::weak_ptr<Spectre::Engine::RendererResource> *>(
           a4,
           *(_QWORD *)(a1 + 8),
           a3);
    std::_Destroy_range<std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>(v7, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
  }
  result = a2;
  *a2 = a3;
  return result;
}
