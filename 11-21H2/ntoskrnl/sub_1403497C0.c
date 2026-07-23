/*
 * XREFs of sub_1403497C0 @ 0x1403497C0
 * Callers:
 *     sub_140349670 @ 0x140349670 (sub_140349670.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 * Callees:
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_140214C50 @ 0x140214C50 (sub_140214C50.c)
 *     sub_140232528 @ 0x140232528 (sub_140232528.c)
 *     sub_1402501E8 @ 0x1402501E8 (sub_1402501E8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 *     sub_1403715C4 @ 0x1403715C4 (sub_1403715C4.c)
 *     sub_140371654 @ 0x140371654 (sub_140371654.c)
 *     sub_1403E0320 @ 0x1403E0320 (sub_1403E0320.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     InterlockedPushListSList @ 0x140429930 (InterlockedPushListSList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 *     sub_1405F2E5C @ 0x1405F2E5C (sub_1405F2E5C.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 *     sub_14063A59C @ 0x14063A59C (sub_14063A59C.c)
 *     sub_14063BDD0 @ 0x14063BDD0 (sub_14063BDD0.c)
 *     sub_140641F58 @ 0x140641F58 (sub_140641F58.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 */

ULONG_PTR __fastcall sub_1403497C0(unsigned int PoolType, unsigned __int64 a2, int a3, unsigned int a4, char a5)
{
  _SLIST_ENTRY *v5; // r11
  ULONG_PTR v6; // rbx
  unsigned int v7; // esi
  unsigned __int64 v9; // rdi
  unsigned __int32 v10; // r8d
  POOL_TYPE v11; // r14d
  char v12; // r9
  unsigned int v13; // r12d
  __int64 *v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // rsi
  unsigned int v25; // r10d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  __int64 v30; // rdi
  int v31; // r9d
  int v32; // edx
  int v33; // edx
  __int64 v34; // r8
  __int64 v35; // r13
  unsigned int v36; // esi
  unsigned int v37; // r10d
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // r12
  int v41; // r13d
  volatile signed __int64 *v42; // rsi
  unsigned int v43; // ecx
  volatile signed __int64 *v44; // rax
  signed __int64 v45; // rbx
  ULONG_PTR result; // rax
  __int64 v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // rcx
  unsigned __int16 *v50; // rbx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  int v58; // edi
  unsigned int v59; // edi
  int v60; // eax
  unsigned __int64 v61; // rsi
  unsigned int v62; // r15d
  int v63; // r8d
  unsigned __int64 v64; // rcx
  int v65; // r9d
  __int64 v66; // rax
  int v67; // r8d
  int v68; // r15d
  __int64 v69; // r10
  __int64 v70; // rdx
  unsigned int v71; // ebx
  __int64 v72; // rsi
  int v73; // eax
  __int64 v74; // rdi
  volatile signed __int64 *v75; // rsi
  unsigned int v76; // r12d
  volatile signed __int64 *v77; // rax
  unsigned __int64 v78; // rbx
  signed __int64 v79; // r15
  __int64 v80; // rax
  unsigned __int64 v81; // rbx
  unsigned int v82; // r8d
  unsigned int v83; // eax
  unsigned int v84; // r8d
  int v85; // ecx
  int v86; // eax
  _SLIST_ENTRY *v87; // rdx
  ULONG v88; // eax
  __int64 v89; // rax
  unsigned __int64 OldIrql; // rdi
  int v91; // r11d
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rax
  int v95; // r9d
  __int64 v96; // rcx
  unsigned __int64 v97; // r8
  __int64 v98; // r9
  int v99; // eax
  int v100; // ecx
  __int64 v101; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v104; // r9
  int v105; // eax
  bool v106; // zf
  signed __int64 v107; // rax
  unsigned __int64 v108; // rax
  __int64 v109; // r9
  int v110; // ecx
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int8 v113; // al
  struct _KPRCB *v114; // r10
  __int64 v115; // r9
  int v116; // eax
  signed __int64 v117; // rax
  unsigned __int64 v118; // rax
  unsigned int v119; // [rsp+40h] [rbp-91h]
  __int64 v120; // [rsp+40h] [rbp-91h]
  signed __int64 v121; // [rsp+40h] [rbp-91h]
  int v122; // [rsp+48h] [rbp-89h]
  int v123; // [rsp+48h] [rbp-89h]
  unsigned __int64 v124; // [rsp+48h] [rbp-89h]
  signed __int64 v125; // [rsp+48h] [rbp-89h]
  __int64 v126; // [rsp+50h] [rbp-81h]
  __int64 v127; // [rsp+50h] [rbp-81h]
  volatile signed __int64 *v128; // [rsp+50h] [rbp-81h]
  volatile signed __int64 *v129; // [rsp+50h] [rbp-81h]
  int v130; // [rsp+58h] [rbp-79h] BYREF
  int v131; // [rsp+5Ch] [rbp-75h] BYREF
  __int64 v132; // [rsp+60h] [rbp-71h]
  __int64 *v133; // [rsp+68h] [rbp-69h]
  _SLIST_ENTRY *v134; // [rsp+70h] [rbp-61h]
  _SLIST_ENTRY **p_Next; // [rsp+78h] [rbp-59h] BYREF
  _SLIST_ENTRY *v136; // [rsp+80h] [rbp-51h]
  PSLIST_ENTRY ListEnd; // [rsp+88h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE v138; // [rsp+90h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v140; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v141; // [rsp+D0h] [rbp-1h]
  __int128 v142; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v143; // [rsp+E8h] [rbp+17h]
  __int64 retaddr; // [rsp+128h] [rbp+57h]
  unsigned int v145; // [rsp+130h] [rbp+5Fh]
  unsigned int v146; // [rsp+130h] [rbp+5Fh]
  int v147; // [rsp+130h] [rbp+5Fh]
  int v148; // [rsp+140h] [rbp+6Fh]

  v5 = 0LL;
  v6 = a4;
  v7 = (PoolType >> 9) & 2;
  v9 = a2;
  v10 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
    v10 = PoolType & 0xFFFFFFFB;
  v11 = v10 | 0x200;
  if ( (dword_140D069E8 & 0x400) == 0 || (v10 & 0x201) != 0 )
    v11 = v10;
  if ( (dword_140D069E8 & 8) == 0 )
    goto LABEL_6;
  if ( (v11 & 0x80000080) == 0 )
    return sub_140A90660(v11, HighPoolPriority, 0LL, 0, retaddr);
  v11 &= ~0x80u;
  if ( v11 < NonPagedPool )
  {
    v12 = a5;
    if ( (dword_140C29FC0 & 1) != 0 )
      v12 = 1;
  }
  else
  {
LABEL_6:
    v12 = a5;
  }
  v13 = a3 & 0x7FFFFFFF;
  v148 = v13;
  if ( !v13 )
  {
    v13 = 811884866;
    v148 = 811884866;
  }
  if ( a2 <= 0xFE0
    && (dword_140D069F4
     && a2
     && ((unsigned int)sub_14063A59C(v13, (unsigned int)dword_140D069F4) || v97 >= v9 + 16 && v97 < v9 + 32)
     || (v12 & 1) != 0) )
  {
    result = sub_140641F58((unsigned int)v11, v9, v13);
    if ( result )
    {
      if ( _InterlockedIncrement(&dword_140C11770) == 1 )
        _InterlockedIncrement(&dword_140C53440);
      return result;
    }
    v5 = 0LL;
  }
  if ( !v9 )
    v9 = 1LL;
  if ( (_DWORD)v6 == 0x80000000 )
    goto LABEL_198;
  if ( (unsigned int)v6 >= (unsigned __int16)word_140D05000 )
    KeBugCheckEx(0xC2u, 0xEuLL, v6, (int)v11 & 0xFFFFFFFFFFFFFF7FuLL, v13);
  if ( (_DWORD)v6 == 0x80000000 )
LABEL_198:
    LODWORD(v6) = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  if ( (unsigned int)v6 >= dword_140C5EA20 )
    LODWORD(v6) = (_DWORD)v5;
  v14 = &qword_140C5EA40[1048 * (unsigned int)v6];
  if ( v11 < NonPagedPool )
  {
    v16 = v14[3];
  }
  else if ( (v11 & 0x21) == 0x21 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 608LL) + 14576LL);
  }
  else
  {
    if ( (v11 & 1) != 0 )
    {
      v15 = 2LL;
    }
    else
    {
      v15 = (__int64)v5;
      if ( (v11 & 0x200) != 0 )
        v15 = 1LL;
    }
    v16 = v14[v15];
  }
  if ( v9 > 0xFE0 )
  {
    v54 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v124 = v54;
    if ( v54 >= 0x10000 || (((_WORD)v9 + 15) & 0xFF0u) > 0xFC0 )
    {
      v54 = (v54 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v124 = v54;
    }
    if ( v54 < v9 )
      goto LABEL_235;
    if ( (v54 & 0xFFF) == 0 && v54 <= *(unsigned int *)(v16 + 528) )
    {
      v85 = v16 + 320;
      if ( v54 > *(unsigned int *)(v16 + 336) )
        v85 = v16 + 512;
      v64 = sub_14034FED0(v85, v54, v54, v54, ((unsigned int)v11 >> 9) & 2);
      v120 = v64;
      goto LABEL_113;
    }
    v55 = *(_QWORD *)(v16 + 48);
    v56 = (__int64)v5;
    v57 = v55;
    v58 = v7 | *(_DWORD *)(v16 + 20);
    v134 = v5;
    v59 = v58 & 0x93000F0B;
    if ( (v55 || (v57 = qword_140C5A5E8) != 0) && v54 > v57 )
    {
      v98 = *(_QWORD *)(v16 + 56);
      if ( v98 )
      {
        sub_1405F1BBC(20, v16, 0, v98, v54, v55);
        v5 = 0LL;
      }
      goto LABEL_179;
    }
    v147 = (int)v5;
    if ( (v59 & 0x1000000) == 0 )
    {
      v60 = *(_DWORD *)(v16 + 24);
      v147 = v60;
      if ( v60 )
      {
        v59 |= 8u;
        if ( (_WORD)v60 != 1 || (v99 = sub_14042A5E0(v16, 0LL), v5 = 0LL, v99 < 0) )
        {
LABEL_179:
          v64 = (unsigned __int64)v5;
          v120 = (__int64)v5;
LABEL_113:
          if ( !v64 )
          {
            result = 0LL;
            goto LABEL_267;
          }
          if ( !(unsigned int)sub_140214C50(v64, v13, v54, v11, 0, 0) )
          {
            sub_140364128(v16, v120, 0LL, 0LL, 0LL);
            result = 0LL;
            goto LABEL_267;
          }
          memset(&v138, 0, sizeof(v138));
          if ( v13 == dword_140D05128 )
            __debugbreak();
          v66 = DWORD1(xmmword_140D06900);
          if ( (BYTE4(xmmword_140D06900) & 0x41) != 0 )
            v66 = sub_14062DEE4(3616, v11, v13, v120, v54);
          v67 = v11 & 0x20;
          if ( (v11 & 0x20) != 0 )
          {
            v68 = qword_140C11760;
            v69 = qword_140C11768;
            v70 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 896LL);
          }
          else
          {
            LODWORD(v66) = HIDWORD(KeGetPcr()[1].LockArray);
            v68 = qword_140C157A0;
            v69 = qword_140C157C8;
            v70 = (__int64)*(&qword_140C117A0 + v66);
          }
          v127 = v69;
          v132 = v70;
          v71 = v68 & ((40543 * v13) ^ ((40543 * (unsigned __int64)v13) >> 32));
          while ( 1 )
          {
            v72 = 80LL * v71;
            v73 = *(_DWORD *)(v70 + v72);
            v74 = v70 + v72;
            if ( v73 == v13 )
            {
              v41 = 1;
              if ( (v11 & 1) != 0 )
              {
                v75 = (volatile signed __int64 *)(v74 + 32);
                v76 = 0;
                v77 = (volatile signed __int64 *)(v74 + 40);
              }
              else
              {
                v76 = 1;
                v75 = (volatile signed __int64 *)(v74 + 8);
                v77 = (volatile signed __int64 *)(v74 + 16);
              }
              _InterlockedIncrement64(v77);
              v78 = v124;
              v79 = _InterlockedExchangeAdd64(v75, v124);
              if ( *(_QWORD *)(v74 + 72) )
              {
                v107 = *(_QWORD *)(v74 + 8 * (v76 + 7LL));
                v128 = (volatile signed __int64 *)(v74 + 8 * (v76 + 7LL));
                v125 = v107;
                if ( (v107 & 1) == 0 )
                {
                  while ( 1 )
                  {
                    if ( v107 >= v79 )
                      goto LABEL_129;
                    v108 = sub_14063BDD0(*(_QWORD *)(v74 + 72), v78, v76);
                    if ( !v108 )
                      break;
                    if ( v108 == 1 )
                    {
                      if ( v125 == _InterlockedCompareExchange64(v128, 1LL, v125) )
                        goto LABEL_129;
                      v107 = *v128;
                    }
                    else
                    {
                      v107 = _InterlockedExchangeAdd64(v128, v108);
                      v79 = *v75;
                    }
                    v125 = v107;
                    if ( (v107 & 1) != 0 )
                      goto LABEL_129;
                  }
                  v41 = 0;
                }
              }
LABEL_129:
              result = v120;
              goto LABEL_68;
            }
            if ( v73 )
            {
LABEL_124:
              v71 = v68 & (v71 + 1);
              if ( v71 == (v68 & ((40543 * v13) ^ ((40543 * (unsigned __int64)v13) >> 32))) )
              {
                sub_140212E00(v13, v124, v11);
                result = v120;
                v41 = 1;
                goto LABEL_68;
              }
            }
            else if ( v67 || (v95 = *(_DWORD *)(v72 + qword_140C157D0)) == 0 )
            {
              if ( v71 == v69 - 1 )
                goto LABEL_124;
              if ( v67 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)v74, v13, 0);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock(&qword_140C11778, &v138);
                v133 = (__int64 *)(v72 + qword_140C157D0);
                if ( !*(_DWORD *)(v72 + qword_140C157D0) )
                {
                  v89 = sub_1402501E8(v13);
                  v133[9] = v89;
                  *(_QWORD *)(v74 + 72) = v89;
                  *(_DWORD *)(v72 + qword_140C157D0) = v13;
                  *(_DWORD *)v74 = v13;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v138);
                OldIrql = v138.OldIrql;
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && v138.OldIrql <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v104 = *((_QWORD *)CurrentPrcb + 4375);
                      v105 = ~(unsigned __int16)(-1LL << (v138.OldIrql + 1));
                      v106 = (v105 & *(_DWORD *)(v104 + 20)) == 0;
                      *(_DWORD *)(v104 + 20) &= v105;
                      if ( v106 )
                        sub_140418E4C(CurrentPrcb);
                    }
                  }
                }
                __writecr8(OldIrql);
                v70 = v132;
                v67 = v11 & 0x20;
                v69 = v127;
              }
            }
            else
            {
              *(_DWORD *)v74 = v95;
              v96 = *(_QWORD *)(v72 + qword_140C157D0 + 72);
              if ( v96 )
                *(_QWORD *)(v74 + 72) = v96;
            }
          }
        }
        v56 = (__int64)v134;
      }
    }
    v61 = v56 + v54;
    if ( (v59 & 0x10000000) != 0 )
      v61 += 16LL;
    if ( (v59 & 0x20000F08) != 0 )
      v61 = ((v61 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v61 )
      v61 = 1LL;
    if ( v61 < v54 || v54 > 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_179;
    v62 = v59 & 0x13000003;
    v63 = v61;
    if ( v61 <= (unsigned int)*(unsigned __int16 *)(v16 + 956) - 16 )
    {
      v120 = sub_1403715C4(v16 + 896, (unsigned int)v54, (unsigned int)v61, v62);
      v64 = v120;
      v63 = v61;
      if ( v120 != -1 )
      {
LABEL_111:
        if ( v64 && (v59 & 0x30000F08) != 0 )
        {
          v101 = sub_1405F2E5C(v16, v64, v54, v65, (__int64)v134, v59, 0);
          if ( v147 )
          {
            *(_BYTE *)(v101 + 2) ^= (*(_BYTE *)(v101 + 2) ^ v147) & 0xF;
            if ( (_WORD)v147 == 1 && (int)sub_14042A5E0(v16, v120) >= 0 )
            {
              v64 = v120;
            }
            else
            {
              sub_140364128(v16, v120, v59, 0LL, 0LL);
              v64 = 0LL;
              v120 = 0LL;
            }
          }
          else
          {
            v64 = v120;
          }
        }
        goto LABEL_113;
      }
      LODWORD(v5) = 0;
    }
    if ( v61 > 0x20000 )
    {
      if ( v61 <= *(unsigned int *)(v16 + 528) )
      {
        v100 = v16 + 320;
        if ( v61 > *(unsigned int *)(v16 + 336) )
          v100 = v16 + 512;
        v94 = sub_14034FED0(v100, v54, v61, v61, v59 & 0x13000003);
      }
      else
      {
        v94 = sub_140370C40(v16, v54, v61, v62);
      }
      v120 = v94;
      v64 = v94;
    }
    else
    {
      v130 = (int)v5;
      v141 = 0LL;
      v140 = 0LL;
      v64 = sub_14034BBF0((int)v16 + 704, v54, v63, v62, (__int64)&v140, (__int64)&v130);
      v120 = v64;
      if ( v130 && (v59 & 1) == 0 )
      {
        sub_14034F7F0(*(unsigned int *)(v16 + 712), &v140);
        v64 = v120;
      }
    }
    goto LABEL_111;
  }
  v17 = v9 + 16;
  if ( (v11 & 4) != 0 )
  {
    v17 += *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 1);
    if ( v17 > 0xFE0 )
    {
      v17 = v9 + 16;
      LOWORD(v11) = v11 & 0xFFFB;
    }
  }
  v18 = (v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v18 < 0x201
    || v18 > 0xF80
    || (v47 = *((unsigned __int8 *)qword_140016470 + ((unsigned int)v18 >> 4)),
        v18 = (unsigned __int16)word_140016360[v47],
        v48 = v47 - 33,
        (v49 = *(_QWORD *)(v16 + 40)) == 0) )
  {
LABEL_27:
    v19 = *(_QWORD *)(v16 + 48);
    v20 = v19;
    v21 = (v7 | *(_DWORD *)(v16 + 20)) & 0x93000F0B;
    if ( (v19 || (v20 = qword_140C5A5E8) != 0) && v18 > v20 )
    {
      v109 = *(_QWORD *)(v16 + 56);
      if ( v109 )
        sub_1405F1BBC(20, v16, 0, v109, v18, v19);
      goto LABEL_235;
    }
    v122 = (int)v5;
    v22 = (__int64)v5;
    v136 = v5;
    if ( (v21 & 0x1000000) == 0 )
    {
      v23 = *(_DWORD *)(v16 + 24);
      v122 = v23;
      if ( v23 )
      {
        v21 |= 8u;
        if ( (_WORD)v23 != 1 || (int)sub_14042A5E0(v16, 0LL) < 0 )
          goto LABEL_235;
        v22 = (__int64)v136;
        LODWORD(v5) = 0;
      }
    }
    v24 = v22 + v18;
    if ( (v21 & 0x10000000) != 0 )
      v24 += 16LL;
    if ( (v21 & 0x20000F08) != 0 )
      v24 = ((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v24 )
      v24 = 1LL;
    if ( v24 < v18 || v18 > 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_235;
    v25 = v21 & 0x13000003;
    if ( v24 <= (unsigned int)*(unsigned __int16 *)(v16 + 956) - 16 )
    {
      v26 = (unsigned int)v24;
      if ( (_DWORD)v18 != (_DWORD)v24 )
        v26 = (unsigned int)(v24 + 2);
      v133 = (__int64 *)(v16 + 896 + 8
                                   * (*((unsigned __int8 *)qword_140016470 + ((unsigned int)(v26 + 15) >> 4)) + 16LL));
      if ( (*v133 & 1) == 0 || (v93 = sub_140371654(v16 + 896, v26, 1LL), v25 = v21 & 0x13000003, v93) )
      {
        v27 = 128LL;
        v28 = *v133;
        if ( (dword_140C1BBE0 & 0x400) != 0 )
          v27 = 192LL;
        if ( *(_BYTE *)(v28 + 2) == 1 )
          v29 = 0;
        else
          v29 = *(_BYTE *)(*((unsigned __int8 *)KeGetCurrentThread() + 1653) + v27 + v28);
        v30 = sub_14034A490(
                (int)v16 + 896,
                v28,
                *(_QWORD *)(v27
                          + *(unsigned __int8 *)(v16 + 952)
                          - (unsigned __int64)((*(_BYTE *)(v16 + 952) - 1) & 7)
                          + 7
                          + v28
                          + 8LL * v29),
                v18,
                v25);
        if ( v30 != -1 )
          goto LABEL_48;
        v25 = v21 & 0x13000003;
      }
      LODWORD(v5) = 0;
    }
    if ( v24 > 0x20000 )
    {
      if ( v24 > *(unsigned int *)(v16 + 528) )
      {
        v111 = sub_140370C40(v16, v18, v24, v25);
      }
      else
      {
        v110 = v16 + 320;
        if ( v24 > *(unsigned int *)(v16 + 336) )
          v110 = v16 + 512;
        v111 = sub_14034FED0(v110, v18, v24, v24, v25);
      }
      v30 = v111;
    }
    else
    {
      v131 = (int)v5;
      v143 = 0LL;
      v142 = 0LL;
      v30 = sub_14034BBF0((int)v16 + 704, v18, v24, v25, (__int64)&v142, (__int64)&v131);
      if ( v131 && (v21 & 1) == 0 )
        sub_14034F7F0(*(unsigned int *)(v16 + 712), &v142);
    }
LABEL_48:
    if ( !v30 )
    {
LABEL_235:
      result = 0LL;
      goto LABEL_267;
    }
    if ( (v21 & 0x30000F08) != 0 )
    {
      v112 = sub_1405F2E5C(v16, v30, v18, v31, (__int64)v136, v21, 0);
      if ( v122 )
      {
        *(_BYTE *)(v112 + 2) ^= (*(_BYTE *)(v112 + 2) ^ v122) & 0xF;
        if ( (_WORD)v122 != 1 || (int)sub_14042A5E0(v16, v30) < 0 )
        {
          sub_140364128(v16, v30, v21, 0LL, 0LL);
          goto LABEL_235;
        }
      }
    }
    goto LABEL_50;
  }
  v50 = (unsigned __int16 *)(v49 + ((v48 + 1LL) << 6));
  ++*((_DWORD *)v50 + 5);
  if ( *v50 )
  {
    v30 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)(v49 + ((v48 + 1LL) << 6)));
    if ( v30 )
      goto LABEL_80;
    v5 = 0LL;
  }
  ++*((_DWORD *)v50 + 6);
  v82 = v50[8];
  v83 = *v50;
  p_Next = &v5->Next;
  ListEnd = v5;
  if ( v83 < v82 && (v84 = (v82 - v83) >> 1) != 0 )
  {
    v86 = sub_140232528(v16 + 704, v18, v84 + 1, 0, &p_Next, &ListEnd);
    if ( v86 )
    {
      v30 = (__int64)p_Next;
      v87 = *p_Next;
      p_Next = (_SLIST_ENTRY **)*p_Next;
      v88 = v86 - 1;
      if ( v88 )
        InterlockedPushListSList((PSLIST_HEADER)v50, v87, ListEnd, v88);
    }
    else
    {
      v30 = 0LL;
    }
  }
  else
  {
    v30 = (__int64)v5;
  }
LABEL_80:
  if ( (v11 & 0x400) != 0 )
  {
    if ( !v30 )
    {
LABEL_84:
      v5 = 0LL;
      goto LABEL_27;
    }
    sub_1403E0320(v30 + 16, v18 - 16);
  }
  if ( !v30 )
    goto LABEL_84;
LABEL_50:
  *(_DWORD *)(v30 + 4) = v13;
  *(_BYTE *)(v30 + 2) = v18 >> 4;
  *(_BYTE *)v30 = 0;
  v32 = v11 & 0x6D | 2;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_BYTE *)(v30 + 3) = v32;
  v145 = v32;
  LockHandle.LockQueue = 0LL;
  if ( v13 == dword_140D05128 )
    __debugbreak();
  if ( (BYTE4(xmmword_140D06900) & 0x41) != 0 )
  {
    sub_14062DEE4(3616, v32, v13, v30 + 16, v18);
    LOBYTE(v32) = v145;
  }
  v33 = v32 & 0x20;
  v123 = v33;
  if ( v33 )
  {
    v34 = qword_140C11760;
    v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 896LL);
    v126 = qword_140C11768;
  }
  else
  {
    v34 = qword_140C157A0;
    v126 = qword_140C157C8;
    v35 = (__int64)*(&qword_140C117A0 + HIDWORD(KeGetPcr()[1].LockArray));
  }
  v132 = v34;
  v36 = v34 & ((40543 * v13) ^ ((40543 * (unsigned __int64)v13) >> 32));
  v37 = v36;
  v119 = v36;
  while ( 1 )
  {
    v38 = 80LL * v36;
    v39 = *(_DWORD *)(v38 + v35);
    v40 = v38 + v35;
    if ( v39 == v148 )
      break;
    if ( v39 )
    {
LABEL_59:
      v36 = v34 & (v36 + 1);
      if ( v36 == v37 )
      {
        sub_140212E00(v148, v18, v145);
        v41 = 1;
        goto LABEL_64;
      }
    }
    else if ( v33 || (v91 = *(_DWORD *)(v38 + qword_140C157D0)) == 0 )
    {
      if ( v36 == v126 - 1 )
        goto LABEL_59;
      if ( v33 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v40, v148, 0);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
        v133 = (__int64 *)(v38 + qword_140C157D0);
        if ( !*(_DWORD *)(v38 + qword_140C157D0) )
        {
          v80 = sub_1402501E8(v148);
          v133[9] = v80;
          *(_QWORD *)(v40 + 72) = v80;
          *(_DWORD *)(v38 + qword_140C157D0) = v148;
          *(_DWORD *)v40 = v148;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v81 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v113 = KeGetCurrentIrql();
            if ( v113 <= 0xFu && LockHandle.OldIrql <= 0xFu && v113 >= 2u )
            {
              v114 = KeGetCurrentPrcb();
              v115 = *((_QWORD *)v114 + 4375);
              v116 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v106 = (v116 & *(_DWORD *)(v115 + 20)) == 0;
              *(_DWORD *)(v115 + 20) &= v116;
              if ( v106 )
                sub_140418E4C(v114);
            }
          }
        }
        __writecr8(v81);
        v33 = v123;
        LODWORD(v34) = v132;
        v37 = v119;
      }
    }
    else
    {
      *(_DWORD *)v40 = v91;
      v92 = *(_QWORD *)(v38 + qword_140C157D0 + 72);
      if ( v92 )
        *(_QWORD *)(v40 + 72) = v92;
    }
  }
  v41 = 1;
  if ( (v145 & 1) != 0 )
  {
    v42 = (volatile signed __int64 *)(v40 + 32);
    v43 = 0;
    v44 = (volatile signed __int64 *)(v40 + 40);
  }
  else
  {
    v43 = 1;
    v42 = (volatile signed __int64 *)(v40 + 8);
    v44 = (volatile signed __int64 *)(v40 + 16);
  }
  v146 = v43;
  _InterlockedIncrement64(v44);
  v45 = _InterlockedExchangeAdd64(v42, v18);
  if ( *(_QWORD *)(v40 + 72) )
  {
    v117 = *(_QWORD *)(v40 + 8 * (v43 + 7LL));
    v129 = (volatile signed __int64 *)(v40 + 8 * (v43 + 7LL));
    v121 = v117;
    if ( (v117 & 1) == 0 )
    {
      while ( v117 < v45 )
      {
        v118 = sub_14063BDD0(*(_QWORD *)(v40 + 72), v18, v43);
        if ( !v118 )
        {
          v41 = 0;
          break;
        }
        if ( v118 == 1 )
        {
          if ( v121 == _InterlockedCompareExchange64(v129, 1LL, v121) )
            break;
          v117 = *v129;
        }
        else
        {
          v117 = _InterlockedExchangeAdd64(v129, v118);
          v45 = *v42;
        }
        v43 = v146;
        v121 = v117;
        if ( (v117 & 1) != 0 )
          break;
      }
    }
  }
LABEL_64:
  if ( (v11 & 4) != 0 )
  {
    *(_BYTE *)(v30 + 3) &= ~4u;
    v51 = (*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) - 1) & (-16 - v30);
    if ( v51 )
    {
      v52 = v30 + v51;
      v53 = (__int64)v51 >> 4;
      *(_BYTE *)v52 = v53;
      *(_BYTE *)(v52 + 2) = *(_BYTE *)(v30 + 2) - v53;
      *(_BYTE *)(v52 + 1) = *(_BYTE *)(v30 + 1);
      *(_BYTE *)(v52 + 3) = *(_BYTE *)(v30 + 3) | 4;
      *(_DWORD *)(v52 + 4) = *(_DWORD *)(v30 + 4);
      if ( (unsigned __int8)*(_WORD *)v52 > 1u )
        *(_QWORD *)(v30 + 16) = v52 ^ qword_140D06E00;
      v30 = v52;
    }
  }
  if ( (*(_BYTE *)(v30 + 3) & 8) != 0 )
    *(_QWORD *)(v30 + 8) = v30 ^ qword_140D06E00;
  result = v30 + 16;
LABEL_68:
  if ( v41 )
  {
    if ( result )
      return result;
  }
  else
  {
    sub_140348B40(result);
    result = 0LL;
  }
LABEL_267:
  if ( (v11 & 0x10) != 0 )
    RtlRaiseStatus(-1073741670);
  return result;
}
