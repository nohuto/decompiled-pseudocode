/*
 * XREFs of sub_140460E30 @ 0x140460E30
 * Callers:
 *     sub_140460BDC @ 0x140460BDC (sub_140460BDC.c)
 *     sub_1406362D0 @ 0x1406362D0 (sub_1406362D0.c)
 *     sub_140636A64 @ 0x140636A64 (sub_140636A64.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_140460DBA @ 0x140460DBA (sub_140460DBA.c)
 */

PSLIST_ENTRY __fastcall sub_140460E30(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( *(_WORD *)a2 && (result = ExpInterlockedPopEntrySList((PSLIST_HEADER)a2)) != 0LL )
  {
    if ( *(_DWORD *)(a2 + 40) )
    {
      result->Next = (_SLIST_ENTRY *)6941;
      return result;
    }
    sub_140460DBA(a1, a2, result);
  }
  else if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 812)) >= 0x40 )
    {
      *(_DWORD *)(a1 + 812) = MEMORY[0xFFFFF78000000320];
      KeInsertQueueDpc((PRKDPC)(a1 + 720), 0LL, 0LL);
    }
  }
  return 0LL;
}
