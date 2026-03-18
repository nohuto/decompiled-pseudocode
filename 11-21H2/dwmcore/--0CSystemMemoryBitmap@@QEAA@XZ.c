/*
 * XREFs of ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18005FC6C
 * Callers:
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x18005FB7C (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180268E4C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAUIWICBitmap@@@Z @ 0x1802695E0 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x18026A4F8 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18026A7DC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x18026AD20 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1802900FC (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802A72E8 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x18006AE44 (--0CBitmap@@QEAA@XZ.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::CSystemMemoryBitmap(CSystemMemoryBitmap *this, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CSystemMemoryBitmap *result; // rax

  if ( a2 )
  {
    *((_QWORD *)this + 1) = &CSystemMemoryBitmap::`vbtable';
    *((_QWORD *)this + 18) = &CSystemMemoryBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
    *((_QWORD *)this + 26) = &CInk::`vbtable'{for `IContent'};
  }
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 17) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 8LL) + 144) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 17) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 19) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CSystemMemoryBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CSystemMemoryBitmap::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 176;
  v4 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 192;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 20) = 0LL;
  return result;
}
