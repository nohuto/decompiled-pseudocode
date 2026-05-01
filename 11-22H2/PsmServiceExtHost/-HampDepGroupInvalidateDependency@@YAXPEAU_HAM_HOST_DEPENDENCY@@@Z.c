/*
 * XREFs of ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007CD64
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180038790 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800804F0 (-HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BBBC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BFD0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003DBB8 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupInvalidateDependency(struct _HAM_HOST_DEPENDENCY *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 2u, 0);
  RtlAcquireSRWLockShared(v2 + 48);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 96)) <= 1 )
    __fastfail(0xEu);
  HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v4);
  *((_DWORD *)a1 + 9) |= 1u;
  HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v4);
  v5 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkReleased(HampLockTrackerId, v6, 2u);
  RtlReleaseSRWLockShared(v5 + 48);
  HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v4);
  HampDepGroupDereference((volatile signed __int64 *)v4);
}
