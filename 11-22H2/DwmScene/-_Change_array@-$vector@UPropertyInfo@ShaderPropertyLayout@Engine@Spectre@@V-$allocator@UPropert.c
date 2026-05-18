/*
 * XREFs of ?_Change_array@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXQEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@_K1@Z @ 0x1800839A4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081608 (--$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UProperty.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081598 (--$_Destroy_range@V-$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YA.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>>(
      (__int64)v6,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
