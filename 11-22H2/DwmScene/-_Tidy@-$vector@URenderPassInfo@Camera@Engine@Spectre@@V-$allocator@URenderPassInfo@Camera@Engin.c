/*
 * XREFs of ?_Tidy@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18005E800
 * Callers:
 *     ??1?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800598F8 (--1-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Camera@Engine@Sp.c)
 *     ??1Camera@Engine@Spectre@@UEAA@XZ @ 0x180059904 (--1Camera@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058948 (--$_Destroy_range@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderP.c)
 */

void __fastcall std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>((__int64)v2, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
