/*
 * XREFs of sub_14025A640 @ 0x14025A640
 * Callers:
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_140984994 @ 0x140984994 (sub_140984994.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025A640(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 0x10) != 0 )
    return a1 - byte_140C25440[*(_BYTE *)(a1 + 26) & 0x1F];
  else
    return 0LL;
}
