/*
 * XREFs of sub_14080FBA8 @ 0x14080FBA8
 * Callers:
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14080FBA8(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 2) != 0 )
    return 3221225865LL;
  else
    return (v1 & 1) == 0 ? 0xC00000BB : 0;
}
