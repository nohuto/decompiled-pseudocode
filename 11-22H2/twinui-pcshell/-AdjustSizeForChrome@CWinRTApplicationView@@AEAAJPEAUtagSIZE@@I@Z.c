/*
 * XREFs of ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x1803CF5CC
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x1800559A0 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x180055C54 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::AdjustSizeForChrome(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // ebx
  int v9; // eax
  int v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  volatile signed __int32 *v15; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v12 = &v14;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v15);
  if ( v15 )
    lambda_93f12587be75daec396af0a75fadd596_::operator()(&v12, (__int64)v15);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v15);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CWinRTApplicationView *, int *))(*(_QWORD *)v14 + 40LL))(
         v14,
         *a2,
         a3,
         this,
         v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = MulDiv(a2->cx, a3, 96);
    v9 = MulDiv(a2->cy, a3, 96);
    LODWORD(v15) = v11[0] + a2->cx - v8;
    HIDWORD(v15) = a2->cy + v11[1] - v9;
    *a2 = (struct tagSIZE)v15;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  return v7;
}
