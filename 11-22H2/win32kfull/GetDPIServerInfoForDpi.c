/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C008A410
 * Callers:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C008A180 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InitProcessSystemDpi @ 0x1C008A280 (InitProcessSystemDpi.c)
 *     GetProcessDpiServerInfo @ 0x1C00AB4FC (GetProcessDpiServerInfo.c)
 *     GetScaledLogFontForDpi @ 0x1C00F0E0C (GetScaledLogFontForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BF620 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxDrawMenuItem @ 0x1C0234CAC (xxxDrawMenuItem.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0237C90 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00EDB50 (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01BF14C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1)
{
  int DpiCacheSlot; // eax
  int v3; // r10d
  __int64 v4; // r11
  int v5; // ecx
  struct tagDPISERVERINFO *v6; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo(a1);
  if ( (_DWORD)a1 == 96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot(a1);
  v5 = 0;
  if ( DpiCacheSlot != -1 )
    v5 = DpiCacheSlot;
  v6 = (struct tagDPISERVERINFO *)(v4 + 104 * (v5 + 49LL));
  EnsureServerInfoForDpi(v6, v3);
  return (__int64)v6;
}
