/*
 * XREFs of CrmStateMonitorLogDataGet @ 0x18000A4E0
 * Callers:
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180008FB0 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180009100 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x180009220 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x180009C70 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x180009DF0 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x18000A100 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmLogStateMonitorRundown @ 0x18003E948 (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18003F540 (CrmStateMonitorPostResumeUsageCallback.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 */

const void *__fastcall CrmStateMonitorLogDataGet(const void **a1, __int64 a2, const void *a3)
{
  unsigned int v6; // esi
  const void *v7; // rdx
  BOOL v8; // edx
  const void *result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 96) = 0LL;
  v6 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
  memcpy_0((void *)(a2 + 40), a1[5], v6);
  if ( a3 )
    v7 = a3;
  else
    v7 = a1[5];
  memcpy_0((void *)a2, v7, v6);
  v8 = 1;
  if ( *(_DWORD *)a1 == 5 && a3 )
    v8 = *(_DWORD *)a2 == 20 * (*(_DWORD *)a2 / 0x14u);
  *(_QWORD *)(a2 + 88) = a1[6];
  result = (const void *)MEMORY[0x7FFE0008];
  *(_QWORD *)(a2 + 80) = MEMORY[0x7FFE0008];
  if ( v8 )
    a1[6] = result;
  else
    *(_DWORD *)(a2 + 96) = 1;
  return result;
}
