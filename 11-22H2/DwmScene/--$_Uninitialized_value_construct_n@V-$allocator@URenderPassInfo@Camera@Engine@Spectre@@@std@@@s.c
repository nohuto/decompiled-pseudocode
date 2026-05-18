/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058F4C
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058C18 (--$_Resize@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@U.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058CA0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058948 (--$_Destroy_range@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderP.c)
 */

__int64 __fastcall std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(
        __int64 a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_DWORD *)(a1 + 1) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 7) = 0;
    *(_BYTE *)a1 = 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    a1 += 48LL;
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(a1, a1);
  return a1;
}
