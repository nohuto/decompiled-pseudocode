/*
 * XREFs of ?GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800D9750
 * Callers:
 *     ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80 (-ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800D9200 (-CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAX.c)
 *     ?DiscardViews@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D9460 (-DiscardViews@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetRendererD3D11(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v8);
  v4 = (__int64 *)std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v3, &v6);
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(a2, v4);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v9 )
    std::_Ref_count_base::_Decwref(v9);
  return a2;
}
