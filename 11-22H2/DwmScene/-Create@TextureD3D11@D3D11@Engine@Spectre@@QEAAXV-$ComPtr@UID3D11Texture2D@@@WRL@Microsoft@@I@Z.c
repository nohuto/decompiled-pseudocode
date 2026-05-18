/*
 * XREFs of ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@I@Z @ 0x1800CD054
 * Callers:
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@I@Z @ 0x1800D5C8C (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11DepthStencilView@@@WRL@Micr.c)
 * Callees:
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$ComPtr@UID3D11ShaderResourceView@@@67@I@Z @ 0x1800CD0A8 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::D3D11::TextureD3D11::Create(Spectre::Engine::D3D11::TextureD3D11 *a1, __int64 *a2)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( &v4 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
  }
  Spectre::Engine::D3D11::TextureD3D11::Create(a1);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
}
