/*
 * XREFs of ?GetDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEBA?AV?$vector@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800D95D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E528 (--$_Emplace_reallocate@AEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ?_Reallocate_exactly@?$vector@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800DA7C0 (-_Reallocate_exactly@-$vector@V-$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Sp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetDisplays(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 560);
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<std::shared_ptr<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>>::_Reallocate_exactly(a2);
  }
  v5 = **(_QWORD **)(a1 + 552);
  v8 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = *(_QWORD **)(a2 + 8);
    if ( v6 == *(_QWORD **)(a2 + 16) )
    {
      std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::FrameBuffer> const &>(
        (_QWORD *)a2,
        *(char **)(a2 + 8),
        (_QWORD *)(v5 + 40));
    }
    else
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        v6,
        (_QWORD *)(v5 + 40));
      *(_QWORD *)(a2 + 8) += 16LL;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v8);
    v5 = v8;
  }
  return a2;
}
