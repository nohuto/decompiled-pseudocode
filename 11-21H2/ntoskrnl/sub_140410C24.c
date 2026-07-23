/*
 * XREFs of sub_140410C24 @ 0x140410C24
 * Callers:
 *     sub_140410BB8 @ 0x140410BB8 (sub_140410BB8.c)
 * Callees:
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400F34 @ 0x140400F34 (sub_140400F34.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_14040106C @ 0x14040106C (sub_14040106C.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 */

__int64 __fastcall sub_140410C24(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // rbx

  v9 = (unsigned int)sub_140401368((__int64)a1);
  v10 = sub_140400C78(a3);
  v11 = sub_140400F4C();
  sub_140400F4C();
  v12 = v9 + v9 + a5;
  v13 = -2 * v9 + a6;
  if ( !v10 )
    return sub_14040106C(1, a1, a4, v12, v13);
  sub_14040106C(1, a1, v11, v12, v13);
  sub_140400F34();
  while ( v10 > 1 )
  {
    if ( (v10 & 1) != 0 )
      sub_1404011D4(a1, v11);
    sub_1404012B0(a1);
    v10 >>= 1;
  }
  return sub_1404011D4(a1, v11);
}
