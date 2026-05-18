/*
 * XREFs of sub_180094E38 @ 0x180094E38
 * Callers:
 *     sub_180094674 @ 0x180094674 (sub_180094674.c)
 * Callees:
 *     sub_180094AAC @ 0x180094AAC (sub_180094AAC.c)
 *     sub_180095530 @ 0x180095530 (sub_180095530.c)
 */

void *__fastcall sub_180094E38(float *Src, __int64 a2, __int64 a3, float *a4)
{
  __int64 v6; // rax
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int64 v9; // r10
  _OWORD *v10; // r10
  float *v11; // r11
  float *v12; // rdx
  __int128 v13; // xmm0
  void *result; // rax

  v6 = sub_180095530(a2, a3, a4);
  v8 = *(_OWORD *)(v7 - 16);
  v10 = (_OWORD *)(v9 - 16);
  v11 = (float *)(v7 - 32);
  v12 = (float *)(v6 - 16);
  *v10 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      --v10;
      if ( *v11 > *v12 )
        break;
      v13 = *(_OWORD *)v12;
      v12 -= 4;
      *v10 = v13;
      if ( a4 == v12 )
      {
        *(v10 - 1) = *(_OWORD *)v11;
        result = sub_180094AAC(Src, (__int64)v11, (__int64)(v10 - 1));
        *(_OWORD *)Src = *(_OWORD *)a4;
        return result;
      }
    }
    *v10 = *(_OWORD *)v11;
    if ( Src == v11 )
      break;
    v11 -= 4;
  }
  *(v10 - 1) = *(_OWORD *)v12;
  return sub_180094AAC(a4, (__int64)v12, (__int64)(v10 - 1));
}
