/*
 * XREFs of sub_1800F9D04 @ 0x1800F9D04
 * Callers:
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 *     sub_1800F881C @ 0x1800F881C (sub_1800F881C.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 * Callees:
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 */

char __fastcall sub_1800F9D04(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 *v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  char *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r12
  __int64 v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // r11
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rbp
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  sub_180047D08((__int64)(a1 + 3), 2 * v7, v4);
  a1[7] = v7;
  LOBYTE(v8) = v7 - 1;
  a1[6] = v7 - 1;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = (char *)(v9 + 2);
    v12 = (__int64)(v9 + 2);
    if ( v9[5] >= 8uLL )
      v12 = *(_QWORD *)v11;
    v8 = sub_18001FFD8(v12, v9[4]);
    v14 = *v5;
    v15 = 2 * (a1[6] & v8);
    if ( *(_QWORD *)(*v5 + 16 * (a1[6] & v8)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (a1[6] & v8)) = v13;
      *(_QWORD *)(v14 + 8 * v15 + 8) = v13;
    }
    else
    {
      v16 = *(_QWORD **)(v14 + 16 * (a1[6] & v8) + 8);
      LOBYTE(v8) = sub_18001FE44(v11, v16 + 2);
      if ( (_BYTE)v8 )
      {
        v18 = *v16;
        if ( *v16 != v17 )
        {
          v19 = *(_QWORD **)(v17 + 8);
          *v19 = v10;
          v20 = (_QWORD *)v10[1];
          *v20 = v18;
          v8 = *(_QWORD *)(v18 + 8);
          *(_QWORD *)v8 = v17;
          *(_QWORD *)(v18 + 8) = v20;
          v10[1] = v19;
          *(_QWORD *)(v17 + 8) = v8;
        }
        *(_QWORD *)(v14 + 8 * v15 + 8) = v17;
      }
      else
      {
        v21 = v16;
        while ( *(_QWORD **)(v14 + 8 * v15) != v21 )
        {
          v16 = (_QWORD *)v16[1];
          v21 = v16;
          if ( sub_18001FE44(v11, v16 + 2) )
          {
            v22 = *v16;
            v23 = *(_QWORD **)(v17 + 8);
            *v23 = v10;
            v24 = (_QWORD *)v10[1];
            *v24 = v22;
            v8 = *(_QWORD *)(v22 + 8);
            *(_QWORD *)v8 = v17;
            *(_QWORD *)(v22 + 8) = v24;
            v10[1] = v23;
            *(_QWORD *)(v17 + 8) = v8;
            goto LABEL_18;
          }
        }
        v25 = *(_QWORD **)(v17 + 8);
        *v25 = v10;
        v26 = (_QWORD *)v10[1];
        *v26 = v21;
        v8 = v21[1];
        *(_QWORD *)v8 = v17;
        v21[1] = v26;
        v10[1] = v25;
        *(_QWORD *)(v17 + 8) = v8;
        *(_QWORD *)(v14 + 8 * v15) = v17;
      }
LABEL_18:
      v5 = a1 + 3;
    }
    v9 = v10;
  }
  return v8;
}
