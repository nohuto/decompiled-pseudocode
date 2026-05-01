/*
 * XREFs of ?HandleLauncherDismissRequested@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A18E0
 * Callers:
 *     MiniSearchExperienceManager::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801A76E0 (MiniSearchExperienceManager--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920 (-Hide@MiniSearchExperienceManager@@UEAAJXZ.c)
 */

void __fastcall MiniSearchExperienceManager::HandleLauncherDismissRequested(MiniSearchExperienceManager *this)
{
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 48LL))(*((_QWORD *)this + 9)) )
    MiniSearchExperienceManager::Hide(this);
}
