/*
 * XREFs of ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1803BF350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z @ 0x1803BF3AC (-SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1803BF548 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetWindowOwner(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
    PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(this, a2, a3);
  v5 = ShellExperienceHelpers::SetWindowOwner(a2, a3, a3);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A9,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
