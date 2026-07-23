/*
 * XREFs of sub_14094F7C0 @ 0x14094F7C0
 * Callers:
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 sub_14094F7C0()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( (dword_140D3B030 & 2) != 0 )
    return (unsigned int)ZwUpdateWnfStateData(&stru_140037738, 0LL, 0, 0LL, 0LL, 0, 0);
  return v0;
}
