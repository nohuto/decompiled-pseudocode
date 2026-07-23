/*
 * XREFs of RtlSetActiveConsoleId @ 0x1407EACD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

_QWORD *__fastcall RtlSetActiveConsoleId(int a1)
{
  _QWORD *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    *(_DWORD *)(result[165] + 4LL) = a1;
  }
  else
  {
    result = (_QWORD *)MmWriteableSharedUserData;
    *(_DWORD *)(MmWriteableSharedUserData + 728) = a1;
  }
  return result;
}
