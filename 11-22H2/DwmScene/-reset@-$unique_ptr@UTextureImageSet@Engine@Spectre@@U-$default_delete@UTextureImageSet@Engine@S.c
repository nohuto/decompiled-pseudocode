/*
 * XREFs of ?reset@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180056B34
 * Callers:
 *     ??$?4U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054D74 (--$-4U-$default_delete@UTextureImageSet@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UTextureImageSet.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800565B0 (-DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     ??R?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@QEBAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180055884 (--R-$default_delete@UTextureImageSet@Engine@Spectre@@@std@@QEBAXPEAUTextureImageSet@Engine@Spect.c)
 */

__int64 (__fastcall ***__fastcall std::unique_ptr<Spectre::Engine::TextureImageSet>::reset(
        _QWORD *a1,
        __int64 a2))(_QWORD, __int64)
{
  __int64 (__fastcall ***result)(_QWORD, __int64); // rax

  result = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = a2;
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64))std::default_delete<Spectre::Engine::TextureImageSet>::operator()(
                                                        (__int64)a1,
                                                        result);
  return result;
}
