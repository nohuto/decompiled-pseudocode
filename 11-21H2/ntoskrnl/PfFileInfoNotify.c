/*
 * XREFs of PfFileInfoNotify @ 0x1402CCCF0
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140360158 @ 0x140360158 (sub_140360158.c)
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 *     sub_14036053C @ 0x14036053C (sub_14036053C.c)
 *     sub_140360618 @ 0x140360618 (sub_140360618.c)
 *     sub_140366094 @ 0x140366094 (sub_140366094.c)
 *     sub_140366BE8 @ 0x140366BE8 (sub_140366BE8.c)
 *     _wcsupr @ 0x1403E17B0 (_wcsupr.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140675300 @ 0x140675300 (sub_140675300.c)
 *     sub_1406B5F74 @ 0x1406B5F74 (sub_1406B5F74.c)
 *     sub_1406CE4C4 @ 0x1406CE4C4 (sub_1406CE4C4.c)
 *     sub_1407E5234 @ 0x1407E5234 (sub_1407E5234.c)
 */

__int64 __fastcall PfFileInfoNotify(_DWORD *a1)
{
  bool v1; // zf
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r10
  unsigned __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ebx
  PSLIST_ENTRY k; // rdx
  unsigned __int64 *v26; // rcx
  unsigned __int64 v27; // rax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  _SLIST_ENTRY *Next; // rbx
  int v31; // esi
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // r15d
  int v37; // r14d
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // edx
  const void *v41; // r12
  int v42; // ebx
  unsigned int v43; // r15d
  unsigned int *v44; // rsi
  int v45; // r9d
  wchar_t *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 *v51; // rcx
  __int64 v52; // rdx
  int v53; // eax
  unsigned int v54; // r15d
  unsigned int *v55; // rsi
  __int16 v56; // cx
  int v57; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v59; // r12d
  struct _KTHREAD *v60; // rax
  struct _KTHREAD *v61; // r13
  __int64 v62; // rdx
  char *v63; // rsi
  __int64 v64; // r8
  __int64 v65; // rdx
  struct _KTHREAD *v66; // r14
  char *v67; // rbx
  unsigned __int64 v68; // rdx
  unsigned int v69; // ecx
  int v70; // r9d
  int v71; // r9d
  int v72; // ecx
  struct _KTHREAD *v73; // rax
  unsigned int v74; // r12d
  struct _KTHREAD *v75; // rax
  __int64 i; // rsi
  struct _KTHREAD *v77; // r13
  __int64 v78; // rdx
  char *v79; // rsi
  __int64 v80; // r8
  int v81; // r9d
  char *v82; // rbx
  unsigned __int64 v83; // rdx
  unsigned int j; // ecx
  __int64 v85; // [rsp+30h] [rbp-40h] BYREF
  __int64 v86; // [rsp+38h] [rbp-38h]
  unsigned __int64 v87; // [rsp+40h] [rbp-30h]
  __int128 v88; // [rsp+48h] [rbp-28h]
  __int128 v89; // [rsp+58h] [rbp-18h]
  unsigned __int64 v90; // [rsp+68h] [rbp-8h]
  PSLIST_ENTRY ListEntry; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int *v92; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v93; // [rsp+C0h] [rbp+50h]

  v1 = *a1 == 15;
  HIDWORD(v85) = 0;
  ListEntry = 0LL;
  v92 = 0LL;
  if ( !v1 )
  {
    v31 = -1073741811;
    goto LABEL_25;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v34 = a1[1];
    if ( v34 == 7 )
    {
      a1[4] = _InterlockedIncrement(&dword_140CF5E50);
      return 0;
    }
    v57 = v34 - 10;
    if ( !v57 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54648, 0LL);
      v59 = -1;
      if ( qword_140C54638 )
      {
        v31 = -1073741791;
      }
      else
      {
        v60 = KeGetCurrentThread();
        --*((_WORD *)v60 + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54650, 0LL);
        dword_140C54668 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C54650);
        v61 = KeGetCurrentThread();
        if ( (unsigned __int64)&qword_140C54650 - qword_140C50630 >= 0x8000000000LL )
          v62 = 0xFFFFFFFFLL;
        else
          v62 = (unsigned int)sub_140287F30(*((_QWORD *)v61 + 23));
        _disable();
        v63 = (char *)v61 + 1696;
        v64 = 0LL;
        while ( (*(_QWORD *)v63 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C54650 & 0x7FFFFFFFFFFFFFFCLL)
             || !v63[18]
             || (*(_DWORD *)v63 & 1) != 0
             || *((_DWORD *)v63 + 2) != (_DWORD)v62 )
        {
          v64 = (unsigned int)(v64 + 1);
          v63 += 96;
          if ( (unsigned int)v64 >= 6 )
          {
            if ( (*((_DWORD *)v61 + 30) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v61, (ULONG_PTR)&qword_140C54650, (unsigned int)v62, 0LL);
            _enable();
            goto LABEL_81;
          }
        }
        v63[18] = 0;
        if ( *(__int64 *)v63 < 0 )
        {
          *v63 |= 2u;
          _enable();
          sub_14034EE30(v63, v62, v64);
          _disable();
        }
        v70 = *((_DWORD *)v63 + 22);
        *((_DWORD *)v63 + 22) = 0;
        v63[17] = 0;
        *(_QWORD *)v63 = 0LL;
        *((_BYTE *)v61 + 792) |= 1 << v63[16];
        _enable();
        if ( v70 )
          sub_14022B568((ULONG_PTR)v61, (__int64)&qword_140C54650, v70);
LABEL_81:
        KeLeaveCriticalRegion();
        sub_14042A5E0(sub_140661EF0, v65);
        qword_140C54638 = *((_QWORD *)a1 + 2);
        v31 = 0;
        _InterlockedExchange64((volatile __int64 *)&stru_140C54640, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54648, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C54648);
      v66 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C54648 - qword_140C50630 < 0x8000000000LL )
        v59 = sub_140287F30(*((_QWORD *)v66 + 23));
      _disable();
      v67 = (char *)v66 + 1696;
      v68 = (unsigned __int64)&qword_140C54648 & 0x7FFFFFFFFFFFFFFCLL;
      v69 = 0;
      while ( (*(_QWORD *)v67 & 0x7FFFFFFFFFFFFFFCLL) != v68
           || !v67[18]
           || (*(_DWORD *)v67 & 1) != 0
           || *((_DWORD *)v67 + 2) != v59 )
      {
        ++v69;
        v67 += 96;
        if ( v69 >= 6 )
        {
          if ( (*((_DWORD *)v66 + 30) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v66, (ULONG_PTR)&qword_140C54648, v59, 0LL);
          goto LABEL_93;
        }
      }
      v67[18] = 0;
      if ( *(__int64 *)v67 < 0 )
      {
        *v67 |= 2u;
        _enable();
        sub_14034EE30(v67, v68, 0LL);
        _disable();
      }
      v71 = *((_DWORD *)v67 + 22);
      *((_DWORD *)v67 + 22) = 0;
      v67[17] = 0;
      *(_QWORD *)v67 = 0LL;
      *((_BYTE *)v66 + 792) |= 1 << v67[16];
LABEL_102:
      _enable();
      if ( v71 )
      {
        sub_14022B568((ULONG_PTR)v66, (__int64)&qword_140C54648, v71);
        KeLeaveCriticalRegion();
        goto LABEL_19;
      }
LABEL_94:
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    v72 = v57 - 1;
    if ( !v72 )
    {
      v73 = KeGetCurrentThread();
      --*((_WORD *)v73 + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54648, 0LL);
      v74 = -1;
      if ( qword_140C54638 )
      {
        v75 = KeGetCurrentThread();
        --*((_WORD *)v75 + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54650, 0LL);
        dword_140C54668 |= 1u;
        for ( i = qword_140C54658; (__int64 *)i != &qword_140C54658; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C54650);
        v77 = KeGetCurrentThread();
        if ( (unsigned __int64)&qword_140C54650 - qword_140C50630 >= 0x8000000000LL )
          v78 = 0xFFFFFFFFLL;
        else
          v78 = (unsigned int)sub_140287F30(*((_QWORD *)v77 + 23));
        _disable();
        v79 = (char *)v77 + 1696;
        v80 = 0LL;
        do
        {
          if ( (*(_QWORD *)v79 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C54650 & 0x7FFFFFFFFFFFFFFCLL)
            && v79[18]
            && (*(_DWORD *)v79 & 1) == 0
            && *((_DWORD *)v79 + 2) == (_DWORD)v78 )
          {
            v79[18] = 0;
            if ( *(__int64 *)v79 < 0 )
            {
              *v79 |= 2u;
              _enable();
              sub_14034EE30(v79, v78, v80);
              _disable();
            }
            v81 = *((_DWORD *)v79 + 22);
            *((_DWORD *)v79 + 22) = 0;
            v79[17] = 0;
            *(_QWORD *)v79 = 0LL;
            *((_BYTE *)v77 + 792) |= 1 << v79[16];
            _enable();
            if ( v81 )
              sub_14022B568((ULONG_PTR)v77, (__int64)&qword_140C54650, v81);
            goto LABEL_132;
          }
          v80 = (unsigned int)(v80 + 1);
          v79 += 96;
        }
        while ( (unsigned int)v80 < 6 );
        if ( (*((_DWORD *)v77 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v77, (ULONG_PTR)&qword_140C54650, (unsigned int)v78, 0LL);
        _enable();
LABEL_132:
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease(&stru_140C54640);
        ExRundownCompleted(&stru_140C54640);
        qword_140C54638 = 0LL;
        v31 = 0;
      }
      else
      {
        v31 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54648, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C54648);
      v66 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C54648 - qword_140C50630 < 0x8000000000LL )
        v74 = sub_140287F30(*((_QWORD *)v66 + 23));
      _disable();
      v82 = (char *)v66 + 1696;
      v83 = (unsigned __int64)&qword_140C54648 & 0x7FFFFFFFFFFFFFFCLL;
      for ( j = 0; j < 6; ++j )
      {
        if ( (*(_QWORD *)v82 & 0x7FFFFFFFFFFFFFFCLL) == v83
          && v82[18]
          && (*(_DWORD *)v82 & 1) == 0
          && *((_DWORD *)v82 + 2) == v74 )
        {
          v82[18] = 0;
          if ( *(__int64 *)v82 < 0 )
          {
            *v82 |= 2u;
            _enable();
            sub_14034EE30(v82, v83, 0LL);
            _disable();
          }
          v71 = *((_DWORD *)v82 + 22);
          *((_DWORD *)v82 + 22) = 0;
          v82[17] = 0;
          *(_QWORD *)v82 = 0LL;
          *((_BYTE *)v66 + 792) |= 1 << v82[16];
          goto LABEL_102;
        }
        v82 += 96;
      }
      if ( (*((_DWORD *)v66 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v66, (ULONG_PTR)&qword_140C54648, v74, 0LL);
LABEL_93:
      _enable();
      goto LABEL_94;
    }
    if ( v72 == 1 )
    {
      if ( (dword_140C54790 & 2) == 0 )
        return 0;
      v31 = -1073741431;
    }
    else
    {
LABEL_110:
      v31 = -1073741637;
    }
LABEL_25:
    if ( (int)a1[1] <= 3 )
      ++dword_140C4EC84;
    return (unsigned int)v31;
  }
  if ( (v3 & 4) != 0 )
  {
    v35 = a1[1];
    if ( v35 == 2 )
    {
      sub_1407E5234(*((_QWORD *)a1 + 2));
    }
    else if ( v35 )
    {
      if ( v35 == 3 )
        sub_1406B5F74(*((_QWORD *)a1 + 2));
    }
    else
    {
      sub_1406CE4C4(*((_QWORD *)a1 + 2));
    }
  }
  if ( (a1[2] & 1) == 0 )
    return 0;
  if ( dword_140C4EB80 >= (unsigned int)dword_140C4EB84 )
  {
    v33 = a1[1];
    v4 = v33;
    if ( v33 != 4 && v33 != 2 && v33 != 3 )
    {
LABEL_24:
      v31 = -1073741697;
      goto LABEL_25;
    }
  }
  else
  {
    v4 = a1[1];
  }
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)a1 + 2);
    v6 = v5[1] & 0xFFF;
    v7 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
    if ( dword_140C4EEF0 )
    {
      v8 = v5[4];
      v9 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
      v10 = v5[1];
      v11 = v5[3];
      v12 = *(_QWORD *)(v8 + 544);
      v93 = *v5;
      v13 = sub_1402CD7F0(v12);
      v14 = (struct _EX_RUNDOWN_REF *)v13;
      if ( v13 )
      {
        if ( (unsigned int)sub_140366BE8(v8, v13, 0LL) )
        {
          v36 = v10 & 0xFFFFF000;
          if ( v7 )
          {
            v37 = v93;
            do
            {
              if ( (int)sub_140366094((_DWORD)v14, v37, v11, v36, 0) < 0 )
                break;
              v36 += 4096;
              --v9;
            }
            while ( v9 );
          }
        }
        sub_1402AD030(v14 + 45);
      }
    }
    if ( dword_140C4EB80 < (unsigned int)dword_140C4EB84 )
    {
      v15 = *((_QWORD *)a1 + 2);
      v16 = *(_QWORD *)(v15 + 32);
      v17 = *(int *)(v15 + 20);
      v18 = *(_QWORD *)(v15 + 8);
      v19 = *(_QWORD *)(v15 + 24);
      v20 = *(_QWORD *)(v16 + 544);
      v21 = (*(_DWORD *)(v16 + 1376) >> 12) & 7;
      if ( (*(_DWORD *)(v20 + 1124) & 0x100000) != 0 )
      {
        v53 = 2;
        if ( v21 < 2 )
          v53 = (*(_DWORD *)(v16 + 1376) >> 12) & 7;
        v21 = v53;
      }
      if ( v21 < dword_140C52B6C )
      {
        v31 = 0;
      }
      else
      {
        v22 = *(_QWORD *)(v20 + 1088);
        *(_QWORD *)&v89 = v7 | (v17 << 63);
        v23 = (v22 ^ *(_QWORD *)(v20 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
        *(_QWORD *)&v88 = v19;
        *((_QWORD *)&v89 + 1) = v23;
        v90 = __PAIR64__(v22, dword_140CF5E50);
        *((_QWORD *)&v88 + 1) = v18 >> 12;
        v24 = dword_140C5451C
            + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
              + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
        if ( (unsigned __int8)sub_140347810(&unk_140C4EAC0) )
        {
          while ( 1 )
          {
            for ( k = ExpInterlockedPopEntrySList(&stru_140C4EAE0); !k; k = ExpInterlockedPopEntrySList(&stru_140C4EAE0) )
            {
              k = ExpInterlockedPopEntrySList(&stru_140C4EAD0);
              if ( k )
                break;
              v31 = sub_14042A5E0(&unk_140C4EAC0, 0LL);
              if ( v31 < 0 )
                goto LABEL_160;
            }
            v26 = (unsigned __int64 *)*((_QWORD *)&k[1].Next + 1);
            if ( (char *)k[2].Next - (char *)v26 >= 64 )
            {
              v27 = *v26;
              v28 = v88;
              *((_DWORD *)v26 + 2) = v24;
              v29 = v89;
              *v26 = v27 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
              *((_OWORD *)v26 + 1) = v28;
              *(_QWORD *)&v28 = v90;
              *((_OWORD *)v26 + 2) = v29;
              v26[6] = v28;
              *((_QWORD *)&k[1].Next + 1) += 64LL;
              ++*((_DWORD *)&k[2].Next + 2);
              Next = k[1].Next;
              if ( (__int64)k[2].Next - *((_QWORD *)&k[1].Next + 1) < SHIDWORD(Next[5].Next) )
              {
                sub_14042A5E0(k, k);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], k);
                sub_1402AD030((struct _EX_RUNDOWN_REF *)Next);
              }
              v31 = 0;
              goto LABEL_19;
            }
            if ( !*((_DWORD *)&k[2].Next + 2) )
              break;
            sub_14042A5E0(k, k);
            if ( !(unsigned __int8)sub_140347810(&unk_140C4EAC0) )
              goto LABEL_157;
          }
          ExpInterlockedPushEntrySList(&stru_140C4EAD0, k);
          v31 = -1073741789;
LABEL_160:
          ++dword_140C4EB34;
          dword_140C4EB38 += 64;
          sub_1402AD030((struct _EX_RUNDOWN_REF *)&unk_140C4EAC0);
        }
        else
        {
LABEL_157:
          v31 = -1073741431;
        }
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4EC70 + 1, 1u);
      }
LABEL_19:
      if ( v31 >= 0 )
        return (unsigned int)v31;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  switch ( v4 )
  {
    case 0:
      v54 = 2 * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL);
      v31 = sub_14036053C(&unk_140C4EA40, &ListEntry, &v92, (v54 + 65) & 0xFFFFFFF8);
      if ( v31 < 0 )
        goto LABEL_152;
      v55 = v92;
      *v92 = (8 * ((v54 + 65) & 0xFFFFFFF8)) | *v92 & 0x80000002 | 2;
      v55[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL);
      v55[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL);
      *((_QWORD *)v55 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      v55[9] ^= (v55[9] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF;
      v55[9] ^= ((unsigned __int8)v55[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v55 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v55[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL);
      v56 = 2 * *(_WORD *)(*((_QWORD *)a1 + 2) + 30LL);
      *((_WORD *)v55 + 20) = v56;
      *((_WORD *)v55 + 21) = v56;
      memmove(v55 + 14, *(const void **)(*((_QWORD *)a1 + 2) + 40LL), v54);
      v46 = (wchar_t *)(v55 + 14);
      *((_WORD *)v55 + *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL) + 28) = 0;
      goto LABEL_44;
    case 1:
      sub_140360158(2LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 56LL));
      return 0;
    case 2:
      v38 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v38 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v38 + 32) )
        return 0;
      sub_140675300(&unk_140C54598, v38, 1LL);
      if ( dword_140C4EB80 >= (unsigned int)dword_140C4EB84 )
        goto LABEL_24;
      v39 = *((_QWORD *)a1 + 2);
      v40 = *(_DWORD *)(v39 + 32);
      v41 = (const void *)(*(_QWORD *)(v39 + 24) + 2LL * (unsigned __int16)v40);
      v42 = HIWORD(v40) - (unsigned __int16)v40;
      v43 = 2 * v42;
      v31 = sub_14036053C(&unk_140C4EA40, &ListEntry, &v92, (2 * v42 + 53) & 0xFFFFFFF8);
      if ( v31 >= 0 )
      {
        v44 = v92;
        *v92 = *v92 & 0x80000000 | (8 * ((v43 + 53) & 0xFFFFFF8));
        v44[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 40LL);
        v44[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL);
        *((_QWORD *)v44 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
        v44[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL);
        *((_QWORD *)v44 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        v44[10] ^= (v44[10] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL)) & 1;
        v45 = v44[10] ^ ((unsigned __int8)v44[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL) >> 3)) & 2;
        v44[10] = v45;
        v44[10] = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL))) & 4;
        *((_WORD *)v44 + 21) = v42;
        memmove(v44 + 11, v41, v43);
        v46 = (wchar_t *)(v44 + 11);
        *((_WORD *)v44 + *((unsigned __int16 *)v44 + 21) + 22) = 0;
LABEL_44:
        wcsupr(v46);
        sub_140360618(ListEntry);
        return 0;
      }
LABEL_152:
      if ( !ListEntry )
        goto LABEL_25;
      sub_140360618(ListEntry);
      goto LABEL_19;
    case 3:
      v52 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v52 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v52 + 32) )
        return 0;
      sub_140675300(&unk_140C54598, v52, 0LL);
      if ( dword_140C4EB80 >= (unsigned int)dword_140C4EB84 )
        goto LABEL_24;
      sub_140360158(0LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 44LL));
      return 0;
    case 8:
      v47 = *((_QWORD *)a1 + 2);
      HIDWORD(v85) = 0;
      v48 = *(_QWORD *)(v47 + 16);
      LODWORD(v85) = *(_DWORD *)(v47 + 4);
      v86 = *(_QWORD *)(v47 + 8);
      v87 = (2LL * (*(_DWORD *)v47 & 3)) | (v48 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v49 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v50 = 24LL;
      goto LABEL_51;
    case 13:
      v51 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( !v51[1] )
      {
        v31 = -1073741747;
        goto LABEL_25;
      }
      v86 = v51[1];
      v87 = (unsigned int)dword_140CF5E50;
      v85 = *v51;
      v49 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v50 = 31LL;
LABEL_51:
      sub_14036044C(v50, dword_140C5451C + (unsigned int)(v49 >> 10), &v85);
      v31 = 0;
      break;
    default:
      goto LABEL_110;
  }
  return (unsigned int)v31;
}
