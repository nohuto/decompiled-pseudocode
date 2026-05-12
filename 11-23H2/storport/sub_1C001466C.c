/*
 * XREFs of sub_1C001466C @ 0x1C001466C
 * Callers:
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C0015300 @ 0x1C0015300 (sub_1C0015300.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C001466C(__int64 a1, __int64 a2, char a3)
{
  PSLIST_ENTRY v6; // rax
  __int64 v7; // r8
  struct _SLIST_ENTRY *v8; // rbx
  struct _SLIST_ENTRY *Next; // r9
  struct _SLIST_ENTRY *v10; // rdx

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
    (*(void (__fastcall **)(__int64, struct _SLIST_ENTRY *, __int64))(a1 + 112))(a2, v10, v7);
  }
  return 0LL;
}
