/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x18002A1C0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18002E5E4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180028470 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18002D268 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18005897C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18005F81C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180074EB0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180079258 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007D2CC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlHeapZero @ 0x180093F90 (RtlHeapZero.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(
        unsigned __int64 a1,
        _RTL_SRWLOCK *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  unsigned int v6; // r13d
  __int64 v7; // rsi
  int v8; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r11
  unsigned __int16 v12; // r9
  unsigned int v13; // r8d
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  unsigned int v16; // eax
  _RTL_SRWLOCK *v17; // rcx
  __int64 v18; // r8
  volatile signed __int64 *v19; // r14
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  struct _TEB *v25; // r14
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  unsigned __int16 v28; // si
  __int16 v29; // ax
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  volatile signed __int64 *v32; // rsi
  volatile signed __int64 *v33; // r12
  signed __int64 v34; // r11
  signed __int64 v35; // r10
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // ecx
  bool v39; // zf
  signed __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // esi
  unsigned int v43; // r15d
  char v44; // cl
  int v45; // r13d
  __int64 v46; // r12
  signed __int16 *v47; // r14
  int v48; // edx
  __int64 v49; // rax
  signed __int16 *v50; // rbx
  signed __int16 v51; // ax
  signed __int16 v52; // tt
  __int64 v53; // r11
  unsigned int v54; // ebx
  __int16 v55; // bx
  __int64 v56; // rdi
  volatile signed __int64 *v58; // rax
  signed __int64 v59; // rdi
  signed __int64 v60; // rax
  unsigned __int64 v61; // rdi
  volatile signed __int64 *v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned int v65; // ecx
  unsigned int v66; // ebx
  struct _TEB *v67; // rax
  unsigned __int16 HeapData_high; // ax
  __int64 v69; // rcx
  unsigned __int16 v70; // r14
  __int16 v71; // ax
  volatile signed __int64 *v72; // r14
  volatile signed __int64 *v73; // r13
  signed __int64 v74; // r11
  signed __int64 v75; // r10
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  int v78; // ecx
  signed __int64 v79; // rax
  int v80; // eax
  __int64 v81; // r14
  unsigned int v82; // r13d
  char v83; // cl
  int v84; // r10d
  unsigned __int64 v85; // r12
  signed __int16 *v86; // r12
  signed __int16 *v87; // rbx
  signed __int16 v88; // ax
  signed __int16 v89; // tt
  __int64 v90; // r9
  int v91; // r11d
  __int64 v92; // rbp
  unsigned int v93; // ebx
  __int16 v94; // bx
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  char v97; // cl
  unsigned int v98; // eax
  volatile signed __int64 *v99; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  char v102; // cl
  unsigned int v103; // eax
  __int64 v104; // r11
  _QWORD *v105; // r8
  __int64 *v106; // rdx
  __int64 v107; // r9
  _QWORD *v108; // rax
  __int64 *v109; // rax
  unsigned __int64 v110; // r14
  char v111; // cl
  int (__fastcall *v112)(_QWORD, __int64, _QWORD); // rax
  unsigned int v113; // r9d
  char v114; // cl
  __int64 v115; // r8
  __int64 v116; // r11
  signed __int16 *v117; // r10
  unsigned int v118; // eax
  signed __int16 v119; // dx
  __int16 v120; // ax
  _RTL_SRWLOCK *v121; // rcx
  unsigned __int64 *v122; // rdi
  int v123; // ecx
  __int64 *v124; // rcx
  _QWORD *v125; // rdx
  __int64 *v126; // rax
  __int16 RandomValue32; // ax
  char v128; // cl
  int v129; // r12d
  _RTL_SRWLOCK *v130; // r15
  unsigned __int64 v131; // rax
  volatile signed __int64 *v132; // rax
  volatile signed __int64 *v133; // rax
  __int64 v134; // rax
  _QWORD *v135; // r9
  __int64 v136; // rax
  __int64 *v137; // rax
  __int64 v138; // rax
  signed __int16 v139; // ax
  unsigned int v140; // [rsp+40h] [rbp-A8h]
  unsigned int v141; // [rsp+40h] [rbp-A8h]
  unsigned int v142; // [rsp+40h] [rbp-A8h]
  int v143; // [rsp+40h] [rbp-A8h]
  unsigned int v144; // [rsp+40h] [rbp-A8h]
  int v145; // [rsp+40h] [rbp-A8h]
  unsigned int v146; // [rsp+44h] [rbp-A4h]
  unsigned int v147; // [rsp+44h] [rbp-A4h]
  unsigned int v148; // [rsp+44h] [rbp-A4h]
  unsigned int v149; // [rsp+44h] [rbp-A4h]
  char v150[8]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v151; // [rsp+50h] [rbp-98h]
  unsigned int v152; // [rsp+58h] [rbp-90h]
  __int64 v153; // [rsp+60h] [rbp-88h]
  int v154; // [rsp+68h] [rbp-80h]
  __int64 v155; // [rsp+70h] [rbp-78h]
  unsigned int v156; // [rsp+78h] [rbp-70h]
  __int64 v157; // [rsp+80h] [rbp-68h]
  __int64 p_HeapData; // [rsp+88h] [rbp-60h]
  int v159; // [rsp+90h] [rbp-58h] BYREF
  __int64 v160; // [rsp+98h] [rbp-50h]
  int v161; // [rsp+A0h] [rbp-48h]
  int v162; // [rsp+A4h] [rbp-44h]

  v5 = 0LL;
  v6 = a5;
  v7 = a3;
  v8 = 0;
  v9 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v154 = 0;
  v157 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(v7 + 56));
          v59 = *(_QWORD *)(v7 + 56);
          if ( (v59 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 56), v59 - 1, v59);
              if ( v59 == v60 )
                break;
              v154 = 1;
              v59 = v60;
              if ( (v60 & 0xFFF) == 0 )
                goto LABEL_123;
            }
            v61 = v59 & 0xFFFFFFFFFFFFF000uLL;
            if ( v61 )
              break;
          }
LABEL_123:
          if ( v8 == 2 )
            goto LABEL_5;
          v8 = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + 16));
        }
        if ( v8 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v7 + 16));
        v62 = (volatile signed __int64 *)(v61 + 48);
        v63 = 3LL;
        v64 = *(unsigned __int8 *)(v7 + 1);
        v153 = 2 * (*(unsigned __int16 *)(v61 + 34) + (unsigned __int64)*(unsigned __int8 *)(v61 + 39));
        v65 = RtlpSearchWidth[v64];
        v152 = (unsigned int)v61 >> 12;
        v66 = *(_DWORD *)(v61 + 40) ^ qword_18017AC08 ^ ((unsigned int)v61 >> 12);
        if ( a4 >= (unsigned __int16)(*(_WORD *)(v61 + 40) ^ qword_18017AC08 ^ ((unsigned int)v61 >> 12)) )
          v63 = 1LL;
        v141 = v65;
        LODWORD(v151) = *(_DWORD *)(v61 + 40) ^ qword_18017AC08 ^ ((unsigned int)v61 >> 12);
        v39 = (*(_BYTE *)(a1 + 62) & 2) == 0;
        v155 = v63;
        if ( v39 )
        {
          v67 = NtCurrentTeb();
          p_HeapData = (__int64)&v67->HeapData;
          HeapData_high = HIWORD(v67->HeapData);
          v69 = HeapData_high;
          v70 = (unsigned __int8)HeapData_high;
          if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
          {
            LOWORD(v69) = HIBYTE(HeapData_high);
            RandomValue32 = RtlpHeapGenerateRandomValue32(v69, v63, a3);
            v63 = v155;
            v71 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
          }
          else
          {
            v71 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
          }
          v62 = (volatile signed __int64 *)(v61 + 48);
          *(_WORD *)(p_HeapData + 2) = v71;
          v65 = v141;
          LODWORD(v30) = RtlpLowFragHeapRandomData[v70];
        }
        else
        {
          LODWORD(v30) = 0;
        }
        v31 = 0x5555555555555555LL;
        v72 = &v62[(2 * (unsigned __int64)*(unsigned __int16 *)(v61 + 36)) >> 6];
        v73 = &v62[(unsigned __int64)(v153 - 1) >> 6];
LABEL_76:
        if ( (unsigned __int64)v153 < 0x40 )
        {
          v74 = *v72;
          v103 = v153;
          if ( (unsigned int)v153 >= v65 )
            v103 = v65;
          v65 = v103;
        }
        else
        {
          while ( 1 )
          {
            v74 = *v72;
            if ( (*v72 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            v99 = v72++;
            if ( v99 == v73 )
              v72 = v62;
          }
          if ( v72 == v73 && (v153 & 0x3F) != 0 && ((unsigned __int8)v153 & 0x3Fu) < (unsigned __int64)v65 )
            v65 = v153 & 0x3F;
        }
        v142 = v65;
        v30 = ((v65 * (unsigned int)v30) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v75 = ~v74;
          if ( v65 < 0x40 )
          {
            _BitScanForward64(&v100, v75 & 0x5555555555555555LL);
            v101 = 1LL << v65;
            v30 = (unsigned int)(v100 + v30);
            v102 = v100;
            v63 = v155;
            v76 = ((v101 - 1) << v102) & 0x5555555555555555LL;
          }
          else
          {
            v76 = 0x5555555555555555LL;
          }
          _BitScanForward64(&v77, __ROR8__(v76 & v75, v30));
          v78 = ((_BYTE)v30 + (_BYTE)v77) & 0x3F;
          v161 = v78;
          v79 = _InterlockedCompareExchange64(v72, v74 | (v63 << v78), v74);
          v39 = v74 == v79;
          v74 = v79;
          if ( v39 )
            break;
          v65 = v142;
          v63 = v155;
          if ( (v79 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            v132 = v72 + 1;
            v72 = v62;
            if ( v132 <= v73 )
              v72 = v132;
            goto LABEL_76;
          }
        }
        v80 = WORD1(v151);
        v66 = (unsigned __int16)v66;
        v81 = (v78 + ((unsigned int)(v72 - v62) << 6)) >> 1;
        v160 = v81;
        *(_WORD *)(v61 + 36) = v81;
        v156 = (unsigned __int16)v66;
        v82 = v80 + v81 * (unsigned __int16)v66;
        if ( *(_BYTE *)(v61 + 45) > 1u )
        {
          v83 = *(_BYTE *)(v61 + 44);
          v84 = 0;
          v30 = v82 >> v83;
          v85 = v61 + *(unsigned __int16 *)(v61 + 46);
          v150[0] = -1;
          v31 = 2 * v30;
          v153 = 2 * v30;
          v86 = (signed __int16 *)(2 * v30 + v85);
          _m_prefetchw(v86);
          v149 = 0;
          v143 = -1;
          LODWORD(v155) = *(unsigned __int16 *)(v61 + 40) ^ (unsigned __int16)qword_18017AC08 ^ (unsigned __int16)((unsigned int)v61 >> 12);
          p_HeapData = 0LL;
          if ( v86 < &v86[((v82 + (_DWORD)v155 - 1) >> v83) - (unsigned int)v30 + 1] )
          {
            v87 = &v86[((v82 + (_DWORD)v155 - 1) >> v83) - (unsigned int)v30 + 1];
            do
            {
              while ( 1 )
              {
                v88 = *v86;
                while ( v88 > 0 )
                {
                  v89 = v88;
                  v88 = _InterlockedCompareExchange16(v86, v88 + 1, v88);
                  if ( v89 == v88 )
                  {
                    v90 = v153;
                    v30 = v149;
                    v91 = v143;
                    goto LABEL_90;
                  }
                }
                if ( v84 )
                  break;
                LODWORD(v151) = 1;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v61 + 24));
                v84 = 1;
              }
              v90 = v153;
              v91 = v143;
              if ( v88 )
              {
                v30 = ++v149;
                p_HeapData = v153 >> 1;
                if ( v143 == -1 )
                {
                  v91 = v153 >> 1;
                  v143 = v91;
                }
              }
              else
              {
                v30 = --v149;
              }
              *v86 = v88 + 1;
LABEL_90:
              v31 = v90 + 2;
              ++v86;
              v153 = v31;
            }
            while ( v86 < v87 );
            v66 = v156;
            if ( (_DWORD)v30 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
            {
              v30 = (unsigned int)((_DWORD)v30 << *(_BYTE *)(v61 + 44));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v30 / 4096);
            }
            if ( v91 == -1 )
            {
              if ( v84 )
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v61 + 24));
            }
            else
            {
              v128 = *(_BYTE *)(v61 + 44);
              v159 = p_HeapData - v91 + 1;
              v129 = v159 << v128;
              v145 = v91 << v128;
              if ( ((int (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
                     *(_QWORD *)a1,
                     v61 + (unsigned int)(v91 << v128),
                     (unsigned int)(v159 << v128)) < 0 )
              {
                RtlpHpLfhSubsegmentDecBlockCounts(a1, v61, v82, (unsigned int)v155);
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v61 + 24));
                _InterlockedAnd64(
                  (volatile signed __int64 *)(v61 + 8 * ((unsigned __int64)(unsigned int)(2 * v160) >> 6) + 48),
                  ~(3LL << ((2 * v160) & 0x3F)));
                v6 = a5;
                goto LABEL_216;
              }
              RtlpHpLfhSubsegmentIncBlockCounts(a1, v61, v145, v129, (__int64)&v159, 1, (__int64)v150);
            }
          }
        }
        v92 = v82;
        v6 = a5;
        v5 = v61 + v92;
        if ( (a5 & 2) != 0 )
          RtlHeapZero(v5, (a4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( a4 < v66 )
        {
          v93 = v66 - a4;
          if ( v93 == 1 )
            v94 = 0x8000;
          else
            v94 = v93 & 0x3FFF;
          *(_WORD *)((*(unsigned __int16 *)(v61 + 40) ^ (unsigned __int16)qword_18017AC08 ^ (unsigned __int64)(unsigned __int16)v152)
                   + v5
                   - 2) = v94;
        }
        if ( v5 )
          goto LABEL_52;
LABEL_216:
        RtlpHpLfhSubsegmentFreeBlock(a1, v61, 0LL, v6);
        goto LABEL_52;
      }
      if ( !v8 )
      {
        v8 = 1;
        RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v7 + 16));
      }
LABEL_5:
      if ( *(_QWORD *)(v7 + 8) )
        break;
      v121 = (_RTL_SRWLOCK *)(v7 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v121);
      else
        RtlReleaseSRWLockShared(v121);
      v122 = (unsigned __int64 *)&a2[3];
      if ( (unsigned __int64 *)*v122 != v122 )
      {
        v130 = a2 + 2;
        RtlAcquireSRWLockExclusive(a2 + 2);
        if ( (unsigned __int64 *)*v122 == v122 )
        {
          RtlReleaseSRWLockExclusive(v130);
        }
        else
        {
          v56 = RtlpHpLfhOwnerMoveSubsegment(a2, *v122, 2LL);
          RtlReleaseSRWLockExclusive(v130);
          if ( v56 )
            goto LABEL_159;
        }
      }
      v56 = RtlpHpLfhSubsegmentCreate(a1, a2, a5);
      if ( !v56 )
        goto LABEL_53;
LABEL_159:
      v8 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + 16));
      if ( *(_WORD *)(v56 + 32) == *(_WORD *)(v56 + 34) )
      {
        *(_QWORD *)(v56 + 16) = v7;
      }
      else
      {
        v131 = _InterlockedExchange64((volatile __int64 *)(v56 + 16), v7);
        if ( (v131 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 32), v131 >> 1);
      }
      if ( *(_QWORD *)(v7 + 8) && *(_WORD *)(v56 + 32) == *(_WORD *)(v56 + 34) )
        goto LABEL_203;
      v123 = *(unsigned __int8 *)(v56 + 38);
      if ( v123 == 2 )
      {
        v124 = (__int64 *)(v7 + 24);
        v125 = (_QWORD *)(v7 + 8);
      }
      else
      {
        if ( *(_BYTE *)(v56 + 38) )
        {
          if ( v123 != 1 )
            goto LABEL_172;
          v135 = 0LL;
          v136 = 40LL;
        }
        else
        {
          v135 = (_QWORD *)(v7 + 8);
          v136 = 24LL;
        }
        v124 = (__int64 *)(v7 + 24);
        v125 = (_QWORD *)(v7 + 8);
        if ( v7 + v136 )
        {
          a3 = *(_QWORD *)v56;
          if ( *(_QWORD *)(*(_QWORD *)v56 + 8LL) != v56 )
            goto LABEL_250;
          v137 = *(__int64 **)(v56 + 8);
          if ( *v137 != v56 )
            goto LABEL_250;
          *v137 = a3;
          *(_QWORD *)(a3 + 8) = v137;
          if ( v135 )
            --*v135;
        }
      }
      *(_BYTE *)(v56 + 38) = 0;
      if ( v124 )
      {
        v126 = (__int64 *)v124[1];
        if ( (__int64 *)*v126 != v124 )
          goto LABEL_250;
        *(_QWORD *)v56 = v124;
        *(_QWORD *)(v56 + 8) = v126;
        *v126 = v56;
        v124[1] = v56;
        if ( v125 )
          ++*v125;
        v56 = 0LL;
      }
      if ( (*(_BYTE *)v7 & 1) == 0 && *(_QWORD *)(v7 + 8) > 8uLL )
      {
        v56 = *v124;
        if ( *(__int64 **)(*v124 + 8) != v124 )
          goto LABEL_250;
        v138 = *(_QWORD *)v56;
        if ( *(_QWORD *)(*(_QWORD *)v56 + 8LL) != v56 )
          goto LABEL_250;
        *v124 = v138;
        *(_QWORD *)(v138 + 8) = v124;
        --*v125;
        *(_BYTE *)(v56 + 38) = 2;
      }
      if ( v56 && *(_BYTE *)(v56 + 38) == 2 )
LABEL_203:
        *(_QWORD *)(v56 + 16) = 0LL;
LABEL_172:
      v157 = v56;
    }
    v10 = *(_QWORD *)(v7 + 24);
    v11 = v7 + 24;
    v12 = 4096;
    if ( !v9 )
      v12 = 1;
    if ( v10 != v11 )
    {
      while ( 2 )
      {
        LOWORD(v13) = *(_WORD *)(v10 + 32);
        v154 = 0;
        while ( 1 )
        {
          v14 = v12;
          if ( v12 >= (unsigned __int16)v13 )
            v14 = v13;
          if ( (unsigned __int16)v13 <= v14 && v8 == 1 )
            break;
          v15 = v13 - v14;
          v13 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v10 + 32), v13 - v14, v13);
          v16 = v15 + v14;
          if ( v13 == v16 )
          {
            if ( *(_WORD *)(v10 + 32) )
              goto LABEL_15;
            v104 = v10;
            switch ( *(_BYTE *)(v10 + 38) )
            {
              case 0:
                v105 = (_QWORD *)(v7 + 8);
                v106 = (__int64 *)(v7 + 40);
LABEL_127:
                v107 = *(_QWORD *)v10;
                if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
                {
                  v108 = *(_QWORD **)(v10 + 8);
                  if ( *v108 == v10 )
                  {
                    *v108 = v107;
                    *(_QWORD *)(v107 + 8) = v108;
                    if ( v105 )
                      --*v105;
                    break;
                  }
                }
LABEL_250:
                __fastfail(3u);
              case 1:
                v105 = 0LL;
                v106 = (__int64 *)(v7 + 40);
                if ( v7 != -40 )
                  goto LABEL_127;
                break;
              case 2:
                v106 = (__int64 *)(v7 + 40);
                break;
              default:
                goto LABEL_15;
            }
            *(_BYTE *)(v10 + 38) = 1;
            if ( v106 )
            {
              v109 = (__int64 *)v106[1];
              if ( (__int64 *)*v109 != v106 )
                goto LABEL_250;
              *(_QWORD *)v10 = v106;
              v104 = 0LL;
              *(_QWORD *)(v10 + 8) = v109;
              *v109 = v10;
              v106[1] = v10;
            }
            if ( (*(_BYTE *)v7 & 1) == 0 && *(_QWORD *)(v7 + 8) > 8uLL )
            {
              v104 = *v106;
              if ( *(__int64 **)(*v106 + 8) != v106 )
                goto LABEL_250;
              v134 = *(_QWORD *)v104;
              if ( *(_QWORD *)(*(_QWORD *)v104 + 8LL) != v104 )
                goto LABEL_250;
              *v106 = v134;
              *(_QWORD *)(v134 + 8) = v106;
              --MEMORY[0];
              *(_BYTE *)(v104 + 38) = 2;
            }
            if ( v104 && *(_BYTE *)(v104 + 38) == 2 )
              *(_QWORD *)(v104 + 16) = 0LL;
LABEL_15:
            if ( v14 > 1u )
              *(_QWORD *)(v7 + 56) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v14 - 1)) & 0xFFF;
            goto LABEL_17;
          }
          if ( v13 < v16 )
            v154 = 1;
        }
        v10 = *(_QWORD *)v10;
        if ( v10 != v11 )
          continue;
        break;
      }
    }
    v10 = 0LL;
LABEL_17:
    v17 = (_RTL_SRWLOCK *)(v7 + 16);
    if ( v8 == 2 )
      RtlReleaseSRWLockExclusive(v17);
    else
      RtlReleaseSRWLockShared(v17);
    if ( v10 )
      break;
    v8 = 2;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + 16));
  }
  v19 = (volatile signed __int64 *)(v10 + 48);
  v20 = 2 * (*(unsigned __int16 *)(v10 + 34) + (unsigned __int64)*(unsigned __int8 *)(v10 + 39));
  v21 = 3LL;
  v22 = RtlpSearchWidth[*(unsigned __int8 *)(v7 + 1)];
  v23 = ((unsigned int)v10 >> 12) ^ *(_DWORD *)(v10 + 40);
  v156 = (unsigned int)v10 >> 12;
  v24 = qword_18017AC08 ^ v23;
  v146 = v22;
  if ( a4 >= (unsigned __int16)v24 )
    v21 = 1LL;
  v152 = v24;
  v153 = v21;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    LODWORD(v30) = 0;
  }
  else
  {
    v25 = NtCurrentTeb();
    v26 = HIWORD(v25->HeapData);
    v27 = v26;
    v28 = (unsigned __int8)v26;
    if ( (unsigned __int8)v26 == HIBYTE(v26) )
    {
      LOWORD(v27) = HIBYTE(v26);
      v120 = RtlpHeapGenerateRandomValue32(v27, v21, v18);
      v21 = v153;
      v29 = (v120 << 8) | (unsigned __int8)(v120 + 1);
    }
    else
    {
      v29 = (unsigned __int8)(v26 ^ (v26 + 1)) ^ v26;
    }
    v22 = v146;
    HIWORD(v25->HeapData) = v29;
    v19 = (volatile signed __int64 *)(v10 + 48);
    LODWORD(v30) = RtlpLowFragHeapRandomData[v28];
  }
  v31 = 0x5555555555555555LL;
  v32 = &v19[(2 * (unsigned __int64)*(unsigned __int16 *)(v10 + 36)) >> 6];
  v33 = &v19[(v20 - 1) >> 6];
LABEL_27:
  if ( v20 < 0x40 )
  {
    v34 = *v32;
    v98 = v20;
    if ( (unsigned int)v20 >= v22 )
      v98 = v22;
    v22 = v98;
  }
  else
  {
    while ( 1 )
    {
      v34 = *v32;
      if ( (*v32 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v58 = v32++;
      if ( v58 == v33 )
        v32 = v19;
    }
    if ( v32 == v33 && (v20 & 0x3F) != 0 && (v20 & 0x3F) < v22 )
      v22 = v20 & 0x3F;
  }
  v147 = v22;
  v30 = ((v22 * (unsigned int)v30) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v35 = ~v34;
    if ( v22 < 0x40 )
    {
      _BitScanForward64(&v95, v35 & 0x5555555555555555LL);
      v96 = 1LL << v22;
      v30 = (unsigned int)(v95 + v30);
      v97 = v95;
      v21 = v153;
      v36 = ((v96 - 1) << v97) & 0x5555555555555555LL;
    }
    else
    {
      v36 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v37, __ROR8__(v35 & v36, v30));
    v38 = ((_BYTE)v30 + (_BYTE)v37) & 0x3F;
    v162 = v38;
    v40 = _InterlockedCompareExchange64(v32, v34 | (v21 << v38), v34);
    v39 = v34 == v40;
    v34 = v40;
    if ( v39 )
      break;
    v22 = v147;
    v21 = v153;
    if ( (v40 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v133 = v32 + 1;
      v32 = v19;
      if ( v133 <= v33 )
        v32 = v133;
      goto LABEL_27;
    }
  }
  v41 = HIWORD(v152);
  v24 = (unsigned __int16)v24;
  v42 = (v38 + ((unsigned int)(v32 - v19) << 6)) >> 1;
  *(_WORD *)(v10 + 36) = v42;
  LODWORD(v155) = (unsigned __int16)v24;
  v43 = v41 + (unsigned __int16)v24 * v42;
  if ( *(_BYTE *)(v10 + 45) <= 1u )
    goto LABEL_45;
  v44 = *(_BYTE *)(v10 + 44);
  v45 = 0;
  v30 = v43 >> v44;
  v46 = 2 * v30;
  v47 = (signed __int16 *)(2 * v30 + v10 + *(unsigned __int16 *)(v10 + 46));
  _m_prefetchw(v47);
  v148 = 0;
  v31 = 0xFFFFFFFFLL;
  v48 = *(unsigned __int16 *)(v10 + 40) ^ (unsigned __int16)((unsigned int)v10 >> 12);
  v140 = -1;
  v151 = 0LL;
  v152 = (unsigned __int16)qword_18017AC08 ^ v48;
  v49 = ((v152 + v43 - 1) >> v44) - (unsigned int)v30 + 1;
  if ( v47 >= &v47[v49] )
    goto LABEL_45;
  v50 = &v47[v49];
  do
  {
    while ( 1 )
    {
      v51 = *v47;
      while ( v51 > 0 )
      {
        v52 = v51;
        v51 = _InterlockedCompareExchange16(v47, v51 + 1, v51);
        if ( v52 == v51 )
        {
          v30 = v148;
          v31 = v140;
          LODWORD(v53) = v151;
          goto LABEL_41;
        }
      }
      if ( v45 )
        break;
      v45 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v10 + 24));
    }
    v31 = v140;
    if ( v51 )
    {
      v30 = v148 + 1;
      v53 = v46 >> 1;
      ++v148;
      v151 = v46 >> 1;
      if ( v140 == -1 )
      {
        v31 = (unsigned int)v53;
        v140 = v46 >> 1;
      }
      *v47 = v51 + 1;
    }
    else
    {
      LODWORD(v53) = v151;
      v30 = --v148;
      *v47 = 1;
    }
LABEL_41:
    ++v47;
    v46 += 2LL;
  }
  while ( v47 < v50 );
  v24 = v155;
  if ( (_DWORD)v30 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
  {
    v30 = (unsigned int)((_DWORD)v30 << *(_BYTE *)(v10 + 44));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v30 / 4096);
  }
  if ( (_DWORD)v31 != -1 )
  {
    v110 = a1;
    v111 = *(_BYTE *)(v10 + 44);
    v112 = (int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    v144 = (_DWORD)v31 << v111;
    v151 = (unsigned int)(((_DWORD)v53 - (_DWORD)v31 + 1) << v111);
    if ( v112(*(_QWORD *)a1, v10 + (unsigned int)((_DWORD)v31 << v111), (unsigned int)v151) >= 0 )
    {
      v113 = v144;
      v114 = *(_BYTE *)(v10 + 44);
      v115 = v144 >> v114;
      v116 = 2 * v115;
      v117 = (signed __int16 *)(2 * v115 + v10 + *(unsigned __int16 *)(v10 + 46));
      _m_prefetchw(v117);
      v118 = v113 - 1 + v151;
      v31 = 0xFFFFFFFFLL;
      v30 = (unsigned __int64)&v117[(v118 >> v114) - (unsigned int)v115 + 1];
      if ( (unsigned __int64)v117 >= v30 )
        goto LABEL_150;
      do
      {
        v119 = *v117;
        while ( v119 > 0 )
        {
          v139 = _InterlockedCompareExchange16(v117, v119 + 1, v119);
          v39 = v119 == v139;
          v119 = v139;
          if ( v39 )
            goto LABEL_145;
        }
        if ( v119 )
        {
          LODWORD(v5) = v5 + 1;
          if ( (_DWORD)v31 == -1 )
            v31 = (unsigned int)(v116 >> 1);
        }
        else
        {
          LODWORD(v5) = v5 - 1;
        }
        *v117 = v119 + 1;
LABEL_145:
        ++v117;
        v116 += 2LL;
      }
      while ( (unsigned __int64)v117 < v30 );
      if ( (_DWORD)v5 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
          ((_DWORD)v5 << *(_BYTE *)(v10 + 44)) / 4096);
      if ( (_DWORD)v31 == -1 )
        goto LABEL_150;
      goto LABEL_45;
    }
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v10, v43, v152);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v10 + 24));
    _InterlockedAnd64(
      (volatile signed __int64 *)(v10 + 8 * ((unsigned __int64)(2 * v42) >> 6) + 48),
      ~(3LL << ((2 * v42) & 0x3F)));
    v6 = a5;
    goto LABEL_249;
  }
  if ( !v45 )
    goto LABEL_45;
LABEL_150:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v10 + 24));
LABEL_45:
  v6 = a5;
  v5 = v10 + v43;
  if ( (a5 & 2) != 0 )
    RtlHeapZero(v10 + v43, (a4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a4 < v24 )
  {
    v54 = v24 - a4;
    if ( v54 == 1 )
      v55 = 0x8000;
    else
      v55 = v54 & 0x3FFF;
    *(_WORD *)(((unsigned __int16)qword_18017AC08 ^ (unsigned __int16)v156 ^ (unsigned __int64)*(unsigned __int16 *)(v10 + 40))
             + v5
             - 2) = v55;
  }
  if ( !v5 )
  {
    v110 = a1;
LABEL_249:
    RtlpHpLfhSubsegmentFreeBlock(v110, v10, 0LL, v6);
  }
LABEL_52:
  v56 = v157;
LABEL_53:
  if ( v154 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v30, v31);
  if ( v56 )
    RtlpHpLfhBucketAddSubsegment(a1, a2, v56, v6);
  return v5;
}
