/*
 * XREFs of ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668
 * Callers:
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$ComPtr@UID3D11ShaderResourceView@@@67@I@Z @ 0x1800CD0A8 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V-$C.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800CE020 (-EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ.c)
 *     ?SubmitCopyTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIII0II@Z @ 0x1800D0870 (-SubmitCopyTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VTexture@Engin.c)
 *     ?SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@6@@Z @ 0x1800D15E0 (-SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$array@V-$shared_ptr@VFram.c)
 *     ?CreateInternal@VertexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z @ 0x1800D3710 (-CreateInternal@VertexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z.c)
 *     ?CreateInternal@IndexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z @ 0x1800D83D0 (-CreateInternal@IndexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return a1;
}
