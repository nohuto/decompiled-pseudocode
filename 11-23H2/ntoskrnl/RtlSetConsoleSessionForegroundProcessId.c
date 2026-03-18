/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x1407E9C30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
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
