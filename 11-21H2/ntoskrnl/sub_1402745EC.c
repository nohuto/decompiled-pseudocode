/*
 * XREFs of sub_1402745EC @ 0x1402745EC
 * Callers:
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_1403B7B80 @ 0x1403B7B80 (sub_1403B7B80.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

__int64 __fastcall sub_1402745EC(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  _SLIST_HEADER *v3; // rcx

  v2 = ((unsigned int)~LODWORD(ListEntry[12].Next) >> 6) & 1;
  if ( (unsigned __int64)ListEntry >= qword_140C4F040[v2 + 2109]
    && (unsigned __int64)ListEntry < qword_140C4F040[v2 + 2111] )
  {
    v3 = (_SLIST_HEADER *)((char *)&unk_140C53200 + 16 * v2);
    goto LABEL_5;
  }
  if ( (unsigned int)LOWORD(qword_140C4F040[2 * v2 + 2100]) < *((unsigned __int8 *)&qword_140C4F040[2108] + v2) )
  {
    v3 = (_SLIST_HEADER *)&qword_140C4F040[2 * v2 + 2100];
LABEL_5:
    ExpInterlockedPushEntrySList(v3, ListEntry);
    return 1LL;
  }
  return 0LL;
}
