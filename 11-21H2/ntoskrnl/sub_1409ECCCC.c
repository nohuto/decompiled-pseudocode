/*
 * XREFs of sub_1409ECCCC @ 0x1409ECCCC
 * Callers:
 *     sub_1409ECB90 @ 0x1409ECB90 (sub_1409ECB90.c)
 *     sub_1409ED7D4 @ 0x1409ED7D4 (sub_1409ED7D4.c)
 * Callees:
 *     sub_14024E01C @ 0x14024E01C (sub_14024E01C.c)
 *     sub_1402619C4 @ 0x1402619C4 (sub_1402619C4.c)
 *     sub_140261A20 @ 0x140261A20 (sub_140261A20.c)
 *     sub_1402E1C2C @ 0x1402E1C2C (sub_1402E1C2C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_1409EC8CC @ 0x1409EC8CC (sub_1409EC8CC.c)
 *     sub_1409ECF0C @ 0x1409ECF0C (sub_1409ECF0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409ECCCC(__int64 a1)
{
  __m128i *v1; // rbp
  __int64 v4; // r14
  PVOID v5; // r15
  __m128i v6; // xmm7
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  _DWORD *Pool2; // rsi
  int v10; // edi
  unsigned int *v11; // rax
  unsigned int *v12; // r13
  __int128 v13; // xmm6
  __int64 v14; // rax
  __int64 v15; // r14
  PVOID *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // [rsp+90h] [rbp+8h]
  PVOID P; // [rsp+98h] [rbp+10h] BYREF
  PVOID *v20; // [rsp+A0h] [rbp+18h]

  v1 = *(__m128i **)(a1 + 1088);
  P = 0LL;
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = *(unsigned int *)(a1 + 4);
  v5 = 0LL;
  v6 = v1[1];
  if ( ((v4 * (unsigned int)(*(_DWORD *)(a1 + 232) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v18 = v7 + 18;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v18, 1266119749LL);
  if ( Pool2 )
  {
    Pool2[2] = *(_DWORD *)(a1 + 4);
    Pool2[3] = 16;
    memmove(Pool2 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    v11 = (unsigned int *)sub_140261A20(a1, v4);
    v12 = v11;
    if ( !v11 )
    {
      v10 = -1073741801;
LABEL_23:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v10;
    }
    sub_1402619C4((__int16 *)a1, v11);
    sub_1402E1C2C((__int64)v12, 4);
    v13 = *(_OWORD *)(a1 + 152);
    *(__m128i *)(a1 + 152) = v6;
    sub_1406F120C(a1, v12);
    v12[2] = v12[12];
    *(_OWORD *)(a1 + 152) = v13;
    v10 = sub_1409EC8CC(a1, (char *)v12, (struct _MDL **)&P);
    if ( v10 >= 0 )
    {
      ++Pool2[1];
      v14 = *(_QWORD *)(a1 + 80);
      v5 = P;
      v15 = v14 - 56;
      if ( v14 == a1 + 80 )
        v15 = 0LL;
      if ( v15 )
      {
        v20 = (PVOID *)P;
        while ( 1 )
        {
          v10 = sub_1409EC8CC(a1, (char *)v15, (struct _MDL **)&P);
          if ( v10 < 0 )
            break;
          v16 = v20;
          v20 = (PVOID *)P;
          *v16 = P;
          ++Pool2[1];
          v17 = *(_QWORD *)(v15 + 56);
          v15 = v17 - 56;
          if ( v17 == a1 + 80 )
            v15 = 0LL;
          if ( !v15 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v10 = sub_1409ECF0C(v5, Pool2, v18, v1);
        if ( v10 >= 0 )
        {
          v1->m128i_i64[1] = (__int64)v12;
          v1[2].m128i_i8[1] = 1;
          goto LABEL_21;
        }
      }
    }
    sub_14024E01C(a1, (char *)v12);
LABEL_21:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    goto LABEL_23;
  }
  return (unsigned int)-1073741670;
}
