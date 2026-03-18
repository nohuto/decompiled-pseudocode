/*
 * XREFs of MiCreateRotateView @ 0x140A31210
 * Callers:
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x140289B40 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiGetInPageSupportBlock @ 0x1402E12E4 (MiGetInPageSupportBlock.c)
 *     MiInsertVadEvent @ 0x1402E326C (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  struct _SLIST_ENTRY *Pool; // rbx
  PSLIST_ENTRY v4; // rdi
  PSLIST_ENTRY v5; // rcx
  __int64 v6; // r9

  Pool = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x48uLL, 0x77776D4Du);
  if ( !Pool )
    return 0LL;
  v4 = MiGetInPageSupportBlock(0, 0LL);
  if ( !v4 )
  {
    v5 = Pool;
LABEL_5:
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  if ( (int)PsChargeProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x208uLL) < 0 )
  {
    ExFreePoolWithTag(Pool, 0);
    v5 = v4;
    goto LABEL_5;
  }
  LODWORD(Pool[4].Next) = 8;
  *((_QWORD *)&Pool->Next + 1) = v4;
  MiInsertVadEvent(a1, (unsigned __int64 *)Pool, 0LL, v6);
  return 1LL;
}
