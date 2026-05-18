/*
 * XREFs of sub_1800444BC @ 0x1800444BC
 * Callers:
 *     sub_180046C14 @ 0x180046C14 (sub_180046C14.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_180044338 @ 0x180044338 (sub_180044338.c)
 *     sub_180047E60 @ 0x180047E60 (sub_180047E60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800444BC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 *v9; // rdx
  _QWORD *v10; // r15
  __int64 v11; // rbp
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx
  __int64 **v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+70h] [rbp+18h] BYREF

  v6 = sub_180044338((__int64)a3);
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(__int64 **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v9 == (__int64 *)v11 )
    goto LABEL_10;
  v12 = *(__int64 **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
  while ( *a3 != v9[2] )
  {
    if ( v9 == v12 )
    {
      v11 = (__int64)v9;
      v9 = 0LL;
      goto LABEL_8;
    }
    v9 = (__int64 *)v9[1];
  }
  v11 = *v9;
LABEL_8:
  if ( !v9 )
  {
LABEL_10:
    if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v13 = (__int64 *)sub_180011088(0x28uLL);
    v13[2] = *a3;
    v13[3] = 0LL;
    v13[4] = 0LL;
    v13[3] = a3[1];
    v13[4] = a3[2];
    a3[1] = 0LL;
    a3[2] = 0LL;
    v14 = *(_QWORD *)(a1 + 16);
    v15 = v14 + 1;
    if ( v14 + 1 < 0 )
      v16 = (float)(int)(v15 & 1 | (v15 >> 1)) + (float)(int)(v15 & 1 | (v15 >> 1));
    else
      v16 = (float)(int)v15;
    v17 = *(_QWORD *)(a1 + 56);
    if ( v17 < 0 )
    {
      v19 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
      v18 = (float)(int)v19 + (float)(int)v19;
    }
    else
    {
      v18 = (float)(int)v17;
    }
    if ( (float)(v16 / v18) > *(float *)a1 )
    {
      sub_180047E60(a1);
      v20 = *(_QWORD *)(a1 + 24);
      v21 = *(_QWORD **)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
      if ( v21 == (_QWORD *)*v10 )
      {
        v27 = (_QWORD *)*v10;
      }
      else
      {
        while ( v13[2] != v21[2] )
        {
          if ( v21 == *(_QWORD **)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
          {
            v27 = v21;
            goto LABEL_26;
          }
          v21 = (_QWORD *)v21[1];
        }
        v27 = (_QWORD *)*v21;
      }
LABEL_26:
      v14 = *(_QWORD *)(a1 + 16);
      v11 = (__int64)v27;
    }
    v28 = v11;
    v29 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(a1 + 16) = v14 + 1;
    sub_180030740(v13, &v28);
    sub_180030740(v13 + 1, &v29);
    *v22 = v13;
    *(_QWORD *)(v11 + 8) = v13;
    v23 = *(_QWORD *)(a1 + 24);
    v24 = 2 * (v7 & *(_QWORD *)(a1 + 48));
    v25 = *(_QWORD *)(v23 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
    if ( v25 == *v10 )
    {
      *(_QWORD *)(v23 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v13;
LABEL_32:
      *(_QWORD *)(v23 + 8 * v24 + 8) = v13;
      goto LABEL_33;
    }
    if ( v25 == v11 )
    {
      *(_QWORD *)(v23 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v13;
    }
    else if ( *(__int64 ***)(v23 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) == v22 )
    {
      goto LABEL_32;
    }
LABEL_33:
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
