/*
 * XREFs of ??$_Uninitialized_move@PEAURenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058EC4
 * Callers:
 *     ??$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@QEAAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180058988 (--$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@-$vector@URenderPassInfo@Camer.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058CA0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058948 (--$_Destroy_range@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderP.c)
 */

_BYTE *__fastcall std::_Uninitialized_move<Spectre::Engine::Camera::RenderPassInfo *>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3)
{
  _QWORD *v4; // r8
  _BYTE *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 5;
    v5 = (_BYTE *)(a3 - (_BYTE *)a1);
    do
    {
      *a3 = *((_BYTE *)v4 - 40);
      a3 += 48;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 32) = *(v4 - 4);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 24) = *(v4 - 3);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = *(v4 - 2);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)&v5[(_QWORD)v4] = *v4;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 6;
    }
    while ( v4 - 5 != a2 );
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>((__int64)a3, (__int64)a3);
  return a3;
}
