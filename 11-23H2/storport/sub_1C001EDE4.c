/*
 * XREFs of sub_1C001EDE4 @ 0x1C001EDE4
 * Callers:
 *     sub_1C001E760 @ 0x1C001E760 (sub_1C001E760.c)
 *     sub_1C003B7E8 @ 0x1C003B7E8 (sub_1C003B7E8.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C001EDE4(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  _DWORD *v4; // r14
  _DWORD *v8; // r10
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // rsi
  unsigned int v12; // r15d
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // eax
  __int64 result; // rax
  int v20; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD **)(a2 + 24);
  v8 = 0LL;
  v9 = 0;
  v11 = *(_QWORD *)(a1 + 64);
  v12 = v4[6];
  v20 = v4[7];
  if ( *(_DWORD *)v11 == 1431193940 )
    v13 = *(_QWORD *)(v11 + 24);
  else
    v13 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v11 != 1431193940 )
    v11 = 0LL;
  v10 = v4[7];
  v14 = v10 + 80;
  if ( v12 >= 0x28 )
  {
    v15 = v12 - 40;
    if ( v14 < 0x50 )
    {
LABEL_19:
      v16 = -1073741675;
      goto LABEL_12;
    }
    v9 = v14 + v15;
    if ( v14 + v15 >= v15 )
      goto LABEL_8;
LABEL_18:
    v9 = -1;
    goto LABEL_19;
  }
  if ( v14 < 0x50 )
    goto LABEL_18;
  v9 = v10 + 80;
LABEL_8:
  v16 = 0;
  v17 = sub_1C0007CF4(64LL, v9, 1918067026LL, a1);
  v8 = (_DWORD *)v17;
  if ( v17 )
  {
    *(_DWORD *)v17 = 28;
    *(_DWORD *)(v17 + 16) = 2954240;
    *(_QWORD *)(v17 + 4) = 0x4C4F434F544F5250LL;
    if ( v11 )
      v18 = *(_DWORD *)(v11 + 1320);
    else
      v18 = *(_DWORD *)(v13 + 4060);
    v8[3] = v18;
    v8[6] = v9 - 28;
    v8[7] = 48;
    v8[8] = 48;
    v8[9] = v4[2];
    v8[10] = v4[3];
    v8[11] = v4[4];
    v8[12] = v4[5];
    v8[16] = v4[9];
    v8[17] = v4[10];
    v8[18] = v4[11];
    v8[13] = v12 >= 0x28 ? 0x2C : 0;
    v8[14] = v20;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_12:
  result = v16;
  *a3 = v8;
  *a4 = v9;
  return result;
}
