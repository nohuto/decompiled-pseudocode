/*
 * XREFs of ?v_SetCloak@CWinRTApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x180016170
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18001621C (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::v_SetCloak(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = &v12;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v9);
  if ( v9 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()(&v10);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v9);
  if ( v12 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
           v12,
           *(_QWORD *)(a1 + 208),
           a3,
           a2);
    if ( v6 >= 0 )
      v6 = 0;
  }
  else
  {
    v6 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      v8);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return (unsigned int)v6;
}
