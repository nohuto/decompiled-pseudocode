/*
 * XREFs of ??$equal@PEBURenderPassInfo@Camera@Engine@Spectre@@PEBU1234@@std@@YA_NQEBURenderPassInfo@Camera@Engine@Spectre@@00@Z @ 0x180058FA4
 * Callers:
 *     ??$?9URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YA_NAEBV?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@0@0@Z @ 0x180058664 (--$-9URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall std::equal<Spectre::Engine::Camera::RenderPassInfo const *,Spectre::Engine::Camera::RenderPassInfo const *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  char v6; // si

  v3 = (_QWORD *)(a3 + 16);
  v4 = a1 - a3;
  v6 = 0;
  while ( (_QWORD *)((char *)v3 + v4 - 16) != a2 )
  {
    if ( *(_QWORD *)((char *)v3 + v4 - 8) != *(v3 - 1)
      || *(_QWORD *)((char *)v3 + v4) != *v3
      || *(_QWORD *)((char *)v3 + v4 + 8) != v3[1]
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)((char *)v3 + v4 + 16) + 16LL))(
            *(_QWORD *)((char *)v3 + v4 + 16),
            v3[2]) )
    {
      return v6;
    }
    v3 += 6;
  }
  return 1;
}
