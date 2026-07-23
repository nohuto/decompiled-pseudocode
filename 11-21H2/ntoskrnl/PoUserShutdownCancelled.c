/*
 * XREFs of PoUserShutdownCancelled @ 0x1406EADA0
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_1406EADD4 @ 0x1406EADD4 (sub_1406EADD4.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al
  __int64 v1; // rcx

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    sub_14036AAC4((__int64)&unk_140C246A0, DelayedWorkQueue);
    LOBYTE(v1) = 1;
    return sub_1406EADD4(v1);
  }
  return result;
}
