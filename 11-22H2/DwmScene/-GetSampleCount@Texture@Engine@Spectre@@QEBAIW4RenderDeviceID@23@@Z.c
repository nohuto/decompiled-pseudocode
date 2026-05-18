/*
 * XREFs of ?GetSampleCount@Texture@Engine@Spectre@@QEBAIW4RenderDeviceID@23@@Z @ 0x18002C348
 * Callers:
 *     ?UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z @ 0x18002D130 (-UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z.c)
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?GetSampleCount@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056840 (-GetSampleCount@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 */

__int64 __fastcall Spectre::Engine::Texture::GetSampleCount(__int64 a1, unsigned int a2)
{
  unsigned int SampleCount; // ebx
  Spectre::Engine::DeviceTexture *v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  Spectre::Engine::Texture::GetDeviceTexture(a1, &v4, a2);
  if ( v4 )
  {
    SampleCount = Spectre::Engine::DeviceTexture::GetSampleCount(v4);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    return SampleCount;
  }
  else
  {
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    return 0LL;
  }
}
