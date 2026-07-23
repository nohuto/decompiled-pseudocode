/*
 * XREFs of sub_140AAE560 @ 0x140AAE560
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025E2BC @ 0x14025E2BC (sub_14025E2BC.c)
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403CACA0 @ 0x1403CACA0 (sub_1403CACA0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AABE98 @ 0x140AABE98 (sub_140AABE98.c)
 *     sub_140AAE79C @ 0x140AAE79C (sub_140AAE79C.c)
 *     sub_140AB0A18 @ 0x140AB0A18 (sub_140AB0A18.c)
 *     sub_140B56120 @ 0x140B56120 (sub_140B56120.c)
 */

__int64 __fastcall sub_140AAE560(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // rax
  unsigned int *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  unsigned int i; // r10d
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *Str2; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-18h] BYREF
  int v27; // [rsp+60h] [rbp-10h]
  int v28; // [rsp+64h] [rbp-Ch]

  v26 = 0LL;
  v27 = 0;
  v22 = 0LL;
  Str2 = 0LL;
  sub_1403A7C40();
  v6 = (_DWORD *)sub_1403AA2B8(0x5E10uLL);
  qword_140CE1AD8 = (__int64)v6;
  if ( !v6 )
  {
    v9 = -1073741801;
    goto LABEL_12;
  }
  *v6 = 80;
  v6[1] = 25;
  v6[2] |= (unsigned __int16)a1;
  v6[3] = a2;
  v6[4] = a3;
  v7 = sub_14025E2BC(v24);
  *(_QWORD *)(v8 + 20) = *(_QWORD *)v7;
  LODWORD(v7) = v7[2];
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 28) = (_DWORD)v7;
  *(_DWORD *)(v8 + 32) = 15;
  *(_DWORD *)(v8 + 48) = 12;
  *(_DWORD *)(v8 + 52) = 22;
  memset((void *)(v8 + 80), 0, 0x5DC0uLL);
  v25[0] = a3;
  v25[1] = a2;
  v28 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  sub_140B56120((unsigned int)dword_140C0E0F8, &Str2);
  v9 = sub_140AABE98(Str2, &v26);
  if ( v9 < 0
    || (v9 = sub_1403CACA0(
               *(_DWORD *)(qword_140CE1AD8 + 4),
               *(_DWORD *)qword_140CE1AD8,
               *(_DWORD *)(qword_140CE1AD8 + 24),
               *(_DWORD *)(qword_140CE1AD8 + 20),
               (__int64)v25,
               (__int64)&v22),
        v9 < 0) )
  {
    v13 = (unsigned int *)qword_140CE1AD8;
  }
  else
  {
    v10 = qword_140CE1AD8;
    *(_DWORD *)(qword_140CE1AD8 + 32) = v27;
    v11 = (_DWORD *)(v10 + 48);
    *(_QWORD *)(v10 + 48) = v22;
    v12 = sub_140AAE79C(v25, v10 + 48, ~(unsigned __int8)(a1 >> 1) & 2 | 1u);
    v13 = (unsigned int *)qword_140CE1AD8;
    *(_QWORD *)(qword_140CE1AD8 + 40) = v12;
    if ( v12 )
    {
      v14 = 0LL;
      v15 = *v13;
      v16 = v13[1];
      v13[15] = (v13[5] - (_DWORD)v15 * *v11) >> 1;
      v17 = v11[1] * v16;
      v18 = v13[6];
      v13[19] = 0;
      v13[17] = 0;
      v13[18] = 0;
      v19 = (v18 - v17) >> 1;
      v13[16] = v19;
      if ( (_DWORD)v15 )
      {
        do
        {
          for ( i = 0; i < v13[1]; v13[v15 + 20] = a2 )
          {
            v19 = 25LL * (unsigned int)v14 + i++;
            v15 = 3 * v19;
            LOWORD(v13[v15 + 22]) = 32;
            v13[3 * v19 + 21] = a3;
          }
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < *v13 );
      }
      if ( (a1 & 1) != 0 )
        sub_140AB0A18(v19, v15, v13, v14);
      v9 = 0;
      goto LABEL_12;
    }
    v9 = -1073741823;
  }
  if ( v13 )
  {
    sub_1403A8CB4((__int64)v13);
    qword_140CE1AD8 = 0LL;
  }
LABEL_12:
  sub_1403A7BF0();
  return (unsigned int)v9;
}
