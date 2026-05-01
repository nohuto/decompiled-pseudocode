/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803A9310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x18010773C (IsUserAssignedAccessSingleApp.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180172508 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x18039DE30 (CortanaHelpers--SetIsAssignedAccess.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803A6FB0 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A923C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1803AC5E4 (CortanaHelpers--SetWindowsHelloActive.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  bool v7; // sf
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+58h] [rbp+10h] BYREF

  *((_BYTE *)this + 182) = a2 != 0;
  if ( a2 )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 941LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
  }
  else if ( *((_BYTE *)this + 186) )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 948LL;
      goto LABEL_4;
    }
  }
  *((_BYTE *)this + 186) = 0;
  if ( !*((_BYTE *)this + 182) )
    goto LABEL_23;
  if ( (unsigned int)(*((_DWORD *)this + 19) - 3) > 1 )
  {
    v3 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 64));
    if ( v3 < 0 )
    {
      v4 = 961LL;
      goto LABEL_4;
    }
    if ( !*((_BYTE *)this + 182) )
    {
LABEL_23:
      if ( !*((_BYTE *)this + 183) )
      {
        v10 = 0;
        v6 = _RegSetKeyValueWithSDDL(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
               L"AnyAboveLockAppsActive",
               4u,
               (BYTE *)&v10,
               4u);
        v7 = v6 < 0;
        if ( v6 > 0 )
        {
          v6 = (unsigned __int16)v6 | 0x80070000;
          v7 = v6 < 0;
        }
        if ( v7 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8D,
            (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
            (const char *)(unsigned int)v6);
        CortanaHelpers::SetWindowsHelloActive();
        v8 = IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL);
        CortanaHelpers::SetIsAssignedAccess(v8 != 0);
        if ( *((_BYTE *)this + 184) )
        {
          *((_BYTE *)this + 184) = 0;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
        }
      }
    }
  }
  return 0LL;
}
