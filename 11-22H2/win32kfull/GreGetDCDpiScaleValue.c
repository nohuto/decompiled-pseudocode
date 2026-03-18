/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C0015C58
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C0016A4C (PrepareHDCBITSBitmap.c)
 *     NtGdiCreateDIBSection @ 0x1C002A420 (NtGdiCreateDIBSection.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     BitBltSysBmp @ 0x1C009A400 (BitBltSysBmp.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C015CF50 (NtGdiGetDCDpiScaleValue.c)
 *     NtUserBitBltSysBmp @ 0x1C01CCDC0 (NtUserBitBltSysBmp.c)
 * Callees:
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C0015CAC (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  unsigned int CachedDpiScaleValue; // ebx
  DC *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v3[0]);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return CachedDpiScaleValue;
  }
  else
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v4);
    return 1LL;
  }
}
