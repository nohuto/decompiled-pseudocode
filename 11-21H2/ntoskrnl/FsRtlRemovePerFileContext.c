/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1405417D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbp
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rbx
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v5 + 16);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireAutoExpandPushLockExclusive(v5, 0LL);
  Flink = *v7;
  v10 = 0LL;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
LABEL_6:
    v10 = Flink;
    if ( Flink )
    {
      v11 = Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v11->Blink != v10
        || (Blink = v10->Links.Blink, (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v10) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v11;
      v11->Blink = Blink;
    }
  }
  ExReleaseAutoExpandPushLockExclusive(v6, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v10;
}
