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
        _QWORD *a2,
        unsigned __int64 a3,
        _QWORD *a4,
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
  volatile signed __int64 *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  volatile signed __int64 *v21; // r14
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  struct _TEB *v27; // r14
  unsigned __int16 v28; // ax
  __int64 v29; // rcx
  unsigned __int16 v30; // si
  __int16 v31; // ax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  volatile signed __int64 *v34; // rsi
  volatile signed __int64 *v35; // r12
  signed __int64 v36; // r11
  signed __int64 v37; // r10
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  int v40; // ecx
  bool v41; // zf
  signed __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // esi
  unsigned int v45; // r15d
  char v46; // cl
  int v47; // r13d
  __int64 v48; // r12
  signed __int16 *v49; // r14
  int v50; // edx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  signed __int16 *v53; // rbx
  signed __int16 v54; // ax
  signed __int16 v55; // tt
  __int64 v56; // r11
  unsigned int v57; // ebx
  __int16 v58; // bx
  __int64 v59; // rdi
  volatile signed __int64 *v61; // rax
  signed __int64 v62; // rdi
  signed __int64 v63; // rax
  unsigned __int64 v64; // rdi
  volatile signed __int64 *v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // ecx
  unsigned int v69; // ebx
  struct _TEB *v70; // rax
  unsigned __int16 HeapData_high; // ax
  __int64 v72; // rcx
  unsigned __int16 v73; // r14
  __int16 v74; // ax
  volatile signed __int64 *v75; // r14
  volatile signed __int64 *v76; // r13
  signed __int64 v77; // r11
  signed __int64 v78; // r10
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  int v81; // ecx
  signed __int64 v82; // rax
  int v83; // eax
  __int64 v84; // r14
  unsigned int v85; // r13d
  char v86; // cl
  int v87; // r10d
  unsigned __int64 v88; // r12
  signed __int16 *v89; // r12
  unsigned __int64 v90; // rdx
  signed __int16 *v91; // rbx
  signed __int16 v92; // ax
  signed __int16 v93; // tt
  __int64 v94; // r9
  int v95; // r11d
  __int64 v96; // rbp
  unsigned int v97; // ebx
  __int16 v98; // bx
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  char v101; // cl
  unsigned int v102; // eax
  volatile signed __int64 *v103; // rax
  unsigned __int64 v104; // rdx
  __int64 v105; // rax
  char v106; // cl
  unsigned int v107; // eax
  __int64 v108; // r11
  _QWORD *v109; // r8
  __int64 *v110; // rdx
  __int64 v111; // r9
  _QWORD *v112; // rax
  __int64 *v113; // rax
  __int16 *v114; // r14
  char v115; // cl
  int (__fastcall *v116)(_QWORD, __int64, _QWORD); // rax
  unsigned int v117; // r9d
  char v118; // cl
  __int64 v119; // r8
  __int64 v120; // r11
  signed __int16 *v121; // r10
  unsigned int v122; // eax
  signed __int16 v123; // dx
  __int16 v124; // ax
  volatile signed __int64 *v125; // rcx
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // r9
  _QWORD *v128; // rdi
  unsigned __int64 v129; // rdx
  int v130; // ecx
  __int64 *v131; // rcx
  __int64 *v132; // rax
  __int16 RandomValue32; // ax
  char v134; // cl
  int v135; // r12d
  volatile signed __int64 *v136; // r15
  unsigned __int64 v137; // rax
  volatile signed __int64 *v138; // rax
  volatile signed __int64 *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned __int64 *v142; // rax
  unsigned __int64 v143; // rax
  signed __int16 v144; // ax
  unsigned int v145; // [rsp+40h] [rbp-A8h]
  unsigned int v146; // [rsp+40h] [rbp-A8h]
  unsigned int v147; // [rsp+40h] [rbp-A8h]
  int v148; // [rsp+40h] [rbp-A8h]
  unsigned int v149; // [rsp+40h] [rbp-A8h]
  int v150; // [rsp+40h] [rbp-A8h]
  unsigned int v151; // [rsp+44h] [rbp-A4h]
  unsigned int v152; // [rsp+44h] [rbp-A4h]
  unsigned int v153; // [rsp+44h] [rbp-A4h]
  unsigned int v154; // [rsp+44h] [rbp-A4h]
  char v155[8]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v156; // [rsp+50h] [rbp-98h]
  unsigned int v157; // [rsp+58h] [rbp-90h]
  __int64 v158; // [rsp+60h] [rbp-88h]
  int v159; // [rsp+68h] [rbp-80h]
  __int64 v160; // [rsp+70h] [rbp-78h]
  unsigned int v161; // [rsp+78h] [rbp-70h]
  __int64 v162; // [rsp+80h] [rbp-68h]
  __int64 p_HeapData; // [rsp+88h] [rbp-60h]
  int v164; // [rsp+90h] [rbp-58h] BYREF
  __int64 v165; // [rsp+98h] [rbp-50h]
  int v166; // [rsp+A0h] [rbp-48h]
  int v167; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v169; // [rsp+F8h] [rbp+10h]
  unsigned int v170; // [rsp+108h] [rbp+20h]

  v170 = (unsigned int)a4;
  v169 = (unsigned __int64)a2;
  v5 = 0LL;
  v6 = a5;
  v7 = a3;
  v8 = 0;
  v9 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v159 = 0;
  v162 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(v7 + 56));
          v62 = *(_QWORD *)(v7 + 56);
          if ( (v62 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 56), v62 - 1, v62);
              if ( v62 == v63 )
                break;
              v159 = 1;
              v62 = v63;
              if ( (v63 & 0xFFF) == 0 )
                goto LABEL_123;
            }
            v64 = v62 & 0xFFFFFFFFFFFFF000uLL;
            if ( v64 )
              break;
          }
LABEL_123:
          if ( v8 == 2 )
            goto LABEL_5;
          v8 = 2;
          RtlAcquireSRWLockExclusive(v7 + 16, (unsigned __int64)a2, a3, (unsigned __int64)a4);
        }
        if ( v8 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v7 + 16));
        v65 = (volatile signed __int64 *)(v64 + 48);
        v66 = 3LL;
        v67 = *(unsigned __int8 *)(v7 + 1);
        v158 = 2 * (*(unsigned __int16 *)(v64 + 34) + (unsigned __int64)*(unsigned __int8 *)(v64 + 39));
        v68 = RtlpSearchWidth[v67];
        v157 = (unsigned int)v64 >> 12;
        v69 = *(_DWORD *)(v64 + 40) ^ qword_18017AC08 ^ ((unsigned int)v64 >> 12);
        if ( v170 >= (unsigned __int16)(*(_WORD *)(v64 + 40) ^ qword_18017AC08 ^ ((unsigned int)v64 >> 12)) )
          v66 = 1LL;
        v146 = v68;
        LODWORD(v156) = *(_DWORD *)(v64 + 40) ^ qword_18017AC08 ^ ((unsigned int)v64 >> 12);
        v41 = (*(_BYTE *)(a1 + 62) & 2) == 0;
        v160 = v66;
        if ( v41 )
        {
          v70 = NtCurrentTeb();
          p_HeapData = (__int64)&v70->HeapData;
          HeapData_high = HIWORD(v70->HeapData);
          v72 = HeapData_high;
          v73 = (unsigned __int8)HeapData_high;
          if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
          {
            LOWORD(v72) = HIBYTE(HeapData_high);
            RandomValue32 = RtlpHeapGenerateRandomValue32(v72, v66, a3);
            v66 = v160;
            v74 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
          }
          else
          {
            v74 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
          }
          v65 = (volatile signed __int64 *)(v64 + 48);
          *(_WORD *)(p_HeapData + 2) = v74;
          v68 = v146;
          LODWORD(v32) = RtlpLowFragHeapRandomData[v73];
        }
        else
        {
          LODWORD(v32) = 0;
        }
        v33 = 0x5555555555555555LL;
        v75 = &v65[(2 * (unsigned __int64)*(unsigned __int16 *)(v64 + 36)) >> 6];
        v76 = &v65[(unsigned __int64)(v158 - 1) >> 6];
LABEL_76:
        if ( (unsigned __int64)v158 < 0x40 )
        {
          v77 = *v75;
          v107 = v158;
          if ( (unsigned int)v158 >= v68 )
            v107 = v68;
          v68 = v107;
        }
        else
        {
          while ( 1 )
          {
            v77 = *v75;
            if ( (*v75 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            v103 = v75++;
            if ( v103 == v76 )
              v75 = v65;
          }
          if ( v75 == v76 && (v158 & 0x3F) != 0 && ((unsigned __int8)v158 & 0x3Fu) < (unsigned __int64)v68 )
            v68 = v158 & 0x3F;
        }
        v147 = v68;
        v32 = ((v68 * (unsigned int)v32) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v78 = ~v77;
          if ( v68 < 0x40 )
          {
            _BitScanForward64(&v104, v78 & 0x5555555555555555LL);
            v105 = 1LL << v68;
            v32 = (unsigned int)(v104 + v32);
            v106 = v104;
            v66 = v160;
            v79 = ((v105 - 1) << v106) & 0x5555555555555555LL;
          }
          else
          {
            v79 = 0x5555555555555555LL;
          }
          _BitScanForward64(&v80, __ROR8__(v79 & v78, v32));
          v81 = ((_BYTE)v32 + (_BYTE)v80) & 0x3F;
          v166 = v81;
          v82 = _InterlockedCompareExchange64(v75, v77 | (v66 << v81), v77);
          v41 = v77 == v82;
          v77 = v82;
          if ( v41 )
            break;
          v68 = v147;
          v66 = v160;
          if ( (v82 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            v138 = v75 + 1;
            v75 = v65;
            if ( v138 <= v76 )
              v75 = v138;
            goto LABEL_76;
          }
        }
        v83 = WORD1(v156);
        v69 = (unsigned __int16)v69;
        v84 = (v81 + ((unsigned int)(v75 - v65) << 6)) >> 1;
        v165 = v84;
        *(_WORD *)(v64 + 36) = v84;
        v161 = (unsigned __int16)v69;
        v85 = v83 + v84 * (unsigned __int16)v69;
        if ( *(_BYTE *)(v64 + 45) > 1u )
        {
          v86 = *(_BYTE *)(v64 + 44);
          v87 = 0;
          v32 = v85 >> v86;
          v88 = v64 + *(unsigned __int16 *)(v64 + 46);
          v155[0] = -1;
          v33 = 2 * v32;
          v158 = 2 * v32;
          v89 = (signed __int16 *)(2 * v32 + v88);
          _m_prefetchw(v89);
          v154 = 0;
          v148 = -1;
          LODWORD(v160) = *(unsigned __int16 *)(v64 + 40) ^ (unsigned __int16)qword_18017AC08 ^ (unsigned __int16)((unsigned int)v64 >> 12);
          v90 = (unsigned __int64)&v89[((v85 + (_DWORD)v160 - 1) >> v86) - (unsigned int)v32 + 1];
          p_HeapData = 0LL;
          if ( (unsigned __int64)v89 < v90 )
          {
            v91 = &v89[((v85 + (_DWORD)v160 - 1) >> v86) - (unsigned int)v32 + 1];
            do
            {
              while ( 1 )
              {
                v92 = *v89;
                while ( v92 > 0 )
                {
                  v93 = v92;
                  v92 = _InterlockedCompareExchange16(v89, v92 + 1, v92);
                  if ( v93 == v92 )
                  {
                    v94 = v158;
                    v32 = v154;
                    v95 = v148;
                    goto LABEL_90;
                  }
                }
                if ( v87 )
                  break;
                LODWORD(v156) = 1;
                RtlAcquireSRWLockExclusive(v64 + 24, v90, v32, v33);
                v87 = 1;
              }
              v94 = v158;
              v95 = v148;
              if ( v92 )
              {
                v32 = ++v154;
                p_HeapData = v158 >> 1;
                if ( v148 == -1 )
                {
                  v95 = v158 >> 1;
                  v148 = v95;
                }
              }
              else
              {
                v32 = --v154;
              }
              *v89 = v92 + 1;
LABEL_90:
              v33 = v94 + 2;
              ++v89;
              v158 = v33;
            }
            while ( v89 < v91 );
            v69 = v161;
            if ( (_DWORD)v32 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
            {
              v32 = (unsigned int)((_DWORD)v32 << *(_BYTE *)(v64 + 44));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v32 / 4096);
            }
            if ( v95 == -1 )
            {
              if ( v87 )
                RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v64 + 24));
            }
            else
            {
              v134 = *(_BYTE *)(v64 + 44);
              v164 = p_HeapData - v95 + 1;
              v135 = v164 << v134;
              v150 = v95 << v134;
              if ( ((int (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
                     *(_QWORD *)a1,
                     v64 + (unsigned int)(v95 << v134),
                     (unsigned int)(v164 << v134)) < 0 )
              {
                RtlpHpLfhSubsegmentDecBlockCounts(a1, v64, v85, (unsigned int)v160);
                RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v64 + 24));
                _InterlockedAnd64(
                  (volatile signed __int64 *)(v64 + 8 * ((unsigned __int64)(unsigned int)(2 * v165) >> 6) + 48),
                  ~(3LL << ((2 * v165) & 0x3F)));
                v6 = a5;
                goto LABEL_216;
              }
              RtlpHpLfhSubsegmentIncBlockCounts(a1, v64, v150, v135, (__int64)&v164, 1, (__int64)v155);
            }
          }
        }
        v96 = v85;
        v6 = a5;
        v5 = v64 + v96;
        if ( (a5 & 2) != 0 )
          RtlHeapZero(v5, (v170 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v170 < v69 )
        {
          v97 = v69 - v170;
          if ( v97 == 1 )
            v98 = 0x8000;
          else
            v98 = v97 & 0x3FFF;
          *(_WORD *)((*(unsigned __int16 *)(v64 + 40) ^ (unsigned __int16)qword_18017AC08 ^ (unsigned __int64)(unsigned __int16)v157)
                   + v5
                   - 2) = v98;
        }
        if ( v5 )
          goto LABEL_52;
LABEL_216:
        RtlpHpLfhSubsegmentFreeBlock((__int16 *)a1, v64, 0LL, v6);
        goto LABEL_52;
      }
      if ( !v8 )
      {
        v8 = 1;
        RtlAcquireSRWLockShared(v7 + 16);
      }
LABEL_5:
      if ( *(_QWORD *)(v7 + 8) )
        break;
      v125 = (volatile signed __int64 *)(v7 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v125);
      else
        RtlReleaseSRWLockShared(v125);
      v128 = (_QWORD *)(v169 + 24);
      if ( (_QWORD *)*v128 != v128 )
      {
        v136 = (volatile signed __int64 *)(v169 + 16);
        RtlAcquireSRWLockExclusive(v169 + 16, v126, v169, v127);
        if ( (_QWORD *)*v128 == v128 )
        {
          RtlReleaseSRWLockExclusive(v136);
        }
        else
        {
          v59 = RtlpHpLfhOwnerMoveSubsegment(v169, *v128, 2LL);
          RtlReleaseSRWLockExclusive(v136);
          if ( v59 )
            goto LABEL_159;
        }
      }
      v59 = RtlpHpLfhSubsegmentCreate(a1, v169, a5);
      if ( !v59 )
        goto LABEL_53;
LABEL_159:
      v8 = 2;
      RtlAcquireSRWLockExclusive(v7 + 16, v129, v32, v33);
      if ( *(_WORD *)(v59 + 32) == *(_WORD *)(v59 + 34) )
      {
        *(_QWORD *)(v59 + 16) = v7;
      }
      else
      {
        v137 = _InterlockedExchange64((volatile __int64 *)(v59 + 16), v7);
        if ( (v137 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 32), v137 >> 1);
      }
      if ( *(_QWORD *)(v7 + 8) && *(_WORD *)(v59 + 32) == *(_WORD *)(v59 + 34) )
        goto LABEL_203;
      v130 = *(unsigned __int8 *)(v59 + 38);
      if ( v130 == 2 )
      {
        v131 = (__int64 *)(v7 + 24);
        a2 = (_QWORD *)(v7 + 8);
      }
      else
      {
        if ( *(_BYTE *)(v59 + 38) )
        {
          if ( v130 != 1 )
            goto LABEL_172;
          a4 = 0LL;
          v141 = 40LL;
        }
        else
        {
          a4 = (_QWORD *)(v7 + 8);
          v141 = 24LL;
        }
        v131 = (__int64 *)(v7 + 24);
        a2 = (_QWORD *)(v7 + 8);
        if ( v7 + v141 )
        {
          a3 = *(_QWORD *)v59;
          if ( *(_QWORD *)(*(_QWORD *)v59 + 8LL) != v59 )
            goto LABEL_250;
          v142 = *(unsigned __int64 **)(v59 + 8);
          if ( *v142 != v59 )
            goto LABEL_250;
          *v142 = a3;
          *(_QWORD *)(a3 + 8) = v142;
          if ( a4 )
            --*a4;
        }
      }
      *(_BYTE *)(v59 + 38) = 0;
      if ( v131 )
      {
        v132 = (__int64 *)v131[1];
        if ( (__int64 *)*v132 != v131 )
          goto LABEL_250;
        *(_QWORD *)v59 = v131;
        *(_QWORD *)(v59 + 8) = v132;
        *v132 = v59;
        v131[1] = v59;
        if ( a2 )
          ++*a2;
        v59 = 0LL;
      }
      if ( (*(_BYTE *)v7 & 1) == 0 && *(_QWORD *)(v7 + 8) > 8uLL )
      {
        v59 = *v131;
        if ( *(__int64 **)(*v131 + 8) != v131 )
          goto LABEL_250;
        v143 = *(_QWORD *)v59;
        if ( *(_QWORD *)(*(_QWORD *)v59 + 8LL) != v59 )
          goto LABEL_250;
        *v131 = v143;
        *(_QWORD *)(v143 + 8) = v131;
        --*a2;
        *(_BYTE *)(v59 + 38) = 2;
      }
      if ( v59 && *(_BYTE *)(v59 + 38) == 2 )
LABEL_203:
        *(_QWORD *)(v59 + 16) = 0LL;
LABEL_172:
      v162 = v59;
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
        v159 = 0;
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
            v108 = v10;
            switch ( *(_BYTE *)(v10 + 38) )
            {
              case 0:
                v109 = (_QWORD *)(v7 + 8);
                v110 = (__int64 *)(v7 + 40);
LABEL_127:
                v111 = *(_QWORD *)v10;
                if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
                {
                  v112 = *(_QWORD **)(v10 + 8);
                  if ( *v112 == v10 )
                  {
                    *v112 = v111;
                    *(_QWORD *)(v111 + 8) = v112;
                    if ( v109 )
                      --*v109;
                    break;
                  }
                }
LABEL_250:
                __fastfail(3u);
              case 1:
                v109 = 0LL;
                v110 = (__int64 *)(v7 + 40);
                if ( v7 != -40 )
                  goto LABEL_127;
                break;
              case 2:
                v110 = (__int64 *)(v7 + 40);
                break;
              default:
                goto LABEL_15;
            }
            *(_BYTE *)(v10 + 38) = 1;
            if ( v110 )
            {
              v113 = (__int64 *)v110[1];
              if ( (__int64 *)*v113 != v110 )
                goto LABEL_250;
              *(_QWORD *)v10 = v110;
              v108 = 0LL;
              *(_QWORD *)(v10 + 8) = v113;
              *v113 = v10;
              v110[1] = v10;
            }
            if ( (*(_BYTE *)v7 & 1) == 0 && *(_QWORD *)(v7 + 8) > 8uLL )
            {
              v108 = *v110;
              if ( *(__int64 **)(*v110 + 8) != v110 )
                goto LABEL_250;
              v140 = *(_QWORD *)v108;
              if ( *(_QWORD *)(*(_QWORD *)v108 + 8LL) != v108 )
                goto LABEL_250;
              *v110 = v140;
              *(_QWORD *)(v140 + 8) = v110;
              --MEMORY[0];
              *(_BYTE *)(v108 + 38) = 2;
            }
            if ( v108 && *(_BYTE *)(v108 + 38) == 2 )
              *(_QWORD *)(v108 + 16) = 0LL;
LABEL_15:
            if ( v14 > 1u )
              *(_QWORD *)(v7 + 56) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v14 - 1)) & 0xFFF;
            goto LABEL_17;
          }
          if ( v13 < v16 )
            v159 = 1;
        }
        v10 = *(_QWORD *)v10;
        if ( v10 != v11 )
          continue;
        break;
      }
    }
    v10 = 0LL;
LABEL_17:
    v17 = (volatile signed __int64 *)(v7 + 16);
    if ( v8 == 2 )
      RtlReleaseSRWLockExclusive(v17);
    else
      RtlReleaseSRWLockShared(v17);
    if ( v10 )
      break;
    v8 = 2;
    RtlAcquireSRWLockExclusive(v7 + 16, v18, v19, v20);
  }
  v21 = (volatile signed __int64 *)(v10 + 48);
  v22 = 2 * (*(unsigned __int16 *)(v10 + 34) + (unsigned __int64)*(unsigned __int8 *)(v10 + 39));
  v23 = 3LL;
  v24 = RtlpSearchWidth[*(unsigned __int8 *)(v7 + 1)];
  v25 = ((unsigned int)v10 >> 12) ^ *(_DWORD *)(v10 + 40);
  v161 = (unsigned int)v10 >> 12;
  v26 = qword_18017AC08 ^ v25;
  v151 = v24;
  if ( v170 >= (unsigned __int16)v26 )
    v23 = 1LL;
  v157 = v26;
  v158 = v23;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    LODWORD(v32) = 0;
  }
  else
  {
    v27 = NtCurrentTeb();
    v28 = HIWORD(v27->HeapData);
    v29 = v28;
    v30 = (unsigned __int8)v28;
    if ( (unsigned __int8)v28 == HIBYTE(v28) )
    {
      LOWORD(v29) = HIBYTE(v28);
      v124 = RtlpHeapGenerateRandomValue32(v29, v23, v19);
      v23 = v158;
      v31 = (v124 << 8) | (unsigned __int8)(v124 + 1);
    }
    else
    {
      v31 = (unsigned __int8)(v28 ^ (v28 + 1)) ^ v28;
    }
    v24 = v151;
    HIWORD(v27->HeapData) = v31;
    v21 = (volatile signed __int64 *)(v10 + 48);
    LODWORD(v32) = RtlpLowFragHeapRandomData[v30];
  }
  v33 = 0x5555555555555555LL;
  v34 = &v21[(2 * (unsigned __int64)*(unsigned __int16 *)(v10 + 36)) >> 6];
  v35 = &v21[(v22 - 1) >> 6];
LABEL_27:
  if ( v22 < 0x40 )
  {
    v36 = *v34;
    v102 = v22;
    if ( (unsigned int)v22 >= v24 )
      v102 = v24;
    v24 = v102;
  }
  else
  {
    while ( 1 )
    {
      v36 = *v34;
      if ( (*v34 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v61 = v34++;
      if ( v61 == v35 )
        v34 = v21;
    }
    if ( v34 == v35 && (v22 & 0x3F) != 0 && (v22 & 0x3F) < v24 )
      v24 = v22 & 0x3F;
  }
  v152 = v24;
  v32 = ((v24 * (unsigned int)v32) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v37 = ~v36;
    if ( v24 < 0x40 )
    {
      _BitScanForward64(&v99, v37 & 0x5555555555555555LL);
      v100 = 1LL << v24;
      v32 = (unsigned int)(v99 + v32);
      v101 = v99;
      v23 = v158;
      v38 = ((v100 - 1) << v101) & 0x5555555555555555LL;
    }
    else
    {
      v38 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v39, __ROR8__(v37 & v38, v32));
    v40 = ((_BYTE)v32 + (_BYTE)v39) & 0x3F;
    v167 = v40;
    v42 = _InterlockedCompareExchange64(v34, v36 | (v23 << v40), v36);
    v41 = v36 == v42;
    v36 = v42;
    if ( v41 )
      break;
    v24 = v152;
    v23 = v158;
    if ( (v42 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v139 = v34 + 1;
      v34 = v21;
      if ( v139 <= v35 )
        v34 = v139;
      goto LABEL_27;
    }
  }
  v43 = HIWORD(v157);
  v26 = (unsigned __int16)v26;
  v44 = (v40 + ((unsigned int)(v34 - v21) << 6)) >> 1;
  *(_WORD *)(v10 + 36) = v44;
  LODWORD(v160) = (unsigned __int16)v26;
  v45 = v43 + (unsigned __int16)v26 * v44;
  if ( *(_BYTE *)(v10 + 45) <= 1u )
    goto LABEL_45;
  v46 = *(_BYTE *)(v10 + 44);
  v47 = 0;
  v32 = v45 >> v46;
  v48 = 2 * v32;
  v49 = (signed __int16 *)(2 * v32 + v10 + *(unsigned __int16 *)(v10 + 46));
  _m_prefetchw(v49);
  v153 = 0;
  v33 = 0xFFFFFFFFLL;
  v50 = *(unsigned __int16 *)(v10 + 40) ^ (unsigned __int16)((unsigned int)v10 >> 12);
  v145 = -1;
  v156 = 0LL;
  v157 = (unsigned __int16)qword_18017AC08 ^ v50;
  v51 = ((v157 + v45 - 1) >> v46) - (unsigned int)v32 + 1;
  v52 = (unsigned __int64)&v49[v51];
  if ( (unsigned __int64)v49 >= v52 )
    goto LABEL_45;
  v53 = &v49[v51];
  do
  {
    while ( 1 )
    {
      v54 = *v49;
      while ( v54 > 0 )
      {
        v55 = v54;
        v54 = _InterlockedCompareExchange16(v49, v54 + 1, v54);
        if ( v55 == v54 )
        {
          v32 = v153;
          v33 = v145;
          LODWORD(v56) = v156;
          goto LABEL_41;
        }
      }
      if ( v47 )
        break;
      v47 = 1;
      RtlAcquireSRWLockExclusive(v10 + 24, v52, v32, v33);
    }
    v33 = v145;
    if ( v54 )
    {
      v32 = v153 + 1;
      v56 = v48 >> 1;
      ++v153;
      v156 = v48 >> 1;
      if ( v145 == -1 )
      {
        v33 = (unsigned int)v56;
        v145 = v48 >> 1;
      }
      *v49 = v54 + 1;
    }
    else
    {
      LODWORD(v56) = v156;
      v32 = --v153;
      *v49 = 1;
    }
LABEL_41:
    ++v49;
    v48 += 2LL;
  }
  while ( v49 < v53 );
  v26 = v160;
  if ( (_DWORD)v32 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
  {
    v32 = (unsigned int)((_DWORD)v32 << *(_BYTE *)(v10 + 44));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v32 / 4096);
  }
  if ( (_DWORD)v33 != -1 )
  {
    v114 = (__int16 *)a1;
    v115 = *(_BYTE *)(v10 + 44);
    v116 = (int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    v149 = (_DWORD)v33 << v115;
    v156 = (unsigned int)(((_DWORD)v56 - (_DWORD)v33 + 1) << v115);
    if ( v116(*(_QWORD *)a1, v10 + (unsigned int)((_DWORD)v33 << v115), (unsigned int)v156) >= 0 )
    {
      v117 = v149;
      v118 = *(_BYTE *)(v10 + 44);
      v119 = v149 >> v118;
      v120 = 2 * v119;
      v121 = (signed __int16 *)(2 * v119 + v10 + *(unsigned __int16 *)(v10 + 46));
      _m_prefetchw(v121);
      v122 = v117 - 1 + v156;
      v33 = 0xFFFFFFFFLL;
      v32 = (unsigned __int64)&v121[(v122 >> v118) - (unsigned int)v119 + 1];
      if ( (unsigned __int64)v121 >= v32 )
        goto LABEL_150;
      do
      {
        v123 = *v121;
        while ( v123 > 0 )
        {
          v144 = _InterlockedCompareExchange16(v121, v123 + 1, v123);
          v41 = v123 == v144;
          v123 = v144;
          if ( v41 )
            goto LABEL_145;
        }
        if ( v123 )
        {
          LODWORD(v5) = v5 + 1;
          if ( (_DWORD)v33 == -1 )
            v33 = (unsigned int)(v120 >> 1);
        }
        else
        {
          LODWORD(v5) = v5 - 1;
        }
        *v121 = v123 + 1;
LABEL_145:
        ++v121;
        v120 += 2LL;
      }
      while ( (unsigned __int64)v121 < v32 );
      if ( (_DWORD)v5 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
          ((_DWORD)v5 << *(_BYTE *)(v10 + 44)) / 4096);
      if ( (_DWORD)v33 == -1 )
        goto LABEL_150;
      goto LABEL_45;
    }
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v10, v45, v157);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 24));
    _InterlockedAnd64(
      (volatile signed __int64 *)(v10 + 8 * ((unsigned __int64)(2 * v44) >> 6) + 48),
      ~(3LL << ((2 * v44) & 0x3F)));
    v6 = a5;
    goto LABEL_249;
  }
  if ( !v47 )
    goto LABEL_45;
LABEL_150:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 24));
LABEL_45:
  v6 = a5;
  v5 = v10 + v45;
  if ( (a5 & 2) != 0 )
    RtlHeapZero(v10 + v45, (v170 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v170 < v26 )
  {
    v57 = v26 - v170;
    if ( v57 == 1 )
      v58 = 0x8000;
    else
      v58 = v57 & 0x3FFF;
    *(_WORD *)(((unsigned __int16)qword_18017AC08 ^ (unsigned __int16)v161 ^ (unsigned __int64)*(unsigned __int16 *)(v10 + 40))
             + v5
             - 2) = v58;
  }
  if ( !v5 )
  {
    v114 = (__int16 *)a1;
LABEL_249:
    RtlpHpLfhSubsegmentFreeBlock(v114, v10, 0LL, v6);
  }
LABEL_52:
  v59 = v162;
LABEL_53:
  if ( v159 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, v169, v32, v33);
  if ( v59 )
    RtlpHpLfhBucketAddSubsegment(a1, v169, v59, v6);
  return v5;
}
