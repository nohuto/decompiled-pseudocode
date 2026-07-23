/*
 * XREFs of PsReplaceSiloContext @ 0x1409AB820
 * Callers:
 *     <none>
 * Callees:
 *     sub_140692C18 @ 0x140692C18 (sub_140692C18.c)
 *     sub_1409B4C94 @ 0x1409B4C94 (sub_1409B4C94.c)
 */

__int64 __fastcall PsReplaceSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // r11

  v3 = qword_140D32A90;
  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1496);
  if ( !sub_140692C18(a3) )
    return sub_1409B4C94(v3, a2);
  if ( (*(_BYTE *)(v5 - 48 + 26) & 0x40) != 0 )
    v6 = (_QWORD *)(*(_QWORD *)(v5 - 48 - byte_140C25440[*(_BYTE *)(v5 - 48 + 26) & 0x7F]) + 32LL);
  if ( *v6 == v7 )
    return sub_1409B4C94(v3, a2);
  else
    return 3221225485LL;
}
