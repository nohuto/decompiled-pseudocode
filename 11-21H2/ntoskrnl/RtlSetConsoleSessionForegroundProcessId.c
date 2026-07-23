/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x1407797D0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

_QWORD *__fastcall RtlSetConsoleSessionForegroundProcessId(_QWORD *a1)
{
  _QWORD *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = sub_140347DB0();
    *(_QWORD *)(result[165] + 8LL) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF78000000338] = a1;
  }
  return result;
}
