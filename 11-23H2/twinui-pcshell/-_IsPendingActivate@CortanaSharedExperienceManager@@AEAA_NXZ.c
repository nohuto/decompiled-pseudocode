/*
 * XREFs of ?_IsPendingActivate@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x18042FABC
 * Callers:
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18042FDD8 (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CortanaSharedExperienceManager::_IsPendingActivate(CortanaSharedExperienceManager *this)
{
  __int64 v1; // rcx
  bool result; // al
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 62);
  v3 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 56LL))(v1, &v3) < 0 )
    return 0;
  result = 1;
  if ( v3 != 1 )
    return 0;
  return result;
}
