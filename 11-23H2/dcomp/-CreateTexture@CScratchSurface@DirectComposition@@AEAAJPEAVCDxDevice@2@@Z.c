/*
 * XREFs of ?CreateTexture@CScratchSurface@DirectComposition@@AEAAJPEAVCDxDevice@2@@Z @ 0x1800FAF28
 * Callers:
 *     ?Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@PEAPEAV12@@Z @ 0x1800FADCC (-Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FO.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C (-CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Textur.c)
 */

__int64 __fastcall DirectComposition::CScratchSurface::CreateTexture(
        DirectComposition::CScratchSurface *this,
        DirectComposition::CDevice **a2)
{
  DXGI_FORMAT v2; // r9d
  UINT v4; // edx
  struct D3D11_TEXTURE2D_DESC v6; // [rsp+20h] [rbp-40h] BYREF

  v2 = *((_DWORD *)this + 10);
  v4 = 0;
  v6.Width = *((_DWORD *)this + 8);
  v6.Height = *((_DWORD *)this + 9);
  v6.Usage = D3D11_USAGE_DEFAULT;
  v6.Format = v2;
  if ( ((v2 - 87) & 0xFFFFFFFB) == 0 )
    v4 = 512;
  v6.MipLevels = 1;
  v6.MiscFlags = v4;
  v6.ArraySize = 1;
  v6.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  *(_QWORD *)&v6.BindFlags = 32LL;
  return DirectComposition::CDxDevice::CreateTexture(a2, &v6, 1, (struct ID3D11Texture2D **)this + 3);
}
