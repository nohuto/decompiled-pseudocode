/*
 * XREFs of sub_1402F35B8 @ 0x1402F35B8
 * Callers:
 *     sub_1406A340C @ 0x1406A340C (sub_1406A340C.c)
 *     sub_1407A33E8 @ 0x1407A33E8 (sub_1407A33E8.c)
 *     sub_14098485C @ 0x14098485C (sub_14098485C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402F35B8(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - byte_140C25440[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}
