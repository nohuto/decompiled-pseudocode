/*
 * XREFs of ?get_IsExplicitDismissEnabled@SearchAppExperienceManager@@UEAAJPEAE@Z @ 0x180460ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::get_IsExplicitDismissEnabled(
        SearchAppExperienceManager *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 24LL))(*((_QWORD *)this + 54));
}
