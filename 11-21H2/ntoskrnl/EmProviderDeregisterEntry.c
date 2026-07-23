/*
 * XREFs of EmProviderDeregisterEntry @ 0x14092CC40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140540E10 @ 0x140540E10 (sub_140540E10.c)
 */

__int64 __fastcall EmProviderDeregisterEntry(char *P)
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C70, 0LL);
  sub_140540E10(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C48C70);
  return sub_1402AFC00((ULONG_PTR)&qword_140C48C70);
}
