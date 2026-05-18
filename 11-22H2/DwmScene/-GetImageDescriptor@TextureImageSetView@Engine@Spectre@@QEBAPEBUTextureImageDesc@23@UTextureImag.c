/*
 * XREFs of ?GetImageDescriptor@TextureImageSetView@Engine@Spectre@@QEBAPEBUTextureImageDesc@23@UTextureImageIndex@23@@Z @ 0x1800567E8
 * Callers:
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::TextureImageSetView::GetImageDescriptor(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v2 = (unsigned int)(HIDWORD(a2) + *(_DWORD *)(a1 + 48) * a2);
  if ( v2 >= (__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) >> 5 )
    return 0LL;
  result = 0LL;
  v4 = *(_QWORD *)(a1 + 24) + 32 * v2;
  if ( *(_DWORD *)(v4 + 28) == HIDWORD(a2) )
    return v4;
  return result;
}
