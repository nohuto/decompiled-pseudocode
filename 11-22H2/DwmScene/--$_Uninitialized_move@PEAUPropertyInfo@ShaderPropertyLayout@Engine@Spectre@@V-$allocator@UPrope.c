/*
 * XREFs of ??$_Uninitialized_move@PEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081AF0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081608 (--$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UProperty.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081598 (--$_Destroy_range@V-$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YA.c)
 */

__int64 __fastcall std::_Uninitialized_move<Spectre::Engine::ShaderPropertyLayout::PropertyInfo *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 24;
    v5 = a3 - a1;
    do
    {
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(v5 + v4 - 8) = 0LL;
      *(_QWORD *)(v4 + v5) = 0LL;
      *(_OWORD *)a3 = *(_OWORD *)(v4 - 24);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = 0LL;
      a3 += 56LL;
      *(_QWORD *)v4 = 15LL;
      *(_BYTE *)(v4 - 24) = 0;
      *(_WORD *)(v5 + v4 + 8) = *(_WORD *)(v4 + 8);
      *(_DWORD *)(v5 + v4 + 12) = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v5 + v4 + 16) = *(_DWORD *)(v4 + 16);
      *(_DWORD *)(v5 + v4 + 20) = *(_DWORD *)(v4 + 20);
      *(_DWORD *)(v5 + v4 + 24) = *(_DWORD *)(v4 + 24);
      v4 += 56LL;
    }
    while ( v4 - 24 != a2 );
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>>(a3, a3);
  return a3;
}
