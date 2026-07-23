/*
 * XREFs of sub_1403203D0 @ 0x1403203D0
 * Callers:
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140234EB4 @ 0x140234EB4 (sub_140234EB4.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140243EC4 @ 0x140243EC4 (sub_140243EC4.c)
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_140279474 @ 0x140279474 (sub_140279474.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F339C @ 0x1402F339C (sub_1402F339C.c)
 *     ExAcquireRundownProtectionEx @ 0x1402F6A40 (ExAcquireRundownProtectionEx.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_14035FCE0 @ 0x14035FCE0 (sub_14035FCE0.c)
 *     sub_1403661D0 @ 0x1403661D0 (sub_1403661D0.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_14036669C @ 0x14036669C (sub_14036669C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140595F4C @ 0x140595F4C (sub_140595F4C.c)
 *     sub_1405A7A74 @ 0x1405A7A74 (sub_1405A7A74.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403203D0(__int64 a1, unsigned __int64 a2, unsigned int *a3, int a4, __int64 a5)
{
  ULONG_PTR v5; // r13
  unsigned int *v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned int v9; // esi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  char v12; // dl
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdi
  volatile signed __int64 *v22; // r12
  signed __int64 v23; // rdx
  signed __int64 v24; // rax
  signed __int64 v25; // r15
  unsigned int v26; // edx
  void *v27; // r15
  volatile LONG *v28; // rbx
  KIRQL v29; // al
  void *v30; // r15
  unsigned __int64 v31; // rdi
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  bool v36; // zf
  unsigned __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // r9d
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // r12
  __int64 v44; // r12
  struct _KTHREAD *CurrentThread; // r13
  bool v46; // r15
  __int64 v47; // rbx
  signed __int64 v48; // rdx
  signed __int64 v49; // rax
  unsigned __int64 v50; // rdi
  unsigned int v51; // edx
  char v52; // r12
  unsigned __int64 v53; // r15
  unsigned __int8 v54; // cl
  struct _KPRCB *v55; // r10
  __int64 v56; // r9
  int v57; // eax
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  signed __int64 v60; // rdx
  signed __int64 v61; // rax
  unsigned __int64 v62; // rdx
  struct _KTHREAD *v63; // rax
  unsigned __int64 v64; // r13
  __int64 v65; // r9
  unsigned __int64 v66; // r12
  unsigned int v67; // r15d
  int v68; // ebx
  unsigned __int64 *v69; // rcx
  _QWORD *v70; // rcx
  __int64 v71; // rbx
  signed __int32 v72; // eax
  char v73; // cc
  signed __int32 v74; // eax
  _QWORD *v75; // r12
  unsigned __int64 v76; // r13
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  __int64 v79; // r9
  int v80; // eax
  _QWORD *v81; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v84; // r9
  int v85; // eax
  signed __int32 v86; // eax
  unsigned __int64 *v87; // rdx
  unsigned __int64 v88; // rcx
  signed __int64 *v89; // roff
  signed __int64 v90; // rax
  signed __int64 v91; // rtt
  unsigned __int64 v92; // r8
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r13
  __int64 v99; // r8
  unsigned __int64 v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // rdi
  __int64 v105; // rax
  unsigned int *v106; // rax
  unsigned int v107; // eax
  int v108; // eax
  char v109; // cl
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // r15
  int v112; // eax
  unsigned __int64 v113; // rcx
  int v114; // eax
  signed __int64 v115; // rbx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // r8
  unsigned __int64 v119; // rbx
  unsigned __int8 v120; // al
  char v121; // r8
  unsigned __int64 v122; // r15
  __int64 v123; // rax
  unsigned __int8 v124; // al
  struct _KPRCB *v125; // r10
  int v126; // eax
  unsigned __int64 v127; // r12
  int v128; // r15d
  unsigned int v129; // ebx
  __int64 v130; // r14
  unsigned int *v131; // rax
  int v132; // edx
  __int64 v133; // r12
  __int64 v134; // rcx
  __int64 **v135; // r13
  int v136; // eax
  ULONG_PTR v137; // r14
  int v139; // r14d
  int v140; // eax
  _BYTE *v141; // rdx
  _BYTE *v142; // rcx
  char v143; // dl
  __int64 v144; // rax
  int v145; // eax
  unsigned int v146; // r8d
  __int16 v147; // ax
  int v148; // r9d
  int v149; // eax
  bool v150; // [rsp+48h] [rbp-99h]
  __int64 v151; // [rsp+48h] [rbp-99h]
  unsigned __int64 v152; // [rsp+50h] [rbp-91h]
  unsigned int *v153; // [rsp+58h] [rbp-89h]
  __int64 v154; // [rsp+60h] [rbp-81h] BYREF
  int v155; // [rsp+68h] [rbp-79h] BYREF
  __int64 v156; // [rsp+70h] [rbp-71h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-69h]
  unsigned __int64 v158; // [rsp+80h] [rbp-61h]
  __int64 v159; // [rsp+88h] [rbp-59h]
  unsigned int *v160; // [rsp+90h] [rbp-51h] BYREF
  int v161; // [rsp+98h] [rbp-49h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-41h]
  unsigned __int64 v163; // [rsp+A8h] [rbp-39h] BYREF
  unsigned __int64 *v164; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v165; // [rsp+B8h] [rbp-29h]
  __int64 v166; // [rsp+C0h] [rbp-21h]
  unsigned __int64 v167; // [rsp+C8h] [rbp-19h]
  __int64 v168; // [rsp+D0h] [rbp-11h]
  __int128 v169; // [rsp+D8h] [rbp-9h]
  __int64 v170; // [rsp+E8h] [rbp+7h]
  unsigned __int64 v172; // [rsp+148h] [rbp+67h] BYREF
  unsigned int *v173; // [rsp+150h] [rbp+6Fh]
  int v174; // [rsp+158h] [rbp+77h]

  v174 = a4;
  v173 = a3;
  v172 = a2;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  v154 = 0LL;
  v8 = a2;
  v155 = 0;
  v9 = 0;
  v166 = v7;
  BugCheckParameter2 = v5;
  v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v152 = v10;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v172 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v172 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)sub_140229550()
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v13 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)&v172 >> 3) & 0x1FF));
      if ( (v14 & 0x20) != 0 )
        v8 |= 0x20uLL;
      if ( (v14 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
    else
    {
      v8 = v172;
    }
  }
  v15 = (v8 >> 12) & 0xFFFFFFFFFFLL;
  v165 = v15;
  v16 = 48 * v15 - 0x220000000000LL;
  v156 = v16;
  v17 = 1LL;
  v18 = *(_QWORD *)(v16 + 16);
  v168 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
  if ( (v18 & 0x400) == 0 )
  {
    v153 = v6;
    v159 = (__int64)v6;
    goto LABEL_144;
  }
  v19 = v18;
  if ( qword_140C50780 && (v18 & 0x10) == 0 )
    v19 = v18 & ~qword_140C50780;
  v20 = v19 >> 16;
  v153 = (unsigned int *)v20;
  v21 = *(_QWORD *)v20;
  v159 = *(_QWORD *)v20;
  if ( dword_140C4EEF0 )
  {
    v22 = (volatile signed __int64 *)(v21 + 64);
    _m_prefetchw((const void *)(v21 + 64));
    v23 = *(_QWORD *)(v21 + 64);
    if ( (v23 & 0xF) != 0 )
    {
      do
      {
        v24 = _InterlockedCompareExchange64(v22, v23 - 1, v23);
        if ( v23 == v24 )
          break;
        v23 = v24;
      }
      while ( (v24 & 0xF) != 0 );
    }
    v25 = v23;
    v26 = v23 & 0xF;
    v27 = (void *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
    Object = v27;
    if ( v26 <= 1 )
    {
      if ( !v26 )
        goto LABEL_27;
      sub_1402F339C((signed __int64 *)(v21 + 64), (__int64)v27);
      v17 = 1LL;
    }
    if ( dword_140D05010 )
      sub_1405C5EC8((_DWORD)v27 - 48);
    if ( v27 )
    {
LABEL_37:
      v37 = *(_QWORD *)(v156 + 8) | 0x8000000000000000uLL;
      if ( v5 >= 0xFFFF800000000000uLL )
      {
        if ( (unsigned int)sub_14027B080(v5) == 1 )
        {
          v40 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
          goto LABEL_44;
        }
      }
      else
      {
        v38 = *((_QWORD *)KeGetCurrentThread() + 23);
        v39 = *(_QWORD *)(v38 + 1368);
        if ( v39 && (*(_DWORD *)(v38 + 2172) & 0x1000) == 0 )
        {
          v40 = *(_DWORD *)(v39 + 8);
          goto LABEL_44;
        }
      }
      v40 = -1;
LABEL_44:
      v41 = *(_QWORD *)(v20 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v20 + 56LL) & 0x20) != 0 )
      {
        if ( v37 < v41 || v37 >= v41 + 8LL * *(unsigned int *)(v20 + 44) )
        {
          if ( (*(_BYTE *)(v20 + 34) & 2) != 0 )
            v42 = (v37 << 9) - (*(_QWORD *)(sub_140256DF8(*(_QWORD *)v20, v40, v20) + 72) << 9);
          else
            v42 = (v37 << 9) - (*(_QWORD *)(sub_14027B234((_QWORD *)v20) + 72) << 9);
        }
        else
        {
          v42 = (v37 << 9) - (v41 << 9);
        }
        v43 = ((unsigned __int64)*(unsigned int *)(v20 + 36) << 9) + (v42 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        if ( v41 )
          v44 = (__int64)(v37 - v41) >> 3 << 12;
        else
          v44 = 0LL;
        v43 = ((*(unsigned int *)(v20 + 36) | ((unsigned __int64)(*(_WORD *)(v20 + 32) & 0xFFC0) << 26)) << 12) + v44;
      }
      CurrentThread = KeGetCurrentThread();
      v46 = (*(_BYTE *)(v21 + 56) & 0x20) != 0;
      v158 = v43;
      v150 = v46;
      v47 = *((_QWORD *)CurrentThread + 23);
      _m_prefetchw((const void *)(v47 + 1536));
      v48 = *(_QWORD *)(v47 + 1536);
      if ( (v48 & 0xF) != 0 )
      {
        do
        {
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 1536), v48 - 1, v48);
          if ( v48 == v49 )
            break;
          v48 = v49;
        }
        while ( (v49 & 0xF) != 0 );
      }
      v50 = v48 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v48 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v51 = v48 & 0xF;
        if ( v51 > 1 )
        {
LABEL_86:
          if ( (*((_BYTE *)CurrentThread + 1384) & 0x40) == 0 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1124LL) & 0x100000) == 0
              && (*((_DWORD *)CurrentThread + 344) & 0xE00u) >= 0x400
              || CurrentThread == KeGetCurrentThread() && *((_DWORD *)CurrentThread + 360) )
            {
              v63 = *(struct _KTHREAD **)(v50 + 432);
              if ( !v63 || v63 == CurrentThread && *(_QWORD *)(v50 + 440) == *((_QWORD *)CurrentThread + 154) )
              {
                v64 = *((_QWORD *)Object + 3);
                v167 = v64;
                sub_1403661D0(v50, Object, v17);
                if ( (*(_BYTE *)(v50 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v50 + 352) + 1850LL) == 2 )
                  _InterlockedOr16((volatile signed __int16 *)(v50 + 484), 1u);
                if ( v43 < 0x20000000000LL )
                {
                  v66 = v43 >> 9;
                  v158 = v66;
                  if ( v46 )
                    v67 = 1;
                  else
                    v67 = (v46 & 2) != 0 ? 3 : 0;
                  v68 = dword_140CF5E50;
                  v164 = 0LL;
                  if ( dword_140CF5E50 != *(_DWORD *)(v50 + 404) && (int)sub_14036669C(v50, 1LL, &v164, v65) >= 0 )
                  {
                    v69 = v164;
                    *v164 = *v164 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                    *((_DWORD *)v69 + 2) = v68;
                    *(_DWORD *)(v50 + 404) = v68;
                    *(_QWORD *)(v50 + 408) = v50 + 416;
                  }
                  if ( v67 || (v70 = *(_QWORD **)(v50 + 408), *v70 >> 3 != v66) || v70[1] != v64 )
                  {
                    if ( _InterlockedIncrement((volatile signed __int32 *)(v50 + 344)) <= *(_DWORD *)(v50 + 340) )
                    {
                      v71 = *(_QWORD *)(v50 + 96);
                      v72 = _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 16), 1u);
                      v73 = (v72 + 1 < 0) ^ __OFADD__(1, v72) | (v72 == -1);
                      v74 = v72 + 1;
                      if ( v73 )
                      {
LABEL_132:
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 344), 0xFFFFFFFF);
                      }
                      else
                      {
                        while ( v74 > *(_DWORD *)(v71 + 20) )
                        {
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 16), 0xFFFFFFFF);
                          v75 = (_QWORD *)sub_14035FCE0();
                          if ( v75 )
                          {
                            v76 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v50 + 128));
                            if ( *(_QWORD *)(v50 + 96) == v71 )
                            {
                              v81 = *(_QWORD **)(v50 + 112);
                              if ( *v81 != v50 + 104 )
                                __fastfail(3u);
                              v75[1] = v81;
                              *v75 = v50 + 104;
                              *v81 = v75;
                              *(_QWORD *)(v50 + 112) = v75;
                              ++*(_DWORD *)(v50 + 120);
                              *(_QWORD *)(v50 + 96) = v75;
                              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v50 + 128));
                              if ( dword_140D06B08 )
                              {
                                if ( (dword_140D06B08 & 1) != 0 )
                                {
                                  CurrentIrql = KeGetCurrentIrql();
                                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v76 <= 0xFu && CurrentIrql >= 2u )
                                  {
                                    CurrentPrcb = KeGetCurrentPrcb();
                                    v84 = *((_QWORD *)CurrentPrcb + 4375);
                                    v85 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v76 + 1));
                                    v36 = (v85 & *(_DWORD *)(v84 + 20)) == 0;
                                    *(_DWORD *)(v84 + 20) &= v85;
                                    if ( v36 )
                                      sub_140418E4C(CurrentPrcb);
                                  }
                                }
                              }
                              __writecr8(v76);
                            }
                            else
                            {
                              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v50 + 128));
                              if ( dword_140D06B08 )
                              {
                                if ( (dword_140D06B08 & 1) != 0 )
                                {
                                  v77 = KeGetCurrentIrql();
                                  if ( v77 <= 0xFu && (unsigned __int8)v76 <= 0xFu && v77 >= 2u )
                                  {
                                    v78 = KeGetCurrentPrcb();
                                    v79 = *((_QWORD *)v78 + 4375);
                                    v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v76 + 1));
                                    v36 = (v80 & *(_DWORD *)(v79 + 20)) == 0;
                                    *(_DWORD *)(v79 + 20) &= v80;
                                    if ( v36 )
                                      sub_140418E4C(v78);
                                  }
                                }
                              }
                              __writecr8(v76);
                              ExFreePoolWithTag(v75, 0);
                            }
                            v71 = *(_QWORD *)(v50 + 96);
                            v86 = _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 16), 1u);
                            v73 = (v86 + 1 < 0) ^ __OFADD__(1, v86) | (v86 == -1);
                            v74 = v86 + 1;
                            if ( !v73 )
                              continue;
                          }
                          goto LABEL_132;
                        }
                        v87 = (unsigned __int64 *)(v71 + 16LL * v74 + 8);
                        v88 = v67 | (8 * v158);
                        v87[1] = v167;
                        *v87 = v88;
                        _InterlockedIncrement((volatile signed __int32 *)(v50 + 332));
                        if ( !v67 )
                          *(_QWORD *)(v50 + 408) = v87;
                      }
                    }
                    else
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 344), 0xFFFFFFFF);
                      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v50 + 400), 3, 0) )
                        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v50 + 368), DelayedWorkQueue);
                    }
                  }
                }
              }
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v50 + 336));
            }
          }
          sub_1402AD030((struct _EX_RUNDOWN_REF *)(v50 + 360));
          goto LABEL_138;
        }
        if ( v51 )
        {
          if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v50 + 360), 0xFu) )
          {
            _m_prefetchw((const void *)(v47 + 1536));
            v58 = *(_QWORD *)(v47 + 1536);
            while ( (v58 & 0xF) == 0 )
            {
              if ( v50 != (v58 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v59 = v58;
              v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 1536), v58 + 15, v58);
              if ( v59 == v58 )
                goto LABEL_85;
            }
            v169 = 0LL;
            v170 = 0LL;
            _m_prefetchw((const void *)(v50 + 360));
            v60 = *(_QWORD *)(v50 + 360);
            if ( (v60 & 1) != 0 )
            {
LABEL_82:
              v62 = v60 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFF1uLL) == 15
                && !_interlockedbittestandreset((volatile signed __int32 *)(v62 + 32), 0) )
              {
                KeSetEvent((PRKEVENT)(v62 + 8), 0, 0);
              }
            }
            else
            {
              while ( 1 )
              {
                v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 360), v60 - 30, v60);
                v36 = v60 == v61;
                v60 = v61;
                if ( v36 )
                  break;
                if ( (v61 & 1) != 0 )
                  goto LABEL_82;
              }
            }
          }
          goto LABEL_85;
        }
        v52 = 1;
        v53 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
        v50 = *(_QWORD *)(v47 + 1536) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v50 )
          v52 = sub_140347810(v50 + 360);
        KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v54 = KeGetCurrentIrql();
            if ( v54 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v54 >= 2u )
            {
              v55 = KeGetCurrentPrcb();
              v56 = *((_QWORD *)v55 + 4375);
              v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
              v36 = (v57 & *(_DWORD *)(v56 + 20)) == 0;
              v17 = (unsigned int)v57 & *(_DWORD *)(v56 + 20);
              *(_DWORD *)(v56 + 20) = v17;
              if ( v36 )
                sub_140418E4C(v55);
            }
          }
        }
        __writecr8(v53);
        if ( v52 && v50 )
        {
          v43 = v158;
LABEL_85:
          v46 = v150;
          goto LABEL_86;
        }
      }
LABEL_138:
      v89 = (signed __int64 *)(v159 + 64);
      _m_prefetchw((const void *)(v159 + 64));
      v90 = *v89;
      if ( ((unsigned __int64)Object ^ *v89) >= 0xF )
      {
LABEL_141:
        ObDereferenceObjectDeferDeleteWithTag(Object, 0x63536D4Du);
      }
      else
      {
        while ( 1 )
        {
          v91 = v90;
          v90 = _InterlockedCompareExchange64((volatile signed __int64 *)(v159 + 64), v90 + 1, v90);
          if ( v91 == v90 )
            break;
          if ( ((unsigned __int64)Object ^ v90) >= 0xF )
            goto LABEL_141;
        }
        sub_140347B50((char *)Object - 48, 1LL);
      }
      v15 = v165;
      v6 = 0LL;
      v16 = v156;
      v10 = v152;
      v11 = 0xFFFFF6FB7DBED7F8uLL;
      goto LABEL_144;
    }
LABEL_27:
    v28 = (volatile LONG *)(v21 + 72);
    v29 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v21 + 72));
    v30 = (void *)(*v22 & 0xFFFFFFFFFFFFFFF0uLL);
    v31 = v29;
    Object = v30;
    if ( v30 )
      ObfReferenceObjectWithTag(v30, 0x63536D4Du);
    ExReleaseSpinLockSharedFromDpcLevel(v28);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = *((_QWORD *)v33 + 4375);
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
          v36 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
          v17 = (unsigned int)v35 & *(_DWORD *)(v34 + 20);
          *(_DWORD *)(v34 + 20) = v17;
          if ( v36 )
            sub_140418E4C(v33);
        }
      }
    }
    __writecr8(v31);
    v20 = (__int64)v153;
    v21 = v159;
    goto LABEL_37;
  }
LABEL_144:
  v92 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v93 = *(_QWORD *)v92;
  if ( v92 >= 0xFFFFF6FB7DBED000uLL
    && v92 <= v11
    && (unsigned int)sub_140229550()
    && (v93 & 1) != 0
    && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
  {
    v94 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v94 )
    {
      v92 = (v92 >> 3) & 0x1FF;
      v95 = *(_QWORD *)(v94 + 8 * v92);
      if ( (v95 & 0x20) != 0 )
        v93 |= 0x20uLL;
      if ( (v95 & 0x42) != 0 )
        v93 |= 0x42uLL;
    }
  }
  v163 = v93;
  if ( (unsigned __int64)&v163 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v163 <= v11
    && (unsigned int)sub_140229550()
    && (v93 & 1) != 0
    && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
  {
    v92 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v92 )
    {
      v96 = *(_QWORD *)(v92 + 8 * (((unsigned __int64)&v163 >> 3) & 0x1FF));
      if ( (v96 & 0x20) != 0 )
        v93 |= 0x20uLL;
      if ( (v96 & 0x42) != 0 )
        v93 |= 0x42uLL;
    }
  }
  v97 = (v93 >> 12) & 0xFFFFFFFFFFLL;
  v98 = 48 * v97 - 0x220000000000LL;
  v161 = (int)v6;
  v151 = v98;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v98 + 24), 0x3FuLL) )
  {
    do
    {
      do
        sub_1402F32E0(&v161, v97, v92, v10);
      while ( *(__int64 *)(v98 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v98 + 24), 0x3FuLL) );
    v10 = v152;
    v6 = 0LL;
  }
  v99 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v98 + 24) ^= (*(_QWORD *)(v98 + 24) ^ (*(_QWORD *)(v98 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v100 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)sub_140229550()
    && (v100 & 1) != 0
    && ((v100 & 0x20) == 0 || (v100 & 0x42) == 0) )
  {
    v101 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v101 )
    {
      v102 = *(_QWORD *)(v101 + 8 * ((v10 >> 3) & 0x1FF));
      if ( (v102 & 0x20) != 0 )
        v100 |= 0x20uLL;
      if ( (v102 & 0x42) != 0 )
        v100 |= 0x42uLL;
    }
  }
  if ( (v100 & 0x400) == 0 )
    goto LABEL_188;
  v103 = v100;
  if ( qword_140C50780 && (v100 & 0x10) == 0 )
    v103 = v100 & ~qword_140C50780;
  if ( HIDWORD(v103) == 0xFFFFFFFF )
  {
    v104 = (v100 >> 5) & 0x1F;
  }
  else
  {
LABEL_188:
    v9 = 1;
    v105 = (v18 >> 5) & 0x1F;
    if ( (v100 & 8) != 0 )
      LODWORD(v105) = 1;
    LODWORD(v104) = v105;
    v106 = v173;
    if ( v173 )
    {
      if ( (v104 & 4) == 0 )
        v106 = v6;
      v173 = v106;
    }
  }
  if ( (dword_140D06880 & 0x8000) != 0
    && BugCheckParameter2 >= 0xFFFF800000000000uLL
    && (BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v104 & 2) != 0 )
  {
    v107 = sub_140313B20(v16, 0, 0LL);
    if ( (v107 & 1) == 0 && (dword_140D06880 & 0x10000) == 0 )
    {
      if ( *(__int64 *)(v16 + 40) >= 0 )
        goto LABEL_212;
      if ( (*(_DWORD *)(v16 + 16) & 0x400LL) == 0 )
      {
        if ( !(unsigned int)sub_140595F4C(BugCheckParameter2, v107) )
          goto LABEL_204;
        goto LABEL_211;
      }
    }
    if ( (v107 & 1) != 0 )
    {
LABEL_211:
      LODWORD(v104) = 3;
      v173 = 0LL;
      goto LABEL_206;
    }
LABEL_212:
    if ( (v107 & 8) == 0 )
    {
LABEL_204:
      LODWORD(v104) = v104 & 0xFFFFFFFD;
      if ( !(_DWORD)v104 )
        LODWORD(v104) = 1;
      goto LABEL_206;
    }
    LODWORD(v104) = 1;
    v173 = 0LL;
LABEL_206:
    v10 = v152;
    v99 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v108 = v104 & 0xFFFFFFE7;
  v109 = *(_BYTE *)(v16 + 34) >> 6;
  if ( v109 != 1 )
  {
    if ( v109 )
    {
      if ( v109 == 2 )
        v108 |= 0x18u;
    }
    else
    {
      v108 |= 8u;
    }
  }
  v110 = (v15 << 12) | qword_140016200[v108] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_236:
    v110 |= 0x100uLL;
    goto LABEL_237;
  }
  v111 = (__int64)(v10 << 25) >> 16;
  if ( v10 >= 0xFFFFF6FB40000000uLL && v10 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v10 == 0xFFFFF6FB7DBEDF68uLL )
      v110 |= 0x8000000000000000uLL;
    else
      v110 &= v99;
    v112 = sub_14023261C(v10);
    v10 = v152;
    if ( v112 )
      v110 |= 4uLL;
  }
  v113 = v110;
  v110 |= 4uLL;
  if ( v10 > 0xFFFFF6BFFFFFFF78uLL )
    v110 = v113;
  if ( v111 < 0xFFFF800000000000uLL )
  {
    v114 = HIBYTE(word_140C51864);
    goto LABEL_235;
  }
  if ( (unsigned int)sub_14027B080(v111) != 1 && (v111 < 0xFFFFF68000000000uLL || v111 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v111 < qword_140C540C0 || (v114 = HIBYTE(word_140C51864), v111 > qword_140C51BF0) )
      v114 = (unsigned __int8)word_140C51864;
LABEL_235:
    if ( !v114 )
      goto LABEL_237;
    goto LABEL_236;
  }
LABEL_237:
  v115 = v110 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v154 = v115;
  if ( !v173 )
  {
LABEL_266:
    v118 = 0LL;
    goto LABEL_267;
  }
  if ( *(_QWORD *)a1 > 0x7FFFFFFEFFFFuLL
    || ((v116 = *((_QWORD *)KeGetCurrentThread() + 23), v115 < 0) || (*(_DWORD *)(v116 + 1124) & 0x10) == 0)
    && ((v117 = *(_QWORD *)(v116 + 2552)) == 0 || *(_QWORD *)(v117 + 24) == v117 + 24) )
  {
    if ( (v104 & 5) != 5 )
    {
      v154 |= 0x42uLL;
      if ( (*(_BYTE *)(v16 + 34) & 0x10) == 0
        && (*(_DWORD *)(v16 + 16) & 0x400LL) == 0
        && (unsigned int)sub_1402E76C0(v16 + 16) )
      {
        v119 = 0LL;
        v120 = sub_1402F2700(v16);
        v121 = *(_BYTE *)(v16 + 34);
        v122 = v120;
        if ( (v121 & 0x10) == 0 && (*(_DWORD *)(v16 + 16) & 0x400LL) == 0 )
        {
          if ( (v121 & 8) == 0 )
          {
            v123 = sub_140232694((unsigned __int64 *)(v16 + 16), 1, 0);
            v121 = *(_BYTE *)(v16 + 34);
            v119 = v123;
          }
          *(_BYTE *)(v16 + 34) = v121 | 0x10;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v119 )
          sub_1402E20D0(v168, v119, 1);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v124 = KeGetCurrentIrql();
            if ( v124 <= 0xFu && (unsigned __int8)v122 <= 0xFu && v124 >= 2u )
            {
              v125 = KeGetCurrentPrcb();
              v10 = *((_QWORD *)v125 + 4375);
              v126 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v122 + 1));
              v36 = (v126 & *(_DWORD *)(v10 + 20)) == 0;
              *(_DWORD *)(v10 + 20) &= v126;
              if ( v36 )
                sub_140418E4C(v125);
            }
          }
        }
        __writecr8(v122);
      }
      if ( (v18 & 0x400) != 0 && (*(_BYTE *)(v166 + 184) & 7) != 2 )
        sub_140243EC4(v16);
    }
    goto LABEL_266;
  }
  v118 = 0LL;
  v173 = 0LL;
LABEL_267:
  v127 = 0LL;
  v155 = 0;
  v128 = 0;
  v129 = 0;
  if ( v174 )
  {
LABEL_305:
    v133 = v156;
    goto LABEL_306;
  }
  v130 = v156;
  v160 = 0LL;
  if ( !_bittest64((const signed __int64 *)(v156 + 40), 0x28u) && *(__int64 *)(v156 + 8) > 0 )
    goto LABEL_276;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    if ( !v159 || (*(_DWORD *)(v159 + 56) & 0x20) != 0 )
    {
      v127 = sub_140279474(BugCheckParameter2, &v160, &v155, v10);
      if ( v127 )
      {
        v131 = v160;
        v9 |= 2u;
        v118 = 0LL;
        v132 = 1;
        goto LABEL_278;
      }
      v118 = 0LL;
    }
    goto LABEL_276;
  }
  if ( v153 )
  {
    if ( (*(_DWORD *)(v159 + 56) & 0x20) != 0 )
      v9 |= 4u;
  }
  else
  {
    v9 |= 4u;
    v134 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( *(_QWORD *)(v134 + 1264) && sub_140234F14(v134, *(_QWORD *)(v156 + 8) | 0x8000000000000000uLL) )
      v9 &= ~4u;
  }
  if ( v9 < 4 )
  {
LABEL_276:
    v132 = 0;
LABEL_277:
    v131 = v153;
    goto LABEL_278;
  }
  v132 = v118;
  v160 = (unsigned int *)v118;
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 368LL) )
    goto LABEL_277;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 284LL));
  v135 = sub_1403126F0(BugCheckParameter2);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                    + 284LL));
  if ( !v135
    || (v136 = *((_DWORD *)v135 + 12), (v136 & 0x70) != 0x20)
    || (v136 & 0x200000) != 0
    || (v136 & 0x400000) == 0 )
  {
    v98 = v151;
    v132 = 0;
    v118 = 0LL;
    goto LABEL_277;
  }
  v137 = (BugCheckParameter2 >> 12)
       + (((__int64)v135[10] - *(_QWORD *)(*v135[9] + 136)) >> 3)
       - (*((unsigned int *)v135 + 6) | ((unsigned __int64)*((unsigned __int8 *)v135 + 32) << 32));
  if ( !_bittest(
          (const signed __int32 *)v135[20],
          (BugCheckParameter2 >> 12) + (((__int64)v135[10] - *(_QWORD *)(*v135[9] + 136)) >> 3) - *((_DWORD *)v135 + 6)) )
  {
    v98 = v151;
    v132 = 0;
    v130 = v156;
    v118 = 0LL;
    goto LABEL_277;
  }
  v131 = sub_140286F90(*v135[9], v137 << 12, (unsigned __int64 *)&v160);
  v132 = *((_DWORD *)v135 + 34);
  v9 |= 2u;
  v127 = (unsigned __int64)v135[18];
  v118 = 0LL;
  v98 = v151;
  v155 = v137;
  v130 = v156;
LABEL_278:
  if ( (v9 & 2) == 0 )
    goto LABEL_305;
  v129 = sub_14024076C((unsigned __int64 *)a1, (ULONG_PTR *)v131, v155, v130, v127, v132);
  sub_140228660(v130, 0);
  if ( v129 == 297 || v129 == -1073741670 )
  {
    sub_140228660(v98, 0);
    if ( v129 == 297 )
      return (unsigned int)-1073740748;
    return v129;
  }
  if ( (v129 & 0x80000000) != 0 )
    return v129;
  v154 = sub_140234EB4(v152);
  v133 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v154) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v133 + 35) & 8) != 0 )
    v128 = 2;
  v118 = 0LL;
  LODWORD(v104) = 0;
  v9 &= ~1u;
LABEL_306:
  v139 = v118;
  if ( (v9 & 1) == 0 )
    v139 = v104;
  v140 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v141 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    a5 = (__int64)v141;
    if ( *v141 == 5 )
      goto LABEL_315;
  }
  else
  {
    v141 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  v142 = v141;
  v141 = (_BYTE *)v118;
  a5 = v118;
  if ( v140 )
  {
    v36 = *v142 == 3;
    a5 = v118;
    if ( v36 )
    {
      v128 |= 1u;
      a5 = v118;
    }
  }
LABEL_315:
  if ( v173
    && (v154 & 0x800) == 0
    && (v154 & 0x200) != 0
    && !*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1248LL) )
  {
    if ( !v141 && (dword_140D06880 & 0x4000000) == 0 && (byte_140C506CE & 1) != 0 )
    {
      v154 &= ~0x20uLL;
      v9 |= 0x10u;
    }
    v9 |= 8u;
  }
  v143 = *(_BYTE *)(a1 + 69);
  if ( (v143 & 8) != 0 )
  {
    v144 = *(_QWORD *)(a1 + 16);
    if ( (v144 & 1) == 0 || *(_BYTE *)(v144 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v154 &= ~0x20uLL;
  }
  if ( (v143 & 5) == 4 && (v143 & 2) == 0 )
  {
    v145 = *(unsigned __int16 *)(a1 + 66);
    v146 = v152;
    if ( !(_WORD)v145 )
      goto LABEL_337;
    if ( v145 + *(unsigned __int16 *)(a1 + 64) == (((unsigned int)v152 >> 3) & 0x1FF) )
    {
      if ( *(__int64 *)(v133 + 40) >= 0 )
      {
        if ( (v143 & 0x10) == 0 )
          goto LABEL_336;
LABEL_337:
        v147 = *(_WORD *)(a1 + 66);
        if ( v147 )
        {
          *(_WORD *)(a1 + 66) = v147 + 1;
        }
        else
        {
          *(_WORD *)(a1 + 66) = 1;
          *(_WORD *)(a1 + 64) = (v146 >> 3) & 0x1FF;
          if ( *(__int64 *)(v133 + 40) < 0 )
            *(_BYTE *)(a1 + 69) &= ~0x10u;
          else
            *(_BYTE *)(a1 + 69) |= 0x10u;
        }
        v128 |= 4u;
        goto LABEL_343;
      }
      if ( (v143 & 0x10) == 0 )
        goto LABEL_337;
    }
LABEL_336:
    sub_14022FC80((__int64 *)(a1 + 56));
    v146 = v152;
    goto LABEL_337;
  }
LABEL_343:
  if ( !(unsigned int)sub_140322F10(v166, v152, v133, v139, v154, v128, a5) )
  {
    sub_140228660(v133, 0);
    if ( (v9 & 2) == 0 )
      sub_140228660(v98, 0);
    return (unsigned int)-1073741801;
  }
  if ( (v9 & 8) == 0 )
    return v129;
  if ( *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 69) & 1) == 0 && *(_WORD *)(a1 + 66) )
    sub_14022FC80((__int64 *)(a1 + 56));
  v148 = 8;
  if ( v9 < 0x10 )
    v148 = 0;
  v149 = sub_140316400(BugCheckParameter2, v152, 0xFFFFFFFFFFFFFFFFuLL, v148);
  v129 = v149;
  if ( v149 >= 0 )
    return v129;
  sub_1405A7A74(a1, (unsigned int)v149);
  return 3221226548LL;
}
