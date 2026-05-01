/*
 * XREFs of ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180387724
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1803882E4 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x18039DC68 (-SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1803AC3A0 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18022CC64 (--1-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integr.c)
 */

HICON __fastcall SearchAppDesktopExperienceView::HICONFromBitmap(HBITMAP a1)
{
  int SystemMetrics; // edi
  int v3; // ebx
  HDC DC; // rax
  HBITMAP CompatibleBitmap; // rax
  HICON v6; // rbx
  ICONINFO piconinfo; // [rsp+20h] [rbp-28h] BYREF
  HBITMAP v9; // [rsp+58h] [rbp+10h] BYREF

  SystemMetrics = GetSystemMetrics(12);
  v3 = GetSystemMetrics(11);
  DC = GetDC(0LL);
  CompatibleBitmap = CreateCompatibleBitmap(DC, v3, SystemMetrics);
  v6 = 0LL;
  v9 = CompatibleBitmap;
  if ( CompatibleBitmap )
  {
    *(_QWORD *)&piconinfo.xHotspot = 0LL;
    *(&piconinfo.yHotspot + 1) = 0;
    piconinfo.fIcon = 1;
    piconinfo.hbmColor = a1;
    piconinfo.hbmMask = CompatibleBitmap;
    v6 = CreateIconIndirect(&piconinfo);
  }
  wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)&v9);
  return v6;
}
