/*
 * XREFs of sub_1402DC668 @ 0x1402DC668
 * Callers:
 *     sub_1402DC420 @ 0x1402DC420 (sub_1402DC420.c)
 *     sub_1402DC668 @ 0x1402DC668 (sub_1402DC668.c)
 * Callees:
 *     sub_1402DC668 @ 0x1402DC668 (sub_1402DC668.c)
 *     sub_1402DCA4C @ 0x1402DCA4C (sub_1402DCA4C.c)
 *     sub_1402DCA80 @ 0x1402DCA80 (sub_1402DCA80.c)
 *     sub_1402DCAC0 @ 0x1402DCAC0 (sub_1402DCAC0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402DC668(
        int *a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        unsigned int a11)
{
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // r12
  int v17; // eax
  int v18; // r11d
  int v19; // r10d
  __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  int v23; // r9d
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rsi
  int v28; // edi
  unsigned int v30; // r10d
  int v31; // eax
  unsigned int v33; // [rsp+78h] [rbp-31h]
  unsigned int v34; // [rsp+7Ch] [rbp-2Dh] BYREF
  unsigned int v35; // [rsp+80h] [rbp-29h]
  int v36; // [rsp+84h] [rbp-25h]
  __int64 v37; // [rsp+88h] [rbp-21h] BYREF
  __int64 v38; // [rsp+90h] [rbp-19h]
  unsigned int v43; // [rsp+140h] [rbp+97h]

  v12 = 0LL;
  v37 = a10;
  v13 = 0LL;
  v14 = 0LL;
  v34 = a11;
  v15 = 1;
  v16 = 0LL;
  v17 = *a1;
  v18 = a4;
  v19 = a3;
  if ( (unsigned int)*a1 > 1 )
  {
    if ( v17 != 2 )
      return v15;
    v27 = *((_QWORD *)a1 + 1);
    v28 = sub_1402DC668(
            *(_QWORD *)(v27 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v27 + 24),
            *(_DWORD *)(v27 + 16),
            a10,
            a11);
    if ( v28 == 1 )
      return v15;
    if ( *(_BYTE *)v27 == 38 )
    {
      if ( !v28 )
        return 0;
    }
    else if ( v28 == 2 && *(_BYTE *)v27 == 124 )
    {
      return 2;
    }
    v31 = sub_1402DC668(
            *(_QWORD *)(v27 + 32),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v27 + 48),
            *(_DWORD *)(v27 + 40),
            a10,
            a11);
    if ( v31 == 1 )
      return v15;
    if ( *(_BYTE *)v27 == 38 )
    {
      if ( !v28 || !v31 )
        return 0;
    }
    else
    {
      if ( *(_BYTE *)v27 != 124 )
        return v15;
      if ( !v28 && !v31 )
        return 0;
    }
    return 2;
  }
  v20 = *((_QWORD *)a1 + 1);
  if ( v17 )
  {
    v12 = *((_QWORD *)a1 + 1);
    if ( !*(_BYTE *)(v20 + 20) )
      return v15;
    v30 = *(_DWORD *)(v20 + 48);
    v22 = *(_DWORD *)(v20 + 40);
    v21 = *(_DWORD *)(v12 + 44);
    v43 = v30;
    v19 = a3;
  }
  else
  {
    if ( !*(_QWORD *)(v20 + 16) )
      return v15;
    v21 = *(_DWORD *)(v20 + 60);
    v43 = *(_DWORD *)(v20 + 64);
    v22 = *(_DWORD *)(v20 + 56);
  }
  v33 = v21;
  v23 = a1[4];
  v35 = v22;
  v36 = v23;
  if ( v23 && (v38 = *((_QWORD *)a1 + 3)) != 0 || (v38 = a8, v36 = a9, a8) )
  {
    if ( v22 )
    {
      if ( !is_mul_ok(v22, 8uLL) )
        return v15;
      v13 = sub_1402DCA80(8LL * v22, &v37, &v34);
      if ( !v13 )
        return v15;
    }
    if ( v33 )
    {
      if ( !is_mul_ok(v33, 4uLL) )
        goto LABEL_25;
      v16 = sub_1402DCA80(4LL * v33, &v37, &v34);
      if ( !v16 )
        goto LABEL_25;
    }
    v24 = v43;
    if ( v43 )
    {
      if ( !is_mul_ok(v43, 8uLL) || (v14 = sub_1402DCA80(8LL * v43, &v37, &v34)) == 0 )
      {
        v26 = a11;
LABEL_23:
        if ( v16 )
          sub_1402DCA4C(v16, a10, v26);
LABEL_25:
        if ( v13 )
          sub_1402DCA4C(v13, a10, a11);
        return v15;
      }
      v24 = v43;
    }
    if ( (unsigned __int8)sub_1402DCAC0(v38, v36, a2, a3, a4, a5, a6, a7, v13, v35, v16, v33, v14, v24) )
    {
      if ( *a1 )
        v25 = sub_1402DC668(*(_QWORD *)(v12 + 96), v13, v35, v16, v33, v14, v43, 0LL, 0, v37, v34);
      else
        v25 = sub_14042A5E0(v14, v43);
      v15 = v25;
    }
    v26 = a11;
    if ( v14 )
      sub_1402DCA4C(v14, a10, a11);
    goto LABEL_23;
  }
  if ( v17 )
    return (unsigned int)sub_1402DC668(*(_QWORD *)(v12 + 96), a2, v19, v18, a5, a6, a7, 0LL, 0, a10, a11);
  else
    return (unsigned int)sub_14042A5E0(a6, a7);
}
