/*
 * XREFs of FsRtlInsertPerFileContext @ 0x1402563D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  struct _LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *v6; // rax
  signed __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Flink; // rcx

  if ( !PerFileContextPointer )
    return -1073741808;
  v4 = (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  if ( !v4 )
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(66LL, 40LL, 1667650374LL);
    v4 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    Pool2->Blink = 0LL;
    Pool2->Flink = 0LL;
    v6 = Pool2 + 1;
    v4[2].Flink = 0LL;
    v6->Blink = v6;
    v6->Flink = v6;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, (signed __int64)v4, 0LL);
    if ( v7 )
    {
      ExFreePoolWithTag(v4, 0x63665346u);
      v4 = (struct _LIST_ENTRY *)v7;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)v4, 0LL);
  v9 = v4 + 1;
  Flink = v4[1].Flink;
  if ( Flink->Blink != &v4[1] )
    __fastfail(3u);
  Ptr->Links.Flink = Flink;
  Ptr->Links.Blink = v9;
  Flink->Blink = &Ptr->Links;
  v9->Flink = &Ptr->Links;
  ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)v4, 0LL);
  sub_1402F9540(KeGetCurrentThread());
  return 0;
}
