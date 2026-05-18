/*
 * XREFs of ?_Tidy@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800705A0
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180070084 (--1-$_Tidy_guard@V-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spect.c)
 *     ??1?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800700B8 (--1-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@.c)
 *     ??1ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x1800700C4 (--1ResourceManager@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94 (--$_Destroy_range@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Eng.c)
 */

void __fastcall std::vector<Spectre::Engine::ResourceData>::_Tidy(__int64 a1)
{
  Spectre::Engine::ResourceData *v2; // rcx

  v2 = *(Spectre::Engine::ResourceData **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(v2, *(Spectre::Engine::ResourceData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
