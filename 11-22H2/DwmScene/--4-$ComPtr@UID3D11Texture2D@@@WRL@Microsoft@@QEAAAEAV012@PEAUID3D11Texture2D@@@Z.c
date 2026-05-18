/*
 * XREFs of ??4?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Texture2D@@@Z @ 0x180010FD0
 * Callers:
 *     ?ReplaceBackBufferTexture@RenderOutputDwm@@QEAAXPEAUID3D11Texture2D@@II@Z @ 0x1800115D8 (-ReplaceBackBufferTexture@RenderOutputDwm@@QEAAXPEAUID3D11Texture2D@@II@Z.c)
 *     ?SetRenderTarget@SpectreRenderer@@EEAAXPEAUID3D11Texture2D@@@Z @ 0x18001B070 (-SetRenderTarget@SpectreRenderer@@EEAAXPEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11Texture2D>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
