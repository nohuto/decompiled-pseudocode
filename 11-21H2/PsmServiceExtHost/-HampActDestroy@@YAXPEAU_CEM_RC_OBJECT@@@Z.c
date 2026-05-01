/*
 * XREFs of ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18000E200
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampActDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  bool v5; // zf
  __int64 *Value; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi

  v2 = (__int64 *)*((_QWORD *)a1 + 11);
  if ( v2 )
  {
    v3 = *v2;
    v2[1] = 0LL;
    (*(void (**)(void))(v3 + 16))();
  }
  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    CempLockTrackerMarkAcquired(HampLockTrackerId);
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800DD4E8 = GetCurrentThreadId();
    v5 = (*(_QWORD *)(v4 + 600))-- == 1LL;
    if ( v5 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
    dword_1800DD4E8 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      Value = (__int64 *)TlsGetValue(HampLockTrackerId);
      v7 = *Value;
      if ( (*Value & 1) == 0 )
        __int2c();
      v5 = Value[1]-- == 1;
      if ( v5 )
        *Value = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  if ( *((_QWORD *)a1 + 3) )
    __int2c();
  if ( *((_QWORD *)a1 + 2) != -1LL )
  {
    v8 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v8 + 16);
    RtlRbRemoveNode(v8, a1);
    *(_QWORD *)(v8 + 40) = *(_QWORD *)(v8 + 40) & 1LL | (2LL * (*(_QWORD *)(v8 + 40) >> 1) - 2);
    RtlReleaseSRWLockExclusive(v8 + 16);
    RtlWakeAllConditionVariable(v8 + 32);
  }
  *((_QWORD *)a1 + 4) |= 0xFFFFFFFFFFFFFFFCuLL;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
