/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015F90
 * Callers:
 *     <none>
 * Callees:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_acd10b41a0cddad1ef38ef822c802fad___ @ 0x180015DF4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_acd10b41a0cddad1ef38ef822c802fad___.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18001621C (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetPosition(CWinRTApplicationView *this, const struct _GUID *a2, void **a3)
{
  int v4; // ebx
  IUnknown *punk; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  IUnknown **p_punk; // [rsp+30h] [rbp-30h] BYREF
  CWinRTApplicationView *v9; // [rsp+38h] [rbp-28h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h]
  void **v11; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a3 = 0LL;
  v9 = this;
  v10 = (__int128)*a2;
  v11 = a3;
  punk = 0LL;
  p_punk = &punk;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v7);
  if ( v7 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()(&p_punk);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v7);
  v4 = ShellPositionerHelpers::PerformCallbackOnView__lambda_acd10b41a0cddad1ef38ef822c802fad___(
         punk,
         (__int64)this,
         (__int64)&v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&punk);
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEB,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v4,
    (int)punk);
  return (unsigned int)v4;
}
