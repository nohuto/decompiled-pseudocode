/*
 * XREFs of ?LockCoWaitForMultipleHandles@VirtualDesktopSwitchAnimator@@UEAAJXZ @ 0x180617390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::LockCoWaitForMultipleHandles(VirtualDesktopSwitchAnimator *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = (HANDLE)*((_QWORD *)this + 25);
  v1 = CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, &v6, &v5);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x84,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
