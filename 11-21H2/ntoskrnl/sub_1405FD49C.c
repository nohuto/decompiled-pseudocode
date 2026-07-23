/*
 * XREFs of sub_1405FD49C @ 0x1405FD49C
 * Callers:
 *     sub_1403813C0 @ 0x1403813C0 (sub_1403813C0.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405FD49C(void *Src, __int64 a2, unsigned int a3, unsigned int a4, LONGLONG *a5)
{
  __int64 v5; // rbp
  __int64 v7; // r15
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  unsigned int v9; // ebx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v10; // rdi
  _QWORD *v11; // rcx

  v5 = a4;
  v7 = a3;
  *a5 = MmGetPhysicalAddress(Src).QuadPart / 4096;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              0x1060uLL,
                                                              0x50626D73u);
  v9 = 0;
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->State = 0;
    v11 = (_QWORD *)(((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    *v11 = 1LL;
    v11[6] = 0LL;
    v11[5] = *a5;
    v11[1] = Src;
    v11[2] = 4096LL;
    v11[4] = v5;
    v11[3] = v7;
    memmove(v11 + 6, Src, 0x1000uLL);
    if ( !KeRegisterBugCheckReasonCallback(
            v10,
            (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_1405FC760,
            KbCallbackSecondaryDumpData,
            (PUCHAR)"nt!store memory compression") )
    {
      v9 = -1073741670;
      ExFreePoolWithTag(v10, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
