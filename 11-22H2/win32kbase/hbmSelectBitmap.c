/*
 * XREFs of hbmSelectBitmap @ 0x1C0002FE0
 * Callers:
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0003064 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

HBITMAP __fastcall hbmSelectBitmap(HDC a1, HBITMAP a2, int a3, int a4)
{
  HBITMAP v5; // rbx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( v9[0] )
    v5 = hbmSelectBitmapInternal((struct XDCOBJ *)v9, a2, a3, a4, 1);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v9);
  return v5;
}
