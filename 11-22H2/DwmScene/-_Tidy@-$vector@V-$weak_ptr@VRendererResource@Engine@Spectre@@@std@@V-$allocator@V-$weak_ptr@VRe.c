/*
 * XREFs of ?_Tidy@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038590
 * Callers:
 *     ??1?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031C14 (--1-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VRender.c)
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     ?RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ @ 0x180035B10 (-RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ.c)
 *     ??1Display@Engine@Spectre@@QEAA@XZ @ 0x1800572C4 (--1Display@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x1800109B0 (--$_Destroy_range@V-$allocator@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 */

void __fastcall std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
