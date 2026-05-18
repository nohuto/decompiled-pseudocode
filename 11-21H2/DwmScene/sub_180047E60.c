/*
 * XREFs of sub_180047E60 @ 0x180047E60
 * Callers:
 *     sub_1800444BC @ 0x1800444BC (sub_1800444BC.c)
 * Callees:
 *     _o_ceilf @ 0x18000C00C (_o_ceilf.c)
 *     sub_180044338 @ 0x180044338 (sub_180044338.c)
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 */

__int64 __fastcall sub_180047E60(__int64 a1)
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
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 i; // r10
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  __int64 *v26; // rdi
  __int64 v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  __int64 *v31; // rcx

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
  v12 = v4 - 1;
  v13 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v14, v12 | 1);
  v15 = 1LL << ((unsigned __int8)v14 + 1);
  sub_180047D08(a1 + 24, 2 * v15, v13);
  *(_QWORD *)(a1 + 56) = v15;
  result = v15 - 1;
  *(_QWORD *)(a1 + 48) = v15 - 1;
  for ( i = **(_QWORD **)(a1 + 8); i != v13; i = v19 )
  {
    result = sub_180044338(i + 16);
    v20 = *(_QWORD *)(a1 + 24);
    v21 = 2 * (*(_QWORD *)(a1 + 48) & result);
    if ( *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a1 + 48) & result)) == v13 )
    {
      *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a1 + 48) & result)) = v18;
LABEL_19:
      *(_QWORD *)(v20 + 8 * v21 + 8) = v18;
      continue;
    }
    result = *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a1 + 48) & result) + 8);
    v22 = *(_QWORD *)(v18 + 16);
    if ( v22 == *(_QWORD *)(result + 16) )
    {
      v23 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v18 )
      {
        v24 = *(_QWORD **)(v18 + 8);
        *v24 = v19;
        v25 = *(_QWORD **)(v19 + 8);
        *v25 = v23;
        result = *(_QWORD *)(v23 + 8);
        *(_QWORD *)result = v18;
        *(_QWORD *)(v23 + 8) = v25;
        *(_QWORD *)(v19 + 8) = v24;
        *(_QWORD *)(v18 + 8) = result;
      }
      goto LABEL_19;
    }
    while ( 1 )
    {
      v26 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v20 + 8 * v21) == result )
        break;
      result = *v26;
      if ( v22 == *(_QWORD *)(*v26 + 16) )
      {
        v27 = *(_QWORD *)result;
        v28 = *(_QWORD **)(v18 + 8);
        *v28 = v19;
        v29 = *(_QWORD **)(v19 + 8);
        *v29 = v27;
        result = *(_QWORD *)(v27 + 8);
        *(_QWORD *)result = v18;
        *(_QWORD *)(v27 + 8) = v29;
        *(_QWORD *)(v19 + 8) = v28;
        *(_QWORD *)(v18 + 8) = result;
        goto LABEL_27;
      }
    }
    v30 = *(_QWORD **)(v18 + 8);
    *v30 = v19;
    v31 = *(__int64 **)(v19 + 8);
    *v31 = result;
    result = *v26;
    *(_QWORD *)result = v18;
    *v26 = (__int64)v31;
    *(_QWORD *)(v19 + 8) = v30;
    *(_QWORD *)(v18 + 8) = result;
    *(_QWORD *)(v20 + 8 * v21) = v18;
LABEL_27:
    ;
  }
  return result;
}
