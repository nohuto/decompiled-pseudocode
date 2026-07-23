/*
 * XREFs of sub_140460DBA @ 0x140460DBA
 * Callers:
 *     sub_14041AAB8 @ 0x14041AAB8 (sub_14041AAB8.c)
 *     sub_140460E30 @ 0x140460E30 (sub_140460E30.c)
 *     sub_140635A00 @ 0x140635A00 (sub_140635A00.c)
 *     sub_140635B34 @ 0x140635B34 (sub_140635B34.c)
 *     sub_140635B80 @ 0x140635B80 (sub_140635B80.c)
 *     sub_140635C4C @ 0x140635C4C (sub_140635C4C.c)
 *     sub_1406362D0 @ 0x1406362D0 (sub_1406362D0.c)
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

char __fastcall sub_140460DBA(__int64 a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 v4; // rbx
  unsigned __int32 v6; // eax

  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 40) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)a2, a3);
    v6 = *(_DWORD *)(a2 + 40);
    if ( !v6 )
LABEL_5:
      LOBYTE(v6) = KeInsertQueueDpc((PRKDPC)(a1 + 936), 0LL, 0LL);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v4, a3);
    v6 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( v6 >= *(_DWORD *)(v4 + 72) )
      goto LABEL_5;
  }
  return v6;
}
