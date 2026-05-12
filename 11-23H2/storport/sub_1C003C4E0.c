/*
 * XREFs of sub_1C003C4E0 @ 0x1C003C4E0
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 * Callees:
 *     sub_1C0007728 @ 0x1C0007728 (sub_1C0007728.c)
 *     sub_1C000775C @ 0x1C000775C (sub_1C000775C.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C003C4E0(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r15
  unsigned int v3; // edi
  __int64 v4; // r14
  struct _PROCESSOR_NUMBER v5; // esi
  struct _SLIST_ENTRY *v6; // r13
  void *v7; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rsi
  KIRQL v13; // r13
  USHORT ActiveGroupCount; // ax
  __int64 v15; // r12
  PVOID v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r13
  char *v19; // rdi
  ULONG ActiveProcessorCount; // r14d
  BYTE v21; // bl
  char *v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // r15d
  unsigned int v25; // eax
  size_t v26; // rsi
  ULONG v27; // r13d
  _WORD *v28; // rdi
  int v29; // edx
  __int64 v30; // r9
  ULONG v31; // r12d
  char *v32; // rax
  unsigned __int16 v33; // r8
  unsigned __int16 v34; // r9
  unsigned int v35; // r10d
  char *v36; // rdx
  char v37; // r11
  unsigned __int16 v38; // cx
  __int64 v39; // r9
  unsigned int v40; // edi
  __int64 v41; // r12
  __int64 v42; // rsi
  void *v43; // r15
  char *v44; // rax
  __int64 v45; // rdx
  PVOID v46; // rdi
  char *v47; // rbx
  unsigned int v48; // edi
  char v49; // si
  NTSTATUS ProcessorNumberFromIndex; // eax
  NTSTATUS v51; // eax
  unsigned int v52; // edi
  char v53; // r15
  NTSTATUS v54; // eax
  int v55; // r10d
  __int64 v56; // r11
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // r8
  KAFFINITY v60; // r9
  unsigned int v61; // r13d
  unsigned int v62; // r12d
  __int64 v63; // rcx
  char v64; // al
  __int64 v65; // rcx
  __int64 v66; // rcx
  KAFFINITY v67; // r10
  unsigned int v68; // r11d
  char v69; // di
  unsigned int v70; // r9d
  char v71; // bl
  unsigned int v72; // r13d
  unsigned int v73; // r12d
  __int64 v74; // r15
  __int64 v75; // rsi
  char v76; // cl
  char v77; // cl
  char v78; // al
  _BYTE *v79; // rsi
  unsigned int v80; // r13d
  unsigned int v81; // ebx
  unsigned __int8 *v82; // r9
  char v83; // r15
  unsigned int v84; // eax
  __int64 v85; // r10
  unsigned int k; // r11d
  __int64 v87; // r8
  __int64 v88; // rax
  unsigned __int8 v89; // r8
  USHORT v90; // r15
  struct _GROUP_AFFINITY *v91; // rbx
  KAFFINITY Mask; // rdx
  unsigned __int16 v93; // r9
  int v94; // r12d
  unsigned __int16 i; // r8
  __int64 v96; // rax
  unsigned int v97; // ecx
  unsigned int v98; // edx
  char v99; // r8
  __int64 v100; // rsi
  int v101; // ecx
  char v102; // r15
  __int64 v103; // r10
  unsigned __int16 v104; // r9
  char v105; // cl
  unsigned int v106; // r8d
  unsigned int v107; // r11d
  int v108; // r9d
  unsigned int v109; // eax
  unsigned int v110; // r8d
  __int64 v111; // r10
  char *v112; // r13
  int v113; // r12d
  char *v114; // rsi
  unsigned int v115; // edi
  ULONG v116; // eax
  unsigned int v117; // edi
  int v118; // r12d
  int v119; // r9d
  unsigned int j; // r8d
  __int64 v121; // r10
  unsigned int v122; // edi
  ULONG v123; // eax
  ULONG v124; // r15d
  unsigned __int16 v125; // r8
  int v126; // r10d
  unsigned int v127; // r9d
  int v128; // r12d
  unsigned int v129; // ebx
  char *v130; // rdx
  __int64 v131; // rsi
  int v132; // ecx
  unsigned int v133; // edx
  signed __int32 v134[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v135; // [rsp+20h] [rbp-E0h]
  __int64 v136; // [rsp+28h] [rbp-D8h]
  PVOID v137; // [rsp+30h] [rbp-D0h]
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v139; // [rsp+3Ch] [rbp-C4h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v141; // [rsp+44h] [rbp-BCh]
  __int64 v142; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  ULONG Length; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v145; // [rsp+60h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+68h] [rbp-98h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Dst; // [rsp+80h] [rbp-80h] BYREF
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+D0h] [rbp-30h] BYREF
  char v150; // [rsp+170h] [rbp+70h]
  KIRQL v151; // [rsp+178h] [rbp+78h]
  size_t v152; // [rsp+178h] [rbp+78h]
  unsigned int v153; // [rsp+178h] [rbp+78h]
  USHORT v154; // [rsp+178h] [rbp+78h]
  unsigned __int16 v155; // [rsp+180h] [rbp+80h]
  USHORT v156; // [rsp+188h] [rbp+88h]
  unsigned int v157; // [rsp+188h] [rbp+88h]
  int v158; // [rsp+188h] [rbp+88h]

  v1 = *(_WORD *)(a1 + 4596);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 4600);
  ProcNumber = 0;
  v4 = a1;
  *(_QWORD *)&v146.OldIrql = 0LL;
  v136 = 0LL;
  P = 0LL;
  v5 = 0;
  ProcessorNumber = 0;
  v155 = v1;
  *(_WORD *)(a1 + 4596) = 0;
  v145 = 1LL;
  v146.LockQueue = 0LL;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4600) = 1;
  if ( v3 > 1 && (*(char *)(a1 + 110) >= 0 || !*(_QWORD *)(a1 + 4608)) )
  {
    v6 = (struct _SLIST_ENTRY *)sub_1C0007CF4(64LL, 32LL * v3, 1413701970LL, *(_QWORD *)(a1 + 8));
    if ( !v6
      || (v9 = KeQueryHighestNodeNumber() + 1,
          v10 = sub_1C0007CF4(72LL, (unsigned __int64)v9 << 6, 1413701970LL, *(_QWORD *)(v4 + 8)),
          (*(_QWORD *)(v4 + 4608) = v10) == 0LL) )
    {
      v5 = (struct _PROCESSOR_NUMBER)-1073741670;
      goto LABEL_8;
    }
    if ( v9 )
    {
      v11 = v9;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v2 + *(_QWORD *)(v4 + 4608)));
        v2 += 64LL;
        --v11;
      }
      while ( v11 );
      LODWORD(v2) = 0;
    }
    v12 = (_DWORD *)&v6[1].Next + 1;
    do
    {
      *v12 = v2;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4608) + ((unsigned __int64)((unsigned int)v2 % v9) << 6)),
        v6);
      LODWORD(v2) = v2 + 1;
      v12 += 8;
      v6 += 2;
    }
    while ( (unsigned int)v2 < v3 );
    sub_1C000775C(v4, &v146);
    *(_DWORD *)(v4 + 4600) = v3;
    sub_1C0007728(v4, &v146);
    LOWORD(v2) = 0;
    v5 = ProcessorNumber;
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_8;
  v13 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v151 = v13;
  if ( _InterlockedIncrement(&dword_1C0093B58) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v15 = ActiveGroupCount;
    v156 = ActiveGroupCount;
    if ( *(char *)(v4 + 110) < 0 && (v16 = ::P) != 0LL )
    {
      v17 = (unsigned int)v15;
    }
    else
    {
      v17 = v15;
      v16 = (PVOID)sub_1C0007CF4(64LL, v15 << 13, 1917083986LL, *(_QWORD *)(v4 + 8));
      ::P = v16;
    }
    if ( !v16
      || (*(char *)(v4 + 110) >= 0 || !qword_1C0093AA0)
      && (qword_1C0093AA0 = (PVOID)sub_1C0007CF4(64LL, 4 * v17, 1917083986LL, *(_QWORD *)(v4 + 8))) == 0LL )
    {
      v5 = (struct _PROCESSOR_NUMBER)-1073741670;
      if ( _InterlockedExchangeAdd(&dword_1C0093B58, 0xFFFFFFFF) == 1 )
      {
        if ( ::P )
        {
          ExFreePoolWithTag(::P, 0x72446152u);
          ::P = 0LL;
        }
        if ( qword_1C0093AA0 )
        {
          ExFreePoolWithTag(qword_1C0093AA0, 0x72446152u);
          qword_1C0093AA0 = 0LL;
        }
        dword_1C0093AA8 = 0;
      }
      KeReleaseSpinLock(&SpinLock, v13);
      goto LABEL_8;
    }
    if ( (_WORD)v15 )
    {
      v18 = 0LL;
      v142 = 0LL;
      v19 = 0LL;
      v137 = 0LL;
      do
      {
        ProcNumber.Reserved = 0;
        ProcNumber.Group = v2;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v2);
        v21 = 0;
        if ( ActiveProcessorCount )
        {
          v22 = (char *)v137;
          do
          {
            ProcNumber.Number = v21;
            v23 = (_QWORD)&v22[v21] << 7;
            KeInitializeDpc((PRKDPC)((char *)::P + v23), (PKDEFERRED_ROUTINE)sub_1C000F7A0, (char *)::P + v23);
            KeSetImportanceDpc((PRKDPC)((char *)::P + v23), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)::P + v23), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)::P + v23 + 64));
            ++v21;
            *(_DWORD *)((char *)::P + v23 + 80) = 0;
          }
          while ( v21 < ActiveProcessorCount );
          LOWORD(v15) = v156;
          v19 = v22;
          v18 = v142;
        }
        v19 += 64;
        LOWORD(v2) = v2 + 1;
        v137 = v19;
        *(_DWORD *)((char *)qword_1C0093AA0 + v18) = ActiveProcessorCount;
        v18 += 4LL;
        v142 = v18;
      }
      while ( (unsigned __int16)v2 < (unsigned __int16)v15 );
      v1 = v155;
      v5 = ProcessorNumber;
      v4 = a1;
      v13 = v151;
    }
    _InterlockedOr(v134, 0);
    dword_1C0093AA8 = (unsigned __int16)v15;
  }
  *(_WORD *)(v4 + 4596) |= 1u;
  KeReleaseSpinLock(&SpinLock, v13);
  if ( (v1 & 2) == 0 || (v1 & 0xFFFC) == 0 )
  {
LABEL_8:
    v7 = *(void **)(v4 + 4616);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x72446152u);
      *(_QWORD *)(v4 + 4616) = 0LL;
      *(_WORD *)(v4 + 4598) = 0;
    }
    return *(unsigned int *)&v5;
  }
  v24 = v1 >> 2;
  v157 = v24;
  v25 = v24 + 281;
  if ( (((_BYTE)v24 + 24) & 1) == 0 )
    v25 = v24 + 280;
  v26 = v25;
  v152 = v25;
  v27 = 0;
  v28 = (_WORD *)sub_1C0007CF4(66LL, v25, 1917083986LL, *(_QWORD *)(v4 + 8));
  if ( !v28 )
  {
LABEL_50:
    v5 = (struct _PROCESSOR_NUMBER)-1073741670;
    goto LABEL_8;
  }
  v29 = *(unsigned __int16 *)(v4 + 4598);
  v30 = *(_QWORD *)(v4 + 8);
  v31 = v24 + 5;
  if ( (((_BYTE)v24 + 4) & 1) == 0 )
    v31 = v24 + 4;
  v139 = v31;
  v32 = (char *)sub_1C0007CF4(64LL, v31 * v29, 1917083986LL, v30);
  v137 = v32;
  if ( !v32 )
  {
    ExFreePoolWithTag(v28, 0x72446152u);
    goto LABEL_50;
  }
  v33 = 0;
  if ( *(_WORD *)(v4 + 4598) )
  {
    do
    {
      v34 = 0;
      v35 = 0;
      v36 = &v32[v33 * v31];
      *(_WORD *)v36 = v33;
      do
      {
        v37 = *(_BYTE *)((v33 << 6) + v35 + *(_QWORD *)(v4 + 4616));
        if ( v37 != -1 )
        {
          v38 = 0;
          if ( v34 )
          {
            while ( v36[v38 + 4] != v37 )
            {
              if ( ++v38 >= v34 )
                goto LABEL_61;
            }
          }
          else
          {
LABEL_61:
            v36[v34 + 4] = v37;
            ++*((_WORD *)v36 + 1);
            ++v34;
          }
        }
        ++v35;
      }
      while ( v35 < 0x40 );
      ++v33;
    }
    while ( v33 < *(_WORD *)(v4 + 4598) );
    v1 = v155;
    v26 = v152;
  }
  if ( !byte_1C0093B04 || (*(_BYTE *)(v4 + 4307) & 0x10) == 0 )
  {
    v90 = 0;
    if ( KeQueryHighestNodeNumber() != -1 )
    {
      v91 = (struct _GROUP_AFFINITY *)(v28 + 132);
      do
      {
        memset_0(v28, 0, v26);
        KeQueryNodeActiveAffinity(v27, v91, v28);
        if ( *v28 )
        {
          Mask = v91->Mask;
          v93 = 0;
          v94 = 0;
          for ( i = 0; Mask; Mask >>= 1 )
          {
            if ( (Mask & 1) != 0 )
            {
              v96 = v93++;
              *(_DWORD *)&v28[2 * v96 + 2] = i;
            }
            ++i;
          }
          LOWORD(v97) = *v28;
          v98 = 0;
          if ( *v28 )
          {
            do
            {
              v99 = 0;
              v100 = *(_QWORD *)(v4 + 4616);
              v101 = (unsigned __int16)v28[136] << 6;
              v102 = *(_BYTE *)((unsigned int)(v101 + *(_DWORD *)&v28[2 * v98 + 2]) + v100);
              if ( v102 == -1 )
              {
                ++v94;
              }
              else
              {
                v103 = *((unsigned int *)v28 + 65);
                v104 = 0;
                if ( !(_DWORD)v103 )
                  goto LABEL_184;
                v105 = *(_BYTE *)((unsigned int)(v101 + *(_DWORD *)&v28[2 * v98 + 2]) + v100);
                do
                {
                  if ( v105 == *((_BYTE *)v28 + v104 + 280) )
                    v99 = 1;
                  ++v104;
                }
                while ( v104 < (unsigned int)v103 );
                if ( !v99 )
                {
LABEL_184:
                  *((_BYTE *)v28 + v103 + 280) = v102;
                  ++*((_DWORD *)v28 + 65);
                }
              }
              v97 = (unsigned __int16)*v28;
              ++v98;
            }
            while ( v98 < v97 );
            v91 = (struct _GROUP_AFFINITY *)(v28 + 132);
            v90 = 0;
          }
          v106 = *((_DWORD *)v28 + 65);
          LOWORD(v107) = 0;
          if ( v106 )
          {
            if ( v94 )
            {
              v108 = 0;
              v109 = (v94 + v106 - 1) / v106;
              v110 = 0;
              if ( (_WORD)v97 )
              {
                do
                {
                  v111 = *(_QWORD *)(v4 + 4616);
                  if ( *(_BYTE *)(((unsigned __int16)v28[136] << 6) + *(_DWORD *)&v28[2 * v110 + 2] + v111) == 0xFF )
                  {
                    ++v108;
                    *(_BYTE *)(((unsigned __int16)v28[136] << 6) + *(_DWORD *)&v28[2 * v110 + 2] + v111) = *((_BYTE *)v28 + (unsigned __int16)v107 + 280);
                    if ( v108 == v109 )
                    {
                      v108 = 0;
                      v107 = ((unsigned int)(unsigned __int16)v107 + 1) % *((_DWORD *)v28 + 65);
                    }
                  }
                  ++v110;
                }
                while ( v110 < (unsigned __int16)*v28 );
                v91 = (struct _GROUP_AFFINITY *)(v28 + 132);
              }
            }
          }
        }
        LOWORD(v27) = v27 + 1;
        v26 = v152;
      }
      while ( (unsigned __int16)v27 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
      v1 = v155;
    }
    ExFreePoolWithTag(v28, 0x72446152u);
    v154 = 0;
    if ( *(_WORD *)(v4 + 4598) )
    {
      v112 = (char *)v137;
      do
      {
        v113 = v90;
        v114 = &v112[v90 * v139];
        if ( *((_WORD *)v114 + 1) )
        {
          v115 = *((unsigned __int16 *)v114 + 1);
          v116 = (v115 + KeQueryActiveProcessorCountEx(v90) - 1) / v115;
          if ( v116 != 1 )
          {
            LOWORD(v117) = 0;
            v118 = v90 << 6;
            v119 = 0;
            for ( j = 0; j < 0x40; ++j )
            {
              v121 = *(_QWORD *)(v4 + 4616);
              if ( *(_BYTE *)(v118 + j + v121) == 0xFF )
              {
                ++v119;
                *(_BYTE *)(v118 + j + v121) = v114[(unsigned __int16)v117 + 4];
                if ( v119 == v116 - 1 )
                {
                  v119 = 0;
                  v117 = ((unsigned int)(unsigned __int16)v117 + 1) % *((unsigned __int16 *)v114 + 1);
                }
              }
            }
            v112 = (char *)v137;
          }
        }
        else
        {
          LOWORD(v122) = 0;
          v123 = KeQueryActiveProcessorCountEx(v90);
          v124 = v139;
          v125 = 0;
          v126 = 0;
          v127 = 0;
          v128 = v113 << 6;
          v135 = (v157 + v123 - 1) / v157;
          v129 = v135;
          v130 = v112;
          do
          {
            v131 = *(_QWORD *)(v4 + 4616);
            if ( *(_BYTE *)(v128 + v127 + v131) == 0xFF )
            {
              if ( !*((_WORD *)v130 + 1) )
              {
                v132 = (unsigned __int16)v122;
                do
                {
                  v133 = (v132 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4598);
                  v132 = (unsigned __int16)v133;
                  LOWORD(v122) = v133;
                  v130 = (char *)v137 + v124 * (unsigned __int16)v133;
                }
                while ( !*((_WORD *)v130 + 1) );
                v4 = a1;
                v129 = v135;
                v112 = (char *)v137;
              }
              *(_BYTE *)(v128 + v127 + v131) = v130[v125 + 4];
              if ( ++v126 == v129 )
              {
                ++v125;
                v126 = 0;
                if ( v125 == *((_WORD *)v130 + 1) )
                {
                  v125 = 0;
                  v122 = ((unsigned int)(unsigned __int16)v122 + 1) % *(unsigned __int16 *)(v4 + 4598);
                  v130 = &v112[v124 * v122];
                }
              }
            }
            ++v127;
          }
          while ( v127 < 0x40 );
          v90 = v154;
        }
        v154 = ++v90;
      }
      while ( v90 < *(_WORD *)(v4 + 4598) );
      v1 = v155;
    }
    ExFreePoolWithTag(v137, 0x72446152u);
    LODWORD(v45) = 0;
    goto LABEL_163;
  }
  v139 = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( v24 >= v139 )
  {
    v43 = 0LL;
    LODWORD(v45) = 0;
    goto LABEL_164;
  }
  ProcessorNumber = 0;
  memset_0(&Dst, 0, sizeof(Dst));
  memset_0(&Information, 0, sizeof(Information));
  v39 = *(_QWORD *)(v4 + 8);
  Length = 80;
  v40 = 1024;
  v41 = 0LL;
  if ( dword_1C0093AE0 )
    v40 = dword_1C0093AE0;
  v158 = 0;
  v42 = v40;
  v135 = 0;
  v153 = 0;
  v150 = 0;
  v136 = sub_1C0007CF4(64LL, 56LL * v40, 1917083986LL, v39);
  v43 = (void *)v136;
  if ( !v136 )
    return (unsigned int)-1073741670;
  v44 = (char *)sub_1C0007CF4(64LL, 2 * v40, 1917083986LL, *(_QWORD *)(v4 + 8));
  LODWORD(v45) = 0;
  P = v44;
  v46 = v44;
  if ( v44 )
  {
    v141 = 0;
    v137 = &v44[v42];
    if ( !v139 )
      goto LABEL_164;
    v47 = &v44[v42];
    v48 = 1;
    while ( 1 )
    {
      v49 = v45;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v27, &ProcessorNumber);
      LODWORD(v45) = 0;
      if ( ProcessorNumberFromIndex < 0
        || (v51 = KeQueryLogicalProcessorRelationship(
                    &ProcessorNumber,
                    RelationGroup|RelationProcessorPackage,
                    &Dst,
                    &Length),
            LODWORD(v45) = 0,
            v51 < 0) )
      {
        v56 = v136;
        goto LABEL_137;
      }
      v52 = 0;
      v53 = 0;
      v54 = KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationProcessorCore, &Information, &Length);
      LODWORD(v45) = 0;
      v55 = 0;
      if ( v54 >= 0 )
        v55 = Information.Processor.Reserved[0];
      LODWORD(v142) = v55;
      if ( (_DWORD)v41 )
      {
        v56 = v136;
        v45 = (unsigned int)v41;
        v57 = v136 + 40;
        do
        {
          if ( *(_WORD *)(v57 + 8) == Dst.Processor.GroupMask[0].Group
            && *(_QWORD *)v57 == Dst.Processor.GroupMask[0].Mask )
          {
            v49 = v145;
          }
          v57 += 56LL;
          --v45;
        }
        while ( v45 );
        if ( v49 )
          goto LABEL_136;
      }
      v58 = v136;
      v59 = 56LL * (unsigned int)v41;
      *(_BYTE *)(v59 + v136 + 33) = -1;
      v60 = Dst.Processor.GroupMask[0].Mask;
      if ( !Dst.Processor.GroupMask[0].Mask )
        goto LABEL_135;
      v61 = v135;
      v62 = v153;
      while ( v60 )
      {
LABEL_90:
        if ( _bittest64((const __int64 *)&v60, v52) )
          break;
        ++v52;
      }
      v60 &= ~(1LL << v52);
      if ( *(_BYTE *)(v52 + (Dst.Processor.GroupMask[0].Group << 6) + *(_QWORD *)(v4 + 4616)) == 0xFF )
      {
        if ( !v53 )
        {
          v53 = 1;
          if ( *(_BYTE *)(v59 + v58 + 33) == 0xFF )
            *(_BYTE *)(v59 + v58 + 33) = v55;
        }
      }
      else
      {
        if ( *(_BYTE *)(v59 + v58 + 33) == 0xFF )
          *(_BYTE *)(v59 + v58 + 33) = v55;
        v63 = *(unsigned __int8 *)(v59 + v58 + 32);
        if ( (unsigned __int8)v63 < 0x20u )
        {
          *(_BYTE *)(v59 + v63 + v58) = *(_BYTE *)(v52 + (Dst.Processor.GroupMask[0].Group << 6) + *(_QWORD *)(v4 + 4616));
          ++*(_BYTE *)(v59 + v58 + 32);
          v64 = *(_BYTE *)(v52 + (Dst.Processor.GroupMask[0].Group << 6) + *(_QWORD *)(v4 + 4616));
          if ( (_BYTE)v55 )
          {
            v66 = v62++;
            v47[v66] = v64;
          }
          else
          {
            v65 = v61++;
            *((_BYTE *)P + v65) = v64;
          }
          LODWORD(v45) = 0;
        }
      }
      ++v52;
      if ( v60 )
        goto LABEL_90;
      v153 = v62;
      LODWORD(v41) = v158;
      v135 = v61;
      v27 = v141;
      if ( !v53 )
        goto LABEL_135;
      v67 = Dst.Processor.GroupMask[0].Mask;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      if ( !Dst.Processor.GroupMask[0].Mask )
      {
        LODWORD(v45) = 0;
        goto LABEL_132;
      }
      v71 = v142;
      while ( 2 )
      {
        while ( 1 )
        {
          v72 = v45;
          v73 = v45;
          if ( !v67 || _bittest64((const __int64 *)&v67, v70) )
            break;
          ++v70;
        }
        v74 = *(_QWORD *)(v4 + 4616);
        v67 &= ~(1LL << v70);
        v75 = v70 + (Dst.Processor.GroupMask[0].Group << 6);
        if ( *(_BYTE *)(v75 + v74) != 0xFF )
          goto LABEL_125;
        if ( !*(_BYTE *)(v59 + v136 + 32) )
        {
          if ( v71 )
          {
            if ( v153 )
            {
              v77 = *((_BYTE *)v137 + (unsigned int)v45);
              LODWORD(v45) = ((int)v45 + 1) % v153;
              if ( v68 > v73 )
                v72 = v68;
              v68 = v72;
              goto LABEL_124;
            }
          }
          else if ( v135 )
          {
            v77 = *((_BYTE *)P + (unsigned int)v45);
            LODWORD(v45) = ((int)v45 + 1) % v135;
            if ( v68 > v73 )
              v73 = v68;
            v68 = v73;
LABEL_124:
            *(_BYTE *)(v75 + v74) = v77;
            goto LABEL_125;
          }
          v69 = 1;
          v58 = v136;
          goto LABEL_126;
        }
        v76 = *(_BYTE *)(v59 + (unsigned int)v45 + v136);
        if ( v76 != -1 )
        {
          *(_BYTE *)(v75 + v74) = v76;
          v58 = v136;
          LODWORD(v45) = ((int)v45 + 1) % (unsigned int)*(unsigned __int8 *)(v59 + v136 + 32);
          goto LABEL_126;
        }
LABEL_125:
        v58 = v136;
LABEL_126:
        ++v70;
        if ( v67 )
          continue;
        break;
      }
      LODWORD(v41) = v158;
      v27 = v141;
      LODWORD(v45) = 0;
      v47 = (char *)v137;
      if ( v69 )
      {
        v78 = v150;
        if ( !v150 )
          v78 = 1;
        v150 = v78;
      }
LABEL_132:
      if ( !*(_BYTE *)(v59 + v58 + 32) && !v69 )
        *(_BYTE *)(v59 + v58 + 32) = v68 + 1;
LABEL_135:
      v41 = (unsigned int)(v41 + 1);
      v56 = v136;
      *(_WORD *)(v59 + v58 + 48) = Dst.Processor.GroupMask[0].Group;
      *(_QWORD *)(v59 + v58 + 40) = Dst.Processor.GroupMask[0].Mask;
      v158 = v41;
LABEL_136:
      v48 = 1;
LABEL_137:
      v141 = ++v27;
      if ( v27 >= v139 )
      {
        v1 = v155;
        if ( v150 )
        {
          v79 = 0LL;
          v80 = 0;
          if ( (_DWORD)v41 )
          {
            v81 = v135;
            v82 = (unsigned __int8 *)(v56 + 32);
            while ( *v82 != (_BYTE)v45 )
            {
LABEL_161:
              v82 += 56;
              if ( !--v41 )
              {
                v1 = v155;
                goto LABEL_163;
              }
            }
            v83 = -1;
            if ( v82[1] != 1 || (v84 = v153) == 0 )
            {
              if ( v81 )
              {
                v79 = P;
                v48 = v81;
LABEL_150:
                v85 = *((_QWORD *)v82 + 1);
                for ( k = v45; v85; LODWORD(v45) = 0 )
                {
                  while ( !_bittest64(&v85, k) )
                    ++k;
                  v87 = *(_QWORD *)(v4 + 4616);
                  v85 &= ~(1LL << k);
                  v88 = k + (*((unsigned __int16 *)v82 + 8) << 6);
                  if ( *(_BYTE *)(v88 + v87) == 0xFF )
                  {
                    if ( v83 == -1 )
                    {
                      *(_BYTE *)(k + (*((unsigned __int16 *)v82 + 8) << 6) + v87) = v79[v80];
                      v89 = v80 + 1;
                      if ( v80 + 1 <= *v82 )
                        v89 = *v82;
                      *v82 = v89;
                      v80 = (v80 + 1) % v48;
                    }
                    else
                    {
                      *(_BYTE *)(v88 + v87) = v83;
                      *v82 = 1;
                    }
                  }
                  ++k;
                }
                v48 = 1;
                goto LABEL_161;
              }
              v84 = v153;
              if ( !v153 )
              {
                v83 = v45;
                goto LABEL_150;
              }
            }
            v79 = v137;
            v48 = v84;
            goto LABEL_150;
          }
        }
LABEL_163:
        v43 = (void *)v136;
LABEL_164:
        v46 = P;
        *(_WORD *)(v4 + 4596) = *(_WORD *)(v4 + 4596) & 1 | v1 & 0xFFFE | 2;
        v5 = (struct _PROCESSOR_NUMBER)v45;
        if ( !v43 )
          goto LABEL_166;
        goto LABEL_165;
      }
    }
  }
  v5 = (struct _PROCESSOR_NUMBER)-1073741670;
LABEL_165:
  ExFreePoolWithTag(v43, 0x72446152u);
LABEL_166:
  if ( v46 )
    ExFreePoolWithTag(v46, 0x72446152u);
  return *(unsigned int *)&v5;
}
