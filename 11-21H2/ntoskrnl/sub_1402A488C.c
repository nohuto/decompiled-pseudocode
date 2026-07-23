/*
 * XREFs of sub_1402A488C @ 0x1402A488C
 * Callers:
 *     sub_14070FD80 @ 0x14070FD80 (sub_14070FD80.c)
 *     sub_140725858 @ 0x140725858 (sub_140725858.c)
 *     sub_140726394 @ 0x140726394 (sub_140726394.c)
 *     sub_140984994 @ 0x140984994 (sub_140984994.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A488C(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - byte_140C25440[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
