/*
 * XREFs of ??0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180495B08
 * Callers:
 *     ?Create@CAppThumbnailWindow@@SA?AV?$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180496800 (-Create@CAppThumbnailWindow@@SA-AV-$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@P.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??0?$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationViewCollection@@@Z @ 0x180230724 (--0-$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicat.c)
 */

CAppThumbnailWindow *__fastcall CAppThumbnailWindow::CAppThumbnailWindow(
        CAppThumbnailWindow *this,
        const struct Geometry::CRect *a2,
        struct IApplicationViewCollection *a3,
        HMONITOR *a4,
        struct IVirtualDesktop *a5)
{
  CAppThumbnailWindow *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  wil::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>(
    (_QWORD *)this + 4,
    (__int64)a3);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (_QWORD *)this + 16,
    (__int64)a5);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)a2;
  *((_QWORD *)this + 19) = *a4;
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 84) = 0;
  return result;
}
