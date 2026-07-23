/*
 * XREFs of HvlQueryProcessorTopologyHighestId @ 0x140543D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyHighestId(_DWORD *a1, _DWORD *a2)
{
  if ( (dword_140D0688C & 2) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = dword_140D01AEC;
  if ( a2 )
    *a2 = dword_140D01AF0;
  return 0LL;
}
