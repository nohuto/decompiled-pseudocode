/*
 * XREFs of ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180075750
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000CAF0 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18007BCC0 (-HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075CF8 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupInvalidateDependency(struct _HAM_HOST_DEPENDENCY *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx

  v2 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 2u, 0);
  RtlAcquireSRWLockShared(v2 + 48);
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 96)) <= 1 )
    __fastfail(0xEu);
  HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v5, v4);
  *((_DWORD *)a1 + 9) |= 1u;
  HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v5);
  v6 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkReleased(HampLockTrackerId, v7, 2u);
  RtlReleaseSRWLockShared(v6 + 48);
  HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v5);
  HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v5);
}
