/*
 * XREFs of RaidProcessDeferredItemsWorker @ 0x1C0013CDC
 * Callers:
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaidDeferredQueueDpcRoutine @ 0x1C0014970 (RaidDeferredQueueDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidProcessDeferredItemsWorker(__int64 a1, __int64 a2, char a3)
{
  PSLIST_ENTRY v6; // rax
  __int64 v7; // r8
  _SLIST_ENTRY *v8; // rbx
  struct _SLIST_ENTRY *Next; // r9
  _SLIST_ENTRY *v10; // rdx

  v6 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 96));
  v8 = 0LL;
  if ( v6 )
  {
    do
    {
      Next = v6->Next;
      v6->Next = v8;
      v8 = v6;
      v6 = Next;
    }
    while ( Next );
  }
  while ( 1 )
  {
    v10 = v8;
    if ( !v8 )
      break;
    LOBYTE(v7) = a3;
    v8 = v8->Next;
    (*(void (__fastcall **)(__int64, _SLIST_ENTRY *, __int64))(a1 + 112))(a2, v10, v7);
  }
  return 0LL;
}
