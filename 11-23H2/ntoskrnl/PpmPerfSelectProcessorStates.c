/*
 * XREFs of PpmPerfSelectProcessorStates @ 0x140255610
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSelectProcessorState @ 0x1402556A0 (PpmPerfSelectProcessorState.c)
 */

char PpmPerfSelectProcessorStates()
{
  __int64 i; // rbx
  int v2; // eax
  __int64 j; // rdi

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v2 = *(_DWORD *)(i + 1056);
    if ( v2 != -1 )
      *(_DWORD *)(i + 1056) = v2 + 1;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(i + 296); j = (unsigned int)(j + 1) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(i + 312) + 144 * j) )
        PpmPerfSelectProcessorState();
    }
  }
  return 1;
}
