/*
 * XREFs of PepPerformanceFromPercentage @ 0x1C000AC28
 * Callers:
 *     PepPerfControlHandler @ 0x1C000A920 (PepPerfControlHandler.c)
 *     PepPerfSelectionHandler @ 0x1C000A9D0 (PepPerfSelectionHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerformanceFromPercentage(__int64 a1, int a2)
{
  unsigned int *v2; // r8
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 40);
  if ( a2 == v2[5] )
    return *v2;
  if ( a2 == 100 )
    return v2[1];
  result = *(_QWORD *)(a1 + 64);
  if ( a2 != HIDWORD(result) )
  {
    if ( a2 == v2[6] )
    {
      return v2[2];
    }
    else if ( a2 == v2[7] )
    {
      return v2[3];
    }
    else
    {
      return a2 * v2[1] / 0x64;
    }
  }
  return result;
}
