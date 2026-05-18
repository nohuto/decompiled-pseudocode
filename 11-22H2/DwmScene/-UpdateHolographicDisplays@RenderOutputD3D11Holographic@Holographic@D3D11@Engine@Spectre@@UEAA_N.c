/*
 * XREFs of ?UpdateHolographicDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA_NXZ @ 0x1800D9920
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180027BA4 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$shared_p.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180028BD0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 *     ?GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAAEAV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@I@Z @ 0x1800D969C (-GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectr.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x1800DA834 (-_Tidy@-$vector@V-$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@st.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::UpdateHolographicDisplays(
        Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *this)
{
  _QWORD *v2; // r9
  __int64 **v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  _QWORD *HolographicDisplayState; // rax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rcx
  _BYTE *v14; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-28h]
  _QWORD v16[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  if ( !std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 67) )
    return 0;
  v3 = (__int64 **)((char *)this + 552);
  v4 = **((_QWORD **)this + 69);
  v17 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    **(_BYTE **)(v4 + 40) = 0;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v17);
    v4 = v17;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v2 + 16LL))(*v2, v16);
  v5 = (_QWORD *)v16[0];
  v6 = (_QWORD *)v16[1];
  while ( v5 != v6 )
  {
    v7 = (**(__int64 (__fastcall ***)(_QWORD))*v5)(*v5);
    HolographicDisplayState = (_QWORD *)Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetOrCreateHolographicDisplayState(
                                          (__int64)this,
                                          v7);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v14,
      HolographicDisplayState);
    *v14 = 1;
    Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::UpdateLocalDisplayState(this, v5, &v14);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    v5 += 2;
  }
  std::vector<std::shared_ptr<Spectre::Engine::D3D11::Holographic::IHolographicDisplayProvider>>::_Tidy(v16);
  v9 = **v3;
  v17 = v9;
  while ( (__int64 *)v9 != *v3 )
  {
    if ( **(_BYTE **)(v9 + 40) )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v17);
    }
    else
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v17);
      v11 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract((_QWORD *)this + 69, v10);
      std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceShader>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceShader>>,void *>>>(
        v12,
        v11);
    }
    v9 = v17;
  }
  return 1;
}
