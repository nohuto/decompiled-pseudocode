/*
 * XREFs of ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x180016360
 * Callers:
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x180016290 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 * Callees:
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18001621C (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetFocus(CWinRTApplicationView *this)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rdi
  int v4; // eax
  int v5; // ebx
  __int64 *v7; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v10 = 0LL;
  v7 = (__int64 *)&v10;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v11);
  if ( v11 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()(&v7, v11);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v11);
  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 )
  {
    v9 = 0LL;
    v3 = **v10;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    v4 = v3(v2, &GUID_bf63999f_7411_40da_861c_df72c0ffee84, &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v4,
        (int)v7);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, *((_QWORD *)this + 26), 0LL);
      if ( v5 >= 0 )
        v5 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
  else
  {
    v5 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      (int)v7);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return (unsigned int)v5;
}
