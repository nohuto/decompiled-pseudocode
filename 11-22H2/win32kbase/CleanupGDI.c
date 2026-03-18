/*
 * XREFs of CleanupGDI @ 0x1C00A0060
 * Callers:
 *     CleanupResources @ 0x1C009E280 (CleanupResources.c)
 * Callees:
 *     hbmSelectBitmap @ 0x1C0002FE0 (hbmSelectBitmap.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     GreGetStockObject @ 0x1C004D230 (GreGetStockObject.c)
 *     DestroyCacheDCEntries @ 0x1C0050FE8 (DestroyCacheDCEntries.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00A03D8 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A0400 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A0434 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00A0474 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     DestroyMonitor @ 0x1C00A04C0 (DestroyMonitor.c)
 *     DelayedDestroyCacheDC @ 0x1C00A065C (DelayedDestroyCacheDC.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00A074C (DrvCleanupAndDestroyMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C40 (--0SURFREF@@QEAA@XZ.c)
 */

PVOID CleanupGDI()
{
  HPALETTE *v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rdi
  char *v4; // rdx
  PVOID result; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  HBITMAP StockObject; // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  DestroyDC((HDC *)gpDispInfo + 7);
  DestroyDC((HDC *)gpDispInfo + 8);
  DestroyDC((HDC *)gpDispInfo + 9);
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && qword_1C02950D8 && (int)qword_1C02950D8() >= 0 && qword_1C02950E0 )
    qword_1C02950E0();
  DestroyDC(&qword_1C0291E40);
  if ( qword_1C0291F00 )
  {
    StockObject = (HBITMAP)GreGetStockObject(21);
    hbmSelectBitmap(qword_1C0291F08, StockObject, 0, 0);
    GreDeleteObject(qword_1C0291F00);
    qword_1C0291F00 = 0LL;
  }
  DestroyDC(&qword_1C0291F08);
  DestroyCacheDCEntries((__int64)gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1LL);
  v0 = (HPALETTE *)gpDispInfo;
  v1 = *((_QWORD *)gpDispInfo + 10);
  if ( v1 )
  {
    SURFREF::SURFREF((SURFREF *)v9);
    v10 = HmgShareLockCheck(v1, 5);
    if ( v10 && (v1 & 0x800000) == 0 )
      HmgSetOwner(v1, -2147483646, 5);
    SURFREF::~SURFREF((SURFREF *)v9);
    GreDeleteObject(v0[10]);
    v0[10] = 0LL;
  }
  if ( qword_1C0295108 && (int)qword_1C0295108() >= 0 && qword_1C0295110 )
    qword_1C0295110();
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 618);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v2 = 4696LL;
  v3 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v2));
    v2 += 8LL;
    --v3;
  }
  while ( v3 );
  DestroyRegion((HRGN *)gpDispInfo + 15);
  DestroyRegion(&ghrgnInvalidSum);
  DestroyRegion(&ghrgnVisNew);
  DestroyRegion(&ghrgnSWP1);
  DestroyRegion(&ghrgnValid);
  DestroyRegion(&ghrgnValidSum);
  DestroyRegion(&ghrgnInvalid);
  DestroyRegion(&ghrgnInv0);
  DestroyRegion(&ghrgnInv1);
  DestroyRegion(&ghrgnInv2);
  DestroyRegion(&ghrgnGDC);
  DestroyRegion(&ghrgnSCR);
  DestroyRegion(&ghrgnSPB1);
  DestroyRegion(&ghrgnSPB2);
  DestroyRegion(&ghrgnSW);
  DestroyRegion(&ghrgnScrl1);
  DestroyRegion(&ghrgnScrl2);
  DestroyRegion(&ghrgnScrlVis);
  DestroyRegion(&ghrgnScrlSrc);
  DestroyRegion(&ghrgnScrlDst);
  DestroyRegion(&ghrgnScrlValid);
  DestroyAllDPIMETRICSFonts(&gSessionDpiMetrics);
  DestroyAllDPIMETRICSFonts(&g96DpiMetrics);
  if ( g_pWallpaperSettings )
  {
    if ( qword_1C02950E8 && (int)qword_1C02950E8() >= 0 && qword_1C02950F0 )
      qword_1C02950F0(g_pWallpaperSettings);
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject(g_hbmDesktopPattern);
    g_hbmDesktopPattern = 0LL;
  }
  if ( *((_QWORD *)gpDispInfo + 2) )
  {
    DrvCleanupAndDestroyMDEV();
    v4 = (char *)*((_QWORD *)gpDispInfo + 2);
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *((_QWORD *)gpDispInfo + 2) = 0LL;
    *((_QWORD *)gpDispInfo + 5) = 0LL;
  }
  result = gpDispInfo;
  v6 = (_QWORD *)*((_QWORD *)gpDispInfo + 13);
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)v6[7];
      result = (PVOID)DestroyMonitor(v6);
      v6 = v7;
    }
    while ( v7 );
  }
  if ( gpMonitorCached )
    return (PVOID)DestroyMonitor(gpMonitorCached);
  return result;
}
