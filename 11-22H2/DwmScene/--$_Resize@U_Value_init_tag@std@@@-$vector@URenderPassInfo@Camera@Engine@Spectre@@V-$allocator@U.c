/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058C18
 * Callers:
 *     ?CloneInternal@Camera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18005AED0 (-CloneInternal@Camera@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058948 (--$_Destroy_range@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderP.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058CA0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058F4C (--$_Uninitialized_value_construct_n@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@s.c)
 */

void __fastcall std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 v5; // rbx

  v3 = a1[1];
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - *a1) >> 4);
  if ( a2 >= v4 )
  {
    if ( a2 > v4 )
    {
      if ( a2 <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) )
        a1[1] = std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(
                  v3,
                  a2 - v4);
      else
        std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Resize_reallocate<std::_Value_init_tag>(a1);
    }
  }
  else
  {
    v5 = *a1 + 48 * a2;
    std::_Destroy_range<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(v5, v3);
    a1[1] = v5;
  }
}
