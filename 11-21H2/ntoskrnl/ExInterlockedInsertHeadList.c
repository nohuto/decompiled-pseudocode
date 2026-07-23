/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1402430F0
 * Callers:
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A88B74 @ 0x140A88B74 (sub_140A88B74.c)
 *     sub_140A89390 @ 0x140A89390 (sub_140A89390.c)
 *     sub_140A8942C @ 0x140A8942C (sub_140A8942C.c)
 * Callees:
 *     sub_140243164 @ 0x140243164 (sub_140243164.c)
 *     sub_14024319C @ 0x14024319C (sub_14024319C.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v6 = sub_14024319C(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  LOBYTE(v7) = v6;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  sub_140243164(Lock, v7);
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
