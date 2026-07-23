/*
 * XREFs of sub_1402C4E50 @ 0x1402C4E50
 * Callers:
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022BAE0 @ 0x14022BAE0 (sub_14022BAE0.c)
 *     sub_14025DB3C @ 0x14025DB3C (sub_14025DB3C.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028F8E4 @ 0x14028F8E4 (sub_14028F8E4.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402E86F0 @ 0x1402E86F0 (sub_1402E86F0.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405872B0 @ 0x1405872B0 (sub_1405872B0.c)
 *     sub_1405AD7A0 @ 0x1405AD7A0 (sub_1405AD7A0.c)
 *     sub_1405AD910 @ 0x1405AD910 (sub_1405AD910.c)
 *     sub_1405B2968 @ 0x1405B2968 (sub_1405B2968.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402C4E50(__int64 a1, volatile signed __int64 *a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // r10
  unsigned int v8; // r11d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  volatile signed __int64 *v12; // rdi
  int v13; // esi
  int v14; // r12d
  struct _KTHREAD *CurrentThread; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 CurrentIrql; // r11
  __int64 v20; // r9
  _BYTE *v21; // r15
  int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // r13
  unsigned __int64 v29; // r15
  unsigned int v30; // r8d
  int v31; // r10d
  char v32; // r11
  __int64 v33; // r12
  __int64 v34; // rsi
  unsigned __int64 i; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // r13
  unsigned __int64 *v38; // r10
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  unsigned __int64 *v41; // r9
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r12
  BOOL v47; // esi
  __int64 v48; // rdx
  char v49; // al
  int *v50; // rsi
  __int64 *v51; // r12
  __int64 v52; // r12
  __int64 v53; // r13
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  int j; // ecx
  struct _KPRCB *v60; // rcx
  __int64 v61; // rdx
  int v62; // eax
  ULONG_PTR v63; // r15
  __int64 v64; // r12
  unsigned int v65; // esi
  unsigned __int8 v66; // di
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  __int64 v69; // r9
  int v70; // eax
  bool v71; // zf
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r9
  __int64 v75; // r8
  int v76; // eax
  volatile signed __int64 *v77; // rdi
  __int64 v78; // rcx
  ULONG_PTR v79; // r10
  __int64 v80; // rax
  __int64 v81; // rdx
  int v82; // edi
  int v83; // eax
  unsigned int v84; // edi
  unsigned int v85; // [rsp+20h] [rbp-1A8h]
  unsigned int v86; // [rsp+24h] [rbp-1A4h]
  char v87; // [rsp+28h] [rbp-1A0h]
  __int64 v88; // [rsp+30h] [rbp-198h]
  BOOL v89; // [rsp+38h] [rbp-190h]
  _BYTE *v90; // [rsp+40h] [rbp-188h]
  int v91; // [rsp+48h] [rbp-180h]
  __int64 v92; // [rsp+50h] [rbp-178h] BYREF
  volatile signed __int64 *v93; // [rsp+58h] [rbp-170h]
  __int64 v94; // [rsp+60h] [rbp-168h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-160h]
  BOOL v96; // [rsp+70h] [rbp-158h]
  int v97; // [rsp+74h] [rbp-154h]
  unsigned int v98; // [rsp+78h] [rbp-150h]
  __int64 v99; // [rsp+80h] [rbp-148h]
  PVOID P; // [rsp+88h] [rbp-140h]
  __int64 v101; // [rsp+90h] [rbp-138h]
  __int64 v102; // [rsp+98h] [rbp-130h]
  __int64 v103; // [rsp+A0h] [rbp-128h]
  int v104; // [rsp+A8h] [rbp-120h] BYREF
  unsigned __int64 v105; // [rsp+B0h] [rbp-118h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v108; // [rsp+D8h] [rbp-F0h]
  __int64 v109; // [rsp+E0h] [rbp-E8h]
  __int64 Base; // [rsp+E8h] [rbp-E0h] BYREF
  __int128 v111; // [rsp+F0h] [rbp-D8h]
  __int128 v112; // [rsp+100h] [rbp-C8h]
  __int128 v113; // [rsp+110h] [rbp-B8h]
  __int128 v114; // [rsp+120h] [rbp-A8h]
  __int128 v115; // [rsp+130h] [rbp-98h]
  __int128 v116; // [rsp+140h] [rbp-88h]
  __int128 v117; // [rsp+150h] [rbp-78h]
  __int128 v118; // [rsp+160h] [rbp-68h]
  __int128 v119; // [rsp+170h] [rbp-58h]
  __int64 v120; // [rsp+180h] [rbp-48h]
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  v93 = a2;
  v3 = (_BYTE *)a1;
  v88 = a1;
  v101 = a1;
  P = (PVOID)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v92 = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  v103 = v5;
  v90 = (_BYTE *)a1;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(unsigned int *)(a1 + 64);
  v86 = v7;
  v8 = *(_DWORD *)(a1 + 64);
  v98 = v8;
  if ( (unsigned int)v7 >= 3 )
  {
    v9 = 1LL;
  }
  else
  {
    v9 = qword_14001C780[v7];
    if ( !(_DWORD)v7 )
    {
      v4 = *(_QWORD *)(a1 + 224);
      v92 = v4;
      v6 = *(_QWORD *)(v4 + 312) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 216) << 21);
      a1 = v4;
      v90 = (_BYTE *)v4;
      v9 = 512LL;
    }
    if ( (dword_140D0689C & 0x200000) != 0 && *(_BYTE *)(a1 + 72) )
    {
      sub_1405B2968(v5, (unsigned int)v7, v3);
      v3 = (_BYTE *)v88;
      LODWORD(v7) = v86;
      v8 = v86;
    }
  }
  v102 = v4;
  if ( v90 == v3 )
  {
    v10 = (unsigned int)v7;
    ++dword_140C29768[(unsigned int)v7];
  }
  else
  {
    v10 = v8;
  }
  v11 = v9 << 12;
  if ( (unsigned int)v7 <= 1 )
    ++dword_140C29738[v10];
  sub_140424F50(v6, v11);
  v12 = v93;
  v85 = 1;
  v13 = 1;
  v97 = 1;
  v14 = 0;
  v89 = 0;
  v91 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v103 = (__int64)CurrentThread;
  if ( (dword_140D0689C & 0x8400000) != 0
    && (v86 <= 1 || (dword_140D0689C & 0x8000000) == 0)
    && !*((_BYTE *)CurrentThread + 195)
    && !v90[68]
    && !v90[71]
    && !v90[70] )
  {
    v91 = 1;
    sub_14028F8E4(v88);
    --*(_WORD *)(v103 + 486);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v12 + 24), 0LL);
  }
  v102 = 0LL;
  v16 = 0x3FFFFFLL;
  v101 = 0x3FFFFFLL;
  P = 0LL;
  if ( v4 )
  {
    v14 = 1;
    v17 = *(unsigned int *)(v4 + 320);
    if ( *(_BYTE *)(v4 + 68) )
    {
      v16 = *(_QWORD *)(v4 + 176);
      v101 = v16;
      v5 = 0LL;
    }
    else
    {
      v5 = 48LL * *(_QWORD *)(v4 + 176) - 0x220000000000LL;
    }
    v18 = *((_QWORD *)v93 + 2) + 24512 * v17;
    v102 = v18;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 22808), &LockHandle);
  }
  else
  {
    v18 = 0LL;
  }
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v99 = CurrentIrql;
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v104 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v104);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
  }
  else
  {
    LOBYTE(v99) = 17;
  }
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 68) )
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v18 + 22848));
    v85 = 0;
    v13 = 0;
    v21 = v90;
    if ( !v90[70] )
    {
      if ( ++*(_DWORD *)(v4 + 328) != 512 )
      {
        v97 = 0;
        goto LABEL_52;
      }
      v13 = 1;
    }
    v85 = v13;
    v22 = *(_DWORD *)(v4 + 324);
    if ( v22 == 1 )
    {
      v23 = *(_QWORD *)(v4 + 80);
      v24 = *(_QWORD **)(v4 + 88);
      if ( *(_QWORD *)(v23 + 8) != v4 + 80 || *v24 != v4 + 80 )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      v13 = 1;
      P = (PVOID)v4;
    }
    else
    {
      *(_DWORD *)(v4 + 324) = v22 - 1;
      v85 = v13;
    }
  }
  else
  {
    v21 = v90;
  }
LABEL_52:
  v87 = v21[70];
  if ( !v13 )
  {
LABEL_105:
    v25 = v88;
    goto LABEL_106;
  }
  if ( !v14 )
  {
    v28 = *(unsigned int *)(v88 + 64);
    v29 = *(_QWORD *)(v88 + 32);
    v105 = v29;
    v107 = 0LL;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v117 = 0LL;
    v118 = 0LL;
    v119 = 0LL;
    v120 = 0LL;
    v30 = 0;
    v108 = 20LL;
    v31 = 0;
    v32 = 0;
    v33 = 0LL;
    v109 = 0LL;
    Base = 0LL;
    if ( (unsigned int)v28 > 1 )
    {
      v34 = 0LL;
    }
    else
    {
      sub_1402285E8((__int64)&v107, 2 - v28, v29);
      v34 = 1LL;
      v33 = v109;
      v30 = HIDWORD(v108);
      v32 = BYTE4(v107);
      v31 = v107;
    }
    for ( i = v29; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v96 = (!qword_140C53088 || i < qword_140C53088 || i >= qword_140C53088 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v28 <= 1;
    if ( v34 )
      goto LABEL_95;
    v94 = 0LL;
    v36 = (__int64)(v29 << 25) >> 16;
    if ( (_DWORD)v28 != 3 )
    {
      if ( (_DWORD)v28 == 2 )
      {
        sub_1402CF280(&v107, (__int64)(v29 << 25) >> 16, 16LL, 0LL);
        v34 = 16LL;
      }
      else
      {
        v52 = qword_14001C780[v28];
        if ( (unsigned int)v28 <= 1 )
        {
          v53 = (unsigned int)(2 - v28);
          do
          {
            sub_1402CF280(&v107, v36, v52, 0LL);
            v36 = (__int64)((v36 << 25) - v94) >> 16;
            v52 <<= 9;
            --v53;
          }
          while ( v53 );
          v29 = v105;
        }
        v34 = 512LL;
      }
      goto LABEL_95;
    }
    v94 = 1LL;
    v37 = 1LL;
    if ( v31 != 1 && (v32 & 8) == 0 && v36 >= 0xFFFFF68000000000uLL && v36 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v32 |= 8u;
      BYTE4(v107) = v32;
    }
    if ( v30 )
    {
      if ( (v32 & 4) == 0 )
      {
        v38 = (unsigned __int64 *)(&Base + v30 - 1);
        v39 = *v38;
        if ( (*v38 & 0xC00) == 0 )
        {
          v40 = *v38 & 0x3FF;
          if ( (v39 & 0xFFFFFFFFFFFFF000uLL) + ((v40 + 1) << 12) == v36 && v40 + 1 >= v40 && v40 + 1 <= 0x3FF )
          {
            v109 = v33 + 1;
            *v38 = ((unsigned __int16)v39 ^ (unsigned __int16)(v39 + 1)) & 0x3FF ^ v39;
            v34 = 1LL;
LABEL_95:
            v46 = v29 + 8 * v34;
            if ( v29 < v46 )
            {
              do
              {
                v47 = 0;
                if ( (unsigned int)sub_140317A80(v29) )
                  v47 = sub_140229550() != 0;
                *(_QWORD *)v29 = 0LL;
                if ( v47 )
                  sub_1402294F0(v29, 0LL);
                v29 += 8LL;
              }
              while ( v29 < v46 );
              v16 = v101;
            }
            if ( v96 )
              sub_14032F1B0(&v107);
            v21 = v90;
            v4 = v92;
            goto LABEL_105;
          }
        }
      }
      if ( (v32 & 4) == 0 )
      {
        v41 = (unsigned __int64 *)(&Base + v30 - 1);
        v42 = *v41;
        if ( (*v41 & 0xC00) == 0 && (v42 & 0xFFFFFFFFFFFFF000uLL) == v36 + 4096 )
        {
          v43 = *v41 & 0x3FF;
          if ( v43 + 1 >= v43 && v43 + 1 <= 0x3FF )
          {
            v109 = v33 + 1;
            *v41 = ((unsigned __int16)(v42 - 4096) ^ (unsigned __int16)(v42 - 4096 + 1)) & 0x3FF ^ (v42 - 4096);
            v34 = 1LL;
            goto LABEL_95;
          }
        }
      }
    }
    if ( v30 >= (unsigned int)v108 )
    {
      BYTE5(v107) = 1;
      v34 = 1LL;
    }
    else
    {
      while ( 1 )
      {
        v44 = 1024LL;
        if ( (unsigned __int64)(v37 - 1) <= 0x3FF )
          v44 = v37;
        v37 -= v44;
        v45 = v36 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v44 - 1) & 0x3FF;
        v36 += v44 << 12;
        *(&Base + v30) = v45;
        v30 = HIDWORD(v108) + 1;
        HIDWORD(v108) = v30;
        v109 += v44;
        if ( v30 == (_DWORD)v108 && (v107 & 0x400000000LL) == 0 )
        {
          qsort(&Base, v30, 8uLL, (int (__cdecl *)(const void *, const void *))sub_14022E340);
          sub_14022BAE0((__int64)&v107);
          v30 = HIDWORD(v108);
          if ( HIDWORD(v108) == (_DWORD)v108 )
          {
            if ( v37 )
              break;
          }
        }
        if ( !v37 )
          goto LABEL_94;
      }
      BYTE5(v107) = 1;
      v109 = HIDWORD(v108);
LABEL_94:
      v34 = v94;
    }
    goto LABEL_95;
  }
  v25 = v88;
  v26 = *(_QWORD *)(v88 + 224);
  v27 = *(_QWORD *)(v26 + 312);
  *(_QWORD *)(v26 + 312) = 0LL;
  sub_14025DB3C(v27);
  sub_140268284(v26 + 184);
LABEL_106:
  if ( v4 && v97 )
    *(_QWORD *)(v25 + 224) = 0LL;
  v48 = v85;
  if ( v85 || P )
  {
    v49 = v21[73];
    v50 = &dword_140C51DF0;
    if ( v49 )
      v50 = &dword_140C51DE0;
    v51 = &qword_140C51DF8;
    if ( v49 )
      v51 = &qword_140C51DE8;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      LOBYTE(v48) = -1;
      sub_140461A66(v50, v48);
    }
    else
    {
      LODWORD(v92) = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v55 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v55 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v56 = *(_DWORD *)(v55 + 24);
          *(_DWORD *)(v55 + 24) = v56 + 1;
          if ( v56 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v50, 0x1Fu) )
      {
        v57 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v57 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v58 = *(_DWORD *)(v57 + 24) - 1;
            *(_DWORD *)(v57 + 24) = v58;
            if ( !v58 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        LODWORD(v92) = sub_140220C30(v50, 0xFFu);
      }
      for ( j = *v50; (*v50 & 0xBFFFFFFF) != 0x80000000; j = *v50 )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedOr(v50, 0x40000000u);
        sub_1402F32E0(&v92);
      }
      v21 = v90;
    }
    RtlAvlRemoveNode(v51, v21);
    v21[69] = 0;
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14063D8B0(v50, retaddr);
    else
      *v50 = 0;
    v60 = KeGetCurrentPrcb();
    v61 = *((_QWORD *)v60 + 4375);
    if ( v61 )
    {
      if ( *((_BYTE *)v60 + 32) <= 1u )
      {
        v62 = *(_DWORD *)(v61 + 24) - 1;
        *(_DWORD *)(v61 + 24) = v62;
        if ( !v62 )
          sub_140418E4C(v60);
      }
    }
    LODWORD(v48) = v85;
  }
  if ( v87 )
  {
    ++dword_140C29758[v98];
    ++dword_140C29734;
LABEL_151:
    v63 = 0LL;
    v64 = v88;
LABEL_152:
    v65 = v86;
    goto LABEL_153;
  }
  ++dword_140C29748[v98];
  ++dword_140C29728;
  if ( !(_DWORD)v48 )
    goto LABEL_151;
  if ( v5 )
  {
    v79 = 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4);
    BugCheckParameter2 = v79;
  }
  else
  {
    v79 = 0LL;
  }
  v65 = v86;
  if ( v86 == 3 )
  {
    ++dword_140C2972C;
    v64 = v88;
    *(_QWORD *)(v88 + 24) = 0LL;
    *(_BYTE *)(v5 + 34) &= ~8u;
    v80 = 128LL;
    v81 = qword_140C50780;
    if ( qword_140C50780 )
    {
      if ( (qword_140C50780 & 0x80) != 0 )
        v80 = 144LL;
      else
        v80 = qword_140C50780 | 0x80;
    }
    *(_QWORD *)(v5 + 16) = v80;
    if ( v90[71] )
    {
      sub_1405AD7A0(v79, v81, 0xAAAAAAAAAAAAAAABuLL, 0xFFFFDE0000000000uLL);
      v63 = BugCheckParameter2;
    }
    else
    {
      if ( v91 )
      {
        v82 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4)) + 2);
        v83 = sub_1402E8990(v5);
        v84 = (v83 << byte_140C506CD) | dword_140C50738 & BugCheckParameter2 | (v82 << byte_140C506CC);
        if ( (unsigned int)sub_1405AD910(v93, v84, 0LL) )
        {
          if ( *(_QWORD *)(88LL * v84 + *((_QWORD *)v93 + 304)) >= (unsigned __int64)(unsigned int)(4
                                                                                                  * *((_DWORD *)v93 + 4047)) )
            v89 = 1;
        }
      }
      v63 = BugCheckParameter2;
      sub_1402C8740(BugCheckParameter2);
      sub_1402C6EB0(v63);
    }
    goto LABEL_152;
  }
  if ( v91 )
    v89 = v21[71] == 0;
  if ( v4 && *(_BYTE *)(v4 + 68) )
  {
    *(_BYTE *)(v4 + 70) = 1;
    *(_QWORD *)(v4 + 24) = 0LL;
    sub_1405872B0(v93, v16, 0xAAAAAAAAAAAAAAABuLL, 0xFFFFDE0000000000uLL);
    v64 = v88;
    v63 = BugCheckParameter2;
  }
  else
  {
    sub_1402E86F0(v79);
    v64 = v88;
    v63 = BugCheckParameter2;
  }
LABEL_153:
  if ( v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v66 = v99;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v67 = KeGetCurrentIrql();
        if ( v67 <= 0xFu && (unsigned __int8)v99 <= 0xFu && v67 >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          v69 = *((_QWORD *)v68 + 4375);
          v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v99 + 1));
          v71 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
          *(_DWORD *)(v69 + 20) &= v70;
          if ( v71 )
            sub_140418E4C(v68);
        }
      }
    }
    __writecr8(v66);
  }
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 68) )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v102 + 22848));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v73 = KeGetCurrentIrql();
        if ( v73 <= 0xFu && LockHandle.OldIrql <= 0xFu && v73 >= 2u )
        {
          v74 = KeGetCurrentPrcb();
          v75 = *((_QWORD *)v74 + 4375);
          v76 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v71 = (v76 & *(_DWORD *)(v75 + 20)) == 0;
          *(_DWORD *)(v75 + 20) &= v76;
          if ( v71 )
            sub_140418E4C(v74);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v89 )
    sub_1405B766C(v63, v65, 0LL);
  if ( v91 )
  {
    v77 = v93;
    if ( _InterlockedCompareExchange64(v93 + 24, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v77 + 24);
    sub_1402AFC00((ULONG_PTR)(v77 + 24));
    v78 = v103;
    v71 = (*(_WORD *)(v103 + 486))++ == 0xFFFF;
    if ( v71 && *(_QWORD *)(v78 + 152) != v78 + 152 )
      KiCheckForKernelApcDelivery();
    sub_14028F8E4(v64);
  }
}
