/*
 * XREFs of ?OnAnimationComplete@CAcrylicSheet@@UEAAJI@Z @ 0x18009A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180105C50 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CAcrylicSheet::OnAnimationComplete(CAcrylicSheet *this, int a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 50) == a2 )
  {
    v2 = CAcrylicSheet::StopAnimations((CAcrylicSheet *)((char *)this - 288));
    if ( v2 < 0 )
    {
      v3 = 977LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v2 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
           0);
    if ( v2 < 0 )
    {
      v3 = 986LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
