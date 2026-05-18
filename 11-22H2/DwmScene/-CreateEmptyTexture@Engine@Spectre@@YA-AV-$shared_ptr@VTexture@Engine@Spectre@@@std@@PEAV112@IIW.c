/*
 * XREFs of ?CreateEmptyTexture@Engine@Spectre@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW4Format@12@W4Usage@12@I@Z @ 0x18006FA04
 * Callers:
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::CreateEmptyTexture(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v14; // [rsp+38h] [rbp-30h]
  rsize_t v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(a2, a1);
  Spectre::Engine::RendererResource::SetOption(*a1, 1, 0);
  Spectre::Engine::RendererResource::SetOption(*a1, v10 + 2, v10);
  Spectre::Engine::RendererResource::SetOption(*a1, v11 + 4, v11);
  LODWORD(v15) = v12 & v15;
  Spectre::Engine::Texture::Create(
    *a1,
    a3,
    a4,
    0,
    a5,
    a6,
    a7,
    (void *)(v12 & v14),
    v15,
    (struct Spectre::Engine::RenderDevice *)(v12 & v16));
  return a1;
}
