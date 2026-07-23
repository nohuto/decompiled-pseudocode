/*
 * XREFs of sub_1402ED194 @ 0x1402ED194
 * Callers:
 *     sub_1402ECFD8 @ 0x1402ECFD8 (sub_1402ECFD8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402D0500 @ 0x1402D0500 (sub_1402D0500.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402ED750 @ 0x1402ED750 (sub_1402ED750.c)
 *     sub_1402ED77C @ 0x1402ED77C (sub_1402ED77C.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14097EB90 @ 0x14097EB90 (sub_14097EB90.c)
 *     sub_14097EE0C @ 0x14097EE0C (sub_14097EE0C.c)
 *     sub_14097EE28 @ 0x14097EE28 (sub_14097EE28.c)
 */

__int64 __fastcall sub_1402ED194(__int64 a1)
{
  int v1; // ebx
  BOOL v2; // edx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  int v11; // eax
  volatile LONG *v12; // rdi
  KIRQL v13; // al
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rsi
  struct _KTHREAD *v33; // rdi
  unsigned int v34; // ecx
  char *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r9d
  bool v39; // zf
  __int64 result; // rax
  volatile LONG *v41; // rdi
  KIRQL v42; // r14
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rcx
  volatile LONG *v59; // rdi
  KIRQL v60; // al
  unsigned __int64 v61; // [rsp+40h] [rbp-78h]
  __int64 v62; // [rsp+48h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  unsigned __int64 v64; // [rsp+58h] [rbp-60h]
  unsigned __int64 v65; // [rsp+60h] [rbp-58h]
  char v66; // [rsp+C0h] [rbp+8h]
  __int64 v67; // [rsp+D0h] [rbp+18h]
  __int64 v68; // [rsp+D8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v68 = *((_QWORD *)CurrentThread + 23);
  v62 = v68 + 1664;
  v65 = *(_QWORD *)(a1 + 24);
  v64 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(v3 + 48) & 0x200000) == 0 )
  {
    v53 = *(_QWORD *)(v3 + 72);
    if ( *(_QWORD *)(*(_QWORD *)v53 + 64LL) )
      v2 = (*(_DWORD *)(*(_QWORD *)v53 + 56LL) & 0x420) == 0;
  }
  v4 = *(_QWORD *)a1;
  if ( v1 == 1 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    if ( v1 == 2 )
      v4 = 0LL;
    else
      v4 = *(_QWORD *)v4;
  }
  if ( v2 )
    sub_14097EB90(a1, v5, v4, 1LL);
  v6 = *(unsigned int *)(v3 + 52);
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v7 = 0LL;
  v8 = v6 | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 31);
  v9 = 0LL;
  v10 = 0x7FFFFFFFDLL;
  if ( v8 != 0x7FFFFFFFDLL )
  {
    v10 = 0LL;
    v7 = v8;
  }
  v61 = v10;
  if ( v1 == 3 )
  {
    v54 = v5;
    if ( (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
       - (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
       + 1 > (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
           - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))
           + 1 )
      v54 = v4;
    v67 = v54;
    sub_14097EE0C(v54);
  }
  else
  {
    v67 = 0LL;
  }
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(v68 + 1232, 0LL);
  v11 = *(_DWORD *)(v3 + 48) & 0x200000;
  if ( v7 )
  {
    if ( v11 )
    {
      v41 = (volatile LONG *)sub_140282AD0(v62);
      v42 = ExAcquireSpinLockExclusive(v41);
      *((_DWORD *)v41 + 1) = 0;
      v66 = v42;
      v9 = sub_14028EDD0(v65, v64, v3, v42, 4, 0LL, 0LL);
    }
    else
    {
      v42 = 17;
      v66 = 17;
      v9 = ((__int64)(((v64 >> 9) & 0x7FFFFFFFF8LL) - ((v65 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
         - sub_1402D0500(
             v3,
             ((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
         + 1;
    }
    if ( v1 == 1 )
    {
      v55 = v7;
      v14 = v61;
      v15 = v55 - v9;
    }
    else if ( v1 == 2 )
    {
      v15 = v61;
      v14 = v7 - v9;
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 48) & 0x200000) != 0 )
      {
        v15 = sub_14028EDD0(
                (*(unsigned int *)(v67 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 32) << 32)) << 12,
                ((*(unsigned int *)(v67 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 33) << 32)) << 12) | 0xFFF,
                v67,
                v42,
                4,
                0LL,
                0LL);
      }
      else
      {
        v56 = 8
            * ((*(unsigned int *)(v67 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v57 = 8
            * ((*(unsigned int *)(v67 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 33) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v15 = ((__int64)(v57 - v56) >> 3) - sub_1402D0500(v67, v56, v57) + 1;
      }
      v14 = v7 - v9 - v15;
      v58 = v14;
      if ( v67 == v5 )
      {
        v14 = v15;
        v15 = v58;
      }
    }
  }
  else
  {
    if ( v11 )
    {
      v12 = (volatile LONG *)sub_140282AD0(v62);
      v13 = ExAcquireSpinLockExclusive(v12);
      *((_DWORD *)v12 + 1) = 0;
      v66 = v13;
    }
    else
    {
      v66 = 17;
    }
    v14 = v61;
    v15 = v61;
  }
  if ( v66 == 17 )
  {
    v59 = (volatile LONG *)sub_140282AD0(v62);
    v60 = ExAcquireSpinLockExclusive(v59);
    *((_DWORD *)v59 + 1) = 0;
    v66 = v60;
  }
  sub_1402ED128(3);
  LOBYTE(v16) = 15;
  if ( v5 )
  {
    v43 = *(_DWORD *)(v5 + 52) & 0x80000000;
    if ( (*(_DWORD *)(v5 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v5 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v44) = 15;
      v45 = v43 | 0x7FFFFFFD;
    }
    else
    {
      v44 = v14 >> 31;
      v45 = v14 & 0x7FFFFFFF | v43;
    }
    v46 = *(unsigned __int8 *)(v5 + 33);
    v47 = *(unsigned __int8 *)(v5 + 32);
    *(_BYTE *)(v5 + 34) = v44;
    v48 = *(unsigned int *)(v5 + 24);
    *(_DWORD *)(v5 + 52) = v45;
    v49 = *(unsigned int *)(v5 + 28);
    v50 = v48 | (v47 << 32);
    v51 = (unsigned int)v46;
    v52 = (v49 | (v46 << 32)) + 1;
    *(_DWORD *)(v3 + 24) = v52;
    *(_BYTE *)(v3 + 32) = BYTE4(v52);
    v17 = 8 * ((v49 | (v51 << 32)) - v50) + 8;
    sub_14030E390(v5, v68, 3LL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v4 )
  {
    v18 = *(_DWORD *)(v4 + 52) & 0x80000000;
    if ( (((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31) | *(_DWORD *)(v4 + 52) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v19) = 15;
      v20 = v18 | 0x7FFFFFFD;
    }
    else
    {
      v19 = v15 >> 31;
      v20 = v15 & 0x7FFFFFFF | v18;
    }
    v21 = *(unsigned __int8 *)(v4 + 33);
    v22 = v68;
    *(_BYTE *)(v4 + 34) = v19;
    v23 = *(unsigned int *)(v4 + 24);
    *(_DWORD *)(v4 + 52) = v20;
    v24 = v23 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    v25 = (*(unsigned int *)(v4 + 28) | (unsigned __int64)(v21 << 32)) - v24;
    *(_DWORD *)(v3 + 28) = v23 - 1;
    v17 += 8 * v25 + 8;
    *(_BYTE *)(v3 + 33) = (v24 - 1) >> 32;
    sub_14030E390(v4, v68, 3LL);
  }
  else
  {
    v22 = v68;
  }
  v26 = *(_DWORD *)(v3 + 52);
  v27 = v26;
  LODWORD(v27) = v26 & 0x7FFFFFFF;
  v28 = v27 | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 31);
  if ( v28 == 0x7FFFFFFFDLL )
  {
    v29 = v26 & 0x80000000 | 0x7FFFFFFD;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 48) & 0x200000) == 0 && v28 < 0x7FFFFFFFDLL && v17 )
    {
      PsReturnProcessPagedPoolQuota(v22, v17);
      v26 = *(_DWORD *)(v3 + 52);
    }
    v16 = v9 >> 31;
    v29 = (v9 ^ v26) & 0x7FFFFFFF ^ v26;
  }
  *(_DWORD *)(v3 + 52) = v29;
  *(_BYTE *)(v3 + 34) = v16;
  sub_1402ED77C(v3, 0LL);
  sub_1402806E0(3, 0x11u);
  LOBYTE(v30) = v66;
  sub_14030FA80(v22 + 1664, v30);
  if ( v5 )
    sub_1402ED750(v5, v31, 0LL);
  if ( v4 )
    sub_1402ED750(v4, v31, 0LL);
  v32 = v22 + 1232;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v22 + 1232);
  v33 = KeGetCurrentThread();
  if ( (unsigned __int64)(v32 - qword_140C50630) < 0x8000000000LL )
    v34 = sub_140287F30(*((_QWORD *)v33 + 23));
  else
    v34 = -1;
  _disable();
  v35 = (char *)v33 + 1696;
  v36 = 0LL;
  v37 = v32 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)v35 & 0x7FFFFFFFFFFFFFFCLL) != v37
       || !v35[18]
       || (*(_DWORD *)v35 & 1) != 0
       || *((_DWORD *)v35 + 2) != v34 )
  {
    v36 = (unsigned int)(v36 + 1);
    v35 += 96;
    if ( (unsigned int)v36 >= 6 )
      goto LABEL_49;
  }
  v35[18] = 0;
  if ( v35 )
  {
    if ( *(__int64 *)v35 < 0 )
    {
      *v35 |= 2u;
      _enable();
      sub_14034EE30(v35, v36, v37);
      _disable();
    }
    v38 = *((_DWORD *)v35 + 22);
    *((_DWORD *)v35 + 22) = 0;
    v35[17] = 0;
    *(_QWORD *)v35 = 0LL;
    *((_BYTE *)v33 + 792) |= 1 << v35[16];
    _enable();
    if ( v38 )
      sub_14022B568((ULONG_PTR)v33, v22 + 1232, v38);
    goto LABEL_43;
  }
LABEL_49:
  if ( (*((_DWORD *)v33 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v33, v22 + 1232, v34, 0LL);
  _enable();
LABEL_43:
  v39 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v39 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  result = v67;
  if ( v67 )
    return sub_14097EE28(v67);
  return result;
}
