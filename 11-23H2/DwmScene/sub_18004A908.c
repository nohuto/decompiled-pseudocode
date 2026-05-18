/*
 * XREFs of sub_18004A908 @ 0x18004A908
 * Callers:
 *     sub_18004A620 @ 0x18004A620 (sub_18004A620.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004A788 @ 0x18004A788 (sub_18004A788.c)
 */

_QWORD *__fastcall sub_18004A908(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r10

  if ( a1 != a2 )
  {
    v4 = a1 + 20;
    do
    {
      sub_18001246C(a3, (_QWORD *)(v4 - 20));
      *(_BYTE *)(v6 + v5 - 4) = *(_BYTE *)(v5 - 4);
      *(_DWORD *)(v5 + v6) = *(_DWORD *)v5;
      sub_18001246C((_QWORD *)(v5 + v6 + 4), (_QWORD *)(v5 + 4));
      sub_18001246C((_QWORD *)(v8 + v7 + 20), (_QWORD *)(v8 + 20));
      sub_18001246C((_QWORD *)(v10 + v9 + 36), (_QWORD *)(v10 + 36));
      sub_18001246C((_QWORD *)(v12 + v11 + 52), (_QWORD *)(v12 + 52));
      v4 = v13 + 88;
      a3 += 11;
    }
    while ( v4 - 20 != v14 );
  }
  sub_18004A788((__int64)a3, (__int64)a3);
  return a3;
}
