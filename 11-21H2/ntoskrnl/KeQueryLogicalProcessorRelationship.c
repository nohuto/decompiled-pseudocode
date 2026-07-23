/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x140263790
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_140263260 @ 0x140263260 (sub_140263260.c)
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     sub_140264270 @ 0x140264270 (sub_140264270.c)
 *     sub_14026428C @ 0x14026428C (sub_14026428C.c)
 *     sub_140264320 @ 0x140264320 (sub_140264320.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  LOGICAL_PROCESSOR_RELATIONSHIP v4; // ebx
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v5; // rsi
  _PROCESSOR_NUMBER *v6; // r13
  NTSTATUS v8; // r15d
  unsigned int v9; // r14d
  char *v10; // rdi
  unsigned int v11; // ecx
  int v12; // edx
  __int64 v13; // r12
  char *v14; // rax
  char **v15; // rcx
  __int64 v16; // rdx
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v18; // eax
  unsigned __int16 *v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  _WORD *v22; // r9
  __int64 v23; // r12
  unsigned int v24; // ebx
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  WORD v29; // r10
  KAFFINITY v30; // r11
  int v32; // r8d
  int v33; // eax
  int v34; // edx
  unsigned int v35; // eax
  unsigned int v36; // r12d
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // r12
  size_t v40; // r13
  int v41; // eax
  _WORD *v42; // rcx
  bool v43; // al
  unsigned int v44; // eax
  __int64 v45; // rbx
  __int64 v46; // r12
  _WORD *v47; // r8
  __int64 v48; // r13
  int v49; // eax
  __int64 v50; // r9
  WORD Group; // r10
  WORD v52; // dx
  unsigned __int16 v53; // cx
  unsigned int v54; // r8d
  __int64 v55; // r13
  _DWORD *Pool2; // rax
  __int16 v57; // r15
  _DWORD *v58; // rdi
  size_t v59; // r14
  KAFFINITY v60; // rcx
  unsigned __int16 v61; // r11
  unsigned __int16 v62; // ax
  unsigned __int16 v63; // dx
  int v64; // r8d
  int v65; // eax
  bool v66; // zf
  BYTE v67; // al
  unsigned int v68; // r12d
  unsigned int v69; // ebx
  unsigned __int16 v70; // dx
  WORD v71; // cx
  __int64 v72; // r9
  unsigned int v73; // edx
  KAFFINITY v74; // rcx
  unsigned __int16 v75; // r10
  WORD v76; // r8
  unsigned __int16 v77; // ax
  int v78; // r8d
  int v79; // eax
  __int64 v80; // r12
  size_t v81; // r13
  size_t v82; // r8
  KAFFINITY v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r11
  __int64 v87; // rcx
  __int64 v88; // rax
  int v89; // [rsp+28h] [rbp-E0h]
  unsigned int v90; // [rsp+58h] [rbp-B0h] BYREF
  NTSTATUS v91; // [rsp+5Ch] [rbp-ACh]
  __int64 v92; // [rsp+60h] [rbp-A8h]
  __int64 Size; // [rsp+68h] [rbp-A0h]
  size_t Size_8[2]; // [rsp+70h] [rbp-98h] BYREF
  ULONG v95; // [rsp+80h] [rbp-88h]
  _WORD *v96; // [rsp+88h] [rbp-80h]
  PVOID P; // [rsp+90h] [rbp-78h]
  __int64 v98; // [rsp+98h] [rbp-70h]
  __int64 v99; // [rsp+A0h] [rbp-68h]
  __int64 v100; // [rsp+A8h] [rbp-60h]
  _QWORD v101[18]; // [rsp+B8h] [rbp-50h] BYREF
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v104; // [rsp+168h] [rbp+60h] BYREF
  PULONG v105; // [rsp+170h] [rbp+68h]

  v105 = Length;
  v104 = Information;
  v4 = RelationshipType;
  v5 = Information;
  v6 = ProcessorNumber;
  memset(v101, 0, 0x50uLL);
  v92 = *Length;
  v8 = 0;
  v9 = 0;
  LOWORD(v90) = word_140D05018;
  v10 = 0LL;
  v11 = 0;
  P = 0LL;
  v12 = 236;
  Size = 8LL * (unsigned __int16)word_140D05018;
  v13 = Size + 8;
  if ( (((unsigned int)v4 <= RelationProcessorModule && _bittest(&v12, v4) || v4 == RelationAll)
     && (v4 == RelationAll || (v11 = 1, v4 == RelationCache))
     && (v11 = 6, v4 == RelationAll)
     || v4 == RelationProcessorCore)
    && (++v11, v4 == RelationAll)
    || v4 == RelationProcessorPackage )
  {
    ++v11;
  }
  if ( v4 == RelationProcessorDie )
  {
    ++v11;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    ++v11;
  }
  if ( v11 )
  {
    v55 = v11;
    Pool2 = (_DWORD *)ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, v13 * v11, 1347178827LL);
    P = Pool2;
    if ( !Pool2 )
      return -1073741670;
    v57 = v90;
    v58 = Pool2 + 1;
    v59 = Size;
    do
    {
      *((_WORD *)v58 - 2) = 1;
      *((_WORD *)v58 - 1) = v57;
      *v58 = 0;
      memset(v58 + 1, 0, v59);
      v58 = (_DWORD *)((char *)v58 + v13);
      --v55;
    }
    while ( v55 );
    v9 = HIDWORD(v92);
    v5 = v104;
    v8 = HIDWORD(v92);
    v4 = RelationshipType;
    v12 = 236;
    v6 = ProcessorNumber;
    v10 = (char *)P;
  }
  v14 = v10;
  if ( (unsigned int)v4 <= RelationProcessorModule && _bittest(&v12, v4) || v4 == RelationAll )
  {
    v101[0] = v10;
    v14 = &v10[v13];
    if ( v4 == RelationCache || v4 == RelationAll )
    {
      v15 = (char **)&v101[1];
      v16 = 5LL;
      do
      {
        *v15 = v14;
        v14 += v13;
        ++v15;
        --v16;
      }
      while ( v16 );
      if ( v4 == RelationAll )
        goto LABEL_186;
    }
  }
  if ( v4 == RelationProcessorCore )
  {
LABEL_186:
    v101[6] = v14;
    v14 += v13;
    if ( v4 == RelationAll )
      goto LABEL_109;
  }
  if ( v4 == RelationProcessorPackage )
  {
LABEL_109:
    v101[7] = v14;
    v14 += v13;
  }
  if ( v4 == RelationProcessorDie )
  {
    v101[8] = v14;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    v101[9] = v14;
  }
  if ( !v6 )
  {
    ProcessorIndexFromNumber = 0;
    v91 = 0;
    v18 = dword_140D06884 - 1;
    goto LABEL_30;
  }
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v6);
  v91 = ProcessorIndexFromNumber;
  if ( ProcessorIndexFromNumber < (unsigned int)dword_140D06884 )
  {
    v18 = ProcessorIndexFromNumber;
LABEL_30:
    v19 = (unsigned __int16 *)v101[0];
    v95 = v18;
    v20 = ProcessorIndexFromNumber;
    HIDWORD(v92) = ProcessorIndexFromNumber;
    v21 = 0x140000000uLL;
    *(_OWORD *)Size_8 = 0LL;
    if ( ProcessorIndexFromNumber <= v18 )
    {
      v22 = (_WORD *)v101[6];
      v100 = v101[9];
      v99 = v101[8];
      v98 = v101[7];
      v96 = (_WORD *)v101[6];
      while ( 1 )
      {
        v23 = qword_140D088C0[ProcessorIndexFromNumber];
        Size = v23;
        if ( v4 == RelationProcessorPackage || v4 == RelationAll )
        {
          sub_140300030(v19, v19[1], v23 + 34576);
          LODWORD(v104) = 0;
          v90 = 0;
          LOBYTE(v32) = v6 != 0LL;
          v33 = sub_140264320((_DWORD)v19, v98, v32, 3, (__int64)v5, v92, v9, (__int64)&v104, (__int64)&v90);
          v9 += (unsigned int)v104;
          if ( v33 < 0 )
          {
            v8 = v33;
          }
          else if ( v90 )
          {
            v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v90);
          }
          v22 = v96;
        }
        if ( v4 && v4 != RelationAll )
          goto LABEL_36;
        v39 = *(unsigned __int8 *)(v23 + 208);
        LOWORD(Size_8[1]) = v39;
        v40 = *(_QWORD *)(Size + 34912);
        Size_8[0] = v40;
        v41 = KeAndGroupAffinityEx(v22, (__int64)Size_8, 0LL);
        if ( ProcessorNumber || !v41 )
          break;
        v23 = Size;
LABEL_103:
        v6 = ProcessorNumber;
LABEL_36:
        if ( v4 == RelationProcessorDie )
        {
          sub_140300030(v19, v19[1], v23 + 38720);
          LODWORD(v104) = 0;
          v90 = 0;
          LOBYTE(v78) = v6 != 0LL;
          v79 = sub_140264320((_DWORD)v19, v99, v78, 5, (__int64)v5, v92, v9, (__int64)&v104, (__int64)&v90);
          v9 += (unsigned int)v104;
          if ( v79 >= 0 )
          {
            if ( v90 )
              v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v90);
          }
          else
          {
            v8 = v79;
          }
        }
        else
        {
          if ( v4 == RelationAll || v4 == RelationProcessorModule )
          {
            sub_140300030(v19, v19[1], v23 + 39056);
            LODWORD(v104) = 0;
            v90 = 0;
            LOBYTE(v64) = v6 != 0LL;
            v65 = sub_140264320((_DWORD)v19, v100, v64, 7, (__int64)v5, v92, v9, (__int64)&v104, (__int64)&v90);
            v9 += (unsigned int)v104;
            if ( v65 < 0 )
            {
              v8 = v65;
            }
            else if ( v90 )
            {
              v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v90);
            }
          }
          if ( v4 == RelationAll || v4 == RelationCache )
          {
            v44 = 0;
            LODWORD(v104) = 0;
            if ( *(_DWORD *)(v23 + 34452) )
            {
              v45 = Size;
              while ( 1 )
              {
                v46 = v44;
                Size = v44;
                v47 = (_WORD *)(264LL * v44 + v45 + 40632);
                if ( !dword_140D06D34 )
                {
                  sub_140300030(v19, v19[1], v47);
                  goto LABEL_85;
                }
                v80 = *(unsigned __int8 *)(v45 + 208);
                LOWORD(Size_8[1]) = v80;
                if ( (unsigned __int16)v80 >= *v47 )
                  v81 = 0LL;
                else
                  v81 = *(_QWORD *)&v47[4 * v80 + 4];
                v82 = 8LL * *v19;
                Size_8[0] = v81;
                memset(v19 + 4, 0, v82);
                *v19 = 1;
                if ( !(_WORD)v80 )
                  goto LABEL_170;
                if ( v19[1] > (unsigned __int16)v80 )
                  break;
LABEL_171:
                v46 = Size;
LABEL_85:
                v48 = v101[v46 + 1];
                v49 = sub_1402FF140(v19, v48, 0LL, 0LL);
                if ( ProcessorNumber || !v49 )
                {
                  v50 = 0LL;
                  if ( v48 )
                    v50 = *(unsigned __int16 *)(v48 + 2);
                  sub_1402FEC10(v19, v48, v48, v50, v89);
                  v6 = ProcessorNumber;
                  if ( ProcessorNumber )
                  {
                    Group = ProcessorNumber->Group;
                  }
                  else
                  {
                    KeFirstGroupAffinityEx(Size_8, v19);
                    Group = Size_8[1];
                  }
                  v52 = 0;
                  v53 = 0;
                  if ( *v19 )
                  {
                    do
                    {
                      if ( *(_QWORD *)&v19[4 * v53 + 4] )
                        ++v52;
                      ++v53;
                    }
                    while ( v53 < *v19 );
                    v6 = ProcessorNumber;
                  }
                  v54 = (16 * v52 + 47) & 0xFFFFFFF8;
                  v9 += v54;
                  if ( v9 <= (unsigned int)v92 )
                  {
                    v5->Relationship = RelationCache;
                    v5->Size = v54;
                    v5->Processor.Flags = *(_BYTE *)(v45 + 12 * v46 + 34392);
                    v5->Processor.EfficiencyClass = *(_BYTE *)(v45 + 12 * v46 + 34393);
                    v5->Cache.LineSize = *(_WORD *)(v45 + 12 * v46 + 34394);
                    v5->Cache.CacheSize = *(_DWORD *)(v45 + 12 * v46 + 34396);
                    v5->Cache.Type = *(_DWORD *)(v45 + 12 * v46 + 34400);
                    v5->Cache.GroupCount = v52;
                    *(_OWORD *)&v5->Group.Reserved[8] = 0LL;
                    *(_WORD *)&v5->Group.GroupInfo[0].Reserved[2] = 0;
                    LOWORD(Size_8[1]) = Group;
                    if ( Group >= *v19 )
                      v60 = 0LL;
                    else
                      v60 = *(_QWORD *)&v19[4 * Group + 4];
                    *(_OWORD *)&v5->Group.GroupInfo[0].Reserved[6] = 0LL;
                    v5->Cache.GroupMask.Group = Group;
                    v5->Cache.GroupMask.Mask = v60;
                    v61 = 1;
                    v62 = *v19;
                    v63 = 0;
                    Size_8[0] = v60;
                    if ( v62 )
                    {
                      do
                      {
                        if ( v63 != Group )
                        {
                          LOWORD(Size_8[1]) = v63;
                          if ( v63 >= v62 )
                          {
                            Size_8[0] = 0LL;
                          }
                          else
                          {
                            v83 = *(_QWORD *)&v19[4 * v63 + 4];
                            Size_8[0] = v83;
                            if ( v83 )
                            {
                              v84 = 2LL * v61;
                              v85 = 2 * (v61++ + 3LL);
                              *(_QWORD *)&v5->Group.GroupInfo[0].Reserved[8 * v84 + 14] = 0LL;
                              *((_WORD *)&v5->Relationship + 4 * v85) = v63;
                              *(&v5->Cache.GroupMask.Mask + v84) = v83;
                            }
                          }
                        }
                        v62 = *v19;
                        ++v63;
                      }
                      while ( v63 < *v19 );
                      v6 = ProcessorNumber;
                    }
                    v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v54);
                  }
                  else
                  {
                    v8 = -1073741820;
                  }
                }
                else
                {
                  v6 = 0LL;
                }
                v44 = (_DWORD)v104 + 1;
                LODWORD(v104) = v44;
                if ( v44 >= *(_DWORD *)(v45 + 34452) )
                {
                  v4 = RelationshipType;
                  goto LABEL_41;
                }
              }
              *v19 = v80 + 1;
LABEL_170:
              *(_QWORD *)&v19[4 * v80 + 4] |= v81;
              goto LABEL_171;
            }
          }
        }
LABEL_41:
        v22 = v96;
        ProcessorIndexFromNumber = v91 + 1;
        v91 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber > v95 )
        {
          v20 = HIDWORD(v92);
          v21 = 0x140000000uLL;
          goto LABEL_43;
        }
      }
      v42 = v96;
      if ( *v96 <= (unsigned __int16)v39 )
      {
        if ( v96[1] <= (unsigned __int16)v39 )
        {
LABEL_79:
          v23 = Size;
          v43 = *(_QWORD *)(Size + 200) != v40;
          v9 += 48;
          if ( v9 <= (unsigned int)v92 )
          {
            v66 = dword_140D068FC == 0;
            v5->Relationship = RelationProcessorCore;
            v5->Size = 48;
            v5->Processor.Flags = v43;
            if ( v66 )
              v67 = *(_BYTE *)(v23 + 34059);
            else
              v67 = *(_BYTE *)(v23 + 34056);
            v5->Processor.EfficiencyClass = v67;
            v5->Processor.GroupCount = 1;
            *(_OWORD *)((char *)&v5->NumaNode.NodeNumber + 2) = 0LL;
            *(_DWORD *)&v5->Group.Reserved[14] = 0;
            *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            v5->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v23 + 208);
            v5->Processor.GroupMask[0].Mask = *(_QWORD *)(v23 + 34912);
            v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + 48);
          }
          else
          {
            v8 = -1073741820;
          }
          goto LABEL_103;
        }
        *v96 = v39 + 1;
      }
      *(_QWORD *)&v42[4 * v39 + 4] |= v40;
      goto LABEL_79;
    }
LABEL_43:
    if ( v4 == RelationNumaNode )
    {
      v24 = (unsigned __int16)word_140D05000;
      v25 = 0LL;
      v26 = (unsigned int)v20;
      do
      {
        v27 = *(_QWORD *)(v21 + 8LL * (unsigned int)v25 + 13833984);
        if ( v6 )
          v28 = *(_QWORD *)(v27 + 8LL * v6->Group + 24);
        else
          v28 = sub_140264270(v27, v20, v21, v25);
        if ( v28 )
        {
          sub_14026428C(v28, Size_8, 0LL);
          v29 = Size_8[1];
          v20 = 0LL;
          v30 = Size_8[0];
          if ( !v6
            || (LOBYTE(v20) = (unsigned int)dword_140D0E5E0[v26] >> 6 == LOWORD(Size_8[1]),
                ((unsigned int)v20 & (unsigned int)(Size_8[0] >> (dword_140D0E5E0[v26] & 0x3F))) != 0) )
          {
            v9 += 48;
            v21 = 0x140000000uLL;
            if ( v9 > (unsigned int)v92 )
            {
              v8 = -1073741820;
            }
            else
            {
              v5->Size = 48;
              v5->NumaNode.NodeNumber = v25;
              v5->Relationship = RelationNumaNode;
              *(_DWORD *)&v5->Group.Reserved[16] = 0x10000;
              *(_OWORD *)v5->Group.Reserved = 0LL;
              *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
              v5->Processor.GroupMask[0].Group = v29;
              v5->Processor.GroupMask[0].Mask = v30;
              v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + 48);
            }
          }
          else
          {
            v21 = 0x140000000uLL;
          }
        }
        v25 = (unsigned int)(v25 + 1);
      }
      while ( (unsigned int)v25 < v24 );
      goto LABEL_57;
    }
    v91 = v8;
    if ( v4 == RelationNumaNodeEx || (v91 = v8, v4 == RelationAll) )
    {
      v68 = 0;
      if ( word_140D05000 )
      {
        v69 = v92;
        do
        {
          if ( !v6 || *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[(unsigned int)v20] + 192) + 138LL) == v68 )
          {
            sub_140263260(v68, v19, 0LL);
            v70 = 0;
            v71 = 0;
            v72 = *(unsigned __int8 *)(qword_140D31700[v68] + 12);
            if ( *v19 )
            {
              do
              {
                if ( *(_QWORD *)&v19[4 * v70 + 4] )
                  ++v71;
                ++v70;
              }
              while ( v70 < *v19 );
              v6 = ProcessorNumber;
              if ( v71 )
              {
                v73 = (16 * v71 + 39) & 0xFFFFFFF8;
                v9 += v73;
                if ( v9 <= v69 )
                {
                  v5->Size = v73;
                  v5->NumaNode.NodeNumber = v68;
                  v5->Relationship = RelationNumaNode;
                  v5->Processor.GroupCount = v71;
                  *(_OWORD *)v5->Group.Reserved = 0LL;
                  *(_WORD *)&v5->Group.Reserved[16] = 0;
                  if ( (unsigned __int16)v72 >= *v19 )
                    v74 = 0LL;
                  else
                    v74 = *(_QWORD *)&v19[4 * v72 + 4];
                  *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
                  v5->Processor.GroupMask[0].Group = v72;
                  v75 = 1;
                  v5->Processor.GroupMask[0].Mask = v74;
                  v76 = 0;
                  v77 = *v19;
                  if ( *v19 )
                  {
                    do
                    {
                      if ( v76 != (_WORD)v72 && v76 < v77 )
                      {
                        v86 = *(_QWORD *)&v19[4 * v76 + 4];
                        if ( v86 )
                        {
                          v87 = v75;
                          v88 = 2 * (v75++ + 2LL);
                          *((_QWORD *)&v5->Processor.Flags + v88) = 0LL;
                          v5->Processor.GroupMask[v87].Group = v76;
                          *((_QWORD *)&v5->Relationship + v88) = v86;
                        }
                      }
                      v77 = *v19;
                      ++v76;
                    }
                    while ( v76 < *v19 );
                    v6 = ProcessorNumber;
                    v69 = v92;
                  }
                  v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v73);
                }
                else
                {
                  v8 = -1073741820;
                }
              }
            }
            LODWORD(v20) = HIDWORD(v92);
          }
          ++v68;
        }
        while ( v68 < (unsigned __int16)word_140D05000 );
        v4 = RelationshipType;
        v91 = v8;
      }
    }
    if ( v4 != RelationGroup )
    {
      if ( v4 != RelationAll || v6 )
        goto LABEL_57;
      v91 = v8;
    }
    v34 = (unsigned __int16)word_140D05014;
    v35 = (48 * (unsigned __int16)word_140D05014 + 39) & 0xFFFFFFF8;
    v9 += v35;
    HIDWORD(v92) = v9;
    if ( v9 > (unsigned int)v92 )
    {
      v8 = -1073741820;
LABEL_60:
      v10 = (char *)P;
      *v105 = v9;
      goto LABEL_61;
    }
    v5->Size = v35;
    v36 = 0;
    v5->Group.MaximumGroupCount = word_140D05018;
    v5->Relationship = RelationGroup;
    v5->Cache.LineSize = v34;
    *(_OWORD *)v5->Group.Reserved = 0LL;
    *(_DWORD *)&v5->Group.Reserved[16] = 0;
    if ( v34 )
    {
      do
      {
        v37 = v36;
        v38 = v36;
        v5->Cache.Reserved[48 * v36 + 12] = KeQueryMaximumProcessorCountEx(v36);
        v5->Cache.Reserved[48 * v36 + 13] = KeQueryActiveProcessorCountEx(v36);
        ++v36;
        v5->Group.GroupInfo[v38].ActiveProcessorMask = qword_140D06E48[v37];
        *(_OWORD *)v5->Group.GroupInfo[v38].Reserved = 0LL;
        *(_OWORD *)&v5->Group.GroupInfo[v38].Reserved[16] = 0LL;
        *(_DWORD *)&v5->Group.GroupInfo[v38].Reserved[32] = 0;
        *(_WORD *)&v5->Group.GroupInfo[v38].Reserved[36] = 0;
      }
      while ( v36 < (unsigned __int16)word_140D05014 );
      v9 = HIDWORD(v92);
      v8 = v91;
    }
LABEL_57:
    if ( !v8 && !v9 )
      v8 = -1073741823;
    goto LABEL_60;
  }
  v8 = -1073741811;
LABEL_61:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v8;
}
