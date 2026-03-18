/*
 * XREFs of ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1800EDD1C
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18002FC00 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800EDC68 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetDirtyRegionFromAccum(CRedirectedGDISurface *this, HRGN *a2)
{
  signed int v4; // esi
  signed int LastError; // eax
  __int64 v7; // rcx

  v4 = 0;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfGetDirtyRgn(*((_QWORD *)this + 3), 0LL, 0LL, a2, 0LL, 0LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180358AE8, 4u, v4, 0xD6u, 0LL);
  }
  return (unsigned int)v4;
}
