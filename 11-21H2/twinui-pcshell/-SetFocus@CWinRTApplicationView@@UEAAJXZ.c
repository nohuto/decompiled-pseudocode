/*
 * XREFs of ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x18002F3C0
 * Callers:
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18002F2F0 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x1800ED338 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetFocus(CWinRTApplicationView *this)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rdi
  int v4; // eax
  int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&v10);
  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 )
  {
    v9 = 0LL;
    v3 = **v10;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    v4 = v3(v2, &GUID_bf63999f_7411_40da_861c_df72c0ffee84, &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v4,
        v7);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, *((_QWORD *)this + 26), 0LL);
      if ( v5 >= 0 )
        v5 = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  }
  else
  {
    v5 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return (unsigned int)v5;
}
