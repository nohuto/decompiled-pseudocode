/*
 * XREFs of ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C003B7B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1C00370A4 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C0038820 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C003B70C (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C003DF40 (VidSchSignalSyncObjectsFromCpu.c)
 */

void __fastcall VidSchPeriodicMonitoredFenceTimerCallback(struct _EX_TIMER *a1, struct _VIDSCH_SYNC_OBJECT **a2)
{
  struct _VIDSCH_SYNC_OBJECT *v2; // r8
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)(*((_QWORD *)*a2 + 1) + 8LL * *((unsigned int *)a2 + 2) + 3200);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)v2 + 1) + 1728LL), &LockHandle);
  v5 = *(_QWORD *)(v4 + 44120);
  v6 = *(_QWORD *)(v4 + 44104);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = 0;
  v17 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)a2, v5, v6, &v16);
  if ( (unsigned __int64)a2[7] < v17 )
  {
    if ( (int)VidSchSignalSyncObjectsFromCpu(1u, a2, 0, &v17) >= 0 )
      a2[7] = (struct _VIDSCH_SYNC_OBJECT *)v17;
    v10 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(v5, (__int64)a2[6], (__int64)a2[2], v16);
    if ( v10 > 0 )
    {
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventPerformanceWarning, v11, 25);
      v10 = -(__int64)a2[6];
    }
    ExSetTimer(a2[5], v10, 0LL, 0LL);
    if ( (byte_1C006E941 & 2) != 0 )
      McTemplateK0pqqiix_EtwWriteTransfer(v13, v12, v14, *a2, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 6), v5, v10, v17);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventPerformanceWarning, v8, 25);
    }
    ExSetTimer(a2[5], -(__int64)a2[6], 0LL, 0LL);
  }
}
