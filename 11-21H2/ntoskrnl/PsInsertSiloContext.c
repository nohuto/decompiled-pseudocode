/*
 * XREFs of PsInsertSiloContext @ 0x140692A50
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_1409ABAC0 @ 0x1409ABAC0 (sub_1409ABAC0.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 * Callees:
 *     sub_140692ACC @ 0x140692ACC (sub_140692ACC.c)
 *     sub_140692C18 @ 0x140692C18 (sub_140692C18.c)
 */

__int64 __fastcall PsInsertSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11

  if ( !(unsigned __int8)sub_140692C18(a3) )
    return sub_140692ACC(v7, a2, 0LL, v4);
  if ( (*(_BYTE *)(v4 - 48 + 26) & 0x40) != 0 )
    v5 = (_QWORD *)(*(_QWORD *)(v4 - 48 - byte_140C25440[*(_BYTE *)(v4 - 48 + 26) & 0x7F]) + 32LL);
  if ( *v5 != v6 )
    return 3221225485LL;
  else
    return sub_140692ACC(v7, a2, 0LL, v4);
}
