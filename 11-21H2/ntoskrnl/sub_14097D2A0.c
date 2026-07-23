/*
 * XREFs of sub_14097D2A0 @ 0x14097D2A0
 * Callers:
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 *     sub_14097E270 @ 0x14097E270 (sub_14097E270.c)
 * Callees:
 *     sub_140200CF0 @ 0x140200CF0 (sub_140200CF0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1405AA4C8 @ 0x1405AA4C8 (sub_1405AA4C8.c)
 *     sub_1405AAF14 @ 0x1405AAF14 (sub_1405AAF14.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 *     sub_1405AB148 @ 0x1405AB148 (sub_1405AB148.c)
 */

__int64 __fastcall sub_14097D2A0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r11
  unsigned __int64 v13; // r15
  __int64 v14; // r10
  __int64 v15; // r12
  unsigned int v16; // r8d
  __int64 v17; // r11
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  unsigned int v29; // r10d
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned __int64 v35; // r14
  int v37; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+24h] [rbp-74h]
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-60h]
  const signed __int64 *v41; // [rsp+40h] [rbp-58h]
  unsigned __int64 v44; // [rsp+B0h] [rbp+18h]
  unsigned int v46; // [rsp+C8h] [rbp+30h]

  v44 = a3;
  v7 = 0LL;
  v8 = a4;
  v9 = a3;
  v37 = 0;
  v10 = *(_QWORD *)(a6 + 24);
  v11 = *(_DWORD *)(v10 + 48) & 0x2200000;
  v38 = v11;
  v46 = sub_140200CF0(v10);
  v39 = 0LL;
  v13 = sub_1405AAF90(v12);
  v15 = a7;
  v18 = sub_1405AB030(v14);
  v19 = 0LL;
  if ( !v18 )
    v18 = v13;
  v40 = *(_QWORD *)(v17 + 24);
  v41 = *(const signed __int64 **)(v17 + 32);
  if ( v9 )
  {
    v20 = a2;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v20 + 8 * v19);
      if ( !v8 )
        goto LABEL_19;
      if ( v21 )
        break;
      ++v19;
LABEL_43:
      if ( v19 >= v9 )
      {
        v7 = v39;
        goto LABEL_45;
      }
    }
    v15 = sub_140313C70(*(_QWORD *)(v8 + 8 * v19));
    if ( v22 >= (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) << 12
      && v22 <= (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF) )
    {
LABEL_19:
      v29 = v46;
    }
    else
    {
      v24 = sub_1405AAF14(v22);
      v25 = sub_1405AB030((__int64)v24);
      if ( !v25 )
        v25 = v13;
      if ( v25 != v18 )
        goto LABEL_41;
      v27 = *(_QWORD *)(v26 + 24);
      if ( (*(_DWORD *)(v27 + 48) & 0x2200000) == 0x2200000 )
      {
        if ( v11 != 35651584 )
          goto LABEL_41;
      }
      else if ( v11 == 35651584 )
      {
        goto LABEL_41;
      }
      v28 = sub_140200CF0(v27);
      v29 = v46;
      if ( v46 != v28 )
        goto LABEL_41;
    }
    if ( v21 / v13 < v40 && ((v18 - 1) & v21) == 0 )
    {
      v30 = 0LL;
      if ( v18 / v13 )
      {
        while ( _bittest64(v41, v21 / v13 + v30) )
        {
          if ( ++v30 >= v18 / v13 )
            goto LABEL_25;
        }
        goto LABEL_41;
      }
LABEL_25:
      v16 = v37;
      v31 = 48 * v21 - 0x220000000000LL;
      if ( v37 < 0 )
      {
        v35 = 0LL;
        if ( v18 )
        {
          do
          {
            sub_1405AA4C8(v30, v31, &v39, 0);
            v31 += 48 * v13;
            v35 += v13;
          }
          while ( v35 < v18 );
          v16 = v37;
LABEL_30:
          v9 = v44;
        }
      }
      else
      {
        v32 = 0LL;
        if ( !v18 )
        {
          v9 = v44;
          goto LABEL_32;
        }
        v33 = 48 * v13;
        while ( 1 )
        {
          v37 = sub_1405AB148(a1, v31, v29, v15);
          v16 = v37;
          if ( v37 < 0 )
            break;
          v29 = v46;
          v33 = 48 * v13;
          v32 += v13;
          v31 += 48 * v13;
          if ( v32 >= v18 )
            goto LABEL_30;
        }
        if ( v32 )
        {
          do
          {
            v31 -= v33;
            sub_1405AA4C8(v34, v31, &v39, 0);
            v32 -= v13;
          }
          while ( v32 );
          v16 = v37;
        }
        v15 = a7 - 8 * v18;
        v44 = v19;
        v9 = v19;
        v19 = -1LL;
      }
      v8 = a4;
LABEL_32:
      v15 += 8 * v18;
      v11 = v38;
      ++v19;
LABEL_42:
      v20 = a2;
      goto LABEL_43;
    }
LABEL_41:
    v16 = -1073741800;
    v44 = v19;
    v9 = v19;
    v37 = -1073741800;
    v19 = 0LL;
    goto LABEL_42;
  }
LABEL_45:
  *a5 = v7;
  return v16;
}
