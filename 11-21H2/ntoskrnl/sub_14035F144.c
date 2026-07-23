/*
 * XREFs of sub_14035F144 @ 0x14035F144
 * Callers:
 *     sub_14035EE9C @ 0x14035EE9C (sub_14035EE9C.c)
 *     sub_14035EF6C @ 0x14035EF6C (sub_14035EF6C.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

char __fastcall sub_14035F144(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  char v6; // r10
  _BYTE *v7; // rsi
  char v8; // cl
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edx
  char v16; // al
  char v17; // al

  result = sub_140292818(0LL, a1);
  if ( v6 == 2 && !*(_QWORD *)(a3 + 16) || v6 == 3 )
  {
    v7 = *(_BYTE **)(a3 + 56);
    if ( (*(_BYTE *)(a1 + 2) & 4) == 0
      || *(char *)(a1 + 195) >= 16
      || !*(_QWORD *)(a1 + 104)
      || (v11 = *(_QWORD *)(a1 + 104)) == 0
      || (v12 = *(unsigned int *)(a3 + 216) + v11) == 0
      || (v13 = sub_1402103E0(a1, v12, 0LL, 0, 0LL), v8 = 1, !v13) )
    {
      v8 = *(_BYTE *)(a1 + 195);
    }
    result = v8 & 0x7F | (*(_BYTE *)(a1 + 119) << 7);
    *v7 = result;
    v9 = *(_QWORD *)(a3 + 35000);
    if ( v9 )
    {
      if ( a1 == *(_QWORD *)(a3 + 24) )
        v14 = (unsigned int)dword_140D0504C;
      else
        v14 = result & 0x7F;
      result = sub_14045B7FC(v9, v14, 0LL);
    }
    v10 = *(_QWORD *)(a3 + 56);
    if ( dword_140D068FC )
    {
      v15 = *(_DWORD *)(a1 + 80);
      v16 = (*(_BYTE *)(v10 + 64) ^ *(_BYTE *)(a1 + 512)) & 7 ^ *(_BYTE *)(v10 + 64);
      v17 = (v16 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v16;
      if ( v15 <= *(_DWORD *)(a1 + 84) )
        v15 = *(_DWORD *)(a1 + 84);
      result = (v15 >= dword_140D05308 ? 0x40 : 0) | v17 & 0xBF;
      *(_BYTE *)(v10 + 64) = result;
    }
  }
  return result;
}
