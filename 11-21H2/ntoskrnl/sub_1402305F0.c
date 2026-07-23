/*
 * XREFs of sub_1402305F0 @ 0x1402305F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140230618 @ 0x140230618 (sub_140230618.c)
 *     sub_140511A58 @ 0x140511A58 (sub_140511A58.c)
 */

__int64 __fastcall sub_1402305F0(__int64 a1, void *a2)
{
  if ( *(_DWORD *)(a1 + 148) == 2 )
    return sub_140230618((PDMA_ADAPTER)a1, a2);
  else
    return sub_140511A58((PDMA_ADAPTER)a1);
}
