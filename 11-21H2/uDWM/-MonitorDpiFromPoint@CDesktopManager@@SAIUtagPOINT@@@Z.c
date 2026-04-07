/*
 * XREFs of ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18004F3EC
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18004F37C (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800BC224 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800C8D94 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800C93B0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800D1A38 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::MonitorDpiFromPoint(POINT a1)
{
  HMONITOR v1; // rax
  unsigned int v2; // ecx
  int DpiForMonitorInternal; // eax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 96;
  v1 = MonitorFromPoint(a1, 0);
  if ( v1 )
  {
    DpiForMonitorInternal = GetDpiForMonitorInternal(v1, 0LL, &v6, &v5);
    v2 = v5;
    if ( !DpiForMonitorInternal )
      return 96;
  }
  else
  {
    return v5;
  }
  return v2;
}
