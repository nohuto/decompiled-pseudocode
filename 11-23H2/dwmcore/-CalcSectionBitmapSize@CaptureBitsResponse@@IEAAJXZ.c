/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800205E0
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180020570 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801DFA94 (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002AD48 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v2; // ecx
  _DWORD *v3; // r9
  int v4; // ebx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx

  PixelFormatSize = GetPixelFormatSize(this[411]);
  if ( PixelFormatSize && (v2 = v3[409], v2 <= 0x7FFFFFF8u / PixelFormatSize) )
  {
    v4 = 0;
    v5 = (((v2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v4 = -2147024362;
    v5 = 0;
  }
  v3[419] = v5;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v4, 0xD5u, 0LL);
  }
  else
  {
    v6 = v5 * (unsigned __int64)(unsigned int)v3[410];
    if ( v6 > 0xFFFFFFFF )
    {
      v4 = -2147024362;
      v3[418] = -1;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xD7u, 0LL);
    }
    else
    {
      v3[418] = v6;
      return 0;
    }
  }
  return (unsigned int)v4;
}
