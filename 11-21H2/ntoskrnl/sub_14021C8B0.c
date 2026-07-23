/*
 * XREFs of sub_14021C8B0 @ 0x14021C8B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14021C8B0(__int64 a1, __int64 a2, __m128i *a3, unsigned int a4, _DWORD *a5)
{
  char v5; // r14
  __m128i *v7; // rsi
  bool v8; // zf
  unsigned int v9; // ebx
  unsigned int v10; // edi
  int v11; // ebx
  __int32 v12; // ebx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v17; // ecx
  __int64 v18; // xmm0_8
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // ecx
  __m128i v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+30h] [rbp-38h]

  v5 = 0;
  LODWORD(v28) = 0;
  v7 = a3;
  v8 = *a5 == -1;
  v27 = 0LL;
  if ( !v8 )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) != -10 )
  {
    v18 = a3[1].m128i_i64[0];
    v19 = _mm_cvtsi128_si32(*a3);
    v27 = *a3;
    v28 = v18;
    v20 = v19 - 4;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          return 3221225485LL;
        _BitScanForward(&v22, v27.m128i_u32[3]);
        v27.m128i_i32[3] = 1 << v22;
      }
      else
      {
        _BitScanForward(&v23, v27.m128i_u32[2]);
        v27.m128i_i32[2] = 1 << v23;
      }
    }
    v7 = &v27;
  }
  v9 = 0;
  v10 = (unsigned __int8)a4;
  switch ( v7->m128i_i32[0] )
  {
    case 6:
      v10 = (unsigned __int8)a4 | 0x800;
      v12 = v7->m128i_i32[2];
      if ( !byte_140D011A2 )
      {
        v11 = v7->m128i_i32[3] & 0xF | (16 * v12);
LABEL_12:
        v9 = v11 << 24;
        break;
      }
      v9 = (unsigned __int16)v7->m128i_i32[3] | (v12 << 16);
      break;
    case 1:
      v10 = (unsigned __int8)a4 | 0x80000;
      break;
    case 2:
      v10 = (unsigned __int8)a4 | 0xC0000;
      break;
    case 3:
      v5 = byte_140C54BE8;
      v10 = (unsigned __int8)a4 | 0x40000;
      break;
    case 4:
      v24 = v7->m128i_u32[2];
      v9 = v24;
      if ( !byte_140D011A2 )
      {
        v9 = v24 << 24;
        if ( v24 != -1 && byte_140C54BE8 && (unsigned int)sub_14042A5E0(32LL, a2, a3) >> 24 == v7->m128i_i32[2] )
          v5 = 1;
      }
      break;
    case 5:
      v11 = v7->m128i_i32[2];
      v10 = (unsigned __int8)a4 | 0x800;
      goto LABEL_12;
    default:
      return 3221225485LL;
  }
  v13 = a5[1];
  if ( v13 == 1 )
    goto LABEL_14;
  v17 = v13 - 2;
  if ( !v17 )
  {
    v10 |= 0x400u;
    goto LABEL_14;
  }
  v25 = v17 - 1;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( v26 )
    {
      if ( v26 == 3 )
      {
        v10 |= 0x500u;
        goto LABEL_14;
      }
      return 3221225485LL;
    }
    v10 |= 0x700u;
  }
  else
  {
    v10 |= 0x200u;
  }
LABEL_14:
  sub_14042A5E0(v9, v10, a3);
  if ( v5 && a5[1] == 1 )
  {
    while ( ((unsigned int)sub_14042A5E0(((a4 >> 1) & 0x7FFFFFF0) + 512, v14, v15) & (1 << (a4 & 0x1F))) == 0 )
      ;
  }
  return 0LL;
}
