/*
 * XREFs of Spectre::Engine::GetFormatRowPitch @ 0x1800566E4
 * Callers:
 *     ?CreateDefaultImageDescriptors@Engine@Spectre@@YA?AV?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEBUTextureDesc@12@_K@Z @ 0x180056230 (-CreateDefaultImageDescriptors@Engine@Spectre@@YA-AV-$vector@UTextureImageDesc@Engine@Spectre@@V.c)
 *     Spectre::Engine::GetFormatSlicePitch @ 0x180056720 (Spectre--Engine--GetFormatSlicePitch.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD130 (-Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     Spectre::Engine::GetFormatSlicePitch_0 @ 0x1800CEB78 (Spectre--Engine--GetFormatSlicePitch_0.c)
 * Callees:
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 */

__int64 __fastcall Spectre::Engine::GetFormatRowPitch(int a1)
{
  int v1; // eax
  int v2; // r10d
  int FormatPitch; // eax
  int v5; // r10d

  if ( a1 == 23 || a1 == 24 )
  {
    FormatPitch = Spectre::Engine::GetFormatPitch(a1);
    return ((v5 + 1) & 0xFFFFFFFE) * FormatPitch;
  }
  else
  {
    v1 = Spectre::Engine::GetFormatPitch(a1);
    return (unsigned int)(v2 * v1);
  }
}
