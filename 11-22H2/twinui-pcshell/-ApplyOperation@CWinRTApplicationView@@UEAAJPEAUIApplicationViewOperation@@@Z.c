/*
 * XREFs of ?ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x180016040
 * Callers:
 *     <none>
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
__int64 __fastcall CWinRTApplicationView::ApplyOperation(
        CWinRTApplicationView *this,
        struct IApplicationViewOperation *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0LL;
  v9 = &v11;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  if ( v8 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()(&v9);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v8);
  if ( !v11 )
  {
    v5 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      v8);
    goto LABEL_7;
  }
  v12 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IImmersiveApplicationPresentation>::As<IApplicationManagerViewPosition>(&v11, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 400LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4,
      v8);
    goto LABEL_6;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationViewOperation *))(*(_QWORD *)v12 + 32LL))(
         v12,
         *((_QWORD *)this + 26),
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 401LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v5;
}
