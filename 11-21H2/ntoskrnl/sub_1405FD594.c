/*
 * XREFs of sub_1405FD594 @ 0x1405FD594
 * Callers:
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405FD594(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        PVOID BaseAddress)
{
  struct _MDL *v9; // rsi
  char *v10; // r14
  int v11; // r12d
  __int64 v12; // rbx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // r15
  unsigned int v14; // ebx
  unsigned __int64 v15; // rbx
  struct _MDL *v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  PHYSICAL_ADDRESS v19; // rax
  int v21; // [rsp+38h] [rbp-60h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = a2;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              a2 + 104LL,
                                                              0x50626D73u);
  if ( !PoolWithTag )
    goto LABEL_2;
  v21 = a1;
  v15 = ((unsigned __int64)(a1 & 0xFFF) + v12 + 4095) >> 12;
  v16 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v15 + 48, 0x50426D73u);
  v9 = v16;
  if ( !v16 )
    goto LABEL_2;
  v16->Next = 0LL;
  v16->Size = 8 * (v15 + 6);
  v16->MdlFlags = 0;
  v16->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v16->ByteOffset = a1 & 0xFFF;
  v16->ByteCount = a2;
  sub_14029C5B0(v16, 0, 0);
  v11 = 1;
  v10 = (char *)((v9->MdlFlags & 5) != 0
               ? v9->MappedSystemVa
               : MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u));
  if ( !v10 )
    goto LABEL_2;
  v17 = ((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag->State = 0;
  *(_QWORD *)(v17 + 32) = 0LL;
  *(_QWORD *)(v17 + 40) = 0LL;
  *(_QWORD *)(v17 + 48) = 0LL;
  *(_QWORD *)(v17 + 56) = 0LL;
  *(_DWORD *)v17 = 65539;
  *(_DWORD *)(v17 + 4) = a3;
  *(_DWORD *)(v17 + 8) = a4;
  *(_DWORD *)(v17 + 12) = a2;
  *(_DWORD *)(v17 + 16) = a5;
  v18 = (unsigned int)(a7 - v21);
  *(_DWORD *)(v17 + 20) = v18;
  *(_QWORD *)(v17 + 24) = a6;
  *(_QWORD *)(v17 + 32) = MmGetPhysicalAddress(&v10[v18]).QuadPart / 4096;
  v19.QuadPart = (((a7 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) == 0x1000
               ? -1LL
               : MmGetPhysicalAddress(&v10[a3 - 1 + *(unsigned int *)(v17 + 20)]).QuadPart / 4096;
  *(PHYSICAL_ADDRESS *)(v17 + 40) = v19;
  *(_QWORD *)(v17 + 48) = MmGetPhysicalAddress(BaseAddress).QuadPart / 4096;
  memmove((void *)(v17 + 56), v10, a2);
  if ( KeRegisterBugCheckReasonCallback(
         PoolWithTag,
         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_1405FC7A0,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"nt!store memory compression") )
  {
    PoolWithTag = 0LL;
    v14 = 0;
  }
  else
  {
LABEL_2:
    v14 = -1073741670;
  }
  if ( v10 )
    MmUnmapLockedPages(v10, v9);
  if ( v11 )
    MmUnlockPages(v9);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v14;
}
