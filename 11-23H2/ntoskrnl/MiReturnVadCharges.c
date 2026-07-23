/*
 * XREFs of MiReturnVadCharges @ 0x140A3C754
 * Callers:
 *     MiInsertVadCharges @ 0x1406FAAC0 (MiInsertVadCharges.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A47D48 (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402085B0 (PsReturnProcessPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B5C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiReturnResident @ 0x1402930A0 (MiReturnResident.c)
 */

struct _KTHREAD *__fastcall MiReturnVadCharges(_QWORD *a1)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // rdx
  struct _KPROCESS *Process; // rdi
  __int64 v5; // rdx
  __int64 ProcessPartition; // rax
  unsigned __int64 v7; // r8

  result = KeGetCurrentThread();
  v3 = a1[2];
  Process = result->ApcState.Process;
  if ( v3 )
    result = (struct _KTHREAD *)PsReturnProcessNonPagedPoolQuota(result->ApcState.Process, v3);
  v5 = a1[1];
  if ( v5 )
    result = (struct _KTHREAD *)PsReturnProcessPagedPoolQuota(Process, v5);
  if ( *a1 )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    return (struct _KTHREAD *)MiReturnResident(ProcessPartition, v7);
  }
  return result;
}
