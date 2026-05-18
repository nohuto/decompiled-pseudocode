/*
 * XREFs of ?GetUsage@DeviceTexture@Engine@Spectre@@QEBA?AW4Usage@23@XZ @ 0x180056878
 * Callers:
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 *     ?SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2F50 (-SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::DeviceTexture::GetUsage(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 24);
  }
  return result;
}
