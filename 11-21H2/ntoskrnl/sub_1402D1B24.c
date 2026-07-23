/*
 * XREFs of sub_1402D1B24 @ 0x1402D1B24
 * Callers:
 *     sub_1402D1A48 @ 0x1402D1A48 (sub_1402D1A48.c)
 * Callees:
 *     sub_1402D1D14 @ 0x1402D1D14 (sub_1402D1D14.c)
 */

__int64 __fastcall sub_1402D1B24(__int64 a1, _WORD *a2)
{
  int v3; // r11d
  unsigned int v4; // kr00_4
  unsigned int v5; // esi
  unsigned int v6; // r9d
  __int64 v7; // r11
  __int64 v8; // rbx
  __int16 v9; // ax
  unsigned int v10; // kr04_4
  unsigned int v11; // r8d
  __int64 result; // rax
  int v13; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v14 = 0;
  sub_1402D1D14(a1, &v13, &v14);
  v3 = v13;
  v4 = v13;
  a2[7] = (v13 + 1) % 7u;
  v5 = (100 * ((-36524 * ((100 * (v4 % 0x23AB1) + 75) / 0x37BB49) + v4 % 0x23AB1) % 0x5B5) + 75) / 0x8EAD
     + 4
     * ((-36524 * ((100 * (v4 % 0x23AB1) + 75) / 0x37BB49) + v4 % 0x23AB1) / 0x5B5
      + 25 * ((100 * (v4 % 0x23AB1) + 75) / 0x37BB49 + 4 * (v4 / 0x23AB1)));
  v6 = v5 + 1;
  v7 = v5 / 0x64 + -365 * v5 - v5 / 0x190 - (v5 >> 2) + v3;
  if ( v5 + 1 != 400 * ((v5 + 1) / 0x190) && (v6 == 100 * (v6 / 0x64) || (v6 & 3) != 0) )
  {
    v8 = *((unsigned __int8 *)qword_140018A90 + v7);
    v9 = word_140018D80[v8];
  }
  else
  {
    v8 = *((unsigned __int8 *)&qword_140018C08[1] + v7);
    v9 = word_140018A68[v8];
  }
  v10 = v14;
  a2[1] = v8 + 1;
  *a2 = v5 + 1601;
  a2[2] = v7 - v9 + 1;
  a2[6] = v10 % 0x3E8;
  v11 = v10 / 0x3E8 / 0x3C;
  a2[3] = v11 / 0x3C;
  a2[4] = v11 % 0x3C;
  result = (unsigned int)(__int16)v11;
  a2[5] = v10 / 0x3E8 % 0x3C;
  return result;
}
