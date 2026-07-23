/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x1402A2FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A3610 @ 0x1402A3610 (sub_1402A3610.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v6; // rbx
  ULONG_PTR v7; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *i; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !FileObject )
    return 0LL;
  sub_1402A3610(FileObject, &BugCheckParameter2, 0LL);
  if ( !BugCheckParameter2 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v7 = BugCheckParameter2;
  ExAcquireAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  if ( InstanceId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 16);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 16);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_8:
        v6 = i;
        goto LABEL_9;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 16);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 16);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_8;
    }
  }
  else if ( *(_QWORD *)(v7 + 16) != v7 + 16 )
  {
    v6 = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 16);
LABEL_9:
    if ( v6 )
    {
      Flink = v6->Links.Flink;
      if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v6->Links.Flink->Blink != v6
        || (Blink = v6->Links.Blink, (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v6) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  ExReleaseAutoExpandPushLockExclusive(v7, 0LL);
  sub_1402F9540(KeGetCurrentThread());
  return v6;
}
