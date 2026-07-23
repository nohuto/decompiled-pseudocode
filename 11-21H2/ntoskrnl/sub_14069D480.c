/*
 * XREFs of sub_14069D480 @ 0x14069D480
 * Callers:
 *     ntoskrnl_1 @ 0x14069D3D0 (ntoskrnl_1.c)
 *     sub_14069D410 @ 0x14069D410 (sub_14069D410.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069DBB0 @ 0x14069DBB0 (sub_14069DBB0.c)
 *     sub_14069DC24 @ 0x14069DC24 (sub_14069DC24.c)
 *     sub_14069DCA0 @ 0x14069DCA0 (sub_14069DCA0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14069D480(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  _OWORD *v6; // rsi
  unsigned int v7; // r12d
  char *v8; // r14
  size_t v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // r13
  SIZE_T v12; // rdx
  signed int v13; // r14d
  _OWORD *PoolWithQuotaTag; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rcx
  const void *v17; // rdx
  char *v18; // rsi
  size_t v19; // r13
  char *v20; // rax
  char v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  void *v24; // [rsp+20h] [rbp-118h] BYREF
  void *v25[2]; // [rsp+28h] [rbp-110h]
  unsigned int v26; // [rsp+38h] [rbp-100h]
  void *v27; // [rsp+40h] [rbp-F8h]
  void *Src; // [rsp+48h] [rbp-F0h]
  size_t Size; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-E0h]
  _OWORD *v31; // [rsp+60h] [rbp-D8h]
  __int128 v32; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v38; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v39; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v40; // [rsp+E8h] [rbp-50h] BYREF

  v6 = (_OWORD *)a2;
  v36 = 0LL;
  v32 = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v27 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  v26 = v7;
  if ( ((v7 ^ 1) & 0xF7010E11) != 0 )
    return 3221225485LL;
  if ( ((unsigned __int8)v7 & (unsigned __int8)((v7 & 0xE0) - 1) & 0x60) != 0 )
    return 3221225485LL;
  v8 = *(char **)(a2 + 128);
  Src = v8;
  v27 = v8;
  v9 = *(_QWORD *)(a2 + 1008);
  Size = v9;
  if ( !v9 || (v9 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v8[v9] > 0x7FFFFFFF0000LL || &v8[v9] < v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a4 & 1) != 0 )
  {
    v20 = (char *)sub_140204738(a5);
    v32 = *(_OWORD *)(v20 + 1000);
    *(_OWORD *)v25 = xmmword_140A38B90;
    if ( (v21 & 2) == 0 )
    {
      Src = (void *)*((_QWORD *)v20 + 128);
      v27 = Src;
      Size = *((unsigned __int16 *)v20 + 509);
    }
  }
  else
  {
    result = sub_14069DC24(a2 + 56, &v32);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v32 >= 0x208u )
      return 3221225485LL;
    WORD1(v32) = 520;
    *(_OWORD *)v25 = v6[14];
    if ( v25[1] )
    {
      WORD1(v25[0]) = v25[0];
      if ( LOWORD(v25[0])
        && ((char *)v25[1] + LOWORD(v25[0]) > (void *)0x7FFFFFFF0000LL || (char *)v25[1] + LOWORD(v25[0]) < v25[1]) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      if ( LOWORD(v25[0]) )
        return 3221225485LL;
      LODWORD(v25[0]) = 0;
    }
  }
  result = sub_14069DC24(v6 + 5, &v34);
  if ( (int)result < 0 )
    return result;
  result = sub_14069DC24(v6 + 6, &v35);
  if ( (int)result < 0 )
    return result;
  result = sub_14069DC24(v6 + 7, &v36);
  if ( (int)result < 0 )
    return result;
  result = sub_14069DC24(v6 + 11, &v37);
  if ( (int)result < 0 )
    return result;
  result = sub_14069DC24(v6 + 12, &v38);
  if ( (int)result < 0 )
    return result;
  result = sub_14069DC24(v6 + 13, &v39);
  if ( (int)result < 0 )
    return result;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 2) != 0 )
  {
    v33 = *(_OWORD *)(a3 + 8);
  }
  else
  {
    result = sub_14069DC24(v6 + 65, &v33);
    if ( (int)result < 0 )
      return result;
  }
  if ( a3 && (*(_DWORD *)(a3 + 4) & 4) != 0 )
    v40 = *(_OWORD *)(a3 + 24);
  else
    v40 = 0LL;
  v11 = (WORD1(v25[0])
       + WORD1(v34)
       + WORD1(v35)
       + WORD1(v36)
       + WORD1(v37)
       + WORD1(v38)
       + WORD1(v39)
       + WORD1(v33)
       + (unsigned __int64)WORD1(v40)
       + WORD1(v32)
       + 1089LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v30 = v11;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 1) != 0 )
  {
    v22 = *(unsigned int *)(a3 + 48);
    v23 = (v11 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = v23 + 8 * v22;
    if ( v11 >= v23 )
    {
      v30 = v23 + 8 * v22;
      goto LABEL_31;
    }
    return 3221225485LL;
  }
LABEL_31:
  v12 = -1LL;
  if ( v11 + Size >= v11 )
    v12 = v11 + Size;
  v13 = v11 + Size < v11 ? 0xC0000095 : 0;
  if ( v11 + Size < v11 )
    return 3221225485LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v12, 0x62507350u);
  v15 = PoolWithQuotaTag;
  v31 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v16 = 8LL;
  do
  {
    *PoolWithQuotaTag = *v6;
    PoolWithQuotaTag[1] = v6[1];
    PoolWithQuotaTag[2] = v6[2];
    PoolWithQuotaTag[3] = v6[3];
    PoolWithQuotaTag[4] = v6[4];
    PoolWithQuotaTag[5] = v6[5];
    PoolWithQuotaTag[6] = v6[6];
    PoolWithQuotaTag += 8;
    *(PoolWithQuotaTag - 1) = v6[7];
    v6 += 8;
    --v16;
  }
  while ( v16 );
  *PoolWithQuotaTag = *v6;
  PoolWithQuotaTag[1] = v6[1];
  PoolWithQuotaTag[2] = v6[2];
  PoolWithQuotaTag[3] = v6[3];
  if ( v13 < 0 )
    goto LABEL_84;
  v15[2] = v7;
  v15[1] = v11;
  *v15 = v11;
  v24 = v15 + 272;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 8) != 0 )
    v15[271] = *(_DWORD *)(a3 + 52);
  v13 = sub_14069DBB0(&v32, v15 + 14, &v24);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = sub_14069DBB0(&v34, v15 + 20, &v24);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = sub_14069DBB0(&v35, v15 + 24, &v24);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = sub_14069DBB0(&v36, v15 + 28, &v24);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = sub_14069DBB0(&v37, v15 + 44, &v24);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = sub_14069DBB0(&v38, v15 + 48, &v24);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = sub_14069DBB0(&v39, v15 + 52, &v24);
  if ( v13 < 0 )
    goto LABEL_84;
  sub_14069DBB0(&v33, v15 + 260, &v24);
  if ( a3 && (*(_DWORD *)(a3 + 4) & 4) != 0 )
    sub_14069DBB0(&v40, v15 + 264, &v24);
  else
    *((_OWORD *)v15 + 66) = 0LL;
  *((_OWORD *)v15 + 14) = *(_OWORD *)v25;
  v17 = v25[1];
  v18 = (char *)v24;
  if ( v25[1] )
  {
    *((_QWORD *)v15 + 29) = v24;
    memmove(v18, v17, LOWORD(v25[0]));
    if ( v18 )
    {
      v18 += LOWORD(v25[0]);
      v24 = v18;
    }
  }
  *((_QWORD *)v15 + 134) = 0LL;
  v15[270] = 0;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
    {
      v18 = (char *)((unsigned __int64)(v18 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v24 = v18;
      *((_QWORD *)v15 + 134) = v18;
      v15[270] = *(_DWORD *)(a3 + 48);
      memmove(v18, *(const void **)(a3 + 40), 8LL * *(unsigned int *)(a3 + 48));
      if ( v18 )
      {
        v18 += 8 * *(unsigned int *)(a3 + 48);
        v24 = v18;
      }
    }
  }
  v19 = (char *)v15 - v18 + v11;
  if ( v19 )
  {
    memset(v18, 0, v19);
    if ( v18 )
    {
      v18 += v19;
      v24 = v18;
    }
  }
  memmove(v18, Src, Size);
  if ( (a4 & 3) == 1 || (v13 = sub_14069DCA0(v18, &Size), v13 >= 0) )
  {
    if ( (a4 & 1) != 0 )
    {
      *((_QWORD *)v15 + 2) = 0LL;
      *((_QWORD *)v15 + 4) = 0LL;
      *((_QWORD *)v15 + 5) = 0LL;
      *((_QWORD *)v15 + 6) = 0LL;
    }
    *((_QWORD *)v15 + 16) = v18;
    *((_QWORD *)v15 + 126) = Size;
    *((_QWORD *)v15 + 127) = 0LL;
    *a1 = v15;
    return 0LL;
  }
  else
  {
LABEL_84:
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v13;
  }
}
