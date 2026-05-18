/*
 * XREFs of sub_180094C48 @ 0x180094C48
 * Callers:
 *     sub_180094630 @ 0x180094630 (sub_180094630.c)
 * Callees:
 *     sub_180094ACC @ 0x180094ACC (sub_180094ACC.c)
 *     sub_180095530 @ 0x180095530 (sub_180095530.c)
 */

_OWORD *__fastcall sub_180094C48(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  float *v6; // r11
  _OWORD *v7; // rdx
  float *v8; // r9
  _OWORD *v9; // r10
  _OWORD *v10; // r10
  float *v11; // rcx
  void *v12; // r8
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm6
  _OWORD *result; // rax

  v5 = sub_180095530(a1, a2, a4);
  v8 = (float *)(v7 + 1);
  *v9 = *v7;
  v10 = v9 + 1;
  v11 = (float *)(v5 - 16);
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v10 + 1;
      if ( *v8 > *v6 )
        break;
      v14 = *(_OWORD *)v6;
      v6 += 4;
      *v10++ = v14;
      if ( v6 == v11 )
      {
        v15 = *(_OWORD *)v11;
        result = (_OWORD *)sub_180094ACC(v8, a3, v12);
        *result = v15;
        return result;
      }
    }
    v13 = *(_OWORD *)v8;
    v8 += 4;
    *v10 = v13;
    if ( v8 == (float *)a3 )
      break;
    ++v10;
  }
  return (_OWORD *)sub_180094ACC(v6, v5, v12);
}
