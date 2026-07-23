/*
 * XREFs of sub_1406FB4D0 @ 0x1406FB4D0
 * Callers:
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 * Callees:
 *     KeGetCurrentNodeNumber @ 0x140221E50 (KeGetCurrentNodeNumber.c)
 *     sub_1402583CC @ 0x1402583CC (sub_1402583CC.c)
 *     sub_14025E274 @ 0x14025E274 (sub_14025E274.c)
 *     sub_14026F0F0 @ 0x14026F0F0 (sub_14026F0F0.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140283DF0 @ 0x140283DF0 (sub_140283DF0.c)
 *     sub_140287070 @ 0x140287070 (sub_140287070.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_140287450 @ 0x140287450 (sub_140287450.c)
 *     sub_14028799C @ 0x14028799C (sub_14028799C.c)
 *     sub_1402879C8 @ 0x1402879C8 (sub_1402879C8.c)
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 *     sub_1405B204C @ 0x1405B204C (sub_1405B204C.c)
 *     sub_1405B2088 @ 0x1405B2088 (sub_1405B2088.c)
 *     sub_1406A2588 @ 0x1406A2588 (sub_1406A2588.c)
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 *     sub_1406EBA90 @ 0x1406EBA90 (sub_1406EBA90.c)
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 *     sub_1406F8804 @ 0x1406F8804 (sub_1406F8804.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_1406FC03C @ 0x1406FC03C (sub_1406FC03C.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_1406FCFF0 @ 0x1406FCFF0 (sub_1406FCFF0.c)
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_14096CDB8 @ 0x14096CDB8 (sub_14096CDB8.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 *     sub_14097EF10 @ 0x14097EF10 (sub_14097EF10.c)
 *     sub_14097F038 @ 0x14097F038 (sub_14097F038.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406FB4D0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8)
{
  int v8; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  void *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r13
  int v17; // edx
  int v18; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned int v26; // esi
  unsigned __int64 v27; // rbx
  bool v28; // si
  __int64 *v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // eax
  _QWORD *v36; // rax
  __int64 *v37; // rbx
  void *v38; // rcx
  int v39; // ecx
  bool v40; // zf
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // edx
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // r10
  __int64 v50; // r10
  __int64 v51; // r10
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // r11
  _DWORD *v54; // rsi
  _DWORD *v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 *v59; // rsi
  int v60; // r10d
  __int64 *v61; // rax
  __int64 v62; // r8
  PVOID v63; // r14
  ULONG_PTR v64; // rdi
  unsigned __int64 v65; // r12
  int v66; // r8d
  int v67; // r9d
  int v68; // eax
  PVOID v69; // rbx
  PVOID v70; // r14
  __int64 v71; // [rsp+50h] [rbp-99h]
  __int64 *BugCheckParameter2; // [rsp+58h] [rbp-91h]
  unsigned __int64 v73; // [rsp+60h] [rbp-89h] BYREF
  PVOID v74; // [rsp+68h] [rbp-81h]
  int v75; // [rsp+70h] [rbp-79h]
  int v76; // [rsp+74h] [rbp-75h]
  unsigned __int64 v77; // [rsp+78h] [rbp-71h]
  unsigned __int64 v78; // [rsp+80h] [rbp-69h]
  unsigned __int64 v79; // [rsp+88h] [rbp-61h]
  unsigned __int64 v80; // [rsp+90h] [rbp-59h]
  __int64 v81; // [rsp+98h] [rbp-51h]
  __int64 v82; // [rsp+A0h] [rbp-49h]
  signed __int64 v83; // [rsp+A8h] [rbp-41h]
  __int64 *v84; // [rsp+B0h] [rbp-39h]
  __int64 v85; // [rsp+B8h] [rbp-31h] BYREF
  unsigned __int64 v86; // [rsp+C0h] [rbp-29h]
  __int64 v87; // [rsp+C8h] [rbp-21h] BYREF
  PVOID P; // [rsp+D0h] [rbp-19h]
  unsigned __int64 v89; // [rsp+D8h] [rbp-11h] BYREF
  ULONG_PTR v90; // [rsp+E0h] [rbp-9h]
  int v91; // [rsp+138h] [rbp+4Fh] BYREF
  unsigned __int64 *v92; // [rsp+140h] [rbp+57h]
  unsigned __int64 *v93; // [rsp+148h] [rbp+5Fh]

  v93 = a4;
  v92 = a3;
  v8 = *(_DWORD *)(a2 + 64);
  v73 = 0LL;
  v87 = 0LL;
  v76 = 0;
  if ( (v8 & 2) != 0 )
    return 3221225485LL;
  if ( sub_14028799C(a1) )
    return 3221225485LL;
  v15 = *v13;
  v16 = *(_QWORD *)(v12 + 88);
  v17 = *(_DWORD *)(v12 + 40);
  v83 = (signed __int64)v14;
  v81 = v15;
  if ( (v17 & 0x2000) != 0 && *(void **)(a1 + 64) == v14 )
    return 3221225485LL;
  v18 = v17 & 0x40000000;
  if ( (v17 & 0x20000000) != 0 )
  {
    if ( v18 || (v17 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
      return 3221225485LL;
    if ( *(void **)(a1 + 64) == v14 )
    {
      if ( !_bittest16((const signed __int16 *)(v15 + 12), 0xCu) )
        return 3221225485LL;
    }
    else if ( (*(_BYTE *)(a1 + 62) & 0xC) != 4 )
    {
      return 3221225485LL;
    }
  }
  else if ( v18 && ((v17 & 0x2000) != 0 || *(void **)(v16 + 2240) == v14 && (*(_DWORD *)(a2 + 60) & 1) == 0) )
  {
    return 3221225485LL;
  }
  v20 = *(_QWORD *)(a2 + 16);
  if ( v20 >= 0x200000 && ((v20 - 1) & *(_QWORD *)(a2 + 32)) != 0 || (v17 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  v21 = (__int64)v14;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v16 + 1680) + 48LL;
  v74 = v14;
  v82 = v23;
  P = v14;
  v75 = (int)v14;
  v71 = (__int64)CurrentThread;
  sub_140287450(a1);
  v24 = *a4;
  v25 = v24 + *(_QWORD *)(a2 + 24);
  v77 = v24 >> 12;
  v78 = v25 >> 12;
  v79 = sub_140287070(a1);
  if ( v24 >> 12 < v79 )
  {
    v27 = a8;
    v28 = 0;
    if ( *(_QWORD *)(a1 + 64) == v21 )
    {
      v89 = v77;
      BugCheckParameter2 = (__int64 *)sub_14026F0F0((unsigned int *)(a1 + 128), &v89);
      v29 = BugCheckParameter2;
      if ( !v27 && a7 == 24 )
        v28 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
    }
    else
    {
      v29 = sub_140287180(a1, *v93, 0);
      BugCheckParameter2 = v29;
    }
    v30 = *((unsigned int *)v29 + 9) | ((unsigned __int64)((_WORD)v29[4] & 0xFFC0) << 26);
    v77 -= v30;
    v31 = v78 - v30;
    if ( v28 )
      v31 = 1LL;
    v78 = v31;
    v91 = sub_140311CC0(v29, v31, 8LL, (__int64)v29);
    v26 = v91;
    if ( v91 < 0 )
      goto LABEL_41;
    v32 = BugCheckParameter2;
    v84 = (__int64 *)(BugCheckParameter2[1] + 8 * v77);
    if ( *(_QWORD *)(a1 + 64) == v21 && v27 && sub_140287C30((_QWORD *)a1) < v79 )
    {
      v33 = v21;
      LOBYTE(v33) = (v27 & 0xFFF) != 0;
      v83 = (v27 >> 12) + v33;
    }
    v85 = v21;
    v34 = *(_QWORD *)(a5 + 24) << 12;
    LOWORD(v35) = KeGetCurrentNodeNumber();
    v36 = sub_14030B860(64LL, 0x88uLL, 0x20646156u, v35 | 0x80000000);
    v21 = (__int64)v36;
    if ( !v36 )
    {
      v26 = -1073741670;
      goto LABEL_39;
    }
    v36[2] = -2LL;
    v39 = 0;
    v40 = a6 == 1;
    v36[10] = v84;
    v41 = *((_DWORD *)v36 + 16);
    if ( v40 )
      v39 = 0x4000000;
    *(_QWORD *)(v21 + 72) = BugCheckParameter2;
    v42 = v41 & 0xFBFFFFFF | v39;
    v43 = (*(_DWORD *)(v21 + 48) ^ (a7 << 7)) & 0xF80;
    *(_DWORD *)(v21 + 64) = v42;
    *(_DWORD *)(v21 + 48) ^= v43;
    *(_DWORD *)(v21 + 48) ^= (*(_DWORD *)(v21 + 48) ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    if ( *(_DWORD *)(a2 + 52) )
      *(_BYTE *)(*(_QWORD *)(v16 + 1680) + 340LL) = 1;
    if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
      *(_DWORD *)(v21 + 64) |= 0x2000000u;
    *(_QWORD *)(v21 + 40) = 0LL;
    v90 = v21 + 40;
    *(_DWORD *)(v21 + 64) = ((__int64)*v93 >> 16) & 0xFFFFFF | *(_DWORD *)(v21 + 64) & 0xFF000000;
    if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
    {
      v91 = sub_14097EE60(v21);
      v26 = v91;
      if ( v91 < 0 )
        goto LABEL_39;
      v32 = BugCheckParameter2;
    }
    *(_QWORD *)(v21 + 128) = sub_1406FC03C(a5);
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        v44 = sub_14059F23C(v32, v78);
        if ( v44 > 1 )
        {
          v26 = -1073741280;
          goto LABEL_39;
        }
        v45 = *(_DWORD *)(v21 + 48);
        v76 = 1;
        v46 = v45 & 0xFFE7FFFF | 0x100000;
        v47 = v45 | 0x180000;
        if ( v44 == 1 )
          v47 = v46;
        *(_DWORD *)(v21 + 48) = v47;
      }
      else
      {
        *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x100000;
      }
    }
    sub_14030B820((__int64)CurrentThread, v16);
    if ( (*(_DWORD *)(v16 + 1124) & 0x20) != 0 )
    {
      v26 = -1073741558;
      sub_140281A58((__int64)CurrentThread, v16);
      goto LABEL_123;
    }
    if ( (*(_DWORD *)(a2 + 60) & 1) != 0 )
    {
      v48 = *v92;
    }
    else
    {
      if ( !v34 )
      {
        v91 = sub_1407B83C0(
                *(_DWORD *)(a2 + 40),
                *(_QWORD *)a2,
                *(_QWORD *)(a2 + 8),
                *(_QWORD *)(a2 + 24),
                *(_QWORD *)(a2 + 16),
                0LL,
                a7,
                0,
                (__int64)&v85,
                (__int64)&v73);
        v26 = v91;
        if ( v91 >= 0 )
        {
          v48 = v73;
          v49 = *(_QWORD *)(a2 + 24) + v73 - 1;
          v80 = v49;
          goto LABEL_84;
        }
LABEL_121:
        sub_140281A58((__int64)CurrentThread, v16);
        if ( v75 )
          sub_1406FC2F0(a1, v16, 0LL);
LABEL_123:
        if ( v76 )
        {
          v61 = sub_140287180(a1, *(_QWORD *)(a2 + 32) + *v93 - 1, 0);
          v37 = BugCheckParameter2;
          sub_14059DF58(BugCheckParameter2, v61);
          goto LABEL_40;
        }
LABEL_39:
        v37 = BugCheckParameter2;
LABEL_40:
        sub_140283DF0(v37);
LABEL_41:
        sub_14025E274(a1);
        if ( v21 )
        {
          if ( *(__int64 *)(v21 + 120) < 0 )
            sub_1402583CC(v21, a1);
          v38 = *(void **)(v21 + 128);
          if ( v38 )
            ObfDereferenceObject(v38);
          sub_1406EBA90(v21);
          ExFreePoolWithTag((PVOID)v21, 0);
        }
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v26;
      }
      v48 = v34 + *v93;
    }
    v50 = *(_QWORD *)(a2 + 24) - 1LL;
    v73 = v48;
    v51 = v48 + v50;
    v40 = (*(_DWORD *)(a2 + 64) & 0x4000000) == 0;
    v80 = v51;
    if ( v40 )
    {
      if ( !sub_1406F8804(v16, v48, v51 - v48 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        v26 = -1073741800;
        sub_140281A58(v71, v16);
        goto LABEL_123;
      }
    }
    else
    {
      v74 = (PVOID)sub_1405B2088(v48, v51, *(_BYTE *)(a2 + 57), &v91);
      if ( !v74 )
      {
        v26 = v91;
        CurrentThread = (struct _KTHREAD *)v71;
        goto LABEL_121;
      }
      v49 = v80;
    }
LABEL_84:
    v79 = v48 >> 12;
    v86 = v49 >> 12;
    sub_14030B420(v21, v48 >> 12);
    *(_DWORD *)(v21 + 28) = v52;
    *(_BYTE *)(v21 + 33) = BYTE4(v52);
    if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
    {
      CurrentThread = (struct _KTHREAD *)v71;
      --*(_WORD *)(v71 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F110, 0LL);
      v54 = *(_DWORD **)(v81 + 32);
      if ( v54 )
      {
        ++v54[2];
      }
      else
      {
        v55 = sub_1402828F0(64, 0x10uLL, 0x78436D4Du);
        v54 = v55;
        if ( !v55 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C4F110);
          sub_1402AFC00((ULONG_PTR)&qword_140C4F110);
          v40 = (*(_WORD *)(v71 + 486))++ == 0xFFFF;
          if ( v40 && *(_QWORD *)(v71 + 152) != v71 + 152 )
            KiCheckForKernelApcDelivery();
          v26 = -1073741670;
          goto LABEL_119;
        }
        v56 = v81;
        v55[2] = 1;
        *(_QWORD *)v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 24), -1LL, -1LL);
        *(_QWORD *)(v56 + 32) = v55;
      }
      v57 = *(_QWORD *)(a5 + 48);
      if ( *(_QWORD *)v54 < v57 )
        *(_QWORD *)v54 = v57;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4F110);
      sub_1402AFC00((ULONG_PTR)&qword_140C4F110);
      v40 = (*(_WORD *)(v71 + 486))++ == 0xFFFF;
      if ( v40 && *(_QWORD *)(v71 + 152) != v71 + 152 )
        KiCheckForKernelApcDelivery();
      v48 = v73;
      v52 = v86;
      v53 = v79;
      *(_QWORD *)(v21 + 120) = v54;
    }
    if ( (a7 & 5) == 5 )
    {
      v58 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
          - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
          + 1;
      *(_DWORD *)(v21 + 52) ^= ((*(_DWORD *)(v21 + 28) - *(_DWORD *)(v21 + 24) + 1) ^ *(_DWORD *)(v21 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v21 + 34) = v58 >> 31;
    }
    v59 = BugCheckParameter2;
    *(_QWORD *)(v21 + 88) = sub_1402879C8((__int64)BugCheckParameter2, v52 + v77 - v53);
    if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
    {
      P = (PVOID)sub_1407B9190(v21, v48, v60, 0x80000000, 0);
      if ( !P )
      {
        v26 = -1073741670;
LABEL_118:
        CurrentThread = (struct _KTHREAD *)v71;
LABEL_119:
        if ( v74 )
          sub_140281C44((__int64)CurrentThread, (__int64)v74);
        goto LABEL_121;
      }
    }
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFFFFF8F | 0x50;
      v48 = v73;
      *(_DWORD *)(v21 + 64) |= 0x1000000u;
    }
    if ( !*(_QWORD *)(a1 + 64) )
    {
      v26 = sub_1406FC590(a1, v16, 0LL);
      if ( (v26 & 0x80000000) != 0 )
        goto LABEL_118;
      v59 = BugCheckParameter2;
      v75 = 1;
    }
    if ( v83 && !(unsigned int)sub_1406A4140(v59, v84, v83) )
    {
      v26 = -1073741523;
      goto LABEL_118;
    }
    v91 = sub_1407B88C0(v21, v16);
    v26 = v91;
    if ( v91 < 0 )
      goto LABEL_118;
    if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x80000;
    if ( v74 )
    {
      sub_14097F038(v74, v16, v82);
      ExAcquirePushLockExclusiveEx(v21 + 40, 0LL);
    }
    else
    {
      sub_14030B7F0(v71, v21);
    }
    sub_14030E390(v21, v16, 0);
    if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v81 + 56) )
      *(_QWORD *)(v81 + 56) = v48;
    v62 = v85;
    if ( v85 )
      sub_1406FCFF0(v79, v86);
    if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
      v48 = v73;
    }
    if ( (xmmword_140D06900[0] & 0x8000) != 0 )
      sub_14096CDB8(v21, 1061LL, v62);
    v26 = 0;
    v91 = 0;
    if ( !*(_DWORD *)(a2 + 120) && !*(_QWORD *)(a2 + 72) )
    {
      v63 = v74;
      if ( v74 )
      {
        v64 = v90;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v64);
        sub_1402AFC00(v64);
        sub_140281A58(v71, v16);
        v65 = v73;
        v26 = v91;
        sub_14097EF10(v63);
        *v92 = v65;
      }
      else
      {
        sub_140281C44(v71, v21);
        sub_140281A58(v71, v16);
        *v92 = v48;
      }
      return v26;
    }
    sub_140281A58(v71, v16);
    sub_14030EB64(v21);
    v66 = *(_DWORD *)(a2 + 120);
    if ( v66 )
    {
      v26 = sub_1406F74A8(v21, 0LL, v66);
      if ( (v26 & 0x80000000) != 0 )
      {
LABEL_157:
        v69 = v74;
        sub_1406F9060((unsigned int *)v21, (__int64)v74, 0LL);
        if ( v69 )
          sub_14097EF10(v69);
        return v26;
      }
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v67 = *(_DWORD *)(a2 + 68);
      if ( (unsigned int)(v67 - 1) > 1 && v67 != -2147483647 && v67 != 4 )
      {
        v68 = -1073741755;
LABEL_156:
        v26 = v68;
        goto LABEL_157;
      }
      v68 = sub_1406A2588(v21, v48, *(_QWORD *)(a2 + 24), v67, 0, &v87);
      if ( v68 < 0 )
        goto LABEL_156;
      **(_QWORD **)(a2 + 72) = qword_140C50680 ^ v87 ^ v16;
    }
    v70 = v74;
    if ( v74 )
    {
      sub_1405B204C((PVOID)v21);
      sub_14097EF10(v70);
    }
    else
    {
      sub_14032E700((char *)v21);
    }
    *v92 = v48;
    return v26;
  }
  v26 = -1073741793;
  sub_14025E274(a1);
  return v26;
}
