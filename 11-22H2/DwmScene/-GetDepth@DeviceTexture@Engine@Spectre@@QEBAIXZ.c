/*
 * XREFs of ?GetDepth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056650
 * Callers:
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAXI@Z @ 0x1800D1170 (-SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engine.c)
 *     ?SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2F50 (-SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::DeviceTexture::GetDepth(Spectre::Engine::DeviceTexture *this)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 14);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 8);
  }
  return result;
}
