/*
 * XREFs of sub_1C001250C @ 0x1C001250C
 * Callers:
 *     sub_1C001209C @ 0x1C001209C (sub_1C001209C.c)
 * Callees:
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C00129D8 @ 0x1C00129D8 (sub_1C00129D8.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C001250C(__int64 Context, PIRP Irp)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(Context + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 51LL, &unk_1C008A080, Context, Irp);
  }
  if ( *(_DWORD *)(Context + 492) == 4
    && Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
  {
    if ( (*(_BYTE *)(v2 + 108) & 8) == 0
      && *(_QWORD *)(v2 + 4896)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3512), 1, 0) )
    {
      sub_1C0008BF0(v2, 0LL, 0LL);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
    if ( *(int *)(v2 + 308) > 1 )
    {
      LOBYTE(v5) = 1;
      *(_BYTE *)(Context + 1961) = 1;
      *(_QWORD *)(Context + 1968) = Irp;
      sub_1C00071D4(Context, (__int64)Irp, v5);
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 4880), (PSLIST_ENTRY)(Context + 1984));
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return sub_1C00129D8((PVOID)Context, Irp);
}
