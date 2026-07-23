/*
 * XREFs of sub_140351880 @ 0x140351880
 * Callers:
 *     sub_1403507F0 @ 0x1403507F0 (sub_1403507F0.c)
 *     sub_140362540 @ 0x140362540 (sub_140362540.c)
 *     sub_14036843C @ 0x14036843C (sub_14036843C.c)
 * Callees:
 *     sub_140236A00 @ 0x140236A00 (sub_140236A00.c)
 *     sub_140242FF4 @ 0x140242FF4 (sub_140242FF4.c)
 *     sub_140351BF4 @ 0x140351BF4 (sub_140351BF4.c)
 *     sub_140351E90 @ 0x140351E90 (sub_140351E90.c)
 *     sub_1403628D8 @ 0x1403628D8 (sub_1403628D8.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140351880(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // r14
  unsigned int v9; // ebx
  unsigned __int64 v10; // r15
  int v11; // r12d
  unsigned int v12; // esi
  int v14; // r8d
  volatile signed __int16 *v15; // rbx
  size_t v16; // r13
  void *v17; // r15
  bool v18; // zf
  int v19; // eax
  int v20; // eax
  int v21; // edx
  __int64 result; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // [rsp+30h] [rbp-61h] BYREF
  __int64 v28; // [rsp+38h] [rbp-59h] BYREF
  LONG SpinLock[2]; // [rsp+40h] [rbp-51h] BYREF
  __int128 v30; // [rsp+50h] [rbp-41h] BYREF
  __int128 v31; // [rsp+60h] [rbp-31h] BYREF
  __int128 v32; // [rsp+70h] [rbp-21h] BYREF
  __int128 v33; // [rsp+80h] [rbp-11h] BYREF
  __int128 v34; // [rsp+90h] [rbp-1h]
  __int64 v35; // [rsp+E0h] [rbp+4Fh] BYREF
  unsigned __int64 v36; // [rsp+E8h] [rbp+57h]

  v36 = a2;
  v8 = a5;
  v9 = -*(_DWORD *)a1;
  v10 = a3;
  v11 = a6 & 0x40000000;
  LOBYTE(v35) = 0;
  v12 = a6 & 0xBFFFFFFF;
  *(_QWORD *)SpinLock = 0LL;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)sub_140351BF4(
                          a5 << 12,
                          (*(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL) + *(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL)) << 12,
                          *(_QWORD *)(a1 + 56),
                          *(_QWORD *)(a1 + 56) + 32LL) )
      return 3221225773LL;
    a2 = v36;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v33 = 0LL;
    v34 = 0LL;
    v27 = a2 & 0xFFFFFFFFFFE00000uLL;
    v30 = *(_OWORD *)(a1 + 40);
    v24 = sub_140362B58(&v30);
    sub_1403628D8(v24 + 88, v25, &v33);
    a2 = v36;
    if ( (int)v8 <= 0 || (_DWORD)v10 || v36 <= v27 || v9 >= 0x200000 )
    {
      v14 = a7;
    }
    else
    {
      LOBYTE(v14) = a7;
      a6 = a7;
      if ( (a7 & 2) != 0 )
        goto LABEL_24;
      v14 = a7 | 1;
    }
    a6 = v14;
LABEL_24:
    v15 = (volatile signed __int16 *)(v34 + 2 * (v10 >> 9));
    goto LABEL_6;
  }
  LOBYTE(v14) = a7;
  v15 = 0LL;
  a6 = a7;
LABEL_6:
  v16 = (unsigned int)(a4 << 12);
  v17 = (void *)(a2 + (unsigned int)((_DWORD)v10 << 12));
  while ( 1 )
  {
    v27 = (unsigned __int64)v17;
    v28 = v16;
    if ( !v15 )
    {
LABEL_8:
      if ( (int)v8 <= 0 )
        goto LABEL_34;
      goto LABEL_9;
    }
    v23 = sub_140236A00(a1, v15, v8, v14, (__int64)SpinLock, (unsigned __int8 *)&v35);
    if ( v23 == -1073741568 )
      break;
    if ( v23 != -1073741566 )
      goto LABEL_8;
    v27 &= 0xFFFFFFFFFFE00000uLL;
    v28 = 0x200000LL;
    if ( (int)v8 <= 0 )
    {
LABEL_34:
      v32 = *(_OWORD *)(a1 + 40);
      v21 = sub_140363E50(&v27, &v28, v12, &v32);
      a5 = v21;
      goto LABEL_13;
    }
    if ( BYTE1(*(_QWORD *)(a1 + 40)) == 2 )
      v12 |= 0x20400000u;
    else
      v12 |= 0x20000000u;
LABEL_9:
    if ( v11 && (v12 & 0x20000000) == 0 )
      v12 |= 0x40000000u;
    v18 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) == 0;
    v19 = 64;
    v31 = *(_OWORD *)(a1 + 40);
    if ( v18 )
      v19 = 4;
    v20 = sub_140351E90((unsigned int)&v27, (unsigned int)&v28, 0, v12, v19, (__int64)&v31);
    a5 = v20;
    v21 = v20;
    if ( v11 && v20 >= 0 && (v12 & 0x40000000) == 0 )
    {
      memset(v17, 0, v16);
      v21 = a5;
    }
LABEL_13:
    if ( !v15 )
      return (unsigned int)v21;
    if ( _bittest16((const signed __int16 *)v15, 0xEu) && v21 >= 0 )
    {
      v26 = 1LL;
      if ( (int)v8 <= 0 )
        v26 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v26);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    sub_140242FF4(a1, v15, v8, v21 >= 0, (__int64)SpinLock, v35);
    result = (unsigned int)a5;
    if ( (v12 & 0x20000000) == 0 || a5 >= 0 || (a6 & 2) != 0 )
      return result;
    LOBYTE(v14) = a6 | 1;
    a6 |= 1u;
    v12 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v11 )
    memset(v17, 0, v16);
  return 0LL;
}
