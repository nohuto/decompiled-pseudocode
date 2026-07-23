/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x1407E9F00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

_QWORD *__fastcall RtlSetConsoleSessionForegroundProcessId(__int64 a1)
{
  _QWORD *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    *(_QWORD *)(result[165] + 8LL) = a1;
  }
  else
  {
    result = (_QWORD *)MmWriteableSharedUserData;
    *(_QWORD *)(MmWriteableSharedUserData + 824) = a1;
  }
  return result;
}
