/*
 * XREFs of sub_180079400 @ 0x180079400
 * Callers:
 *     sub_18006C060 @ 0x18006C060 (sub_18006C060.c)
 *     sub_180079984 @ 0x180079984 (sub_180079984.c)
 * Callees:
 *     _o_ceilf @ 0x18000C00C (_o_ceilf.c)
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 *     sub_180078A68 @ 0x180078A68 (sub_180078A68.c)
 */

char __fastcall sub_180079400(__int64 a1)
{
  __int64 v1; // rdx
  bool v2; // sf
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  float v6; // xmm0_4
  float v7; // xmm0_4
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 *v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // r11
  char *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // r15
  __int64 v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rbp
  __int64 v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 + 1 < 0;
  v3 = v1 + 1;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    v6 = (float)(int)(v3 & 1 | (v3 >> 1)) + (float)(int)(v3 & 1 | (v3 >> 1));
  else
    v6 = (float)(int)v3;
  v7 = v6 / *(float *)a1;
  o_ceilf();
  v8 = 0LL;
  if ( v7 >= 9.223372e18 )
  {
    v7 = v7 - 9.223372e18;
    if ( v7 < 9.223372e18 )
      v8 = 0x8000000000000000uLL;
  }
  v9 = v8 + (unsigned int)(int)v7;
  v10 = 8LL;
  if ( v9 > 8 )
    v10 = v9;
  if ( v4 < v10 )
  {
    if ( v4 >= 0x200 || (v4 *= 8LL, v4 < v10) )
      v4 = v10;
  }
  _BitScanReverse64(&v11, 0xFFFFFFFFFFFFFFFuLL);
  if ( v4 > 1LL << v11 )
    std::_Xlength_error("invalid hash bucket count");
  v12 = *(_QWORD *)(a1 + 8);
  v13 = (__int64 *)(a1 + 24);
  _BitScanReverse64(&v14, (v4 - 1) | 1);
  v15 = 1LL << ((unsigned __int8)v14 + 1);
  sub_180078A68(a1 + 24, 2 * v15, v12);
  *(_QWORD *)(a1 + 56) = v15;
  LOBYTE(v16) = v15 - 1;
  *(_QWORD *)(a1 + 48) = v15 - 1;
  v17 = **(_QWORD ***)(a1 + 8);
  while ( 1 )
  {
    v18 = v17;
    if ( v17 == (_QWORD *)v12 )
      return v16;
    v17 = (_QWORD *)*v17;
    v19 = (char *)(v18 + 2);
    v20 = (__int64)(v18 + 2);
    if ( v18[5] >= 8uLL )
      v20 = *(_QWORD *)v19;
    v16 = sub_18001FFD8(v20, v18[4]);
    v22 = *v13;
    v23 = 2 * (*(_QWORD *)(a1 + 48) & v16);
    if ( *(_QWORD *)(v22 + 16 * (*(_QWORD *)(a1 + 48) & v16)) == v12 )
    {
      *(_QWORD *)(v22 + 16 * (*(_QWORD *)(a1 + 48) & v16)) = v21;
LABEL_21:
      *(_QWORD *)(v22 + 8 * v23 + 8) = v21;
      goto LABEL_30;
    }
    v24 = *(_QWORD **)(v22 + 16 * (*(_QWORD *)(a1 + 48) & v16) + 8);
    LOBYTE(v16) = sub_18001FE44(v19, v24 + 2);
    if ( (_BYTE)v16 )
    {
      v25 = *v24;
      if ( *v24 != v21 )
      {
        v26 = *(_QWORD **)(v21 + 8);
        *v26 = v17;
        v27 = (_QWORD *)v17[1];
        *v27 = v25;
        v16 = *(_QWORD *)(v25 + 8);
        *(_QWORD *)v16 = v21;
        *(_QWORD *)(v25 + 8) = v27;
        v17[1] = v26;
        *(_QWORD *)(v21 + 8) = v16;
      }
      goto LABEL_21;
    }
    v28 = v24;
    while ( *(_QWORD **)(v22 + 8 * v23) != v28 )
    {
      v24 = (_QWORD *)v24[1];
      v28 = v24;
      if ( sub_18001FE44(v19, v24 + 2) )
      {
        v29 = *v24;
        v30 = *(_QWORD **)(v21 + 8);
        *v30 = v17;
        v31 = (_QWORD *)v17[1];
        *v31 = v29;
        v16 = *(_QWORD *)(v29 + 8);
        *(_QWORD *)v16 = v21;
        *(_QWORD *)(v29 + 8) = v31;
        v17[1] = v30;
        *(_QWORD *)(v21 + 8) = v16;
        goto LABEL_30;
      }
    }
    v32 = *(_QWORD **)(v21 + 8);
    *v32 = v17;
    v33 = (_QWORD *)v17[1];
    *v33 = v28;
    v16 = v28[1];
    *(_QWORD *)v16 = v21;
    v28[1] = v33;
    v17[1] = v32;
    *(_QWORD *)(v21 + 8) = v16;
    *(_QWORD *)(v22 + 8 * v23) = v21;
LABEL_30:
    v13 = (__int64 *)(a1 + 24);
  }
}
