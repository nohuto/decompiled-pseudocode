/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@1@@Z @ 0x1805F89D4
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@Z0II@Z @ 0x1805F9018 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II@CVi.c)
 * Callees:
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_66bc8e2eef54da231fbab9359c259283_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAI1@Z @ 0x1805F86A8 (--$-RAEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_66bc8e2eef54da231fbab9359c259283_@@QEBA-A_PAEAPEAU.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *,unsigned int,unsigned int>(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  _DWORD v5[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v6; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char *v8; // [rsp+60h] [rbp+20h] BYREF
  char **v9; // [rsp+70h] [rbp+30h] BYREF
  char ***v10; // [rsp+78h] [rbp+38h] BYREF

  LODWORD(v8) = 0;
  v9 = &v8;
  v10 = &v9;
  _lambda_66bc8e2eef54da231fbab9359c259283_::operator()<IVirtualDesktop * &,unsigned int &,unsigned int &>(
    (int ***)&v10,
    (__int64)v5,
    (__int64 *)(a1 + 8),
    (int *)(a1 + 4),
    (_DWORD *)a1);
  v3 = (unsigned int)v8;
  if ( (int)v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)(a2 + 8), &v6);
    v3 = 0;
    *(_DWORD *)(a2 + 4) = v5[1];
    *(_DWORD *)a2 = v5[0];
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  return v3;
}
