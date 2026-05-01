/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x180484720
 * Callers:
 *     <none>
 * Callees:
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x18047C6D8 (CortanaHelpers--SetIsAssignedAccess.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804823F4 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18048464C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1804878F0 (CortanaHelpers--SetWindowsHelloActive.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  _BYTE *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  *((_BYTE *)this + 182) = a2 != 0;
  if ( a2 )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 940LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v6 = (char *)this + 186;
  }
  else
  {
    v6 = (char *)this + 186;
    if ( *((_BYTE *)this + 186) )
    {
      v7 = CortanaDesktopExperienceView::NotifyView(
             (CortanaDesktopExperienceView *)((char *)this - 64),
             L"NotifyLockStatusChanged",
             0LL);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B3,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v7);
        return v8;
      }
    }
  }
  *v6 = 0;
  if ( !*((_BYTE *)this + 182) )
    goto LABEL_24;
  if ( (unsigned int)(*((_DWORD *)this + 19) - 3) > 1 )
  {
    v3 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 64));
    if ( v3 < 0 )
    {
      v4 = 960LL;
      goto LABEL_4;
    }
  }
  if ( !*((_BYTE *)this + 182) )
  {
LABEL_24:
    if ( !*((_BYTE *)this + 183) )
    {
      v13 = 0;
      v9 = _RegSetKeyValueWithSDDL(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"AnyAboveLockAppsActive",
             4u,
             (BYTE *)&v13,
             4u);
      v10 = v9 < 0;
      if ( v9 > 0 )
      {
        v9 = (unsigned __int16)v9 | 0x80070000;
        v10 = v9 < 0;
      }
      if ( v10 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D,
          (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
          (const char *)(unsigned int)v9);
      CortanaHelpers::SetWindowsHelloActive();
      v11 = IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL);
      CortanaHelpers::SetIsAssignedAccess(v11 != 0);
      if ( *((_BYTE *)this + 184) )
      {
        *((_BYTE *)this + 184) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
      }
    }
  }
  return 0LL;
}
