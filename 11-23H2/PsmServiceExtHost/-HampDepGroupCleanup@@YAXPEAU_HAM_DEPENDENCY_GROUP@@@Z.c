/*
 * XREFs of ?HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007C760
 * Callers:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BCA4 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017B68 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x180029C1C (CempListEntryRemoveAndClear.c)
 *     CempListEntryIsNull @ 0x18002AB9C (CempListEntryIsNull.c)
 */

void __fastcall HampDepGroupCleanup(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v2; // rcx
  struct _HOST_ACTIVITY_MANAGER *v3; // rsi
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rdi

  v2 = *((_QWORD *)a1 + 15);
  if ( v2 )
    TpReleaseWork(v2);
  v3 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)a1 + 4);
  HampManagerAcquireLockExclusive(v3);
  v4 = (_QWORD *)((char *)a1 + 40);
  v5 = (_QWORD *)((char *)v3 + 488);
  if ( (unsigned int)CempListEntryIsNull(v4) )
  {
    v7 = 1LL;
  }
  else
  {
    CempListEntryRemoveAndClear(v6);
    v7 = --*v5;
  }
  HampManagerReleaseLockExclusive(v3);
  if ( !v7 )
    RtlWakeAddressAll((char *)v3 + 488);
}
