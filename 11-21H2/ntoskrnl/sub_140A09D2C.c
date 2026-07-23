/*
 * XREFs of sub_140A09D2C @ 0x140A09D2C
 * Callers:
 *     sub_1408642EC @ 0x1408642EC (sub_1408642EC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140A09E34 @ 0x140A09E34 (sub_140A09E34.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140A09D2C()
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Flink; // rax
  bool v2; // di
  unsigned int v3; // esi
  struct _LIST_ENTRY *v4; // rax

  Blink = 0LL;
  ExAcquireFastMutex((PFAST_MUTEX)&stru_140C0E9A8.AttachedDevice);
  if ( (struct _LIST_ENTRY **)stru_140C0E9A8.Queue.ListEntry.Blink != &stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink )
  {
    Blink = stru_140C0E9A8.Queue.ListEntry.Blink;
    Flink = stru_140C0E9A8.Queue.ListEntry.Blink->Flink;
    if ( (struct _LIST_ENTRY **)stru_140C0E9A8.Queue.ListEntry.Blink->Blink != &stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink
      || Flink->Blink != stru_140C0E9A8.Queue.ListEntry.Blink )
    {
LABEL_18:
      __fastfail(3u);
    }
    stru_140C0E9A8.Queue.ListEntry.Blink = stru_140C0E9A8.Queue.ListEntry.Blink->Flink;
    Flink->Blink = (struct _LIST_ENTRY *)&stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140C0E9A8.AttachedDevice);
  v2 = 0;
  v3 = 0;
  while ( Blink )
  {
    if ( !v2 )
      v3 = sub_140A09E34(Blink);
    ExFreePoolWithTag(Blink, 0x61656857u);
    if ( !v2 )
      v2 = v3 != 0;
    ExAcquireFastMutex((PFAST_MUTEX)&stru_140C0E9A8.AttachedDevice);
    Blink = stru_140C0E9A8.Queue.ListEntry.Blink;
    if ( (struct _LIST_ENTRY **)stru_140C0E9A8.Queue.ListEntry.Blink == &stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink )
    {
      Blink = 0LL;
    }
    else
    {
      if ( (struct _LIST_ENTRY **)stru_140C0E9A8.Queue.ListEntry.Blink->Blink != &stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink )
        goto LABEL_18;
      v4 = stru_140C0E9A8.Queue.ListEntry.Blink->Flink;
      if ( stru_140C0E9A8.Queue.ListEntry.Blink->Flink->Blink != stru_140C0E9A8.Queue.ListEntry.Blink )
        goto LABEL_18;
      stru_140C0E9A8.Queue.ListEntry.Blink = stru_140C0E9A8.Queue.ListEntry.Blink->Flink;
      v4->Blink = (struct _LIST_ENTRY *)&stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140C0E9A8.AttachedDevice);
  }
  return v3;
}
