/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A270
 * Callers:
 *     <none>
 * Callees:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_82249f02e51292d5ce9028c294c0a72e___ @ 0x18002A2F0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_82249f02e51292d5ce9028c294c0a72e___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x1800ED338 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetPosition(IUnknown *this, const struct _GUID *a2, void **a3)
{
  int v3; // ebx
  IUnknown *punk[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  void **v7; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  punk[1] = this;
  v6 = (__int128)*a2;
  v7 = a3;
  punk[0] = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(punk);
  v3 = ShellPositionerHelpers::PerformCallbackOnView__lambda_82249f02e51292d5ce9028c294c0a72e___(punk[0]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(punk);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF9,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v3,
    (int)punk[0]);
  return (unsigned int)v3;
}
