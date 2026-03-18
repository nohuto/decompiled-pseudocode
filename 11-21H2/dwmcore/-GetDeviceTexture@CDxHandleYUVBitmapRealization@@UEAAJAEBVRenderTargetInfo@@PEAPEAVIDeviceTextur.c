/*
 * XREFs of ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180116222
 * Callers:
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010C530 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVI.c)
 * Callees:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180068450 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A6358 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDeviceTexture(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int DeviceTexture; // ebx
  __int64 v9; // rcx

  *a3 = 0LL;
  v6 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 464));
  DeviceTexture = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x11Cu);
    return DeviceTexture;
  }
  v9 = *((_QWORD *)this - 22);
  if ( !*(_BYTE *)(v9 + 152) )
  {
    *a3 = 0LL;
    DeviceTexture = -2003292412;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, DeviceTexture, 0x11Eu);
    return DeviceTexture;
  }
  DeviceTexture = CRenderTargetBitmap::GetDeviceTexture((CRenderTargetBitmap *)(v9 + 240), a2, a3);
  if ( (DeviceTexture & 0x80000000) != 0 )
    goto LABEL_6;
  return DeviceTexture;
}
