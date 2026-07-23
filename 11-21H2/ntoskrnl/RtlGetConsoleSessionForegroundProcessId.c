/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1409B5CB0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)sub_140347DB0() + 165) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
