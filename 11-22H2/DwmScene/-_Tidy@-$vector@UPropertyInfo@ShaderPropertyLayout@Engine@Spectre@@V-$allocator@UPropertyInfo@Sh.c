/*
 * XREFs of ?_Tidy@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x180083AE0
 * Callers:
 *     ??1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ @ 0x180081EF8 (--1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081598 (--$_Destroy_range@V-$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YA.c)
 */

void __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
