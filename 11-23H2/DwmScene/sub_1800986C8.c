/*
 * XREFs of sub_1800986C8 @ 0x1800986C8
 * Callers:
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001EA20 @ 0x18001EA20 (sub_18001EA20.c)
 *     sub_180098544 @ 0x180098544 (sub_180098544.c)
 *     sub_1800989E0 @ 0x1800989E0 (sub_1800989E0.c)
 *     sub_18009B788 @ 0x18009B788 (sub_18009B788.c)
 *     sub_18009B824 @ 0x18009B824 (sub_18009B824.c)
 *     sub_18009B9FC @ 0x18009B9FC (sub_18009B9FC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800986C8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a3;
  if ( *(_QWORD *)(a3 + 24) >= 0x10uLL )
    v5 = *(_QWORD *)a3;
  v6 = sub_18001EA20(v5, *(_QWORD *)(a3 + 16));
  sub_180098544(v7, v18, (size_t *)a3, v6);
  if ( v18[1] )
  {
    *(_QWORD *)a2 = v18[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1801D8A60 == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v17[0] = &qword_1801D8A58;
    v8 = sub_18001090C(0x38uLL);
    v17[1] = v8;
    sub_180017648((_QWORD *)(v8 + 16), a3);
    *(_BYTE *)(v8 + 48) = *(_BYTE *)(a3 + 32);
    v9 = qword_1801D8A60 + 1;
    if ( qword_1801D8A60 + 1 < 0 )
      v10 = (float)(int)(v9 & 1 | (v9 >> 1)) + (float)(int)(v9 & 1 | (v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = qword_1801D8A88;
    if ( qword_1801D8A88 < 0 )
    {
      v11 = qword_1801D8A88 & 1;
      v12 = (float)(int)(v11 | ((unsigned __int64)qword_1801D8A88 >> 1))
          + (float)(int)(v11 | ((unsigned __int64)qword_1801D8A88 >> 1));
    }
    else
    {
      v12 = (float)(int)qword_1801D8A88;
    }
    if ( (float)(v10 / v12) > *(float *)&dword_1801D8A50 )
    {
      v13 = sub_18009B788(v11, v9);
      sub_18009B824(v14, v13);
      *(_OWORD *)v18 = *(_OWORD *)sub_180098544(v15, v18, (size_t *)(v8 + 16), v6);
    }
    *(_QWORD *)a2 = sub_18009B9FC(v11, v6, v18[0], v8, v17[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800989E0(v17);
  }
  return a2;
}
