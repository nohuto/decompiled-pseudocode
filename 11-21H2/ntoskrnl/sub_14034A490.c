/*
 * XREFs of sub_14034A490 @ 0x14034A490
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_14039FD24 @ 0x14039FD24 (sub_14039FD24.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_1402314B0 @ 0x1402314B0 (sub_1402314B0.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_14034B970 @ 0x14034B970 (sub_14034B970.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140362C48 @ 0x140362C48 (sub_140362C48.c)
 *     sub_14036424C @ 0x14036424C (sub_14036424C.c)
 *     sub_140364760 @ 0x140364760 (sub_140364760.c)
 *     sub_140364860 @ 0x140364860 (sub_140364860.c)
 *     sub_140365834 @ 0x140365834 (sub_140365834.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140365B28 @ 0x140365B28 (sub_140365B28.c)
 *     sub_140367768 @ 0x140367768 (sub_140367768.c)
 *     sub_14037039C @ 0x14037039C (sub_14037039C.c)
 *     sub_14039FF7C @ 0x14039FF7C (sub_14039FF7C.c)
 *     sub_1403E0320 @ 0x1403E0320 (sub_1403E0320.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041A044 @ 0x14041A044 (sub_14041A044.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14034A490(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // r12d
  unsigned int v10; // esi
  __int64 v11; // r8
  signed __int64 v12; // rdi
  signed __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned int v22; // ebp
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r12d
  __int64 v28; // rsi
  char v29; // cl
  unsigned __int64 v30; // rbp
  __int64 v31; // r8
  int v32; // edx
  signed __int16 *v33; // rbp
  signed __int16 *v34; // rdx
  unsigned __int64 v35; // r14
  signed __int16 v36; // ax
  signed __int16 v37; // tt
  __int64 v38; // r8
  int v39; // r10d
  int v40; // r11d
  __int64 v41; // rdx
  unsigned int v42; // ebp
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rdi
  __int64 v47; // r15
  unsigned __int16 v48; // dx
  __int64 v49; // r9
  unsigned __int16 v50; // ax
  unsigned __int16 v51; // di
  unsigned __int16 v52; // cx
  unsigned __int16 v53; // r10
  unsigned int v54; // r8d
  __int64 *v55; // r10
  _QWORD *v56; // r8
  __int64 **v57; // rcx
  __int64 v58; // rdx
  __int64 *v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rdi
  unsigned __int8 v62; // r12
  __int64 v63; // rdx
  unsigned __int8 v64; // al
  struct _KTHREAD *v65; // r12
  __int64 v66; // r8
  __int64 v67; // r12
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // eax
  unsigned int v71; // r14d
  __int64 v72; // rdx
  unsigned int v73; // esi
  unsigned int v74; // ebp
  unsigned __int16 v75; // ax
  int v76; // r8d
  int v77; // eax
  __int64 v78; // rsi
  char v79; // cl
  char v80; // r11
  __int64 v81; // rdi
  __int64 v82; // r8
  __int64 v83; // r12
  __int64 v84; // rdx
  signed __int16 *v85; // rdi
  signed __int16 *v86; // rbp
  signed __int16 v87; // ax
  signed __int16 v88; // tt
  int v89; // edx
  __int64 v90; // r10
  __int64 v91; // r12
  unsigned __int8 v92; // al
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  __int64 v95; // r9
  int v96; // eax
  bool v97; // zf
  struct _KTHREAD *v98; // r10
  __int64 v99; // rdx
  char *v100; // rdi
  unsigned int m; // ecx
  int v102; // r8d
  struct _KTHREAD *v103; // rcx
  char v104; // cl
  int v105; // ebp
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r10
  int v108; // eax
  unsigned __int8 v109; // r12
  unsigned int v110; // eax
  __int64 v111; // rdx
  char *v112; // rbp
  unsigned int i; // ecx
  struct _KTHREAD *v114; // rcx
  struct _KTHREAD *v115; // r12
  __int64 v116; // rdx
  char *v117; // rdi
  unsigned int k; // ecx
  char v119; // al
  unsigned __int8 v120; // al
  struct _KPRCB *v121; // r10
  __int64 v122; // r9
  int v123; // eax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v125; // ecx
  unsigned __int8 v126; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v129; // r9
  int v130; // eax
  char v131; // cl
  __int64 v132; // rdx
  int v133; // edi
  __int64 v134; // rcx
  int v135; // r8d
  struct _KTHREAD *v136; // rcx
  struct _KTHREAD *v137; // rbp
  unsigned __int8 v138; // al
  int v139; // eax
  __int64 v140; // r8
  char *v141; // r15
  __int64 v142; // rdx
  int v143; // r8d
  struct _KTHREAD *v144; // rcx
  __int64 v145; // rdx
  char *v146; // rbx
  unsigned int n; // ecx
  struct _KTHREAD *v148; // rcx
  int v149; // r15d
  __int16 v150; // r15
  unsigned __int8 v151; // al
  __int64 v152; // rax
  struct _KTHREAD *v153; // rcx
  __int64 v154; // rdx
  struct _KTHREAD *v155; // r15
  unsigned int v156; // ecx
  char *v157; // rsi
  __int64 v158; // rdx
  struct _KTHREAD *v159; // rcx
  unsigned __int8 v160; // al
  struct _KPRCB *v161; // r10
  int v162; // eax
  ULONG_PTR v163; // r14
  struct _KTHREAD *v164; // rdi
  char *v165; // rbx
  __int64 v166; // rdx
  unsigned int j; // ecx
  struct _KTHREAD *v168; // rcx
  unsigned __int8 v169; // al
  unsigned __int8 v170; // r12
  int v171; // eax
  struct _KTHREAD *v172; // rsi
  unsigned int v173; // ecx
  char *v174; // rbx
  __int64 v175; // rdx
  struct _KTHREAD *v176; // rcx
  unsigned __int8 v177; // al
  unsigned __int8 v178; // di
  int v179; // eax
  unsigned __int8 v180; // [rsp+40h] [rbp-B8h]
  unsigned __int8 v181; // [rsp+40h] [rbp-B8h]
  unsigned __int8 v182; // [rsp+41h] [rbp-B7h]
  int v183; // [rsp+44h] [rbp-B4h]
  unsigned int v184; // [rsp+44h] [rbp-B4h]
  unsigned int v185; // [rsp+44h] [rbp-B4h]
  unsigned int v186; // [rsp+44h] [rbp-B4h]
  unsigned __int8 v187; // [rsp+48h] [rbp-B0h] BYREF
  char v188[3]; // [rsp+49h] [rbp-AFh] BYREF
  int v189; // [rsp+4Ch] [rbp-ACh]
  int v190; // [rsp+50h] [rbp-A8h]
  __int64 v191; // [rsp+58h] [rbp-A0h]
  unsigned int v192; // [rsp+60h] [rbp-98h]
  int v193; // [rsp+64h] [rbp-94h]
  unsigned int v194; // [rsp+68h] [rbp-90h]
  __int64 v195; // [rsp+70h] [rbp-88h]
  __int64 v196; // [rsp+78h] [rbp-80h]
  unsigned int v197; // [rsp+80h] [rbp-78h]
  int v198; // [rsp+88h] [rbp-70h] BYREF
  int v199; // [rsp+8Ch] [rbp-6Ch] BYREF
  _QWORD v200[2]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v201[11]; // [rsp+A0h] [rbp-58h] BYREF

  v5 = a1;
  LOBYTE(v6) = -1;
  v7 = a4;
  v8 = a3;
  v180 = -1;
  v9 = 0;
  v189 = 0;
  v193 = 0;
  v191 = 0LL;
  v10 = ((unsigned int)dword_140C1BBE0 >> 2) & 1;
  while ( 1 )
  {
    v11 = 0xFFFFFFFFLL;
    if ( v10 )
    {
      while ( 1 )
      {
        _m_prefetchw((const void *)(v8 + 56));
        v12 = *(_QWORD *)(v8 + 56);
        if ( (v12 & 0xFFF) != 0 )
        {
          while ( 1 )
          {
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 56), v12 - 1, v12);
            if ( v12 == v13 )
              break;
            v193 = 1;
            v12 = v13;
            if ( (v13 & 0xFFF) == 0 )
              goto LABEL_37;
          }
          v14 = v12 & 0xFFFFFFFFFFFFF000uLL;
          if ( v14 )
            break;
        }
LABEL_37:
        if ( v9 == 2 )
          goto LABEL_38;
        v63 = *(unsigned __int8 *)(v5 + 57);
        v9 = 2;
        v189 = 2;
        v64 = sub_140365AF4(v8 + 16, v63);
        v5 = a1;
        LOBYTE(v6) = v64;
        v180 = v64;
      }
      if ( v9 )
      {
        if ( *(_BYTE *)(v5 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v129 = *((_QWORD *)CurrentPrcb + 4375);
                v130 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v97 = (v130 & *(_DWORD *)(v129 + 20)) == 0;
                *(_DWORD *)(v129 + 20) &= v130;
                if ( v97 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8((unsigned __int8)v6);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v8 + 16);
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)(v8 + 16 - qword_140C50630) < 0x8000000000LL )
            v125 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
          else
            v125 = -1;
          _disable();
          v140 = (v8 + 16) & 0x7FFFFFFFFFFFFFFCLL;
          v141 = (char *)CurrentThread + 1696;
          v142 = 0LL;
          do
          {
            if ( (*(_QWORD *)v141 & 0x7FFFFFFFFFFFFFFCLL) == v140
              && v141[18]
              && (*(_DWORD *)v141 & 1) == 0
              && *((_DWORD *)v141 + 2) == v125 )
            {
              v141[18] = 0;
              if ( *(__int64 *)v141 < 0 )
              {
                *v141 |= 2u;
                _enable();
                sub_14034EE30(v141, v142, v140);
                _disable();
              }
              v143 = *((_DWORD *)v141 + 22);
              *((_DWORD *)v141 + 22) = 0;
              v141[17] = 0;
              *(_QWORD *)v141 = 0LL;
              *((_BYTE *)CurrentThread + 792) |= 1 << v141[16];
              _enable();
              if ( v143 )
                sub_14022B568((ULONG_PTR)CurrentThread, v8 + 16, v143);
              goto LABEL_258;
            }
            v142 = (unsigned int)(v142 + 1);
            v141 += 96;
          }
          while ( (unsigned int)v142 < 6 );
          if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8 + 16, v125, 0LL);
          _enable();
LABEL_258:
          v144 = KeGetCurrentThread();
          v97 = (*((_WORD *)v144 + 243))++ == 0xFFFF;
          if ( v97 && *((struct _KTHREAD **)v144 + 19) != (struct _KTHREAD *)((char *)v144 + 152) )
            KiCheckForKernelApcDelivery();
        }
        v189 = 0;
      }
      v15 = 3LL;
      v16 = *(unsigned __int16 *)(v14 + 34) + (unsigned __int64)*(unsigned __int8 *)(v14 + 39);
      v200[1] = v14 + 48;
      v17 = *(unsigned __int8 *)(v8 + 1);
      v200[0] = 2 * v16;
      v190 = *((unsigned __int8 *)&qword_14001BBA0[32] + v17);
      v194 = (unsigned int)v14 >> 12;
      v18 = *(_DWORD *)(v14 + 40) ^ qword_140C5A5C8 ^ ((unsigned int)v14 >> 12);
      v19 = (unsigned __int16)v18;
      v20 = HIWORD(v18);
      v21 = HIWORD(v18);
      v22 = HIWORD(v18);
      if ( (unsigned int)v7 >= (unsigned __int16)v18 )
        v15 = 1LL;
      if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
      {
        v22 = v20;
        v24 = 0;
        if ( (unsigned int)v7 >= (unsigned __int16)v18 )
          v22 = v20;
      }
      else
      {
        v23 = (unsigned __int16)sub_14041A044(v20, v20);
        if ( (unsigned int)v7 >= v19 )
          v22 = v21;
        v24 = byte_140C1BAE0[v23];
      }
      v27 = sub_14034B970((unsigned int)v200, *(unsigned __int16 *)(v14 + 36), v24, v190, v15);
      *(_WORD *)(v14 + 36) = v27;
      v28 = v22 + v27 * v19;
      if ( *(_BYTE *)(v14 + 45) > 1u )
      {
        v29 = *(_BYTE *)(v14 + 44);
        v26 = 0LL;
        v30 = v14 + *(unsigned __int16 *)(v14 + 46);
        v31 = (unsigned int)v28 >> v29;
        v192 = *(unsigned __int16 *)(v14 + 40) ^ (unsigned __int16)qword_140C5A5C8 ^ (unsigned __int16)v194;
        v198 = 0;
        v32 = (((unsigned int)v28 + v192 - 1) >> v29) - v31;
        v187 = -1;
        v25 = 2 * v31;
        v182 = -1;
        v196 = v25;
        v33 = (signed __int16 *)(v25 + v30);
        _m_prefetchw(v33);
        v190 = (unsigned __int8)v198;
        v34 = &v33[v32 + 1];
        v183 = -1;
        v195 = (unsigned __int8)v198;
        if ( v33 < v34 )
        {
          v35 = (unsigned __int64)v34;
          do
          {
            while ( 1 )
            {
              v36 = *v33;
              while ( v36 > 0 )
              {
                v37 = v36;
                v36 = _InterlockedCompareExchange16(v33, v36 + 1, v36);
                if ( v37 == v36 )
                {
                  v38 = v196;
                  v39 = v190;
                  v40 = v183;
                  goto LABEL_20;
                }
              }
              if ( (_DWORD)v26 )
                break;
              v197 = 1;
              v92 = sub_140365AF4(v14 + 24, *(unsigned __int8 *)(a1 + 57));
              v26 = 1LL;
              v182 = v92;
            }
            v38 = v196;
            v40 = v183;
            if ( v36 )
            {
              v39 = ++v190;
              v195 = v196 >> 1;
              if ( v183 == -1 )
              {
                v40 = v196 >> 1;
                v183 = v40;
              }
            }
            else
            {
              v39 = --v190;
            }
            *v33 = v36 + 1;
LABEL_20:
            v25 = v38 + 2;
            ++v33;
            v196 = v25;
          }
          while ( (unsigned __int64)v33 < v35 );
          v8 = a3;
          LODWORD(v7) = a4;
          if ( v39 )
          {
            v41 = a1;
            if ( (dword_140C1BBE0 & 0x20) != 0 )
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
                (v39 << *(_BYTE *)(v14 + 44)) / 4096);
          }
          else
          {
            v41 = a1;
          }
          if ( v40 == -1 )
          {
            if ( (_DWORD)v26 )
            {
              if ( *(_BYTE *)(v41 + 57) )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 24));
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v106 = KeGetCurrentIrql();
                    if ( v106 <= 0xFu && v182 <= 0xFu && v106 >= 2u )
                    {
                      v107 = KeGetCurrentPrcb();
                      v26 = *((_QWORD *)v107 + 4375);
                      v108 = ~(unsigned __int16)(-1LL << (v182 + 1));
                      v97 = (v108 & *(_DWORD *)(v26 + 20)) == 0;
                      v25 = (unsigned int)v108 & *(_DWORD *)(v26 + 20);
                      *(_DWORD *)(v26 + 20) = v25;
                      if ( v97 )
                        sub_140418E4C(v107);
                    }
                  }
                }
                __writecr8(v182);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v14 + 24);
                v98 = KeGetCurrentThread();
                v195 = (__int64)v98;
                if ( v14 + 24 - qword_140C50630 < 0x8000000000LL )
                {
                  v110 = sub_140287F30(*((_QWORD *)v98 + 23));
                  v98 = (struct _KTHREAD *)v195;
                  v25 = v110;
                }
                else
                {
                  v25 = 0xFFFFFFFFLL;
                }
                _disable();
                v26 = 0x7FFFFFFFFFFFFFFCLL;
                v111 = (v14 + 24) & 0x7FFFFFFFFFFFFFFCLL;
                v112 = (char *)v98 + 1696;
                for ( i = 0; i < 6; ++i )
                {
                  if ( (*(_QWORD *)v112 & 0x7FFFFFFFFFFFFFFCLL) == v111
                    && v112[18]
                    && (*(_DWORD *)v112 & 1) == 0
                    && *((_DWORD *)v112 + 2) == (_DWORD)v25 )
                  {
                    v112[18] = 0;
                    if ( *(__int64 *)v112 < 0 )
                    {
                      *v112 |= 2u;
                      _enable();
                      sub_14034EE30(v112, v111, v25);
                      _disable();
                      v98 = (struct _KTHREAD *)v195;
                    }
                    v25 = *((unsigned int *)v112 + 22);
                    *((_DWORD *)v112 + 22) = 0;
                    v112[17] = 0;
                    *(_QWORD *)v112 = 0LL;
                    v26 = (unsigned __int8)v112[16];
                    *((_BYTE *)v98 + 792) |= 1 << v26;
                    _enable();
                    if ( (_DWORD)v25 )
                      sub_14022B568((ULONG_PTR)v98, v14 + 24, v25);
                    goto LABEL_169;
                  }
                  v112 += 96;
                }
                if ( (*((_DWORD *)v98 + 30) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v98, v14 + 24, (unsigned int)v25, 0LL);
                _enable();
LABEL_169:
                v114 = KeGetCurrentThread();
                v97 = (*((_WORD *)v114 + 243))++ == 0xFFFF;
                if ( v97 && *((struct _KTHREAD **)v114 + 19) != (struct _KTHREAD *)((char *)v114 + 152) )
                  KiCheckForKernelApcDelivery();
              }
            }
          }
          else
          {
            v104 = *(_BYTE *)(v14 + 44);
            v187 = v182;
            v198 = v195 - v40 + 1;
            v105 = v198 << v104;
            v185 = v40 << v104;
            if ( (int)sub_14042A5E0(*(_QWORD *)v41, v14 + (unsigned int)(v40 << v104)) < 0 )
            {
              v44 = a1;
              sub_140367768(a1, v14, (unsigned int)v28, v192);
              if ( *(_BYTE *)(a1 + 57) )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 24));
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v160 = KeGetCurrentIrql();
                    if ( v160 <= 0xFu && v182 <= 0xFu && v160 >= 2u )
                    {
                      v161 = KeGetCurrentPrcb();
                      v26 = *((_QWORD *)v161 + 4375);
                      v162 = ~(unsigned __int16)(-1LL << (v182 + 1));
                      v97 = (v162 & *(_DWORD *)(v26 + 20)) == 0;
                      v25 = (unsigned int)v162 & *(_DWORD *)(v26 + 20);
                      *(_DWORD *)(v26 + 20) = v25;
                      if ( v97 )
                        sub_140418E4C(v161);
                    }
                  }
                }
                __writecr8(v182);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v14 + 24);
                v155 = KeGetCurrentThread();
                if ( v14 + 24 - qword_140C50630 >= 0x8000000000LL )
                  v156 = -1;
                else
                  v156 = sub_140287F30(*((_QWORD *)v155 + 23));
                _disable();
                v26 = 0x7FFFFFFFFFFFFFFCLL;
                v25 = (v14 + 24) & 0x7FFFFFFFFFFFFFFCLL;
                v157 = (char *)v155 + 1696;
                v158 = 0LL;
                do
                {
                  if ( (*(_QWORD *)v157 & 0x7FFFFFFFFFFFFFFCLL) == v25
                    && v157[18]
                    && (*(_DWORD *)v157 & 1) == 0
                    && *((_DWORD *)v157 + 2) == v156 )
                  {
                    v157[18] = 0;
                    if ( *(__int64 *)v157 < 0 )
                    {
                      *v157 |= 2u;
                      _enable();
                      sub_14034EE30(v157, v158, v25);
                      _disable();
                    }
                    v25 = *((unsigned int *)v157 + 22);
                    *((_DWORD *)v157 + 22) = 0;
                    v157[17] = 0;
                    *(_QWORD *)v157 = 0LL;
                    v26 = (unsigned __int8)v157[16];
                    *((_BYTE *)v155 + 792) |= 1 << v26;
                    _enable();
                    if ( (_DWORD)v25 )
                      sub_14022B568((ULONG_PTR)v155, v14 + 24, v25);
                    goto LABEL_334;
                  }
                  v158 = (unsigned int)(v158 + 1);
                  v157 += 96;
                }
                while ( (unsigned int)v158 < 6 );
                if ( (*((_DWORD *)v155 + 30) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v155, v14 + 24, v156, 0LL);
                _enable();
LABEL_334:
                v159 = KeGetCurrentThread();
                v97 = (*((_WORD *)v159 + 243))++ == 0xFFFF;
                if ( v97 && *((struct _KTHREAD **)v159 + 19) != (struct _KTHREAD *)((char *)v159 + 152) )
                  KiCheckForKernelApcDelivery();
                v44 = a1;
              }
              v43 = 0LL;
              v42 = a5;
              if ( v27 != -1 )
              {
                _InterlockedAnd64(
                  (volatile signed __int64 *)(v14 + 8 * ((unsigned __int64)(unsigned int)(2 * v27) >> 6) + 48),
                  ~(3LL << ((2 * v27) & 0x3F)));
LABEL_340:
                sub_140364860(v44, v14, 0LL, v42);
LABEL_30:
                if ( !v189 )
                  goto LABEL_31;
                v163 = v8 + 16;
                if ( v189 == 2 )
                {
                  if ( !*(_BYTE *)(v44 + 57) )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v163, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v163);
                    v164 = KeGetCurrentThread();
                    if ( v163 - qword_140C50630 >= 0x8000000000LL )
                      v25 = 0xFFFFFFFFLL;
                    else
                      v25 = (unsigned int)sub_140287F30(*((_QWORD *)v164 + 23));
                    _disable();
                    v165 = (char *)v164 + 1696;
                    v26 = 0x7FFFFFFFFFFFFFFCLL;
                    v166 = v163 & 0x7FFFFFFFFFFFFFFCLL;
                    for ( j = 0; j < 6; ++j )
                    {
                      if ( (*(_QWORD *)v165 & 0x7FFFFFFFFFFFFFFCLL) == v166
                        && v165[18]
                        && (*(_DWORD *)v165 & 1) == 0
                        && *((_DWORD *)v165 + 2) == (_DWORD)v25 )
                      {
                        v165[18] = 0;
                        if ( *(__int64 *)v165 < 0 )
                        {
                          *v165 |= 2u;
                          _enable();
                          sub_14034EE30(v165, v166, v25);
                          _disable();
                        }
                        v25 = *((unsigned int *)v165 + 22);
                        *((_DWORD *)v165 + 22) = 0;
                        v165[17] = 0;
                        *(_QWORD *)v165 = 0LL;
                        *((_BYTE *)v164 + 792) |= 1 << v165[16];
                        _enable();
                        if ( (_DWORD)v25 )
                          sub_14022B568((ULONG_PTR)v164, v163, v25);
                        goto LABEL_371;
                      }
                      v165 += 96;
                    }
                    if ( (*((_DWORD *)v164 + 30) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v164, v163, (unsigned int)v25, 0LL);
                    _enable();
                    goto LABEL_371;
                  }
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v163);
                }
                else
                {
                  if ( !*(_BYTE *)(v44 + 57) )
                  {
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v163, 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared(v163);
                    sub_1402AFC00(v163);
LABEL_371:
                    v168 = KeGetCurrentThread();
                    v97 = (*((_WORD *)v168 + 243))++ == 0xFFFF;
                    if ( v97 && *((struct _KTHREAD **)v168 + 19) != (struct _KTHREAD *)((char *)v168 + 152) )
                      KiCheckForKernelApcDelivery();
                    goto LABEL_31;
                  }
                  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v163);
                }
                if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v169 = KeGetCurrentIrql(), v169 <= 0xFu) )
                {
                  v170 = v180;
                  if ( v180 <= 0xFu && v169 >= 2u )
                  {
                    v26 = (__int64)KeGetCurrentPrcb();
                    v171 = ~(unsigned __int16)(-1LL << (v180 + 1));
                    v25 = *(_QWORD *)(v26 + 35000);
                    v97 = (v171 & *(_DWORD *)(v25 + 20)) == 0;
                    *(_DWORD *)(v25 + 20) &= v171;
                    if ( v97 )
                      sub_140418E4C(v26);
                  }
                }
                else
                {
                  v170 = v180;
                }
                __writecr8(v170);
                goto LABEL_31;
              }
LABEL_29:
              if ( v43 )
                goto LABEL_30;
              goto LABEL_340;
            }
            sub_1402314B0(a1, v14, v185, v105, &v198, 1, (char *)&v187);
          }
        }
      }
      v42 = a5;
      v43 = v14 + v28;
      if ( (a5 & 2) != 0 )
        sub_1403E0320(v43, ((unsigned int)v7 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)v7 < v19 )
      {
        v149 = v19 - v7;
        if ( v149 == 1 )
          v150 = 0x8000;
        else
          v150 = v149 & 0x3FFF;
        *(_WORD *)((*(unsigned __int16 *)(v14 + 40) ^ (unsigned __int16)qword_140C5A5C8 ^ (unsigned __int64)(unsigned __int16)v194)
                 + v43
                 - 2) = v150;
      }
      v44 = a1;
      goto LABEL_29;
    }
    if ( !v9 )
    {
      v9 = 1;
      v151 = sub_140364760(v8 + 16, *(unsigned __int8 *)(v5 + 57), 0xFFFFFFFFLL, 4096LL);
      v5 = a1;
      v180 = v151;
LABEL_38:
      v11 = 0xFFFFFFFFLL;
    }
    if ( *(_QWORD *)(v8 + 8) )
      break;
    if ( v9 == 2 )
    {
      if ( !*(_BYTE *)(v5 + 57) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v8 + 16);
          v11 = 0xFFFFFFFFLL;
        }
        v115 = KeGetCurrentThread();
        if ( (unsigned __int64)(v8 + 16 - qword_140C50630) < 0x8000000000LL )
          v11 = (unsigned int)sub_140287F30(*((_QWORD *)v115 + 23));
        _disable();
        v116 = (v8 + 16) & 0x7FFFFFFFFFFFFFFCLL;
        v117 = (char *)v115 + 1696;
        for ( k = 0; k < 6; ++k )
        {
          if ( (*(_QWORD *)v117 & 0x7FFFFFFFFFFFFFFCLL) == v116
            && v117[18]
            && (*(_DWORD *)v117 & 1) == 0
            && *((_DWORD *)v117 + 2) == (_DWORD)v11 )
          {
            v117[18] = 0;
            if ( *(__int64 *)v117 < 0 )
            {
              *v117 |= 2u;
              _enable();
              sub_14034EE30(v117, v116, v11);
              _disable();
            }
            v135 = *((_DWORD *)v117 + 22);
            *((_DWORD *)v117 + 22) = 0;
            v117[17] = 0;
            *(_QWORD *)v117 = 0LL;
            *((_BYTE *)v115 + 792) |= 1 << v117[16];
            _enable();
            if ( v135 )
              sub_14022B568((ULONG_PTR)v115, v8 + 16, v135);
            goto LABEL_228;
          }
          v117 += 96;
        }
        if ( (*((_DWORD *)v115 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v115, v8 + 16, (unsigned int)v11, 0LL);
        _enable();
        goto LABEL_228;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
    }
    else
    {
      if ( !*(_BYTE *)(v5 + 57) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8 + 16);
        sub_1402AFC00(v8 + 16);
LABEL_228:
        v136 = KeGetCurrentThread();
        v97 = (*((_WORD *)v136 + 243))++ == 0xFFFF;
        if ( v97 && *((struct _KTHREAD **)v136 + 19) != (struct _KTHREAD *)((char *)v136 + 152) )
          KiCheckForKernelApcDelivery();
        goto LABEL_153;
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v120 = KeGetCurrentIrql(), v120 <= 0xFu) )
    {
      v109 = v180;
      if ( v180 <= 0xFu && v120 >= 2u )
      {
        v121 = KeGetCurrentPrcb();
        v122 = *((_QWORD *)v121 + 4375);
        v123 = ~(unsigned __int16)(-1LL << (v180 + 1));
        v97 = (v123 & *(_DWORD *)(v122 + 20)) == 0;
        *(_DWORD *)(v122 + 20) &= v123;
        if ( v97 )
          sub_140418E4C(v121);
      }
    }
    else
    {
      v109 = v180;
    }
    __writecr8(v109);
LABEL_153:
    v45 = sub_14036424C(a2, *(unsigned __int8 *)(a1 + 57));
    if ( !v45 )
    {
      v45 = sub_140362C48(a1, a2, a5);
      if ( !v45 )
      {
        v42 = a5;
        v43 = 0LL;
        goto LABEL_32;
      }
    }
    v9 = 2;
    v189 = 2;
    v180 = sub_140365AF4(v8 + 16, *(unsigned __int8 *)(a1 + 57));
    LOBYTE(v6) = v180;
    v191 = sub_140365B28(v8, v45);
LABEL_155:
    v5 = a1;
  }
  v47 = *(_QWORD *)(v8 + 24);
  v48 = 1;
  if ( v10 )
    v48 = 4096;
  v49 = v8 + 24;
  if ( v47 == v8 + 24 )
  {
LABEL_291:
    v47 = 0LL;
    goto LABEL_64;
  }
LABEL_43:
  v50 = *(_WORD *)(v47 + 32);
  v193 = 0;
  while ( 1 )
  {
    if ( v48 < v50 )
    {
      v51 = v48;
    }
    else
    {
      v51 = v50;
      if ( v9 == 1 )
      {
        v47 = *(_QWORD *)v47;
        if ( v47 == v49 )
          goto LABEL_291;
        goto LABEL_43;
      }
    }
    v52 = v50 - v51;
    v50 = _InterlockedCompareExchange16((volatile signed __int16 *)(v47 + 32), v50 - v51, v50);
    v53 = v51;
    v54 = v51 + v52;
    if ( v50 == v54 )
      break;
    if ( v50 < v54 )
      v193 = 1;
  }
  if ( *(_WORD *)(v47 + 32) )
    goto LABEL_62;
  v55 = (__int64 *)v47;
  switch ( *(_BYTE *)(v47 + 38) )
  {
    case 0:
      v56 = (_QWORD *)(v8 + 8);
      goto LABEL_50;
    case 1:
      v49 = v8 + 40;
      v56 = 0LL;
LABEL_50:
      v57 = (__int64 **)(v8 + 40);
      if ( v49 )
      {
        v58 = *(_QWORD *)v47;
        v59 = *(__int64 **)(v47 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v47 + 8LL) == v47 && *v59 == v47 )
        {
          *v59 = v58;
          *(_QWORD *)(v58 + 8) = v59;
          if ( v56 )
            --*v56;
          goto LABEL_55;
        }
LABEL_388:
        __fastfail(3u);
      }
LABEL_55:
      *(_BYTE *)(v47 + 38) = 1;
      if ( v57 )
      {
        v60 = v57[1];
        if ( (__int64 **)*v60 != v57 )
          goto LABEL_388;
        *(_QWORD *)v47 = v57;
        *(_QWORD *)(v47 + 8) = v60;
        v55 = 0LL;
        *v60 = v47;
        v57[1] = (__int64 *)v47;
      }
      if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
      {
        v55 = *v57;
        v152 = **v57;
        if ( (__int64 **)(*v57)[1] != v57 || *(__int64 **)(v152 + 8) != v55 )
          goto LABEL_388;
        *v57 = (__int64 *)v152;
        *(_QWORD *)(v152 + 8) = v57;
        --MEMORY[0];
        *((_BYTE *)v55 + 38) = 2;
      }
      if ( v55 && *((_BYTE *)v55 + 38) == 2 )
        v55[2] = 0LL;
      break;
    case 2:
      v57 = (__int64 **)(v8 + 40);
      goto LABEL_55;
  }
  v53 = v51;
LABEL_62:
  if ( v51 > 1u )
    *(_QWORD *)(v8 + 56) = v47 ^ ((unsigned __int16)(v53 - 1) ^ (unsigned __int16)v47) & 0xFFF;
LABEL_64:
  v61 = a1;
  if ( v9 == 2 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
LABEL_67:
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v93 = KeGetCurrentIrql(), v93 <= 0xFu) )
      {
        v62 = v180;
        if ( v180 <= 0xFu && v93 >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          v95 = *((_QWORD *)v94 + 4375);
          v96 = ~(unsigned __int16)(-1LL << (v180 + 1));
          v97 = (v96 & *(_DWORD *)(v95 + 20)) == 0;
          *(_DWORD *)(v95 + 20) &= v96;
          if ( v97 )
          {
            sub_140418E4C(v94);
            __writecr8(v180);
            goto LABEL_76;
          }
        }
      }
      else
      {
        v62 = v180;
      }
      __writecr8(v62);
      goto LABEL_76;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 16);
    v65 = KeGetCurrentThread();
    if ( (unsigned __int64)(v8 + 16 - qword_140C50630) < 0x8000000000LL )
      v66 = (unsigned int)sub_140287F30(*((_QWORD *)v65 + 23));
    else
      v66 = 0xFFFFFFFFLL;
    _disable();
    v99 = (v8 + 16) & 0x7FFFFFFFFFFFFFFCLL;
    v100 = (char *)v65 + 1696;
    for ( m = 0; m < 6; ++m )
    {
      if ( (*(_QWORD *)v100 & 0x7FFFFFFFFFFFFFFCLL) == v99
        && v100[18]
        && (*(_DWORD *)v100 & 1) == 0
        && *((_DWORD *)v100 + 2) == (_DWORD)v66 )
      {
        v100[18] = 0;
        if ( *(__int64 *)v100 < 0 )
        {
          *v100 |= 2u;
          _enable();
          sub_14034EE30(v100, v99, v66);
          _disable();
        }
        v102 = *((_DWORD *)v100 + 22);
        *((_DWORD *)v100 + 22) = 0;
        v100[17] = 0;
        *(_QWORD *)v100 = 0LL;
        *((_BYTE *)v65 + 792) |= 1 << v100[16];
        _enable();
        if ( v102 )
          sub_14022B568((ULONG_PTR)v65, v8 + 16, v102);
        goto LABEL_133;
      }
      v100 += 96;
    }
    if ( (*((_DWORD *)v65 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v65, v8 + 16, (unsigned int)v66, 0LL);
    _enable();
LABEL_133:
    v103 = KeGetCurrentThread();
    v97 = (*((_WORD *)v103 + 243))++ == 0xFFFF;
    if ( v97 && *((struct _KTHREAD **)v103 + 19) != (struct _KTHREAD *)((char *)v103 + 152) )
      KiCheckForKernelApcDelivery();
    v61 = a1;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
      goto LABEL_67;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 16);
    sub_1402AFC00(v8 + 16);
    v153 = KeGetCurrentThread();
    v97 = (*((_WORD *)v153 + 243))++ == 0xFFFF;
    if ( v97 && *((struct _KTHREAD **)v153 + 19) != (struct _KTHREAD *)((char *)v153 + 152) )
      KiCheckForKernelApcDelivery();
  }
LABEL_76:
  if ( !v47 )
  {
    v154 = *(unsigned __int8 *)(v61 + 57);
    v9 = 2;
    v189 = 2;
    v6 = (unsigned __int8)sub_140365AF4(v8 + 16, v154);
    v180 = v6;
    goto LABEL_155;
  }
  v67 = 3LL;
  v68 = *(unsigned __int16 *)(v47 + 34) + (unsigned __int64)*(unsigned __int8 *)(v47 + 39);
  v201[1] = v47 + 48;
  v69 = *(unsigned __int8 *)(v8 + 1);
  v201[0] = 2 * v68;
  v192 = *((unsigned __int8 *)&qword_14001BBA0[32] + v69);
  v197 = (unsigned int)v47 >> 12;
  v70 = qword_140C5A5C8 ^ *(_DWORD *)(v47 + 40) ^ ((unsigned int)v47 >> 12);
  v71 = (unsigned __int16)v70;
  v72 = HIWORD(v70);
  v73 = HIWORD(v70);
  v74 = HIWORD(v70);
  if ( (unsigned int)v7 >= (unsigned __int16)v70 )
    v67 = 1LL;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    v74 = v72;
    v76 = 0;
    if ( (unsigned int)v7 >= (unsigned __int16)v70 )
      v74 = v72;
  }
  else
  {
    v75 = sub_14041A044(v72, v72);
    if ( (unsigned int)v7 >= v71 )
      v74 = v73;
    v76 = byte_140C1BAE0[v75];
  }
  v77 = sub_14034B970((unsigned int)v201, *(unsigned __int16 *)(v47 + 36), v76, v192, v67);
  v190 = v77;
  *(_WORD *)(v47 + 36) = v77;
  v78 = v74 + v71 * v77;
  if ( *(_BYTE *)(v47 + 45) <= 1u )
    goto LABEL_93;
  v79 = *(_BYTE *)(v47 + 44);
  v80 = -1;
  v81 = v47 + *(unsigned __int16 *)(v47 + 46);
  v82 = (unsigned int)v78 >> v79;
  v197 = (unsigned __int16)qword_140C5A5C8 ^ (unsigned __int16)v197 ^ *(unsigned __int16 *)(v47 + 40);
  v26 = 0LL;
  v199 = 0;
  v188[0] = -1;
  v83 = 2 * v82;
  v181 = -1;
  v84 = (((unsigned int)v78 + v197 - 1) >> v79) - (unsigned int)v82 + 1;
  v85 = (signed __int16 *)(2 * v82 + v81);
  _m_prefetchw(v85);
  v196 = 0LL;
  v86 = &v85[v84];
  v189 = 0;
  v25 = 0xFFFFFFFFLL;
  v184 = -1;
  if ( v85 >= v86 )
    goto LABEL_93;
  do
  {
    while ( 1 )
    {
      v87 = *v85;
      while ( v87 > 0 )
      {
        v88 = v87;
        v87 = _InterlockedCompareExchange16(v85, v87 + 1, v87);
        if ( v88 == v87 )
        {
          v89 = v189;
          v25 = v184;
          LODWORD(v90) = v196;
          goto LABEL_89;
        }
      }
      if ( (_DWORD)v26 )
        break;
      v192 = 1;
      v119 = sub_140365AF4(v47 + 24, *(unsigned __int8 *)(a1 + 57));
      v26 = 1LL;
      v80 = v119;
      v181 = v119;
    }
    v25 = v184;
    if ( v87 )
    {
      v89 = v189 + 1;
      v90 = v83 >> 1;
      ++v189;
      v196 = v83 >> 1;
      if ( v184 == -1 )
      {
        v25 = (unsigned int)v90;
        v184 = v83 >> 1;
      }
    }
    else
    {
      LODWORD(v90) = v196;
      v89 = --v189;
    }
    *v85 = v87 + 1;
LABEL_89:
    ++v85;
    v83 += 2LL;
  }
  while ( v85 < v86 );
  v91 = a1;
  if ( v89 && (dword_140C1BBE0 & 0x20) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
      (v89 << *(_BYTE *)(v47 + 44)) / 4096);
  if ( (_DWORD)v25 == -1 )
  {
    if ( !(_DWORD)v26 )
      goto LABEL_93;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 24));
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v138 = KeGetCurrentIrql(), v138 <= 0xFu) )
      {
        v126 = v181;
        if ( v181 <= 0xFu && v138 >= 2u )
        {
          v26 = (__int64)KeGetCurrentPrcb();
          v139 = ~(unsigned __int16)(-1LL << (v181 + 1));
          v25 = *(_QWORD *)(v26 + 35000);
          v97 = (v139 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v139;
          if ( v97 )
          {
            sub_140418E4C(v26);
            __writecr8(v181);
            goto LABEL_93;
          }
        }
      }
      else
      {
        v126 = v181;
      }
      __writecr8(v126);
      goto LABEL_93;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v47 + 24);
    v137 = KeGetCurrentThread();
    if ( (unsigned __int64)(v47 + 24 - qword_140C50630) < 0x8000000000LL )
      v25 = (unsigned int)sub_140287F30(*((_QWORD *)v137 + 23));
    else
      v25 = 0xFFFFFFFFLL;
    _disable();
    v26 = 0x7FFFFFFFFFFFFFFCLL;
    v145 = (v47 + 24) & 0x7FFFFFFFFFFFFFFCLL;
    v146 = (char *)v137 + 1696;
    for ( n = 0; n < 6; ++n )
    {
      if ( (*(_QWORD *)v146 & 0x7FFFFFFFFFFFFFFCLL) == v145
        && v146[18]
        && (*(_DWORD *)v146 & 1) == 0
        && *((_DWORD *)v146 + 2) == (_DWORD)v25 )
      {
        v146[18] = 0;
        if ( *(__int64 *)v146 < 0 )
        {
          *v146 |= 2u;
          _enable();
          sub_14034EE30(v146, v145, v25);
          _disable();
        }
        v25 = *((unsigned int *)v146 + 22);
        *((_DWORD *)v146 + 22) = 0;
        v146[17] = 0;
        *(_QWORD *)v146 = 0LL;
        v26 = (unsigned __int8)v146[16];
        *((_BYTE *)v137 + 792) |= 1 << v26;
        _enable();
        if ( (_DWORD)v25 )
          sub_14022B568((ULONG_PTR)v137, v47 + 24, v25);
        goto LABEL_275;
      }
      v146 += 96;
    }
    if ( (*((_DWORD *)v137 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v137, v47 + 24, (unsigned int)v25, 0LL);
    _enable();
LABEL_275:
    v148 = KeGetCurrentThread();
    v97 = (*((_WORD *)v148 + 243))++ == 0xFFFF;
    if ( v97 && *((struct _KTHREAD **)v148 + 19) != (struct _KTHREAD *)((char *)v148 + 152) )
      KiCheckForKernelApcDelivery();
LABEL_93:
    v42 = a5;
    v43 = v47 + v78;
    if ( (a5 & 2) != 0 )
      sub_1403E0320(v43, (v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)v7 < v71 )
      sub_14039FF7C(v47, v43, v71 - (unsigned int)v7, v26);
    v91 = a1;
LABEL_98:
    if ( !v43 )
      goto LABEL_422;
  }
  else
  {
    v131 = *(_BYTE *)(v47 + 44);
    v186 = (_DWORD)v25 << v131;
    v132 = v47 + (unsigned int)((_DWORD)v25 << v131);
    v199 = v90 - v25 + 1;
    v133 = v199 << v131;
    v134 = *(_QWORD *)a1;
    v188[0] = v80;
    if ( (int)sub_14042A5E0(v134, v132) >= 0 )
    {
      sub_1402314B0(a1, v47, v186, v133, &v199, 1, v188);
      goto LABEL_93;
    }
    sub_140367768(a1, v47, (unsigned int)v78, v197);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 24));
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v177 = KeGetCurrentIrql(), v177 <= 0xFu) )
      {
        v178 = v181;
        if ( v181 <= 0xFu && v177 >= 2u )
        {
          v26 = (__int64)KeGetCurrentPrcb();
          v179 = ~(unsigned __int16)(-1LL << (v181 + 1));
          v25 = *(_QWORD *)(v26 + 35000);
          v97 = (v179 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v179;
          if ( v97 )
            sub_140418E4C(v26);
        }
      }
      else
      {
        v178 = v181;
      }
      __writecr8(v178);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v47 + 24);
      v172 = KeGetCurrentThread();
      if ( (unsigned __int64)(v47 + 24 - qword_140C50630) >= 0x8000000000LL )
        v173 = -1;
      else
        v173 = sub_140287F30(*((_QWORD *)v172 + 23));
      _disable();
      v26 = 0x7FFFFFFFFFFFFFFCLL;
      v25 = (v47 + 24) & 0x7FFFFFFFFFFFFFFCLL;
      v174 = (char *)v172 + 1696;
      v175 = 0LL;
      do
      {
        if ( (*(_QWORD *)v174 & 0x7FFFFFFFFFFFFFFCLL) == v25
          && v174[18]
          && (*(_DWORD *)v174 & 1) == 0
          && *((_DWORD *)v174 + 2) == v173 )
        {
          v174[18] = 0;
          if ( *(__int64 *)v174 < 0 )
          {
            *v174 |= 2u;
            _enable();
            sub_14034EE30(v174, v175, v25);
            _disable();
          }
          v25 = *((unsigned int *)v174 + 22);
          *((_DWORD *)v174 + 22) = 0;
          v174[17] = 0;
          *(_QWORD *)v174 = 0LL;
          v26 = (unsigned __int8)v174[16];
          *((_BYTE *)v172 + 792) |= 1 << v26;
          _enable();
          if ( (_DWORD)v25 )
            sub_14022B568((ULONG_PTR)v172, v47 + 24, v25);
          goto LABEL_408;
        }
        v175 = (unsigned int)(v175 + 1);
        v174 += 96;
      }
      while ( (unsigned int)v175 < 6 );
      if ( (*((_DWORD *)v172 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v172, v47 + 24, v173, 0LL);
      _enable();
LABEL_408:
      v176 = KeGetCurrentThread();
      v97 = (*((_WORD *)v176 + 243))++ == 0xFFFF;
      if ( v97 && *((struct _KTHREAD **)v176 + 19) != (struct _KTHREAD *)((char *)v176 + 152) )
        KiCheckForKernelApcDelivery();
    }
    v43 = 0LL;
    v42 = a5;
    if ( v190 == -1 )
      goto LABEL_98;
    _InterlockedAnd64(
      (volatile signed __int64 *)(v47 + 8 * ((unsigned __int64)(unsigned int)(2 * v190) >> 6) + 48),
      ~(3LL << ((2 * v190) & 0x3F)));
LABEL_422:
    sub_140364860(v91, v47, 0LL, v42);
  }
LABEL_31:
  v45 = v191;
LABEL_32:
  if ( v193 )
    sub_14037039C(a1, a2, v25, v26);
  if ( v45 )
    sub_140365834(a1, a2, v45, v42);
  return v43;
}
