/*
 * XREFs of PpmPerfSelectProcessorStates @ 0x14021FCD0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSelectProcessorState @ 0x14021FD60 (PpmPerfSelectProcessorState.c)
 */

char PpmPerfSelectProcessorStates()
{
  __int64 i; // rdi
  int v1; // eax
  unsigned int j; // ebx

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 984);
    if ( v1 != -1 )
      *(_DWORD *)(i + 984) = v1 + 1;
    for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
    {
      if ( *(_QWORD *)(136LL * j + *(_QWORD *)(i + 312)) )
        PpmPerfSelectProcessorState();
    }
  }
  return 1;
}
