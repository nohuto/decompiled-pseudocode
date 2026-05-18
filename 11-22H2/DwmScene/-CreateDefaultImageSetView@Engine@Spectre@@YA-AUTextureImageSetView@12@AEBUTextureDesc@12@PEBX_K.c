/*
 * XREFs of ?CreateDefaultImageSetView@Engine@Spectre@@YA?AUTextureImageSetView@12@AEBUTextureDesc@12@PEBX_K@Z @ 0x180056318
 * Callers:
 *     ?Create@DeviceTexture@Engine@Spectre@@QEAAXAEBUTextureDesc@23@@Z @ 0x180055CFC (-Create@DeviceTexture@Engine@Spectre@@QEAAXAEBUTextureDesc@23@@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??0TextureImageSetView@Engine@Spectre@@QEAA@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@PEBX_K@Z @ 0x1800554E0 (--0TextureImageSetView@Engine@Spectre@@QEAA@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$alloc.c)
 *     ?CreateDefaultImageDescriptors@Engine@Spectre@@YA?AV?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEBUTextureDesc@12@_K@Z @ 0x180056230 (-CreateDefaultImageDescriptors@Engine@Spectre@@YA-AV-$vector@UTextureImageDesc@Engine@Spectre@@V.c)
 */

__int64 __fastcall Spectre::Engine::CreateDefaultImageSetView(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 *DefaultImageDescriptors; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  DefaultImageDescriptors = Spectre::Engine::CreateDefaultImageDescriptors(v9, a2, a4);
  Spectre::Engine::TextureImageSetView::TextureImageSetView(a1, DefaultImageDescriptors, a3, a4);
  return a1;
}
