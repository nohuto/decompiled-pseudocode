/*
 * XREFs of sub_1800A4DAC @ 0x1800A4DAC
 * Callers:
 *     sub_1800A4724 @ 0x1800A4724 (sub_1800A4724.c)
 * Callees:
 *     sub_1800A4C3C @ 0x1800A4C3C (sub_1800A4C3C.c)
 *     sub_1800A5708 @ 0x1800A5708 (sub_1800A5708.c)
 */

_OWORD *__fastcall sub_1800A4DAC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  float *v6; // r11
  _OWORD *v7; // r9
  _OWORD *v8; // r10
  _OWORD *v9; // r10
  float *v10; // rcx
  float *v11; // r9
  void *v12; // r8
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm6
  _OWORD *result; // rax

  v5 = sub_1800A5708(a1, a2, a4);
  *v8 = *v7;
  v9 = v8 + 1;
  v10 = (float *)(v5 - 16);
  v11 = (float *)(v7 + 1);
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v9 + 1;
      if ( *v11 > *v6 )
        break;
      v14 = *(_OWORD *)v6;
      v6 += 4;
      *v9++ = v14;
      if ( v6 == v10 )
      {
        v15 = *(_OWORD *)v10;
        result = (_OWORD *)sub_1800A4C3C(v11, a3, v12);
        *result = v15;
        return result;
      }
    }
    v13 = *(_OWORD *)v11;
    v11 += 4;
    *v9 = v13;
    if ( v11 == (float *)a3 )
      break;
    ++v9;
  }
  return (_OWORD *)sub_1800A4C3C(v6, v5, v12);
}
