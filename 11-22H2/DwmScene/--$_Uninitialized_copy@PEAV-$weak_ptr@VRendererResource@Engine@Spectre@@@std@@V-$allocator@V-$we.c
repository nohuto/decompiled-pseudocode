/*
 * XREFs of ??$_Uninitialized_copy@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x18002FF54
 * Callers:
 *     ??$_Insert_range@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@1@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x18002F200 (--$_Insert_range@PEAV-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VR.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x1800109B0 (--$_Destroy_range@V-$allocator@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 */

_QWORD *__fastcall std::_Uninitialized_copy<std::weak_ptr<Spectre::Engine::RendererResource> *,std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8
  __int64 v5; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      if ( *(_QWORD *)((char *)v3 + v4 + 8) )
      {
        *v3 = *(_QWORD *)((char *)v3 + v4);
        v5 = *(_QWORD *)((char *)v3 + v4 + 8);
        v3[1] = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
      }
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  std::_Destroy_range<std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>((__int64)v3, (__int64)v3);
  return v3;
}
