/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x1800ED338 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_6a23aad7604e76289f945fb35b90f871___ @ 0x1800ED554 (ShellPositionerHelpers--PerformCallbackOnView__lambda_6a23aad7604e76289f945fb35b90f871___.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetPosition(IUnknown *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  IUnknown *punk[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  void **v8; // [rsp+40h] [rbp-18h]

  v3 = 0;
  *a3 = 0LL;
  punk[1] = this;
  v7 = (__int128)*a2;
  v8 = a3;
  punk[0] = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(punk);
  v4 = ShellPositionerHelpers::PerformCallbackOnView__lambda_6a23aad7604e76289f945fb35b90f871___(punk[0]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)punk);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
