/*
 * XREFs of SmpSessionIdToInitialSessionIndex @ 0x140002858
 * Callers:
 *     SmpTerminateCSR @ 0x140001660 (SmpTerminateCSR.c)
 *     SmpSetCoreProcessIds @ 0x140002724 (SmpSetCoreProcessIds.c)
 *     SmpExecPgm @ 0x1400028A0 (SmpExecPgm.c)
 *     SmpDestroyControlBlock @ 0x140003AD4 (SmpDestroyControlBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpSessionIdToInitialSessionIndex(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( !SmpNumberInitialSessions )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)SmpCoreProcessIds; a1 != *i; i += 10 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= SmpNumberInitialSessions )
      return 0xFFFFFFFFLL;
  }
  return result;
}
