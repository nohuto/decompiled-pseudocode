/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x1403426C8
 * Callers:
 *     PpmPerfGetCurrentState @ 0x140248720 (PpmPerfGetCurrentState.c)
 *     PoGetFrequencyBucket @ 0x140342694 (PoGetFrequencyBucket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 33968);
  v3 = *(_QWORD *)(a1 + 33976);
  if ( v2 && v3 )
  {
    if ( *(_BYTE *)(v3 + 100) )
    {
      v4 = *(_DWORD *)(v3 + 116);
      if ( !a2 )
        return v4;
    }
    else
    {
      v4 = *(_DWORD *)(v3 + 72);
    }
    if ( v4 >= *(_DWORD *)(v2 + 512) )
      return *(unsigned int *)(v2 + 512);
  }
  else
  {
    return 100;
  }
  return v4;
}
