/*
 * XREFs of sub_1405BC608 @ 0x1405BC608
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 * Callees:
 *     sub_140232E74 @ 0x140232E74 (sub_140232E74.c)
 *     sub_1405BC2C4 @ 0x1405BC2C4 (sub_1405BC2C4.c)
 */

__int64 __fastcall sub_1405BC608(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r10

  v1 = 48 * a1 - 0x220000000000LL;
  v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v1 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(v2 + 4) & 0x100) != 0 )
    v2 = **(_QWORD **)(v2 + 16624);
  if ( (unsigned int)sub_140232E74(v2, *(_QWORD *)(v1 + 16))
    || !*(_QWORD *)(*(_QWORD *)(v3 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v4 + 16)) >> 4) + 16736) + 216LL) )
  {
    return 0LL;
  }
  else
  {
    return sub_1405BC2C4(v5, 0LL, 0LL);
  }
}
