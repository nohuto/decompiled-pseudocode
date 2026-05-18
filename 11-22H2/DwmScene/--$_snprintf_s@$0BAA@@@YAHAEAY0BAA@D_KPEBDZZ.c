/*
 * XREFs of ??$_snprintf_s@$0BAA@@@YAHAEAY0BAA@D_KPEBDZZ @ 0x1800DAF7C
 * Callers:
 *     ??$SetDebugName@UID3D11Device1@@@CDXPixDebug@@SAXPEAUID3D11Device1@@PEB_W@Z @ 0x1800DA95C (--$SetDebugName@UID3D11Device1@@@CDXPixDebug@@SAXPEAUID3D11Device1@@PEB_W@Z.c)
 *     ??$SetDebugName@UIDXGIAdapter1@@@CDXPixDebug@@SAXPEAUIDXGIAdapter1@@PEB_W@Z @ 0x1800DAA38 (--$SetDebugName@UIDXGIAdapter1@@@CDXPixDebug@@SAXPEAUIDXGIAdapter1@@PEB_W@Z.c)
 * Callees:
 *     _vsnprintf_s @ 0x18000C1E8 (_vsnprintf_s.c)
 */

int _snprintf_s<256>(char *a1, size_t a2, const char *a3, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  return vsnprintf_s(a1, 0x100uLL, a2, a3, va);
}
