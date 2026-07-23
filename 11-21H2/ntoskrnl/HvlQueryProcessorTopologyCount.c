/*
 * XREFs of HvlQueryProcessorTopologyCount @ 0x140543C60
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyCount(_DWORD *a1, _DWORD *a2)
{
  if ( (dword_140D0688C & 2) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = dword_140D06D68;
  if ( a2 )
    *a2 = dword_140D06D64;
  return 0LL;
}
