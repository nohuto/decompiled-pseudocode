/*
 * XREFs of sub_1800DA3D0 @ 0x1800DA3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_1800D78AC @ 0x1800D78AC (sub_1800D78AC.c)
 *     sub_1800D7B74 @ 0x1800D7B74 (sub_1800D7B74.c)
 *     sub_1800D7E3C @ 0x1800D7E3C (sub_1800D7E3C.c)
 *     sub_1800D8104 @ 0x1800D8104 (sub_1800D8104.c)
 *     sub_1800D83CC @ 0x1800D83CC (sub_1800D83CC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800DA3D0(__int64 a1, _QWORD *a2, __int128 *a3)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 *v13; // rax
  __int64 v14; // rdx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 *v17; // rax
  __int64 v18; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int64 *v21; // rax
  __int64 v22; // rdx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 *v25; // rax
  __int128 v27; // [rsp+38h] [rbp-39h] BYREF
  __int128 v28; // [rsp+48h] [rbp-29h] BYREF
  __int128 v29; // [rsp+58h] [rbp-19h] BYREF
  __int128 v30; // [rsp+68h] [rbp-9h]
  _QWORD v31[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v32[2]; // [rsp+88h] [rbp+17h] BYREF
  _QWORD v33[2]; // [rsp+98h] [rbp+27h] BYREF
  _QWORD v34[2]; // [rsp+A8h] [rbp+37h] BYREF
  _QWORD v35[2]; // [rsp+B8h] [rbp+47h] BYREF

  v28 = 0LL;
  if ( !*(_DWORD *)a3 )
  {
    v27 = 0LL;
    v22 = *(_QWORD *)(a1 + 16);
    if ( !v22 )
LABEL_44:
      sub_1800120F4();
    v23 = *(_DWORD *)(v22 + 8);
    do
    {
      if ( !v23 )
        goto LABEL_44;
      v24 = v23;
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 8), v23 + 1, v23);
    }
    while ( v24 != v23 );
    v27 = *(_OWORD *)(a1 + 8);
    v29 = *a3;
    v30 = a3[1];
    v25 = sub_1800D8104((_QWORD *)a1, v35, (__int64)&v29, (__int64)&v27, a1 + 592);
    v8 = *v25;
    v9 = v25[1];
    *v25 = 0LL;
    v25[1] = 0LL;
    v28 = 0uLL;
    sub_180010910((__int64)&v28);
    sub_180010910((__int64)v35);
    goto LABEL_38;
  }
  if ( *(_DWORD *)a3 == 1 )
  {
    v27 = 0LL;
    v18 = *(_QWORD *)(a1 + 16);
    if ( !v18 )
LABEL_43:
      sub_1800120F4();
    v19 = *(_DWORD *)(v18 + 8);
    do
    {
      if ( !v19 )
        goto LABEL_43;
      v20 = v19;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v19 + 1, v19);
    }
    while ( v20 != v19 );
    v27 = *(_OWORD *)(a1 + 8);
    v29 = *a3;
    v30 = a3[1];
    v21 = sub_1800D83CC((_QWORD *)a1, v34, (__int64)&v29, (__int64)&v27, a1 + 592);
    v8 = *v21;
    v9 = v21[1];
    *v21 = 0LL;
    v21[1] = 0LL;
    v28 = 0uLL;
    sub_180010910((__int64)&v28);
    sub_180010910((__int64)v34);
    goto LABEL_38;
  }
  if ( *(int *)a3 > 1 )
  {
    if ( *(int *)a3 <= 3 )
    {
      v27 = 0LL;
      v14 = *(_QWORD *)(a1 + 16);
      if ( !v14 )
LABEL_42:
        sub_1800120F4();
      v15 = *(_DWORD *)(v14 + 8);
      do
      {
        if ( !v15 )
          goto LABEL_42;
        v16 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15);
      }
      while ( v16 != v15 );
      v27 = *(_OWORD *)(a1 + 8);
      v29 = *a3;
      v30 = a3[1];
      v17 = sub_1800D7B74((_QWORD *)a1, v33, (__int64)&v29, (__int64)&v27, a1 + 592);
      v8 = *v17;
      v9 = v17[1];
      *v17 = 0LL;
      v17[1] = 0LL;
      v28 = 0uLL;
      sub_180010910((__int64)&v28);
      sub_180010910((__int64)v33);
      goto LABEL_38;
    }
    if ( *(_DWORD *)a3 == 5 )
    {
      v27 = 0LL;
      v10 = *(_QWORD *)(a1 + 16);
      if ( !v10 )
LABEL_41:
        sub_1800120F4();
      v11 = *(_DWORD *)(v10 + 8);
      do
      {
        if ( !v11 )
          goto LABEL_41;
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
      }
      while ( v12 != v11 );
      v27 = *(_OWORD *)(a1 + 8);
      v29 = *a3;
      v30 = a3[1];
      v13 = sub_1800D7E3C((_QWORD *)a1, v32, (__int64)&v29, (__int64)&v27, a1 + 592);
      v8 = *v13;
      v9 = v13[1];
      *v13 = 0LL;
      v13[1] = 0LL;
      v28 = 0uLL;
      sub_180010910((__int64)&v28);
      sub_180010910((__int64)v32);
      goto LABEL_38;
    }
    if ( *(_DWORD *)a3 == 6 )
    {
      v27 = 0LL;
      v4 = *(_QWORD *)(a1 + 16);
      if ( !v4 )
LABEL_40:
        sub_1800120F4();
      v5 = *(_DWORD *)(v4 + 8);
      do
      {
        if ( !v5 )
          goto LABEL_40;
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      }
      while ( v6 != v5 );
      v27 = *(_OWORD *)(a1 + 8);
      v29 = *a3;
      v30 = a3[1];
      v7 = sub_1800D78AC((_QWORD *)a1, v31, (__int64)&v29, (__int64)&v27, a1 + 592);
      v8 = *v7;
      v9 = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      v28 = 0uLL;
      sub_180010910((__int64)&v28);
      sub_180010910((__int64)v31);
LABEL_38:
      sub_180010910((__int64)&v27);
      goto LABEL_39;
    }
  }
  v9 = *((_QWORD *)&v28 + 1);
  v8 = v28;
LABEL_39:
  *a2 = v8;
  a2[1] = v9;
  v28 = 0LL;
  sub_180010910((__int64)&v28);
  return a2;
}
