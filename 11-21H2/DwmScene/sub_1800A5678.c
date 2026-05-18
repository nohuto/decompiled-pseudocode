/*
 * XREFs of sub_1800A5678 @ 0x1800A5678
 * Callers:
 *     sub_1800A5598 @ 0x1800A5598 (sub_1800A5598.c)
 * Callees:
 *     sub_1800A4BFC @ 0x1800A4BFC (sub_1800A4BFC.c)
 */

__int64 __fastcall sub_1800A5678(float *a1, float *a2, float *a3, _OWORD *a4)
{
  float *v5; // rax
  float *v6; // r10
  float *v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  float *v10; // rdx
  float *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  float *v14; // r11

  v5 = a1;
  v6 = a2;
  do
  {
    while ( *v5 > *v6 )
    {
      sub_1800A4BFC(a4, v6);
      a4 = (_OWORD *)(v8 + 16);
      v6 = (float *)(v9 + 16);
      if ( v6 == a3 )
      {
        v10 = v7;
        v11 = v5;
        return sub_1800A5708(v11, v10, a4);
      }
    }
    sub_1800A4BFC(a4, v5);
    a4 = (_OWORD *)(v12 + 16);
    v5 = (float *)(v13 + 16);
  }
  while ( v5 != v14 );
  v10 = a3;
  v11 = v6;
  return sub_1800A5708(v11, v10, a4);
}
