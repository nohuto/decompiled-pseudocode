/*
 * XREFs of ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x180055B60
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x1800559A0 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ??$As@UIApplicationManagerViewPosition@@@?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationManagerViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180016108 (--$As@UIApplicationManagerViewPosition@@@-$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Micro.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18001621C (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintOverrides(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5)
{
  int v5; // edi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF
  __int64 v16; // [rsp+90h] [rbp+50h] BYREF
  struct tagSIZE **v17; // [rsp+98h] [rbp+58h] BYREF

  v5 = (int)a4;
  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0LL;
  a5 = 0LL;
  v17 = &a5;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v16);
  if ( v16 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()((__int64 **)&v17, v16);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v16);
  if ( !a5 )
  {
    v10 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      v13);
    goto LABEL_8;
  }
  v15 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IImmersiveApplicationPresentation>::As<IApplicationManagerViewPosition>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&a5,
         (__int64)&v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 197LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v9,
      v13);
    goto LABEL_7;
  }
  v13 = v5;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)v15 + 40LL))(
         v15,
         *((_QWORD *)this + 26),
         a2,
         a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 198LL;
    goto LABEL_12;
  }
  v10 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  return v10;
}
