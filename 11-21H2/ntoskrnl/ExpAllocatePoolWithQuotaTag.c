/*
 * XREFs of ExpAllocatePoolWithQuotaTag @ 0x140A6E9A4
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140349670 (ExAllocatePoolWithTagFromNode.c)
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     ExpStampPoolWithQuotaProcess @ 0x140367B44 (ExpStampPoolWithQuotaProcess.c)
 *     PsChargeProcessPoolQuota @ 0x140367C40 (PsChargeProcessPoolQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x140461DE4 (ExpHpIsSpecialPoolHeap.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *__fastcall ExpAllocatePoolWithQuotaTag(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4)
{
  POOL_TYPE v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r14d
  ULONG v7; // esi
  struct _KPROCESS *Process; // rbp
  ULONG_PTR PoolWithTagFromNode; // rax
  void *v10; // rbx
  unsigned __int64 HeapFromVA; // rax
  ULONG_PTR Amount[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v14) = 0;
  Amount[0] = 0LL;
  v4 = a1 & 0xFFFFFFF7;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 & 8;
  v7 = a3;
  if ( (a1 & 8) == 0 )
    v4 = a1;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    v4 += 8;
  PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(v4, a2, a3, a4);
  v10 = (void *)PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    if ( (v4 & 8) == 0 )
      return v10;
    if ( ExpSpecialAllocations )
    {
      HeapFromVA = ExGetHeapFromVA(PoolWithTagFromNode);
      if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
        return v10;
    }
    ExpStampPoolWithQuotaProcess((ULONG_PTR)v10, (unsigned int)v4, 0LL, 1, Amount, &v14);
    if ( PsChargeProcessPoolQuota(Process, (POOL_TYPE)(v4 & 1), Amount[0]) >= 0 )
    {
      ExpStampPoolWithQuotaProcess((ULONG_PTR)v10, (unsigned int)v4, (__int64)Process, 0, Amount, &v14);
      ObfReferenceObjectWithTag(Process, v7);
      return v10;
    }
    ExFreePoolWithTag(v10, v7);
    v10 = 0LL;
  }
  if ( !v6 )
    RtlRaiseStatus(-1073741670);
  return v10;
}
