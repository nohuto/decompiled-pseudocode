/*
 * XREFs of ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x1802D1B00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1800DFE50 (-SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x1800E0CEC (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::HandleRecycle(CWin32ApplicationView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)EdpGetIsManaged() )
    *((_BYTE *)this + 40) = 1;
  CWin32ApplicationView::SetForceActiveWindowAppearance((CWin32ApplicationView *)((char *)this - 16), 0);
  v2 = CWin32ApplicationView::InitializeCloakType((__int64)this - 16, 1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA0,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
