/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140233104 @ 0x140233104 (sub_140233104.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1406ABC90 @ 0x1406ABC90 (sub_1406ABC90.c)
 *     sub_1406AC108 @ 0x1406AC108 (sub_1406AC108.c)
 *     FsRtlNotifyInitializeSync @ 0x1406AC3A0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406E5920 (FsRtlNotifyUninitializeSync.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_14092FF10 @ 0x14092FF10 (sub_14092FF10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v13; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int64 v15; // rax
  unsigned int v16; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v18; // rax
  __int64 Pool2; // rdx
  __int16 v20; // cx
  unsigned int v21; // r8d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  PSECURITY_SUBJECT_CONTEXT v26; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+78h] [rbp+10h] BYREF

  v13 = Irp;
  if ( (_QWORD *)*a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    NotifySync = 0LL;
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v15 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v15 = *a1;
  }
  LOBYTE(v16) = 1;
  ++*(_DWORD *)(v15 + 64);
  if ( !v13 )
  {
    sub_14092FF10(a2);
    goto LABEL_30;
  }
  CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
  v13->IoStatus.Status = 0;
  v13->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_27;
  v18 = sub_1406AC108(a2, a3);
  Pool2 = v18;
  if ( v18 )
  {
    v20 = *(_WORD *)(v18 + 72);
    if ( (v20 & 4) == 0 )
    {
      if ( (v20 & 0x20) != 0 )
      {
        CurrentStackLocation->Control |= v16;
        v13->IoStatus.Status = -1073741738;
      }
      else
      {
        if ( (v20 & 0xA) != 2 )
        {
          v21 = *(_DWORD *)(v18 + 104);
          if ( v21 && (v20 & 8) == 0 )
          {
            *(_DWORD *)(v18 + 104) = 0;
            *(_DWORD *)(v18 + 108) = 0;
            sub_1406ABC90(v13, v18, v21, 0, 0);
            goto LABEL_30;
          }
          goto LABEL_12;
        }
        *(_WORD *)(v18 + 72) = v20 & 0xFFFD;
        v13->Tail.Overlay.CurrentStackLocation->Control |= v16;
        v13->IoStatus.Status = 268;
      }
LABEL_25:
      IofCompleteRequest(v13, v16);
      goto LABEL_30;
    }
LABEL_27:
    CurrentStackLocation->Control |= v16;
    v13->IoStatus.Status = 267;
    goto LABEL_25;
  }
  Pool2 = ExAllocatePool2(288LL, 128LL, 1316115270LL);
  *(_WORD *)(Pool2 + 72) |= 0x40u;
  *(_QWORD *)Pool2 = *a1;
  *(_QWORD *)(Pool2 + 8) = a3;
  *(_QWORD *)(Pool2 + 16) = a7;
  *(_QWORD *)(Pool2 + 24) = SubjectContext;
  SubjectContext = 0LL;
  *(_QWORD *)(Pool2 + 64) = a9;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  v16 = 1;
  if ( (a4 & 1) != 0 )
    *(_WORD *)(Pool2 + 72) |= 1u;
  if ( (a4 & 4) != 0 )
    *(_WORD *)(Pool2 + 72) |= 0x80u;
  *(_DWORD *)(Pool2 + 76) = a5;
  if ( (a4 & 2) == 0 )
    *(_DWORD *)(Pool2 + 96) = CurrentStackLocation->Parameters.Read.Length;
  *(_QWORD *)(Pool2 + 120) = *((_QWORD *)v13->Tail.Overlay.Thread + 68);
  v24 = (_QWORD *)(Pool2 + 32);
  v25 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v25 != a2 )
LABEL_29:
    __fastfail(3u);
  *v24 = a2;
  *(_QWORD *)(Pool2 + 40) = v25;
  *v25 = v24;
  a2[1] = v24;
  *(_DWORD *)(Pool2 + 112) = 1;
  CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
LABEL_12:
  v13->IoStatus.Information = Pool2;
  CurrentStackLocation->Control |= v16;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v13->Tail.Overlay.ListEntry;
  v23 = *(struct _LIST_ENTRY **)(Pool2 + 56);
  if ( v23->Flink != (struct _LIST_ENTRY *)(Pool2 + 48) )
    goto LABEL_29;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(Pool2 + 48);
  v13->Tail.Overlay.ListEntry.Blink = v23;
  v23->Flink = &p_ListEntry->ListEntry;
  *(_QWORD *)(Pool2 + 56) = p_ListEntry;
  _InterlockedAdd((volatile signed __int32 *)(Pool2 + 112), v16);
  sub_140233104((__int64)v13, 0LL);
LABEL_30:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v26 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v26, 0);
  }
}
