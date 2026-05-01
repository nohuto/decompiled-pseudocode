/*
 * XREFs of ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x18046EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x18046EE60 (-_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExp.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType(
        TwinUI::Cortana::CortanaPositionerSelector *a1,
        int a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a3)
{
  unsigned int DesktopExperiencePositioner; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      DesktopExperiencePositioner = TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(a1, a3);
      if ( (DesktopExperiencePositioner & 0x80000000) == 0 )
        return DesktopExperiencePositioner;
      v4 = 38LL;
    }
    else
    {
      DesktopExperiencePositioner = -2147024809;
      v4 = 44LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
      (const char *)DesktopExperiencePositioner);
    return DesktopExperiencePositioner;
  }
  return 0LL;
}
