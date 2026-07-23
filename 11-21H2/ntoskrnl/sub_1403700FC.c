/*
 * XREFs of sub_1403700FC @ 0x1403700FC
 * Callers:
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 * Callees:
 *     sub_140351E90 @ 0x140351E90 (sub_140351E90.c)
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_14036F520 @ 0x14036F520 (sub_14036F520.c)
 *     sub_140371274 @ 0x140371274 (sub_140371274.c)
 *     sub_140371398 @ 0x140371398 (sub_140371398.c)
 *     memset @ 0x140435E00 (memset.c)
 */

volatile signed __int64 *__fastcall sub_1403700FC(__int64 a1, unsigned int a2, __int128 *a3)
{
  unsigned __int64 v4; // r13
  int v5; // edi
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int16 v8; // r14
  unsigned __int64 v9; // r9
  __int128 v10; // xmm1
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // r10d
  char v17; // bl
  int v18; // r14d
  volatile signed __int64 *v19; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+38h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  __int128 v26; // [rsp+70h] [rbp-10h] BYREF
  void *v27; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v28; // [rsp+D8h] [rbp+58h] BYREF

  v27 = 0LL;
  v4 = 4096LL;
  v5 = 0;
  v6 = 64LL;
  v28 = 4096LL;
  v7 = *a3;
  v8 = 1;
  v9 = (((unsigned __int64)(unsigned int)dword_140C1BBE0 >> 10) & 1) << 6;
  v10 = *a3;
  v24 = *a3;
  if ( a2 <= 0x40 )
    v6 = a2;
  v23 = v7;
  v11 = v9 + 9 * (v6 + 15) - (((_BYTE)v6 - 1) & 7);
  v12 = v11 + v9 + (unsigned int)v6 * (v9 + 64) - (((_BYTE)v11 - 1) & 0x3F);
  v13 = 4095 - ((129 * v12 + 10238) & 0xFFF) + 129 * v12 + 10239;
  v14 = v13;
  v22 = v13;
  v15 = *(_QWORD *)sub_140371398(&v24);
  if ( v15 && (v16 & 0x40000000) == 0 && !BYTE2(v23) && v13 < *(unsigned int *)(v15 + 528) )
  {
    v25 = v10;
    v21 = sub_140371274(v13, 4096LL, 1LL, &v25);
    v19 = (volatile signed __int64 *)v21;
    if ( !v21 )
      return v19;
    v26 = *a3;
    sub_14036F520(v21, v21 + 4096, v13 - 4096, &v26, 0);
    goto LABEL_11;
  }
  v17 = BYTE1(v23);
  if ( BYTE1(v23) >= 2u )
  {
    if ( (unsigned __int8)(BYTE1(v23) - 2) <= 1u )
      v22 = 0x200000LL;
  }
  else
  {
    v5 = 0x1000000;
  }
  v18 = (v16 & 0x40000000) != 0 ? 64 : 4;
  v26 = v10;
  if ( (int)sub_140351E90((__int64 *)&v27, (__int64 *)&v22, 0LL, v5 | 0x2000u, v18, &v26) >= 0 )
  {
    v14 = v22;
    if ( v17 == 3 )
    {
      v5 = 0x20000000;
    }
    else
    {
      if ( v17 != 2 )
        goto LABEL_9;
      v5 = 541065216;
    }
    v28 = v22;
LABEL_9:
    v25 = *a3;
    if ( (int)sub_140351E90((__int64 *)&v27, (__int64 *)&v28, 0LL, v5 | 0x1000u, v18, &v25) >= 0 )
    {
      v19 = (volatile signed __int64 *)v27;
      v8 = 0;
      v4 = v28;
      v27 = 0LL;
LABEL_11:
      memset((void *)v19, 0, 0x840uLL);
      *((_QWORD *)v19 + 29) = v19 + 264;
      *((_QWORD *)v19 + 30) = (char *)v19 + v4;
      *((_QWORD *)v19 + 31) = (char *)v19 + v13;
      *((_QWORD *)v19 + 32) = (char *)v19 + v14;
      *((_WORD *)v19 + 15) = v8 | *((_WORD *)v19 + 15) & 0xFFFE;
      _InterlockedExchangeAdd64(v19 + 16, v14 >> 12);
      _InterlockedExchangeAdd64(v19 + 17, v28 >> 12);
      goto LABEL_12;
    }
  }
  v19 = 0LL;
LABEL_12:
  if ( v27 )
  {
    v26 = *a3;
    sub_140363E50((unsigned __int64 *)&v27, &v22, v5 | 0x8000u, &v26);
  }
  return v19;
}
