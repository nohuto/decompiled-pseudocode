/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x18003E250
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpLfhBucketAllocate @ 0x180122A14 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C490 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1800412F0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041414 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18005FFFC (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180064FBC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180067834 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180072F08 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlHeapZero @ 0x18008F720 (RtlHeapZero.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(
        unsigned __int64 a1,
        _RTL_SRWLOCK *a2,
        _RTL_SRWLOCK *a3,
        unsigned int a4,
        unsigned int a5)
{
  _RTL_SRWLOCK *v5; // r11
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r15
  _RTL_SRWLOCK *v9; // rbp
  int v10; // r12d
  int v11; // esi
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned __int16 v15; // r10
  unsigned int v16; // r8d
  unsigned __int16 v17; // dx
  int v18; // r13d
  unsigned __int16 v19; // cx
  unsigned int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // r8
  volatile signed __int64 *v23; // r12
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  unsigned int v28; // r15d
  struct _TEB *v29; // r13
  unsigned __int16 v30; // ax
  __int64 v31; // rcx
  unsigned __int16 v32; // di
  __int16 v33; // ax
  __int64 v34; // r8
  volatile signed __int64 *v35; // rdi
  volatile signed __int64 *v36; // r13
  volatile signed __int64 v37; // r9
  signed __int64 v38; // r11
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // ecx
  bool v42; // zf
  signed __int64 v43; // rax
  unsigned int v44; // r15d
  int v45; // eax
  int v46; // r13d
  unsigned int v47; // r13d
  char v48; // cl
  int v49; // r11d
  __int64 v50; // r12
  unsigned __int16 v51; // r9
  signed __int16 *v52; // r12
  int v53; // eax
  __int64 v54; // rax
  signed __int16 *v55; // r15
  signed __int16 v56; // ax
  signed __int16 v57; // tt
  __int64 v58; // r10
  int v59; // eax
  unsigned int v60; // r15d
  __int16 v61; // r15
  signed __int64 v62; // rbp
  signed __int64 v63; // rax
  unsigned __int64 v64; // rbp
  volatile signed __int64 *v65; // r14
  unsigned __int64 v66; // r13
  unsigned int v67; // r15d
  unsigned int v68; // ecx
  bool v69; // cf
  __int64 v70; // rcx
  struct _TEB *v71; // r15
  unsigned __int16 HeapData_high; // ax
  __int64 v73; // rcx
  unsigned __int16 v74; // r14
  __int16 v75; // ax
  __int64 v76; // rax
  volatile signed __int64 *v77; // rdi
  volatile signed __int64 *v78; // rcx
  signed __int64 v79; // r11
  signed __int64 v80; // r9
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  int v83; // ecx
  signed __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rdi
  unsigned int v87; // r14d
  __int64 v88; // r13
  unsigned __int64 v89; // rdi
  unsigned int v90; // r15d
  char v91; // cl
  int v92; // r11d
  unsigned __int64 v93; // r14
  unsigned __int16 v94; // r9
  signed __int16 *v95; // r14
  unsigned int v96; // eax
  __int64 v97; // rax
  signed __int16 *v98; // r13
  signed __int16 v99; // ax
  signed __int16 v100; // tt
  __int64 v101; // r10
  unsigned int v102; // r14d
  __int16 v103; // r15
  volatile signed __int64 *v105; // rax
  unsigned __int64 v106; // rdx
  volatile signed __int64 *v107; // rax
  unsigned int v108; // eax
  unsigned __int64 v109; // rdx
  unsigned int v110; // eax
  __int64 v111; // rsi
  _QWORD *v112; // r8
  __int64 *v113; // rcx
  __int64 v114; // r10
  _QWORD *v115; // rax
  __int64 *v116; // rax
  __int16 v117; // ax
  unsigned __int64 *v118; // r14
  int v119; // ecx
  __int64 *v120; // rcx
  _QWORD *v121; // rdx
  __int64 *v122; // rax
  char v123; // cl
  int v124; // r12d
  __int16 RandomValue32; // ax
  char v126; // cl
  int v127; // r14d
  unsigned __int64 v128; // rax
  volatile signed __int64 *v129; // rax
  bool v130; // cc
  volatile signed __int64 *v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // r9
  __int64 v134; // rax
  _RTL_SRWLOCK **v135; // rax
  _RTL_SRWLOCK *v136; // rax
  unsigned int v137; // [rsp+40h] [rbp-98h]
  unsigned int v138; // [rsp+40h] [rbp-98h]
  unsigned int v139; // [rsp+40h] [rbp-98h]
  unsigned int v140; // [rsp+40h] [rbp-98h]
  unsigned int v141; // [rsp+44h] [rbp-94h]
  unsigned int v142; // [rsp+44h] [rbp-94h]
  int v143; // [rsp+44h] [rbp-94h]
  int v144; // [rsp+44h] [rbp-94h]
  char v145; // [rsp+48h] [rbp-90h] BYREF
  char v146[3]; // [rsp+49h] [rbp-8Fh] BYREF
  unsigned int v147; // [rsp+4Ch] [rbp-8Ch]
  PRTL_SRWLOCK SRWLock; // [rsp+50h] [rbp-88h]
  unsigned int v149; // [rsp+58h] [rbp-80h]
  unsigned int v150; // [rsp+5Ch] [rbp-7Ch]
  __int64 v151; // [rsp+60h] [rbp-78h]
  unsigned int v152; // [rsp+68h] [rbp-70h]
  __int64 v153; // [rsp+70h] [rbp-68h]
  __int64 v154; // [rsp+78h] [rbp-60h]
  unsigned __int64 v155; // [rsp+80h] [rbp-58h]
  __int64 v156; // [rsp+88h] [rbp-50h]
  int v157; // [rsp+90h] [rbp-48h] BYREF
  _DWORD v158[17]; // [rsp+94h] [rbp-44h] BYREF

  v5 = a3 + 2;
  v6 = 0LL;
  v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v8 = (__int64)a3;
  v9 = a2;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v156 = v12;
      SRWLock = v5;
      if ( !v7 )
      {
        if ( !v10 )
        {
          v10 = 1;
          RtlAcquireSRWLockShared(v5);
          goto LABEL_5;
        }
        goto LABEL_6;
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(v8 + 56));
        v62 = *(_QWORD *)(v8 + 56);
        if ( (v62 & 0xFFF) != 0 )
        {
          while ( 1 )
          {
            v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 56), v62 - 1, v62);
            if ( v62 == v63 )
              break;
            v11 = 1;
            v62 = v63;
            if ( (v63 & 0xFFF) == 0 )
              goto LABEL_115;
          }
          v64 = v62 & 0xFFFFFFFFFFFFF000uLL;
          if ( v64 )
          {
            if ( v10 )
              RtlReleaseSRWLockExclusive(SRWLock);
            v65 = (volatile signed __int64 *)(v64 + 48);
            v66 = 2 * (*(unsigned __int16 *)(v64 + 34) + (unsigned __int64)*(unsigned __int8 *)(v64 + 39));
            v67 = RtlpSearchWidth[*(unsigned __int8 *)(v8 + 1)];
            v154 = v64 + 40;
            v149 = (unsigned int)v64 >> 12;
            v68 = (unsigned __int16)(*(_WORD *)(v64 + 40) ^ qword_180187F48 ^ ((unsigned int)v64 >> 12));
            v147 = *(_DWORD *)(v64 + 40) ^ qword_180187F48 ^ ((unsigned int)v64 >> 12);
            v69 = a4 < v68;
            v140 = v68;
            v70 = 3LL;
            if ( !v69 )
              v70 = 1LL;
            v152 = v67;
            v153 = v70;
            if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
            {
              LODWORD(v34) = 0;
            }
            else
            {
              v71 = NtCurrentTeb();
              HeapData_high = HIWORD(v71->HeapData);
              v73 = HeapData_high;
              v74 = (unsigned __int8)HeapData_high;
              if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
              {
                LOWORD(v73) = HIBYTE(HeapData_high);
                RandomValue32 = RtlpHeapGenerateRandomValue32(v73, 1LL, a3);
                v75 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
              }
              else
              {
                v75 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
              }
              HIWORD(v71->HeapData) = v75;
              v67 = v152;
              v76 = v74;
              v65 = (volatile signed __int64 *)(v64 + 48);
              LODWORD(v34) = RtlpLowFragHeapRandomData[v76];
            }
            v77 = &v65[(2 * (unsigned __int64)*(unsigned __int16 *)(v64 + 36)) >> 6];
            v78 = &v65[(v66 - 1) >> 6];
            v151 = (__int64)v78;
LABEL_68:
            if ( v66 < 0x40 )
            {
              v79 = *v77;
              v110 = v66;
              if ( (unsigned int)v66 >= v67 )
                v110 = v67;
              v67 = v110;
            }
            else
            {
              while ( 1 )
              {
                v79 = *v77;
                if ( (*v77 & 0x5555555555555555LL) != 0x5555555555555555LL )
                  break;
                v107 = v77++;
                if ( v107 == v78 )
                  v77 = v65;
              }
              if ( v77 == v78 && (v66 & 0x3F) != 0 && (v66 & 0x3F) < v67 )
                v67 = v66 & 0x3F;
            }
            v34 = ((v67 * (unsigned int)v34) >> 7) & 0x1FFFFFE;
            while ( 1 )
            {
              v80 = ~v79;
              if ( v67 < 0x40 )
              {
                _BitScanForward64(&v109, v80 & 0x5555555555555555LL);
                v34 = (unsigned int)(v109 + v34);
                v81 = (((1LL << v67) - 1) << v109) & 0x5555555555555555LL;
              }
              else
              {
                v81 = 0x5555555555555555LL;
              }
              v37 = __ROR8__(v81 & v80, v34);
              _BitScanForward64(&v82, v37);
              v83 = ((_BYTE)v34 + (_BYTE)v82) & 0x3F;
              v158[2] = v83;
              v84 = _InterlockedCompareExchange64(v77, v79 | (v153 << v83), v79);
              v42 = v79 == v84;
              v79 = v84;
              if ( v42 )
                break;
              if ( (v84 & 0x5555555555555555LL) == 0x5555555555555555LL )
              {
                v78 = (volatile signed __int64 *)v151;
                v129 = v77 + 1;
                v130 = (unsigned __int64)(v77 + 1) <= v151;
                v77 = v65;
                if ( v130 )
                  v77 = v129;
                goto LABEL_68;
              }
            }
            v85 = HIWORD(v147);
            v86 = (char *)v77 - (char *)v65;
            v87 = v140;
            v88 = v156;
            v89 = (v83 + ((unsigned int)(v86 >> 3) << 6)) >> 1;
            v155 = v89;
            *(_WORD *)(v64 + 36) = v89;
            v90 = v85 + v89 * v140;
            if ( *(_BYTE *)(v64 + 45) <= 1u )
              goto LABEL_88;
            v91 = *(_BYTE *)(v64 + 44);
            v92 = 0;
            v93 = v64 + *(unsigned __int16 *)(v64 + 46);
            v94 = qword_180187F48 ^ *(_WORD *)v154 ^ v149;
            v34 = v90 >> v91;
            v145 = -1;
            v151 = 2 * v34;
            v95 = (signed __int16 *)(2 * v34 + v93);
            _m_prefetchw(v95);
            v96 = v94;
            v37 = 0xFFFFFFFFLL;
            v150 = v96;
            v142 = -1;
            LODWORD(v153) = 0;
            v97 = ((v90 + v96 - 1) >> v91) - (unsigned int)v34 + 1;
            v147 = 0;
            if ( v95 >= &v95[v97] )
              goto LABEL_87;
            v98 = &v95[v97];
            do
            {
              while ( 1 )
              {
                v99 = *v95;
                while ( v99 > 0 )
                {
                  v100 = v99;
                  v99 = _InterlockedCompareExchange16(v95, v99 + 1, v99);
                  if ( v100 == v99 )
                  {
                    v101 = v151;
                    v34 = v147;
                    v37 = v142;
                    goto LABEL_82;
                  }
                }
                if ( v92 )
                  break;
                v152 = 1;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v64 + 24));
                v92 = 1;
              }
              v101 = v151;
              v37 = v142;
              if ( v99 )
              {
                v34 = ++v147;
                v153 = v151 >> 1;
                if ( v142 == -1 )
                {
                  v37 = (unsigned int)(v151 >> 1);
                  v142 = v151 >> 1;
                }
              }
              else
              {
                v34 = --v147;
              }
              *v95 = v99 + 1;
LABEL_82:
              ++v95;
              v151 = v101 + 2;
            }
            while ( v95 < v98 );
            v88 = v156;
            if ( (_DWORD)v34 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
            {
              v34 = (unsigned int)((_DWORD)v34 << *(_BYTE *)(v64 + 44));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v34 / 4096);
            }
            if ( (_DWORD)v37 == -1 )
            {
              if ( v92 )
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v64 + 24));
LABEL_87:
              v87 = v140;
LABEL_88:
              v6 = v64 + v90;
              if ( (a5 & 2) != 0 )
                RtlHeapZero(v64 + v90, (a4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
              if ( a4 < v87 )
              {
                v102 = v87 - a4;
                if ( v102 == 1 )
                  v103 = 0x8000;
                else
                  v103 = v102 & 0x3FFF;
                *(_WORD *)(((unsigned __int16)qword_180187F48 ^ *(unsigned __int16 *)v154 ^ (unsigned __int64)(unsigned __int16)v149)
                         + v6
                         - 2) = v103;
              }
              if ( v6 )
              {
LABEL_95:
                v12 = v88;
                goto LABEL_96;
              }
            }
            else
            {
              v126 = *(_BYTE *)(v64 + 44);
              v145 = -1;
              v157 = v153 - v37 + 1;
              v127 = v157 << v126;
              v144 = (_DWORD)v37 << v126;
              if ( ((int (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
                     *(_QWORD *)a1,
                     v64 + (unsigned int)((_DWORD)v37 << v126),
                     (unsigned int)(v157 << v126)) >= 0 )
              {
                RtlpHpLfhSubsegmentIncBlockCounts(a1, v64, v144, v127, (__int64)&v157, 1, (__int64)&v145);
                goto LABEL_87;
              }
              RtlpHpLfhSubsegmentDecBlockCounts(a1, v64, v90, v150);
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v64 + 24));
              _InterlockedAnd64(
                (volatile signed __int64 *)(v64 + 8 * ((unsigned __int64)(unsigned int)(2 * v155) >> 6) + 48),
                ~(3LL << ((2 * v155) & 0x3F)));
            }
            RtlpHpLfhSubsegmentFreeBlock(a1, v64, 0LL, a5);
            goto LABEL_95;
          }
        }
LABEL_115:
        if ( v10 == 2 )
          break;
        v10 = 2;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
      }
      v9 = a2;
LABEL_5:
      v5 = SRWLock;
LABEL_6:
      if ( *(_QWORD *)(v8 + 8) )
        break;
      if ( v10 == 2 )
        RtlReleaseSRWLockExclusive(v5);
      else
        RtlReleaseSRWLockShared(v5);
      v118 = (unsigned __int64 *)&v9[3];
      if ( (unsigned __int64 *)*v118 == v118
        || ((RtlAcquireSRWLockExclusive(v9 + 2), (unsigned __int64 *)*v118 == v118)
          ? (v12 = 0LL)
          : (v12 = RtlpHpLfhOwnerMoveSubsegment(a2, *v118, 2LL)),
            RtlReleaseSRWLockExclusive(v9 + 2),
            v9 = a2,
            !v12) )
      {
        v12 = RtlpHpLfhSubsegmentCreate(a1, v9, a5);
        if ( !v12 )
          goto LABEL_97;
      }
      v10 = 2;
      RtlAcquireSRWLockExclusive(SRWLock);
      if ( *(_WORD *)(v12 + 32) == *(_WORD *)(v12 + 34) )
      {
        *(_QWORD *)(v12 + 16) = v8;
      }
      else
      {
        v128 = _InterlockedExchange64((volatile __int64 *)(v12 + 16), v8);
        if ( (v128 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 32), v128 >> 1);
      }
      if ( *(_QWORD *)(v8 + 8) && *(_WORD *)(v12 + 32) == *(_WORD *)(v12 + 34) )
      {
LABEL_200:
        *(_QWORD *)(v12 + 16) = 0LL;
        goto LABEL_172;
      }
      v119 = *(unsigned __int8 *)(v12 + 38);
      if ( v119 == 2 )
      {
        v120 = (__int64 *)(v8 + 24);
        v121 = (_QWORD *)(v8 + 8);
      }
      else
      {
        if ( *(_BYTE *)(v12 + 38) )
        {
          if ( v119 != 1 )
            goto LABEL_172;
          v133 = 0LL;
          v134 = 40LL;
        }
        else
        {
          v133 = (_QWORD *)(v8 + 8);
          v134 = 24LL;
        }
        v120 = (__int64 *)(v8 + 24);
        v121 = (_QWORD *)(v8 + 8);
        if ( v8 + v134 )
        {
          a3 = *(_RTL_SRWLOCK **)v12;
          if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
            goto LABEL_239;
          v135 = *(_RTL_SRWLOCK ***)(v12 + 8);
          if ( *v135 != (_RTL_SRWLOCK *)v12 )
            goto LABEL_239;
          *v135 = a3;
          a3[1].Value = (unsigned __int64)v135;
          if ( v133 )
            --*v133;
        }
      }
      *(_BYTE *)(v12 + 38) = 0;
      if ( v120 )
      {
        v122 = (__int64 *)v120[1];
        if ( (__int64 *)*v122 != v120 )
          goto LABEL_239;
        *(_QWORD *)v12 = v120;
        *(_QWORD *)(v12 + 8) = v122;
        *v122 = v12;
        v120[1] = v12;
        if ( v121 )
          ++*v121;
        v12 = 0LL;
      }
      if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
      {
        v12 = *v120;
        if ( *(__int64 **)(*v120 + 8) != v120 )
          goto LABEL_239;
        v136 = *(_RTL_SRWLOCK **)v12;
        if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
          goto LABEL_239;
        *v120 = (__int64)v136;
        v136[1].Value = (unsigned __int64)v120;
        --*v121;
        *(_BYTE *)(v12 + 38) = 2;
      }
      if ( v12 && *(_BYTE *)(v12 + 38) == 2 )
        goto LABEL_200;
LABEL_172:
      v5 = SRWLock;
    }
    v13 = *(_QWORD *)(v8 + 24);
    v14 = v8 + 24;
    v15 = 4096;
    if ( !v7 )
      v15 = 1;
    if ( v13 != v14 )
    {
      while ( 2 )
      {
        LOWORD(v16) = *(_WORD *)(v13 + 32);
        v11 = 0;
        while ( 1 )
        {
          v17 = v15;
          v18 = v11;
          if ( v15 >= (unsigned __int16)v16 )
            v17 = v16;
          if ( (unsigned __int16)v16 <= v17 && v10 == 1 )
            break;
          v19 = v16 - v17;
          v16 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 32), v16 - v17, v16);
          v20 = v19 + v17;
          if ( v16 == v20 )
          {
            if ( *(_WORD *)(v13 + 32) )
              goto LABEL_16;
            v111 = v13;
            switch ( *(_BYTE *)(v13 + 38) )
            {
              case 0:
                v112 = (_QWORD *)(v8 + 8);
                v113 = (__int64 *)(v8 + 40);
LABEL_131:
                v114 = *(_QWORD *)v13;
                if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
                {
                  v115 = *(_QWORD **)(v13 + 8);
                  if ( *v115 == v13 )
                  {
                    *v115 = v114;
                    *(_QWORD *)(v114 + 8) = v115;
                    if ( v112 )
                      --*v112;
                    goto LABEL_135;
                  }
                }
LABEL_239:
                __fastfail(3u);
              case 1:
                v113 = (__int64 *)(v8 + 40);
                v112 = 0LL;
                if ( v8 != -40 )
                  goto LABEL_131;
LABEL_135:
                *(_BYTE *)(v13 + 38) = 1;
                if ( v113 )
                {
                  v116 = (__int64 *)v113[1];
                  if ( (__int64 *)*v116 != v113 )
                    goto LABEL_239;
                  *(_QWORD *)v13 = v113;
                  v111 = 0LL;
                  *(_QWORD *)(v13 + 8) = v116;
                  *v116 = v13;
                  v113[1] = v13;
                }
                if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
                {
                  v111 = *v113;
                  if ( *(__int64 **)(*v113 + 8) != v113 )
                    goto LABEL_239;
                  v132 = *(_QWORD *)v111;
                  if ( *(_QWORD *)(*(_QWORD *)v111 + 8LL) != v111 )
                    goto LABEL_239;
                  *v113 = v132;
                  *(_QWORD *)(v132 + 8) = v113;
                  --MEMORY[0];
                  *(_BYTE *)(v111 + 38) = 2;
                }
                if ( v111 && *(_BYTE *)(v111 + 38) == 2 )
                  *(_QWORD *)(v111 + 16) = 0LL;
                break;
              case 2:
                v113 = (__int64 *)(v8 + 40);
                goto LABEL_135;
            }
LABEL_16:
            v11 = v18;
            v21 = v13;
            if ( v13 && v17 > 1u )
              *(_QWORD *)(v8 + 56) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v17 - 1)) & 0xFFF;
            goto LABEL_19;
          }
          if ( v16 < v20 )
            v11 = 1;
        }
        v13 = *(_QWORD *)v13;
        if ( v13 != v14 )
          continue;
        break;
      }
    }
    v21 = 0LL;
LABEL_19:
    if ( v10 == 2 )
      RtlReleaseSRWLockExclusive(v5);
    else
      RtlReleaseSRWLockShared(v5);
    if ( v21 )
      break;
    v10 = 2;
    RtlAcquireSRWLockExclusive(SRWLock);
    v5 = SRWLock;
    v9 = a2;
  }
  v23 = (volatile signed __int64 *)(v21 + 48);
  v24 = *(unsigned __int16 *)(v21 + 34) + (unsigned __int64)*(unsigned __int8 *)(v21 + 39);
  v153 = v21 + 40;
  v25 = *(unsigned __int8 *)(v8 + 1);
  v155 = 2 * v24;
  v26 = RtlpSearchWidth[v25];
  v152 = (unsigned int)v21 >> 12;
  v27 = 3LL;
  v28 = (unsigned __int16)(qword_180187F48 ^ *(_WORD *)(v21 + 40) ^ ((unsigned int)v21 >> 12));
  v150 = qword_180187F48 ^ *(_DWORD *)(v21 + 40) ^ ((unsigned int)v21 >> 12);
  v137 = v26;
  if ( a4 >= v28 )
    v27 = 1LL;
  v149 = v28;
  v154 = v27;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    LODWORD(v34) = 0;
  }
  else
  {
    v29 = NtCurrentTeb();
    v30 = HIWORD(v29->HeapData);
    v31 = v30;
    v32 = (unsigned __int8)v30;
    if ( (unsigned __int8)v30 == HIBYTE(v30) )
    {
      LOWORD(v31) = HIBYTE(v30);
      v117 = RtlpHeapGenerateRandomValue32(v31, v27, v22);
      v33 = (v117 << 8) | (unsigned __int8)(v117 + 1);
    }
    else
    {
      v33 = (unsigned __int8)(v30 ^ (v30 + 1)) ^ v30;
    }
    HIWORD(v29->HeapData) = v33;
    v23 = (volatile signed __int64 *)(v21 + 48);
    LODWORD(v34) = RtlpLowFragHeapRandomData[v32];
    v26 = v137;
  }
  v35 = &v23[(2 * (unsigned __int64)*(unsigned __int16 *)(v21 + 36)) >> 6];
  v36 = &v23[(v155 - 1) >> 6];
LABEL_29:
  if ( v155 < 0x40 )
  {
    v37 = *v35;
    v108 = v155;
    if ( (unsigned int)v155 >= v26 )
      v108 = v26;
    v26 = v108;
  }
  else
  {
    while ( 1 )
    {
      v37 = *v35;
      if ( (*v35 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v105 = v35++;
      if ( v105 == v36 )
        v35 = v23;
    }
    if ( v35 == v36 && (v155 & 0x3F) != 0 && (v155 & 0x3F) < v26 )
      v26 = v155 & 0x3F;
  }
  v138 = v26;
  v34 = ((v26 * (unsigned int)v34) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v38 = ~v37;
    if ( v26 < 0x40 )
    {
      _BitScanForward64(&v106, v38 & 0x5555555555555555LL);
      v34 = (unsigned int)(v106 + v34);
      v39 = (((1LL << v26) - 1) << v106) & 0x5555555555555555LL;
    }
    else
    {
      v39 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v40, __ROR8__(v38 & v39, v34));
    v41 = ((_BYTE)v34 + (_BYTE)v40) & 0x3F;
    v158[1] = v41;
    v43 = _InterlockedCompareExchange64(v35, v37 | (v154 << v41), v37);
    v42 = v37 == v43;
    v37 = v43;
    if ( v42 )
      break;
    v26 = v138;
    if ( (v43 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v131 = v35 + 1;
      v35 = v23;
      if ( v131 <= v36 )
        v35 = v131;
      goto LABEL_29;
    }
  }
  v44 = v149;
  v45 = HIWORD(v150);
  v156 = (v41 + ((unsigned int)(v35 - v23) << 6)) >> 1;
  v46 = v149 * v156;
  *(_WORD *)(v21 + 36) = v156;
  v47 = v45 + v46;
  if ( *(_BYTE *)(v21 + 45) <= 1u )
    goto LABEL_48;
  v48 = *(_BYTE *)(v21 + 44);
  v49 = 0;
  v50 = v21 + *(unsigned __int16 *)(v21 + 46);
  v51 = qword_180187F48 ^ *(_WORD *)v153 ^ v152;
  v34 = v47 >> v48;
  v146[0] = -1;
  v151 = 2 * v34;
  v52 = (signed __int16 *)(2 * v34 + v50);
  _m_prefetchw(v52);
  v53 = v51;
  v37 = 0xFFFFFFFFLL;
  LODWORD(SRWLock) = v53;
  v141 = -1;
  LODWORD(v154) = 0;
  v54 = ((v47 + v53 - 1) >> v48) - (unsigned int)v34 + 1;
  v139 = 0;
  if ( v52 >= &v52[v54] )
  {
LABEL_48:
    v6 = v21 + v47;
    if ( (a5 & 2) != 0 )
      RtlHeapZero(v21 + v47, (a4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a4 < v44 )
    {
      v60 = v44 - a4;
      if ( v60 == 1 )
        v61 = 0x8000;
      else
        v61 = v60 & 0x3FFF;
      *(_WORD *)(((unsigned __int16)v152 ^ (unsigned __int16)qword_180187F48 ^ (unsigned __int64)*(unsigned __int16 *)v153)
               + v6
               - 2) = v61;
    }
    if ( !v6 )
      goto LABEL_238;
  }
  else
  {
    v55 = &v52[v54];
    do
    {
      while ( 1 )
      {
        v56 = *v52;
        while ( v56 > 0 )
        {
          v57 = v56;
          v56 = _InterlockedCompareExchange16(v52, v56 + 1, v56);
          if ( v57 == v56 )
          {
            v58 = v151;
            v34 = v139;
            v37 = v141;
            goto LABEL_43;
          }
        }
        if ( v49 )
          break;
        v150 = 1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v21 + 24));
        v49 = 1;
      }
      v58 = v151;
      v37 = v141;
      if ( v56 )
      {
        v34 = ++v139;
        v154 = v151 >> 1;
        if ( v141 == -1 )
        {
          v37 = (unsigned int)(v151 >> 1);
          v141 = v151 >> 1;
        }
      }
      else
      {
        v34 = --v139;
      }
      *v52 = v56 + 1;
LABEL_43:
      ++v52;
      v151 = v58 + 2;
      v59 = v11;
      v147 = v11;
    }
    while ( v52 < v55 );
    v44 = v149;
    if ( (_DWORD)v34 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    {
      v34 = (unsigned int)((_DWORD)v34 << *(_BYTE *)(v21 + 44));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v34 / 4096);
      v59 = v11;
    }
    if ( (_DWORD)v37 == -1 )
    {
      if ( v49 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v21 + 24));
      goto LABEL_48;
    }
    v123 = *(_BYTE *)(v21 + 44);
    v11 = v59;
    v146[0] = -1;
    v158[0] = v154 - v37 + 1;
    v124 = v158[0] << v123;
    v143 = (_DWORD)v37 << v123;
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v21 + (unsigned int)((_DWORD)v37 << v123),
           (unsigned int)(v158[0] << v123)) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v21, v143, v124, (__int64)v158, 1, (__int64)v146);
      v11 = v147;
      goto LABEL_48;
    }
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v21, v47, (unsigned int)SRWLock);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v21 + 24));
    _InterlockedAnd64(
      (volatile signed __int64 *)(v21 + 8 * ((unsigned __int64)(unsigned int)(2 * v156) >> 6) + 48),
      ~(3LL << ((2 * v156) & 0x3F)));
LABEL_238:
    RtlpHpLfhSubsegmentFreeBlock(a1, v21, 0LL, a5);
  }
LABEL_96:
  v9 = a2;
LABEL_97:
  if ( v11 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, v9, v34, v37);
  if ( v12 )
    RtlpHpLfhBucketAddSubsegment(a1, v9, v12, a5);
  return v6;
}
