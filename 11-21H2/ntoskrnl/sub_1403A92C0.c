/*
 * XREFs of sub_1403A92C0 @ 0x1403A92C0
 * Callers:
 *     sub_1403A8E50 @ 0x1403A8E50 (sub_1403A8E50.c)
 * Callees:
 *     sub_1403A95D0 @ 0x1403A95D0 (sub_1403A95D0.c)
 */

__int64 __fastcall sub_1403A92C0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  _DWORD *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 result; // rax
  bool v17; // cc
  _DWORD *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r14
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  __int128 v27; // rax
  __int64 v28; // r11
  bool v29; // cc
  __int128 v30; // rax
  __int128 v31; // rax
  __int64 v32; // [rsp+60h] [rbp+8h]

  v4 = *(_DWORD **)a1;
  v6 = *(_DWORD **)(a1 + 8);
  v7 = *(_DWORD **)(a1 + 16);
  v8 = *v4 + v4[2];
  v9 = v4[1] + v4[3];
  v10 = v6[1] + v6[3];
  v32 = *v7 + v7[2];
  v11 = v8 << 16;
  v12 = (__int64)(v7[1] + v7[3]) << 16;
  v13 = v9 << 16;
  v14 = v10 << 16;
  v15 = v32 << 16;
  result = (__int64)a2 << 16;
  if ( v9 << 16 == v12 )
  {
    if ( v13 == result )
      goto LABEL_11;
  }
  else if ( v13 == result )
  {
    goto LABEL_7;
  }
  if ( v12 == result )
  {
LABEL_7:
    ++result;
    if ( *(_BYTE *)(a1 + 24) != 1 )
      goto LABEL_8;
LABEL_26:
    *a4 = 0x7FFFFFFF;
    v29 = v13 < result;
    if ( v13 > result )
    {
      if ( v12 > result )
        goto LABEL_28;
      v29 = v13 < result;
    }
    if ( !v29 || v12 >= result )
    {
      v30 = v11 + (v15 - v11) * (result - v13) / (v12 - v13);
      result = (__int64)(WORD4(v30) + (_QWORD)v30) >> 16;
      *a3 = result;
      return result;
    }
LABEL_28:
    *a3 = 0x7FFFFFFF;
    return result;
  }
  if ( *(_BYTE *)(a1 + 24) == 1 )
    goto LABEL_26;
  if ( v14 == result )
    ++result;
LABEL_8:
  v17 = v13 < result;
  if ( v13 > result )
  {
    if ( v14 <= result )
      goto LABEL_18;
    if ( v12 > result )
      goto LABEL_11;
    v17 = v13 < result;
  }
  if ( v17 && v14 < result && v12 < result )
    goto LABEL_11;
LABEL_18:
  if ( !(v13 + v12 - ((__int64)(v6[1] + v6[3]) << 17)) )
  {
    v18 = a4;
    v31 = v11 + (v15 - v11) * (result - v13) / (v12 - v13);
    result = (__int64)(WORD4(v31) + (_QWORD)v31) >> 16;
    *a3 = result;
    goto LABEL_12;
  }
  v19 = *v6 + v6[2];
  result = 2 * v10;
  v20 = v9 + v7[1] + v7[3] - 2 * v10;
  v21 = 2 * (v10 - v9);
  v22 = v21 * v21 - 4 * v20 * (v9 - a2);
  if ( v22 < 0 )
  {
LABEL_11:
    v18 = a4;
    *a3 = 0x7FFFFFFF;
LABEL_12:
    *v18 = 0x7FFFFFFF;
    return result;
  }
  v23 = sub_1403A95D0(v22);
  v24 = -65536 * v21;
  v25 = (v24 + v23) / (2 * v20);
  v26 = (v24 - v23) / (2 * v20);
  v27 = (__int64)(v32 * v25 * v25 + (0x10000 - v25) * (v8 * (0x10000 - v25) + 2 * v19 * v25));
  *(_QWORD *)&v27 = DWORD2(v27) + (_QWORD)v27;
  v28 = (__int64)v27 >> 32;
  *a3 = DWORD1(v27);
  v18 = a4;
  result = (__int64)(v32 * v26 * v26 + (0x10000 - v26) * (v8 * (0x10000 - v26) + 2 * v19 * v26)) / 0x100000000LL;
  *a4 = result;
  if ( v25 > 0x10000 )
  {
    *a3 = 0x7FFFFFFF;
    LODWORD(v28) = 0x7FFFFFFF;
  }
  if ( v26 > 0x10000 )
  {
    *a4 = 0x7FFFFFFF;
    result = 0x7FFFFFFFLL;
  }
  if ( (int)v28 > (int)result )
  {
    *a3 = result;
    *a4 = v28;
    return result;
  }
  if ( (_DWORD)v28 == (_DWORD)result )
    goto LABEL_12;
  return result;
}
