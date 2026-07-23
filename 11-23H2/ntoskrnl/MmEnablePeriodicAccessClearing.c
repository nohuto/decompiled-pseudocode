/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x140A88A18
 * Callers:
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A88964 (PfTAccessTracingStart.c)
 * Callees:
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 */

_QWORD *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*result + 16920LL) + 55LL) = a1;
  }
  return result;
}
