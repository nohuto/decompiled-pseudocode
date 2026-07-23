/*
 * XREFs of sub_140A10548 @ 0x140A10548
 * Callers:
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 * Callees:
 *     sub_140361540 @ 0x140361540 (sub_140361540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A10548(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  int v7; // edi
  _OWORD *v8; // rax
  _OWORD *v9; // rbx
  _OWORD *v10; // rax
  int v11; // r14d
  _OWORD *v12; // rax
  _OWORD *v13; // rax
  PVOID P[2]; // [rsp+68h] [rbp-40h] BYREF

  *(_OWORD *)P = 0LL;
  if ( a2 < 0x10 )
  {
    v7 = -1073741811;
LABEL_20:
    v9 = P[1];
    goto LABEL_21;
  }
  v7 = sub_1407E3010(0xF4u, &P[1]);
  if ( v7 < 0 )
    goto LABEL_20;
  v8 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)v8 + 244 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v8 + 244) < v8 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v8 = *(_OWORD **)(a1 + 8);
  }
  v9 = P[1];
  *(_OWORD *)P[1] = *v8;
  v9[1] = v8[1];
  v9[2] = v8[2];
  v9[3] = v8[3];
  v9[4] = v8[4];
  v9[5] = v8[5];
  v9[6] = v8[6];
  v9[7] = v8[7];
  v10 = v8 + 8;
  v9[8] = *v10;
  v9[9] = v10[1];
  v9[10] = v10[2];
  v9[11] = v10[3];
  v9[12] = v10[4];
  v9[13] = v10[5];
  v9[14] = v10[6];
  *((_DWORD *)v9 + 60) = *((_DWORD *)v10 + 28);
  v11 = *((_DWORD *)v9 + 9) & 0xF;
  LODWORD(P[0]) = v11;
  HIDWORD(P[0]) = (unsigned __int8)*((_DWORD *)v9 + 9) >> 4;
  if ( v11 == 1 )
  {
    ExFreePoolWithTag(v9, 0);
    P[1] = 0LL;
    v7 = sub_1407E3010(0xF8u, &P[1]);
    if ( v7 < 0 )
      goto LABEL_20;
    v12 = *(_OWORD **)(a1 + 8);
    if ( (unsigned __int64)v12 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v12 + 248) < v12 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v12 = *(_OWORD **)(a1 + 8);
    }
    v9 = P[1];
    *(_OWORD *)P[1] = *v12;
    v9[1] = v12[1];
    v9[2] = v12[2];
    v9[3] = v12[3];
    v9[4] = v12[4];
    v9[5] = v12[5];
    v9[6] = v12[6];
    v9[7] = v12[7];
    v13 = v12 + 8;
    v9[8] = *v13;
    v9[9] = v13[1];
    v9[10] = v13[2];
    v9[11] = v13[3];
    v9[12] = v13[4];
    v9[13] = v13[5];
    v9[14] = v13[6];
    *((_QWORD *)v9 + 30) = *((_QWORD *)v13 + 14);
  }
  else
  {
    if ( (unsigned int)sub_140361540((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, 6u) && qword_140D048F8 )
      sub_14042A5E0(15104858LL, &qword_14000FFC8);
    if ( v11 )
    {
      v7 = -1073741811;
      goto LABEL_21;
    }
  }
  *(_DWORD *)(a4 + 8) = *((_DWORD *)v9 + 16);
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (*((_DWORD *)v9 + 10) & 0xFFFFFFF);
  if ( a3 )
  {
    *a3 = *(_OWORD *)P;
    v9 = 0LL;
  }
LABEL_21:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v7;
}
