/*
 * XREFs of CrmStateMonitorLogDataGet @ 0x18002EEE0
 * Callers:
 *     CrmStateMonitorStateSet @ 0x18002E9A4 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x18002EA80 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18002EC00 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002ED70 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x18003B7A0 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     CrmStateMonitorSebCallback @ 0x18003B8F0 (CrmStateMonitorSebCallback.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002F078 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 */

const void *__fastcall CrmStateMonitorLogDataGet(const void **a1, __int64 a2, const void *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  const void *v8; // rdx
  BOOL v9; // edx
  const void *result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  v7 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
  memcpy_0((void *)(v6 + 16), a1[5], v7);
  if ( a3 )
    v8 = a3;
  else
    v8 = a1[5];
  memcpy_0((void *)a2, v8, v7);
  v9 = 1;
  if ( *(_DWORD *)a1 == 5 && a3 )
    v9 = *(_DWORD *)a2 == 20 * (*(_DWORD *)a2 / 0x14u);
  *(_QWORD *)(a2 + 40) = a1[6];
  result = (const void *)MEMORY[0x7FFE0008];
  *(_QWORD *)(a2 + 32) = MEMORY[0x7FFE0008];
  if ( v9 )
    a1[6] = result;
  else
    *(_DWORD *)(a2 + 48) = 1;
  return result;
}
