/*
 * XREFs of sub_1407C3850 @ 0x1407C3850
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069FA30 @ 0x14069FA30 (sub_14069FA30.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406CAE28 @ 0x1406CAE28 (sub_1406CAE28.c)
 *     sub_1406D1790 @ 0x1406D1790 (sub_1406D1790.c)
 *     sub_1406DAD3C @ 0x1406DAD3C (sub_1406DAD3C.c)
 *     sub_1406E7088 @ 0x1406E7088 (sub_1406E7088.c)
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1407C3E50 @ 0x1407C3E50 (sub_1407C3E50.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 *     sub_1407C4930 @ 0x1407C4930 (sub_1407C4930.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140910724 @ 0x140910724 (sub_140910724.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4464 @ 0x140AB4464 (sub_140AB4464.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 */

__int64 sub_1407C3850(__int64 a1, int a2, ULONG_PTR a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  int v9; // ebx
  __int64 v10; // rdi
  unsigned __int16 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int16 v15; // cx
  _QWORD *v16; // rdi
  _DWORD *v17; // r13
  __int64 v18; // rax
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  unsigned __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rcx
  signed __int64 v30; // rbp
  bool v31; // zf
  unsigned int v32; // ecx
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rdx
  int v35; // ebp
  ULONG_PTR v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned int *v40; // rcx
  void *v41; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+28h] [rbp-60h]
  _QWORD v44[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v45; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v46; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+20h]
  __int64 v48; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v50; // [rsp+C8h] [rbp+40h]
  __int64 *v51; // [rsp+D0h] [rbp+48h]
  va_list va1; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v48 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, __int64 *);
  BugCheckParameter2 = a4;
  v44[0] = 0LL;
  sub_1407C97FC(v44);
  if ( (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4168) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  v9 = v50;
  v10 = *(_QWORD *)(a1 + 1648);
  v11 = a6;
  v45 = 0LL;
  v12 = *(_QWORD *)(v10
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027
                                                                  * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) >> 9)))
                  + 16);
  if ( !v12 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_DWORD *)v12 != v9 )
      goto LABEL_4;
    v13 = v12 - 16;
    if ( *(_QWORD *)(v12 + 56) != a3 )
      goto LABEL_4;
    v14 = *(_QWORD *)(v13 + 80);
    v15 = *(_WORD *)(v14 + 24);
    if ( (*(_DWORD *)v14 & 1) == 0 )
      break;
    if ( !(unsigned int)sub_1407C45A0(
                          v11,
                          v14 + 26,
                          *(unsigned __int16 *)(v14 + 24),
                          2LL,
                          BugCheckParameter4,
                          v43,
                          v44[0],
                          v44[1]) )
      goto LABEL_9;
LABEL_4:
    v12 = *(_QWORD *)(v12 + 8);
    if ( !v12 )
      goto LABEL_10;
  }
  *((_QWORD *)&v45 + 1) = v14 + 26;
  LOWORD(v45) = v15;
  WORD1(v45) = v15;
  if ( (unsigned int)sub_140717780((__int64)v11, (__int64)&v45, 2) )
    goto LABEL_4;
LABEL_9:
  if ( v12 != 16 )
  {
    sub_1406DAD3C((volatile signed __int64 *)(v12 - 16));
    *v51 = v13;
    return 0;
  }
LABEL_10:
  if ( *v11 + 2 + (unsigned int)sub_1407C4930(a3) > 0xFFFF )
    return (unsigned int)-1073741811;
  _InterlockedIncrement64(&qword_140D3D2C0);
  ++dword_140CE1C54;
  v16 = ExpInterlockedPopEntrySList(&stru_140CE1C40);
  if ( !v16 )
  {
    ++dword_140CE1C58;
    v16 = (_QWORD *)sub_14042A5E0((unsigned int)dword_140CE1C64, (unsigned int)dword_140CE1C6C);
    if ( !v16 )
      return (unsigned int)-1073741670;
  }
  _InterlockedIncrement64(qword_140D3D2E0);
  memset(v16, 0, 0x138uLL);
  v16[16] = v16 + 15;
  v16[15] = v16 + 15;
  v16[17] = 0LL;
  v16[18] = 0LL;
  v16[19] = 0LL;
  v16[20] = 0LL;
  *((_DWORD *)v16 + 10) = a2;
  v17 = v16 + 2;
  v16[6] = 0LL;
  *((_DWORD *)v16 + 4) = v9;
  *v16 = 1LL;
  v16[4] = a1;
  v16[27] = v16 + 26;
  v16[26] = v16 + 26;
  v16[30] = 0LL;
  *((_DWORD *)v16 + 62) = 0;
  v16[32] = 0LL;
  *((_DWORD *)v16 + 66) = 0;
  v16[34] = 0LL;
  *((_DWORD *)v16 + 70) = 0;
  v16[36] = 0LL;
  v16[29] = v16 + 28;
  v16[28] = v16 + 28;
  *((_DWORD *)v16 + 71) = -1;
  v18 = sub_1407C3E50(v11, (__int64 *)va);
  v16[10] = v18;
  if ( !v18 )
  {
    v35 = -1073741670;
    goto LABEL_64;
  }
  v19 = *((unsigned int *)v16 + 10);
  if ( (_DWORD)v19 == -1 )
  {
    if ( ((*(_BYTE *)(a3 + 65) - 1) & 0xFD) == 0 )
      *((_BYTE *)v16 + 65) = 1;
    v28 = (__int64)v16;
    if ( (a5 & 1) != 0 )
      *((_WORD *)v16 + 93) |= 4u;
    goto LABEL_27;
  }
  v20 = v16[4];
  if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
    v21 = sub_1406BF400(v20, v19, v44);
  else
    v21 = sub_1407C9820(v20);
  v22 = v16[4];
  v23 = v21;
  if ( (*(_DWORD *)(v22 + 160) & 0x8001) == 0 && (*(_BYTE *)(v21 + 12) & (unsigned __int8)byte_140C097BC) == 0 )
  {
    if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
      sub_1406BF450(v22, v44);
    else
      sub_1407C97C0(v22, v44);
    ExAcquirePushLockSharedEx(v16[4] + 72LL, 0LL);
    v37 = v16[4];
    if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
      v38 = sub_1406BF400(v37, *((unsigned int *)v16 + 10), v44);
    else
      v38 = sub_1407C9820(v37);
    v23 = v38;
    sub_140722534(v16[4], v38, *((_DWORD *)v16 + 10));
    v39 = v16[4];
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v39 + 72));
    sub_1402AFC00(v39 + 72);
  }
  *((_BYTE *)v16 + 65) = *(_BYTE *)(v23 + 13) & 3;
  v24 = *(_DWORD *)(v23 + 36);
  *((_DWORD *)v16 + 25) = *(_DWORD *)(v23 + 40);
  *((_DWORD *)v16 + 24) = v24;
  *((_WORD *)v16 + 93) = *(_WORD *)(v23 + 2);
  *((_DWORD *)v16 + 28) = *(_DWORD *)(v23 + 20) + *(_DWORD *)(v23 + 24);
  v16[21] = *(_QWORD *)(v23 + 4);
  *((_WORD *)v16 + 88) = *(_WORD *)(v23 + 52);
  *((_WORD *)v16 + 89) = *(_WORD *)(v23 + 60);
  *((_DWORD *)v16 + 45) = *(_DWORD *)(v23 + 64);
  *((_DWORD *)v16 + 46) ^= (*((_DWORD *)v16 + 46) ^ *(unsigned __int16 *)(v23 + 54)) & 0xF;
  *((_DWORD *)v16 + 46) ^= ((unsigned __int8)*((_DWORD *)v16 + 46) ^ (unsigned __int8)*(_WORD *)(v23 + 54)) & 0xF0;
  *((_BYTE *)v16 + 185) = *(_BYTE *)(v23 + 55);
  v25 = sub_140347C10((__int64)(v16 + 6), 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v16 + 12, 0LL) )
  {
    if ( v25 )
      sub_140353BB0((ULONG_PTR)(v16 + 6), v25);
  }
  else
  {
    if ( v25 )
      *(_BYTE *)(v25 + 18) = 1;
    v16[7] = KeGetCurrentThread();
  }
  v26 = *(_DWORD *)(v23 + 44);
  v46 = 0;
  if ( v26 == -1 )
  {
    v16[11] = 0LL;
    goto LABEL_25;
  }
  v27 = v16[4];
  sub_140AB4464(v27);
  if ( !sub_140346D80(v27, v26, &v46) )
  {
    v16[11] = 0LL;
    sub_140AB4484(v27);
    sub_140AB4300(v16);
    v35 = -1073741670;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      sub_1406BF450(a1, v44);
    else
      sub_1407C97C0(a1, v44);
    goto LABEL_64;
  }
  v16[11] = *(_QWORD *)(*(_QWORD *)(v27 + 1888) + 16LL * v46 + 8);
  sub_140AB4484(v27);
LABEL_25:
  v28 = (__int64)v16;
  sub_140AB4300(v16);
  v29 = v16[4];
  if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
    sub_1406BF450(v29, v44);
  else
    sub_1407C97C0(v29, v44);
LABEL_27:
  if ( a3 )
  {
    v30 = _InterlockedIncrement64((volatile signed __int64 *)a3);
    if ( !v30 )
      KeBugCheckEx(0x51u, 0x24uLL, a3, 0LL, 0LL);
    if ( v30 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v31 = (*(_DWORD *)(v28 + 184) & 0x40000) == 0;
    *(_QWORD *)(v28 + 72) = a3;
    if ( v31 )
      v32 = *(_DWORD *)(v28 + 8) ^ (*(_DWORD *)(v28 + 8) ^ (*(_DWORD *)(a3 + 8) + 0x200000)) & 0x7FE00000;
    else
      v32 = *(_DWORD *)(v28 + 8) ^ (*(_DWORD *)(a3 + 8) ^ *(_DWORD *)(v28 + 8)) & 0x7FE00000;
  }
  else
  {
    v32 = *(_DWORD *)(v28 + 8) & 0x801FFFFF | 0x200000;
  }
  *(_DWORD *)(v28 + 8) = v32;
  v33 = BugCheckParameter2;
  if ( BugCheckParameter2
    && (sub_1407C0854(BugCheckParameter2),
        sub_1406D1790(v28),
        v35 = sub_1406CAE28(v33, v28),
        sub_140AB4300(v28),
        sub_140AB4300(v33),
        v35 < 0) )
  {
LABEL_64:
    v40 = (unsigned int *)v16[10];
    if ( v40 )
      sub_1406E7088(v40);
    if ( v16[9] )
      sub_14071C0FC((volatile signed __int64 *)a3);
    v41 = (void *)v16[24];
    if ( v41 )
      ExFreePoolWithTag(v41, 0);
    *((_DWORD *)v16 + 2) |= 0x80000u;
    sub_14069FA30((ULONG_PTR)v16);
  }
  else
  {
    v34 = *(_QWORD *)(v16[4] + 1648LL)
        + 24
        * ((unsigned int)(*(_DWORD *)(v16[4] + 1656LL) - 1) & ((unsigned int)(101027 * (*v17 ^ (*v17 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v17 ^ (*v17 >> 9))) >> 9)));
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(v34 + 16);
    *(_QWORD *)(v34 + 16) = v17;
    if ( *(_BYTE *)(a1 + 2944) == 1 )
      *(_WORD *)(v28 + 8) |= 0x20u;
    if ( qword_140D3B008 )
    {
      LOBYTE(v34) = 22;
      sub_140910724(v28, v34);
    }
    v35 = 0;
    *v51 = v28;
  }
  return (unsigned int)v35;
}
