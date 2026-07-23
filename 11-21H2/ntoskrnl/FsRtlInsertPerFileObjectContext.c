/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x1402A3510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A3610 @ 0x1402A3610 (sub_1402A3610.c)
 *     sub_1402A3984 @ 0x1402A3984 (sub_1402A3984.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  NTSTATUS result; // eax
  _OWORD *Pool2; // rax
  __int64 v6; // r8
  void *v7; // rbx
  _OWORD *v8; // rdx
  _QWORD *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !FileObject )
    return -1073741811;
  result = sub_1402A3610(FileObject, &BugCheckParameter2, 1);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2 )
      goto LABEL_6;
    Pool2 = (_OWORD *)ExAllocatePool2(66LL, 32LL, 1480806214LL);
    BugCheckParameter2 = (ULONG_PTR)Pool2;
    v7 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    LOBYTE(v6) = 1;
    *Pool2 = 0LL;
    *(_QWORD *)Pool2 = 0LL;
    v8 = Pool2;
    v9 = Pool2 + 1;
    v9[1] = v9;
    *v9 = v9;
    if ( (int)sub_1402A3984(FileObject, v8, v6) >= 0
      || (ExFreePoolWithTag(v7, 0), sub_1402A3610(FileObject, &BugCheckParameter2, 0LL), BugCheckParameter2) )
    {
LABEL_6:
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v11 = BugCheckParameter2;
      ExAcquireAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
      v12 = (struct _LIST_ENTRY *)(v11 + 16);
      v13 = *(struct _LIST_ENTRY **)(v11 + 16);
      if ( v13->Blink != (struct _LIST_ENTRY *)(v11 + 16) )
        __fastfail(3u);
      Ptr->Links.Flink = v13;
      Ptr->Links.Blink = v12;
      v13->Blink = &Ptr->Links;
      v12->Flink = &Ptr->Links;
      ExReleaseAutoExpandPushLockExclusive(v11, 0LL);
      sub_1402F9540(KeGetCurrentThread());
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
