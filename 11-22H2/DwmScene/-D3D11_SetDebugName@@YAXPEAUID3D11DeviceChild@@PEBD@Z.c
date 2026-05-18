/*
 * XREFs of ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930 (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     ?CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture2D@@II@Z @ 0x1800CDBD8 (-CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture3D@@II@Z @ 0x1800CDE10 (-CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z @ 0x1800CFED0 (-Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z.c)
 *     ?FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D01E0 (-FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VCommandList@Engine.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800D62DC (-CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceDepthBuffer@E.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall D3D11_SetDebugName(struct ID3D11DeviceChild *a1, const char *a2)
{
  HRESULT (__stdcall *SetPrivateData)(ID3D11DeviceChild *, const GUID *const, UINT, const void *); // rsi
  unsigned int v5; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = 0;
    ((void (__fastcall *)(struct ID3D11DeviceChild *, const GUID *, int *, _QWORD))a1->lpVtbl->GetPrivateData)(
      a1,
      &WKPDID_D3DDebugObjectName,
      &v6,
      0LL);
    if ( !v6 )
    {
      SetPrivateData = a1->lpVtbl->SetPrivateData;
      if ( a2 )
        v5 = strnlen(a2, 0xFFuLL);
      else
        v5 = 0;
      ((void (__fastcall *)(struct ID3D11DeviceChild *, const GUID *, _QWORD, const char *))SetPrivateData)(
        a1,
        &WKPDID_D3DDebugObjectName,
        v5,
        a2);
    }
  }
}
