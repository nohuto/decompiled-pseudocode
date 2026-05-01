/*
 * XREFs of ?TakeKeyboardFocus@SearchAppExperienceManager@@UEAAJXZ @ 0x18038ACE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::TakeKeyboardFocus(SearchAppExperienceManager *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 96LL))(*((_QWORD *)this + 54));
}
