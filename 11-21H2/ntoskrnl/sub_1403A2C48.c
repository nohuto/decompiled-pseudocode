/*
 * XREFs of sub_1403A2C48 @ 0x1403A2C48
 * Callers:
 *     sub_1403A25F0 @ 0x1403A25F0 (sub_1403A25F0.c)
 *     sub_1403A2C30 @ 0x1403A2C30 (sub_1403A2C30.c)
 *     sub_1405356F0 @ 0x1405356F0 (sub_1405356F0.c)
 *     sub_140535760 @ 0x140535760 (sub_140535760.c)
 *     sub_140535790 @ 0x140535790 (sub_140535790.c)
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

__int64 __fastcall sub_1403A2C48(_DWORD *a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  char v4; // bl
  _DWORD *v5; // r9
  int v6; // r11d
  int v7; // eax
  char v8; // si
  unsigned __int8 v9; // cl
  int v10; // r11d
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // r8d
  __int64 result; // rax
  unsigned int v16; // r10d
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+38h] [rbp+10h]

  v2 = a1[30];
  v3 = 0;
  v21 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v19 = a1[26];
      v8 = 31;
      v20 = a1[27];
      LOBYTE(v6) = v19 < a2;
      LOBYTE(v3) = v19 - a2 < v20;
      v10 = v3 | v6;
      v11 = v19 - a2 - v20;
      goto LABEL_4;
    }
    v17 = *((_WORD *)a1 + 52);
    v8 = 15;
    v18 = *((_WORD *)a1 + 54);
    LOBYTE(v6) = (unsigned __int16)(v17 - a2) < v18;
    LOBYTE(v3) = v17 < (unsigned __int16)a2;
    v10 = v3 | v6;
    LOWORD(v21) = v17 - a2 - v18;
  }
  else
  {
    v7 = *((unsigned __int8 *)a1 + 104);
    v8 = 7;
    v9 = *((_BYTE *)a1 + 108);
    LOBYTE(v6) = (unsigned __int8)(v7 - a2) < v9;
    LOBYTE(v3) = (unsigned __int8)v7 < (unsigned __int8)a2;
    v10 = v3 | v6;
    LOBYTE(v21) = v7 - a2 - v9;
  }
  v11 = v21;
LABEL_4:
  v12 = v5[31];
  v13 = v12;
  if ( v12 != 13 && v12 != 87 )
  {
    sub_1403A2E60(v5, v11);
    v13 = v5[31];
  }
  v14 = v5[4];
  if ( v13 != 31 )
    v14 = v10 | v14 & 0xFFFFFFFE;
  result = v5[27] & 0xF;
  v16 = v14 & 0xFFFFFFEB | ((v5[26] & 0xF) - (_BYTE)result - v4) & 0x10 | (4
                                                                         * (((*((_BYTE *)qword_140037250 + (v11 & 0xF))
                                                                            + *((_BYTE *)qword_140037250
                                                                              + ((unsigned __int8)v11 >> 4))) & 1) == 0));
  if ( v13 != 87 )
  {
    result = (unsigned int)-(int)v11;
    v16 = ((_DWORD)v11 == 0 ? 0x40 : 0) | v16 & 0xFFFFFFBF;
  }
  v5[4] = v16 & 0xFFFFF77F | ((((unsigned int)v11 >> v8) & 1 | (16
                                                              * (((unsigned __int8)v10 ^ (unsigned __int8)(((unsigned int)v11 ^ v5[26] ^ v5[27]) >> v8)) & 1))) << 7);
  return result;
}
