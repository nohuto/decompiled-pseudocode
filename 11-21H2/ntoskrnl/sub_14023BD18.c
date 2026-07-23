/*
 * XREFs of sub_14023BD18 @ 0x14023BD18
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14023BD18(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 408);
    if ( !a1 )
      return 0;
  }
  return 1;
}
