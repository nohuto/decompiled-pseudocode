/*
 * XREFs of ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180479960
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x18047C4FC (-SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x180487698 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

HICON __fastcall SearchAppDesktopExperienceView::HICONFromBitmap(HBITMAP a1)
{
  int SystemMetrics; // edi
  int v3; // ebx
  HDC DC; // rax
  HBITMAP CompatibleBitmap; // rax
  HICON v6; // rdi
  HBITMAP v7; // rbx
  ICONINFO piconinfo; // [rsp+20h] [rbp-28h] BYREF

  SystemMetrics = GetSystemMetrics(12);
  v3 = GetSystemMetrics(11);
  DC = GetDC(0LL);
  CompatibleBitmap = CreateCompatibleBitmap(DC, v3, SystemMetrics);
  v6 = 0LL;
  v7 = CompatibleBitmap;
  if ( CompatibleBitmap )
  {
    *(_QWORD *)&piconinfo.xHotspot = 0LL;
    *(&piconinfo.yHotspot + 1) = 0;
    piconinfo.fIcon = 1;
    piconinfo.hbmColor = a1;
    piconinfo.hbmMask = CompatibleBitmap;
    v6 = CreateIconIndirect(&piconinfo);
    DeleteObject(v7);
  }
  return v6;
}
