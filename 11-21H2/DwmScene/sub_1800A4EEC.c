/*
 * XREFs of sub_1800A4EEC @ 0x1800A4EEC
 * Callers:
 *     sub_1800A4724 @ 0x1800A4724 (sub_1800A4724.c)
 * Callees:
 *     sub_1800A4C1C @ 0x1800A4C1C (sub_1800A4C1C.c)
 *     sub_1800A5708 @ 0x1800A5708 (sub_1800A5708.c)
 */

void *__fastcall sub_1800A4EEC(float *Src, __int64 a2, __int64 a3, float *a4)
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

  v6 = sub_1800A5708(a2, a3, a4);
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
      if ( *v12 > *v11 )
        break;
      v13 = *(_OWORD *)v12;
      v12 -= 4;
      *v10 = v13;
      if ( a4 == v12 )
      {
        *(v10 - 1) = *(_OWORD *)v11;
        result = sub_1800A4C1C(Src, (__int64)v11, (__int64)(v10 - 1));
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
  return sub_1800A4C1C(a4, (__int64)v12, (__int64)(v10 - 1));
}
