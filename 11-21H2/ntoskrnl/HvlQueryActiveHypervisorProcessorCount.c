/*
 * XREFs of HvlQueryActiveHypervisorProcessorCount @ 0x140543A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveHypervisorProcessorCount(_DWORD *a1)
{
  if ( (dword_140D0688C & 2) == 0 )
    return 3221225473LL;
  *a1 = dword_140D06A3C;
  return 0LL;
}
