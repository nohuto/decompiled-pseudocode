/*
 * XREFs of GreDeleteDC @ 0x1C00518D0
 * Callers:
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C00518F0 (bDeleteDCInternal.c)
 */

__int64 __fastcall GreDeleteDC(__int64 a1)
{
  return bDeleteDCInternal(a1, 1LL, 0LL);
}
