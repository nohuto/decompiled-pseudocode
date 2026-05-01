/*
 * XREFs of ?Create@CAppThumbnailWindow@@SA?AV?$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180496800
 * Callers:
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x180496874 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0VCAppThumbnailWindow@@$0A@@?$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailWindow@@@Z @ 0x1804952CC (--$-0VCAppThumbnailWindow@@$0A@@-$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailW.c)
 *     ??0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180495B08 (--0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR.c)
 */

_QWORD *__fastcall CAppThumbnailWindow::Create(
        _QWORD *a1,
        const struct Geometry::CRect *a2,
        struct IApplicationViewCollection *a3,
        HMONITOR *a4,
        struct IVirtualDesktop *a5)
{
  CAppThumbnailWindow *v9; // rax
  CAppThumbnailWindow *v11; // [rsp+40h] [rbp+8h]

  v11 = (CAppThumbnailWindow *)operator new(0xB0uLL);
  v9 = CAppThumbnailWindow::CAppThumbnailWindow(v11, a2, a3, a4, a5);
  std::shared_ptr<CAppThumbnailWindow>::shared_ptr<CAppThumbnailWindow>(a1, v9);
  return a1;
}
