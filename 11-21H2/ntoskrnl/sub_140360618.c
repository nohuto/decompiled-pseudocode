/*
 * XREFs of sub_140360618 @ 0x140360618
 * Callers:
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_140360158 @ 0x140360158 (sub_140360158.c)
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140360618(PSLIST_ENTRY ListEntry, __int64 a2, unsigned int a3)
{
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v4; // rdx
  char *v5; // rdx

  Next = ListEntry[1].Next;
  if ( a3
    && (++*((_DWORD *)&ListEntry[2].Next + 2),
        v4 = ListEntry[2].Next,
        *((_QWORD *)&ListEntry[1].Next + 1) += a3,
        v5 = (char *)v4 - *((_QWORD *)&ListEntry[1].Next + 1),
        (__int64)v5 < SHIDWORD(Next[5].Next)) )
  {
    sub_14042A5E0(ListEntry, v5);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], ListEntry);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)Next);
  }
}
