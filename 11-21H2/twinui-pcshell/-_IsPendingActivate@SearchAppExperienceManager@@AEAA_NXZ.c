/*
 * XREFs of ?_IsPendingActivate@SearchAppExperienceManager@@AEAA_NXZ @ 0x18038B710
 * Callers:
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18038B9C4 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall SearchAppExperienceManager::_IsPendingActivate(SearchAppExperienceManager *this)
{
  __int64 v1; // rcx
  bool result; // al
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 63);
  v3 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 56LL))(v1, &v3) < 0 )
    return 0;
  result = 1;
  if ( v3 != 1 )
    return 0;
  return result;
}
