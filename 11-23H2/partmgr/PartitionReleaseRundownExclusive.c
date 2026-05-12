/*
 * XREFs of PartitionReleaseRundownExclusive @ 0x1C000A258
 * Callers:
 *     ?PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@@Z @ 0x1C0003380 (-PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORM.c)
 *     ?PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003690 (-PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall PartitionReleaseRundownExclusive(__int64 a1)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx
  __int64 ***v3; // rdx
  __int64 **v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 i; // rdi
  __int64 *v8; // rdx
  __int64 **result; // rax
  __int64 *v10; // rax
  __int64 *v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 ***v12; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 400);
  v12 = (__int64 ***)&v11;
  v11 = (__int64 *)&v11;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ExReInitializeRundownProtectionCacheAware(v2);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 448), &LockHandle);
  v3 = v12;
  v4 = (__int64 **)(a1 + 432);
  if ( (__int64 **)v11[1] != &v11
    || *v12 != &v11
    || (__int64 **)(*v4)[1] != v4
    || **(__int64 ****)(a1 + 440) != v4
    || (*v12 = v4,
        v12 = *(__int64 ****)(a1 + 440),
        *v12 = &v11,
        *(_QWORD *)(a1 + 440) = v3,
        v5 = *v4,
        (__int64 **)(*v4)[1] != v4)
    || *v3 != v4 )
  {
LABEL_2:
    __fastfail(3u);
  }
  *v3 = (__int64 **)v5;
  v5[1] = (__int64)v3;
  *(_QWORD *)(a1 + 440) = a1 + 432;
  *v4 = (__int64 *)v4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeSetEvent((PRKEVENT)(a1 + 408), 0, 0);
  KeReleaseMutex((PRKMUTEX)(a1 + 344), 0);
  v6 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)(v6 + 8); ; (*(void (__fastcall **)(__int64))(i + 8LL * *(unsigned __int8 *)v8[2] + 112))(v6) )
  {
    v8 = v11;
    result = &v11;
    if ( v11 == (__int64 *)&v11 )
      break;
    if ( (__int64 **)v11[1] != &v11 )
      goto LABEL_2;
    v10 = (__int64 *)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 )
      goto LABEL_2;
    v11 = (__int64 *)*v11;
    v10[1] = (__int64)&v11;
  }
  return result;
}
