/*
 * XREFs of ?GetAdapter@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@XZ @ 0x1800C568C
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?IsHardware@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NXZ @ 0x1800C69A0 (-IsHardware@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NXZ.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10 (-UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Texture2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::GetAdapter(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4272);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
