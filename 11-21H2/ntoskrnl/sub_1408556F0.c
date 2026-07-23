/*
 * XREFs of sub_1408556F0 @ 0x1408556F0
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1408556C0 @ 0x1408556C0 (sub_1408556C0.c)
 * Callees:
 *     sub_140255D5C @ 0x140255D5C (sub_140255D5C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 */

__int64 __fastcall sub_1408556F0(char a1, __int64 a2)
{
  signed int v2; // r15d
  char v3; // r14
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 v18; // rsi
  int *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v27; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v28; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v29[6]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v30[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+120h] [rbp+20h]

  v2 = dword_140C232CC;
  v3 = a1;
  v28 = 0;
  v4 = *(_OWORD *)qword_140C231B8;
  v27 = 0;
  v5 = *((_OWORD *)qword_140C231B8 + 1);
  v29[0] = v4;
  v6 = *((_OWORD *)qword_140C231B8 + 2);
  v29[1] = v5;
  v7 = *((_OWORD *)qword_140C231B8 + 3);
  v29[2] = v6;
  v8 = *((_OWORD *)qword_140C231B8 + 4);
  v29[3] = v7;
  v9 = *((_OWORD *)qword_140C231B8 + 5);
  v29[4] = v8;
  v10 = *((_OWORD *)qword_140C231B8 + 6);
  v29[5] = v9;
  v30[0] = v10;
  v30[1] = *((_OWORD *)qword_140C231B8 + 7);
  v11 = *((_OWORD *)qword_140C231B8 + 9);
  v30[2] = *((_OWORD *)qword_140C231B8 + 8);
  v12 = *((_OWORD *)qword_140C231B8 + 10);
  v30[3] = v11;
  v13 = *((_OWORD *)qword_140C231B8 + 11);
  v30[4] = v12;
  v14 = *((_OWORD *)qword_140C231B8 + 12);
  v30[5] = v13;
  v15 = *((_OWORD *)qword_140C231B8 + 13);
  v16 = *((_QWORD *)qword_140C231B8 + 28);
  v30[6] = v14;
  v30[7] = v15;
  v31 = v16;
  v17 = a2 + 1;
  if ( a1 )
  {
    v17 = 4;
    a2 = 0LL;
  }
  if ( (unsigned int)a2 < v17 )
  {
    v18 = v17 - (unsigned int)a2;
    v19 = (int *)v30 + 6 * a2 + 1;
    v20 = a2;
    do
    {
      if ( (int)sub_140255D5C(*(__int64 *)((char *)&off_1400098E8 + v20 * 8), a2, v2, &v27, 4u, &v28) >= 0 )
      {
        v22 = v27;
        if ( v27 <= 6 )
        {
          v19[1] = v27;
          *((_BYTE *)v19 - 4) = v22 != 0;
        }
      }
      if ( (int)sub_140255D5C(*(__int64 *)((char *)&off_1400098A8 + v20 * 8), v21, v2, &v27, 4u, &v28) >= 0 )
      {
        v24 = v27;
        if ( v27 > 0x64 )
          v24 = 100;
        *v19 = v24;
      }
      if ( (int)sub_140255D5C((__int64)off_1400098C8[v20], v23, v2, &v27, 4u, &v28) >= 0 )
        v19[3] = v27 & 7;
      v19 += 6;
      ++v20;
      --v18;
    }
    while ( v18 );
    v3 = a1;
  }
  return sub_1408194D8(1, v3, v29, 0xE8u);
}
