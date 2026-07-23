/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x140543B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(unsigned int a1)
{
  int *v1; // rax
  _WORD *v2; // r10

  if ( (dword_140D0688C & 2) == 0 )
    return 3221225473LL;
  if ( a1 >= 0x400 )
    return 3221225473LL;
  v1 = sub_14039E528(a1);
  if ( !v1 )
    return 3221225473LL;
  *v2 = *((_WORD *)v1 + 7);
  return 0LL;
}
