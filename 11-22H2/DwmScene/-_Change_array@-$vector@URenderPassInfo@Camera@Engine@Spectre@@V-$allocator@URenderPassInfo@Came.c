/*
 * XREFs of ?_Change_array@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAXQEAURenderPassInfo@Camera@Engine@Spectre@@_K1@Z @ 0x18005E638
 * Callers:
 *     ??$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@QEAAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180058988 (--$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@-$vector@URenderPassInfo@Camer.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058CA0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058948 (--$_Destroy_range@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderP.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Change_array(
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
    std::_Destroy_range<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
