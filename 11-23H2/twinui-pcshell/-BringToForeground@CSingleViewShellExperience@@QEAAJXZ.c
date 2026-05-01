/*
 * XREFs of ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180747320
 * Callers:
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180436390 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x180439CB0 (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x180444470 (-BringToForeground@CStartExperienceManager@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180445F80 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18046F6B0 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::BringToForeground(CSingleViewShellExperience *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 3) )
    return 0LL;
  if ( *((_DWORD *)this + 10) != 2 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 72LL))(*((_QWORD *)this + 10));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
