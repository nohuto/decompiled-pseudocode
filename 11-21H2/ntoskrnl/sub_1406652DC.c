/*
 * XREFs of sub_1406652DC @ 0x1406652DC
 * Callers:
 *     sub_1406651F0 @ 0x1406651F0 (sub_1406651F0.c)
 *     sub_1407A76C0 @ 0x1407A76C0 (sub_1407A76C0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_140666BAC @ 0x140666BAC (sub_140666BAC.c)
 *     sub_1407A6FD8 @ 0x1407A6FD8 (sub_1407A6FD8.c)
 *     sub_1407A7064 @ 0x1407A7064 (sub_1407A7064.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7B98 @ 0x1407A7B98 (sub_1407A7B98.c)
 *     sub_1407A7C84 @ 0x1407A7C84 (sub_1407A7C84.c)
 *     sub_1407A7E70 @ 0x1407A7E70 (sub_1407A7E70.c)
 *     sub_1407AB750 @ 0x1407AB750 (sub_1407AB750.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_140966E38 @ 0x140966E38 (sub_140966E38.c)
 */

__int64 __fastcall sub_1406652DC(__int64 a1, __int128 *a2, char a3)
{
  __int128 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // r9d
  ULONG_PTR v8; // rsi
  int v9; // edx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // r13
  _QWORD *v13; // rbx
  signed __int64 *v14; // rsi
  bool v15; // bl
  _QWORD *v16; // rax
  unsigned __int64 v18; // rax
  size_t v19; // rdx
  __int64 v20; // rdx
  ULONG_PTR v21; // rbx
  __int64 v22; // r13
  ULONG_PTR v23; // r14
  unsigned int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int128 v32; // [rsp+48h] [rbp-50h] BYREF
  __int128 v33; // [rsp+58h] [rbp-40h]
  __int64 v34; // [rsp+68h] [rbp-30h]
  ULONG_PTR v36; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)a1;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  v31 = v4;
  if ( a3 )
  {
    sub_140666BAC(a2, &v32, 0LL);
    LOBYTE(v5) = 1;
    v6 = sub_1407A7E70(&v32, v5);
    v30 = v6;
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( WORD3(v32) )
    {
      v6 = sub_140966E38(v3, &v32);
      v30 = v6;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
  }
  else
  {
    v32 = *a2;
    v33 = a2[1];
    HIDWORD(v34) = HIDWORD(*((_QWORD *)a2 + 4));
    LODWORD(v34) = 0;
    LOBYTE(a2) = 1;
    v6 = sub_1407A7E70(&v32, a2);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v6 = sub_1407ABD80(v4, DWORD2(v33), v34, v7, (__int64)&v36);
  v30 = v6;
  if ( v6 < 0 )
    return (unsigned int)v6;
  v8 = v36;
  v9 = *(_DWORD *)(v36 + 40);
  if ( (v9 & 0x80u) != 0 )
  {
    sub_140662E08(v4, v36, 0x10000);
    return (unsigned int)-1073741769;
  }
  if ( (v9 & 0x200) != 0 || !*(_QWORD *)(v36 + 32) )
    goto LABEL_27;
  v10 = *(_QWORD *)(v36 + 16);
  if ( v10 == v4 )
  {
    v11 = *(_DWORD *)(v36 + 40) & 7;
  }
  else
  {
    v11 = *(_DWORD *)(v36 + 40) & 7;
    if ( (v9 & 7) == 0 )
    {
      v12 = *(_QWORD *)(v36 + 24);
      if ( v12 )
      {
        v13 = *(_QWORD **)(v12 + 16);
        v14 = v13 - 2;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
        if ( ((*(_DWORD *)(v12 + 416) >> 1) & 3) == 2 )
          v15 = *v13 == v4 || v13[1] == v4;
        else
          v15 = v13[2] == v4;
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v14);
        sub_1402AFC00((ULONG_PTR)v14);
        v8 = v36;
        goto LABEL_33;
      }
LABEL_27:
      sub_1407A7628(v8);
      return (unsigned int)-1073741790;
    }
    if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
      goto LABEL_27;
    v16 = *(_QWORD **)(v4 + 16);
    if ( !v16 || *v16 != v10 )
      goto LABEL_27;
  }
  if ( v11 != 3 || (v9 & 0x2000) != 0 )
    goto LABEL_27;
  v15 = 1;
LABEL_33:
  if ( !v15 )
    goto LABEL_27;
  v18 = sub_1407A7C84(v8, (__int16)v32);
  if ( v19 > v18 )
  {
    v6 = sub_1407A7B98(v8, v19, (char *)v3 + 40);
    v30 = v6;
  }
  else
  {
    memmove((void *)(v8 + 280), (char *)v3 + 40, v19);
    v6 = 0;
    v30 = 0;
  }
  if ( v6 >= 0 )
  {
    *(_DWORD *)(v8 + 40) |= 0x8000u;
    _InterlockedOr(v29, 0);
    v21 = v36;
    v22 = *(_QWORD *)(v36 + 24);
    sub_1407A6FD8(v36, v20);
    *(_DWORD *)(v21 + 240) = v32;
    *(_WORD *)(v21 + 244) = 2;
    v23 = v36;
    *(_OWORD *)(v36 + 248) = *(_OWORD *)((char *)KeGetCurrentThread() + 1224);
    *(_DWORD *)(v8 + 40) |= 0x200u;
    v24 = *(_DWORD *)(v8 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v22 + 416) & 6));
    *(_DWORD *)(v8 + 40) = v24;
    if ( ((v24 >> 3) & 0xF) == 1 )
    {
      v25 = *(_QWORD *)(v22 + 16);
      ExAcquirePushLockSharedEx(v25 - 16, 0LL);
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
        *(_QWORD *)(v23 + 120) = *(_QWORD *)(v26 + 56);
      else
        *(_QWORD *)(v23 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v25 - 16));
      sub_1402AFC00(v25 - 16);
      v23 = v36;
    }
    else
    {
      *(_QWORD *)(v23 + 120) = *(_QWORD *)(v22 + 56);
    }
    v27 = *(_QWORD *)(v23 + 32);
    *(_QWORD *)(v23 + 32) = 0LL;
    --*(_WORD *)(v23 - 30);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 40) & 0xFFFF7EF8 | 0x105;
    sub_1407A7064(v23);
    sub_1407AB750(v23, v4);
    sub_1407A7628(v23);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
      *(_QWORD *)(a1 + 24) = v27;
    else
      sub_14035AD70((volatile signed __int32 *)(v27 + 1240), 1LL, 1LL, v28, 2);
    return v30;
  }
  else
  {
    sub_1407A7628(v8);
  }
  return (unsigned int)v6;
}
