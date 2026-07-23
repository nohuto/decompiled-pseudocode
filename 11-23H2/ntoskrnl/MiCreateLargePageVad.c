/*
 * XREFs of MiCreateLargePageVad @ 0x140A49898
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402E34FC (MiInsertVadEvent.c)
 *     MiChargeFullProcessCommitment @ 0x1406F7A10 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140A43B54 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateLargePageVad(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  int v4; // r12d
  __int64 Pool; // rbx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  int v14; // r9d
  int v15; // ebp
  unsigned int v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v4 = 1;
  Pool = 1LL;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
    Pool = -(__int64)(a3 != 0LL) & 1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Pool )
  {
    Pool = (__int64)MiAllocatePool(64, 0x48uLL, 0x624C6D4Du);
    if ( !Pool )
      return 3221225626LL;
    a4 = v16;
  }
  v12 = *(unsigned int *)(a2 + 52);
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v13 = v12 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( !v13 )
  {
    if ( !a3 )
      goto LABEL_25;
LABEL_24:
    ObfReferenceObjectWithTag(a3, 0x746C6644u);
    *(_QWORD *)(Pool + 24) = a3;
    goto LABEL_25;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v12 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31)) )
  {
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return 3221225773LL;
  }
  if ( a3 )
    goto LABEL_24;
  if ( v14 || Process != (_KPROCESS *)a1 )
    v4 = 0;
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v15 = MiChargeFullProcessCommitment(a1, v13);
  if ( v4 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v15 < 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -(__int64)v13);
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return (unsigned int)v15;
  }
LABEL_25:
  if ( Pool )
  {
    *(_DWORD *)(Pool + 64) = 16;
    MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 0LL, a4);
  }
  return 0LL;
}
