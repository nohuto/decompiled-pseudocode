/*
 * XREFs of ?DiscardViews@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D9460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800C585C (-GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11DeviceContext1@.c)
 *     ??1HolographicDisplayEye@Holographic@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D8D60 (--1HolographicDisplayEye@Holographic@D3D11@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800D9750 (-GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA-AV-$shared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::DiscardViews(__int64 **this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  __int64 v15; // [rsp+88h] [rbp+28h] BYREF

  Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetRendererD3D11(this, &v8);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDeviceContext(v8, &v15);
  v2 = *this[69];
  v14 = v2;
  v3 = v15;
  while ( !*(_BYTE *)(v2 + 25) )
  {
    v4 = *(_QWORD *)(v2 + 40) + 144LL;
    if ( *(_QWORD *)(v2 + 40) + 48LL != v4 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(v2 + 40) + 64LL);
      do
      {
        v6 = *(v5 - 2);
        v10 = v6;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v7 = *(v5 - 1);
        v11 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v12,
          v5);
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v13,
          v5 + 2);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v10);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v11);
        Spectre::Engine::D3D11::Holographic::HolographicDisplayEye::~HolographicDisplayEye((Spectre::Engine::D3D11::Holographic::HolographicDisplayEye *)&v10);
        v5 += 6;
      }
      while ( v5 - 2 != (_QWORD *)v4 );
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v14);
    v2 = v14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
