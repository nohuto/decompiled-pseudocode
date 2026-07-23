/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x1406AAE50
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x14092FF60 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x1409300F0 (FsRtlNotifyFullChangeDirectory.c)
 * Callees:
 *     sub_140233104 @ 0x140233104 (sub_140233104.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1406ABC90 @ 0x1406ABC90 (sub_1406ABC90.c)
 *     sub_1406AC108 @ 0x1406AC108 (sub_1406AC108.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_14092FEAC @ 0x14092FEAC (sub_14092FEAC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __stdcall FsRtlNotifyFilterChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PFILTER_REPORT_CHANGE FilterCallback)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v16; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v18; // rax
  ULONG_PTR Pool2; // rdx
  __int16 v20; // ax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // r8
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int16 v25; // cx

  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  LOBYTE(v16) = 1;
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    sub_14092FEAC(NotifyList, FsContext);
    goto LABEL_36;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_22;
  v18 = sub_1406AC108(NotifyList, FsContext);
  Pool2 = v18;
  if ( v18 )
  {
    v20 = *(_WORD *)(v18 + 72);
    if ( (v20 & 4) == 0 )
    {
      if ( (v20 & 0x20) == 0 )
      {
        if ( ((unsigned __int8)v20 & (unsigned __int8)(v16 + 1)) != 0 && (v20 & 8) == 0 )
        {
          *(_WORD *)(Pool2 + 72) = v20 & 0xFFFD;
          NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
          NotifyIrp->IoStatus.Status = 268;
          goto LABEL_23;
        }
        if ( *(_DWORD *)(Pool2 + 104) && (v20 & 8) == 0 )
        {
          *(_QWORD *)(Pool2 + 104) = 0LL;
          sub_1406ABC90(NotifyIrp, 0);
          goto LABEL_36;
        }
        goto LABEL_11;
      }
      CurrentStackLocation->Control |= v16;
      NotifyIrp->IoStatus.Status = -1073741738;
LABEL_23:
      IofCompleteRequest(NotifyIrp, v16);
      goto LABEL_36;
    }
LABEL_22:
    CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = 267;
    goto LABEL_23;
  }
  Pool2 = ExAllocatePool2(288LL, 152LL, 1316115270LL);
  *(_QWORD *)Pool2 = NotifySync;
  *(_QWORD *)(Pool2 + 8) = FsContext;
  *(_QWORD *)(Pool2 + 128) = CurrentStackLocation->FileObject->FsContext;
  *(_QWORD *)(Pool2 + 16) = TraverseCallback;
  *(_QWORD *)(Pool2 + 24) = SubjectContext;
  SubjectContext = 0LL;
  *(_QWORD *)(Pool2 + 64) = FilterCallback;
  *(_QWORD *)(Pool2 + 136) = FullDirectoryName;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  v16 = 1;
  if ( WatchTree )
    *(_WORD *)(Pool2 + 72) |= 1u;
  if ( FullDirectoryName )
  {
    v25 = 2;
    if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
    {
      *(_BYTE *)(Pool2 + 144) = 1;
      v25 = 1;
    }
    else
    {
      *(_BYTE *)(Pool2 + 144) = 2;
    }
    if ( FullDirectoryName->Length == v25 )
      *(_WORD *)(Pool2 + 72) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(Pool2 + 144) = 1;
  }
  *(_DWORD *)(Pool2 + 76) = CompletionFilter;
  if ( !IgnoreBuffer )
    *(_DWORD *)(Pool2 + 96) = CurrentStackLocation->Parameters.Read.Length;
  *(_QWORD *)(Pool2 + 120) = *((_QWORD *)NotifyIrp->Tail.Overlay.Thread + 68);
  v23 = (struct _LIST_ENTRY *)(Pool2 + 32);
  Blink = NotifyList->Blink;
  if ( Blink->Flink != NotifyList )
LABEL_35:
    __fastfail(3u);
  v23->Flink = NotifyList;
  *(_QWORD *)(Pool2 + 40) = Blink;
  Blink->Flink = v23;
  NotifyList->Blink = v23;
  *(_DWORD *)(Pool2 + 112) = 1;
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
LABEL_11:
  NotifyIrp->IoStatus.Information = Pool2;
  CurrentStackLocation->Control |= v16;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
  v22 = *(struct _LIST_ENTRY **)(Pool2 + 56);
  if ( v22->Flink != (struct _LIST_ENTRY *)(Pool2 + 48) )
    goto LABEL_35;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(Pool2 + 48);
  NotifyIrp->Tail.Overlay.ListEntry.Blink = v22;
  v22->Flink = &p_ListEntry->ListEntry;
  *(_QWORD *)(Pool2 + 56) = p_ListEntry;
  _InterlockedAdd((volatile signed __int32 *)(Pool2 + 112), v16);
  sub_140233104((__int64)NotifyIrp, 0LL);
LABEL_36:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  if ( SubjectContext )
  {
    if ( FullDirectoryName )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
}
