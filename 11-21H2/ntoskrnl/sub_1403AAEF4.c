/*
 * XREFs of sub_1403AAEF4 @ 0x1403AAEF4
 * Callers:
 *     sub_1402E1010 @ 0x1402E1010 (sub_1402E1010.c)
 *     sub_140814244 @ 0x140814244 (sub_140814244.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1408142DC @ 0x1408142DC (sub_1408142DC.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 *     sub_140814C04 @ 0x140814C04 (sub_140814C04.c)
 *     sub_140814F44 @ 0x140814F44 (sub_140814F44.c)
 *     sub_14085D3E0 @ 0x14085D3E0 (sub_14085D3E0.c)
 */

__int64 __fastcall sub_1403AAEF4(int *a1, _DWORD *a2, char *a3)
{
  __int64 v3; // r14
  unsigned int v4; // r15d
  int v8; // eax
  __int64 v9; // rax
  ULONG_PTR v10; // rsi
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbx
  int *v18; // r10
  __int64 v19; // r13
  char *v20; // r11
  char *v21; // r8
  __int64 v22; // r14
  char *v23; // rsi
  int v24; // edx
  int v25; // r9d
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r12
  int v29; // ebx
  __int64 v30; // rax
  __int128 v31; // xmm1
  int v32; // r12d
  int v33; // r9d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v35; // ecx
  __int64 v36; // rbx
  unsigned int v37; // edx
  int v38; // r9d
  int v40; // eax
  int v41; // eax
  unsigned int v42; // edx
  char *v43; // r8
  _DWORD *v44; // rcx
  unsigned int v45; // [rsp+30h] [rbp-69h]
  __int64 v46; // [rsp+40h] [rbp-59h]
  __int64 v47; // [rsp+48h] [rbp-51h]
  __int128 v48; // [rsp+50h] [rbp-49h] BYREF
  __int128 v49; // [rsp+60h] [rbp-39h]
  _OWORD v50[2]; // [rsp+70h] [rbp-29h] BYREF
  _OWORD v51[2]; // [rsp+90h] [rbp-9h] BYREF

  v3 = *((_QWORD *)a1 + 137);
  v4 = *a1;
  v47 = v3;
  memset(v50, 0, sizeof(v50));
  memset(v51, 0, sizeof(v51));
  v48 = 0LL;
  v49 = 0LL;
  if ( a3 && ((v8 = *((_DWORD *)a3 + 1), (v8 & 1) != 0) || (v8 & 0x10) != 0) )
  {
    *(_DWORD *)a3 |= 0x200u;
    *a2 |= 0x200u;
    v9 = *((_QWORD *)a1 + 137);
  }
  else
  {
    v9 = v3;
  }
  if ( v9 != qword_140D05008 )
  {
    v42 = 0;
    v43 = (char *)((char *)&dword_140D06CD0 - a3);
    v44 = a3;
    while ( (~*(_DWORD *)((char *)v44 + (_QWORD)v43) & *v44) == 0 )
    {
      ++v42;
      ++v44;
      if ( v42 >= 8 )
        goto LABEL_6;
    }
    return 3221225569LL;
  }
LABEL_6:
  if ( a3
    && (*((_DWORD *)a3 + 1) & 0x402) != 0
    && a1[204] >= 0
    && !SeSinglePrivilegeCheck(stru_140D3CB00, *((_BYTE *)KeGetCurrentThread() + 562)) )
  {
    return 3221225569LL;
  }
  v10 = (ULONG_PTR)(a1 + 172);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 172), 0LL);
  v11 = *((unsigned __int8 *)a1 + 818);
  v45 = *((unsigned __int8 *)a1 + 818);
  if ( !a2 )
    goto LABEL_14;
  v12 = a2[1];
  if ( (v12 & 4) == 0 && (v12 & 0x100) == 0 )
    goto LABEL_14;
  v13 = 32 * v11 + *((_QWORD *)a1 + 137) + 4284LL;
  if ( v13 && (v14 = *(_DWORD *)(v13 + 4), (v14 & 4) != 0) && (v14 & 0x100) != 0 )
  {
    if ( !a3 || (v40 = *((_DWORD *)a3 + 1), (v40 & 4) == 0) || (v40 & 0x100) == 0 )
    {
      LOBYTE(v13) = 1;
      sub_140814F44((unsigned int)a1[50], v13);
      goto LABEL_14;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_14;
  }
  v15 = *((_DWORD *)a3 + 1);
  if ( (v15 & 4) != 0 && (v15 & 0x100) != 0 )
  {
    if ( !v13 || (v41 = *(_DWORD *)(v13 + 4), (v41 & 4) == 0) || (v41 & 0x100) == 0 )
    {
      v32 = sub_14085D3E0((unsigned int)a1[50]);
      if ( v32 < 0 )
        goto LABEL_24;
      v11 = v45;
    }
  }
LABEL_14:
  v16 = *((_QWORD *)a1 + 137);
  v17 = (__int64)&a3[-v16 + -32 * v11];
  v46 = 32 * v11 + v16 + 4284;
  v18 = (int *)v46;
  v19 = (__int64)a2 - v16 + -32 * v11;
  v20 = (char *)v50 - v16 + -32 * v11;
  v21 = (char *)v51 - v16 + -32 * v11;
  v22 = 8LL;
  v23 = (char *)&v48 - v16 + -32 * v11;
  do
  {
    v24 = *(int *)((char *)v18 + v17 - 4284);
    v25 = *v18 & ~v24 & *(int *)((char *)v18 + v19 - 4284);
    *(int *)((char *)v18 + (_QWORD)v20 - 4284) = v25;
    v26 = v24 & ~*v18;
    *(int *)((char *)v18 + (_QWORD)v21 - 4284) = v26;
    v27 = *v18++;
    *(int *)((char *)v18 + (_QWORD)v23 - 4288) = ~v25 & (v26 | v27);
    --v22;
  }
  while ( v22 );
  v28 = 32 * v11;
  sub_1408142DC(v47, v4, v46, 32LL);
  v10 = (ULONG_PTR)(a1 + 172);
  v29 = a1[3] & 0x400;
  if ( byte_140C15F70 && !v29 )
    sub_140814360((unsigned int)v50, v47, v4, 0, 0LL, 0);
  v30 = *((_QWORD *)a1 + 137);
  v31 = v49;
  *(_OWORD *)(v28 + v30 + 4284) = v48;
  *(_OWORD *)(v28 + v30 + 4300) = v31;
  v32 = sub_1406D520C(v47, v4, v45);
  if ( v32 >= 0 )
  {
    sub_1408142DC(v47, v4, &v48, 5LL);
    if ( byte_140C15F70 )
    {
      if ( !v29 || (a1[204] & 2) != 0 )
      {
        LOBYTE(v33) = 1;
        sub_140814360((unsigned int)v51, v47, v4, v33, 0LL, 0);
      }
    }
  }
  sub_140814C04(v47, v4);
LABEL_24:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  CurrentThread = KeGetCurrentThread();
  if ( v10 - qword_140C50630 < 0x8000000000LL )
    v35 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v35 = -1;
  _disable();
  v36 = (__int64)CurrentThread + 1696;
  v37 = 0;
  while ( (*(_QWORD *)v36 & 0x7FFFFFFFFFFFFFFCLL) != (v10 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v36 + 18)
       || (*(_DWORD *)v36 & 1) != 0
       || *(_DWORD *)(v36 + 8) != v35 )
  {
    ++v37;
    v36 += 96LL;
    if ( v37 >= 6 )
      goto LABEL_40;
  }
  *(_BYTE *)(v36 + 18) = 0;
  if ( v36 )
  {
    if ( *(__int64 *)v36 < 0 )
    {
      *(_BYTE *)v36 |= 2u;
      _enable();
      sub_14034EE30(v36);
      _disable();
    }
    v38 = *(_DWORD *)(v36 + 88);
    *(_DWORD *)(v36 + 88) = 0;
    *(_BYTE *)(v36 + 17) = 0;
    *(_QWORD *)v36 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v36 + 16);
    _enable();
    if ( v38 )
      sub_14022B568((ULONG_PTR)CurrentThread, v10, v38);
    return (unsigned int)v32;
  }
LABEL_40:
  if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v10, v35, 0LL);
  _enable();
  return (unsigned int)v32;
}
