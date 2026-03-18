/*
 * XREFs of ?Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAUIDisplayScanout@4567@@Z @ 0x18029DAFC
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180289EA8 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18028A05C (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180288224 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 *     ??$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18029D678 (--$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display.c)
 *     ??0Plane@CDDisplayCachedScanout@@QEAA@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18029D85C (--0Plane@CDDisplayCachedScanout@@QEAA@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@.c)
 */

void __fastcall CDDisplayCachedScanout::Set(
        CDDisplayCachedScanout *this,
        unsigned int a2,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a3,
        int a4,
        struct Windows::Devices::Display::Core::IDisplaySurface *a5,
        struct Windows::Devices::Display::Core::IDisplayScanout *a6)
{
  __int64 v6; // rsi
  CDDisplayCachedScanout::Plane *v10; // rax
  struct Windows::Devices::Display::Core::IDisplayScanout *v11; // rcx
  __int64 v12; // rdi

  v6 = a2;
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*(_QWORD *)this, *((_QWORD *)this + 1));
  v10 = *(CDDisplayCachedScanout::Plane **)this;
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  if ( (_DWORD)v6 )
  {
    do
    {
      if ( v10 == *((CDDisplayCachedScanout::Plane **)this + 2) )
      {
        std::vector<CDDisplayCachedScanout::Plane>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY const &,Windows::Devices::Display::Core::IDisplaySurface * &>(
          (__int64 *)this,
          (__int64)v10,
          a3,
          &a5);
      }
      else
      {
        CDDisplayCachedScanout::Plane::Plane(v10, a3, a5);
        *((_QWORD *)this + 1) += 80LL;
      }
      v10 = (CDDisplayCachedScanout::Plane *)*((_QWORD *)this + 1);
      a3 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a3 + 136);
      --v6;
    }
    while ( v6 );
  }
  v11 = a6;
  *((_DWORD *)this + 8) = a4;
  v12 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v11;
  if ( v11 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v11 + 8LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
}
