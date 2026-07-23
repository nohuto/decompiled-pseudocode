/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x140305E80
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8F4 (KiGetProcessorEfficiencyClass.c)
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KiOrAffinityEx @ 0x1402C2A80 (KiOrAffinityEx.c)
 *     KeGetNodePrimarySubNode @ 0x1403058D4 (KeGetNodePrimarySubNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140306A28 (KeQueryNodeActiveAffinityEx.c)
 *     KiQuerySubNodeActiveAffinity @ 0x140307D4C (KiQuerySubNodeActiveAffinity.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140308B30 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeFirstGroupAffinityEx @ 0x140308FB0 (KeFirstGroupAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14033ADA0 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  LOGICAL_PROCESSOR_RELATIONSHIP v4; // ebx
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v5; // rsi
  _PROCESSOR_NUMBER *v7; // r11
  __int16 v8; // r13
  NTSTATUS v9; // r12d
  ULONG v10; // r14d
  char *v11; // rdi
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 Pool2; // rax
  size_t v18; // r14
  _DWORD *v19; // rdi
  char *v20; // rax
  char **v21; // rcx
  __int64 v22; // rdx
  PPROCESSOR_NUMBER v23; // r15
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v25; // eax
  unsigned __int16 *v26; // rdi
  ULONG v27; // edx
  unsigned __int64 v28; // r8
  __int64 v29; // r13
  int v30; // r8d
  int v31; // eax
  __int64 v32; // r15
  __int64 v33; // r12
  int v34; // eax
  __int64 v35; // rcx
  bool v36; // al
  int v37; // r8d
  int v38; // eax
  int v39; // r8d
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // r13
  unsigned __int16 *v44; // r8
  __int64 v45; // r15
  _PROCESSOR_NUMBER *v46; // r12
  size_t v47; // r8
  unsigned __int16 *v48; // r15
  int v49; // eax
  unsigned __int16 v50; // r9
  unsigned __int16 Group; // r10
  WORD v52; // r9
  unsigned __int16 v53; // dx
  unsigned int v54; // r8d
  unsigned __int64 v55; // rcx
  unsigned __int16 v56; // r11
  unsigned __int16 v57; // ax
  unsigned __int16 v58; // dx
  unsigned __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  DWORD v62; // ebx
  DWORD v63; // r10d
  __int64 v64; // rdi
  __int64 v65; // rcx
  __int64 NodePrimarySubNode; // rax
  unsigned __int16 v67; // r11
  int v68; // edx
  unsigned __int64 v69; // r9
  unsigned int v70; // r8d
  __int64 v71; // r13
  unsigned int v72; // r15d
  PPROCESSOR_NUMBER v73; // rbx
  WORD v74; // r8
  unsigned __int16 v75; // dx
  unsigned int v76; // edx
  unsigned __int64 v77; // rcx
  unsigned __int16 v78; // r8
  unsigned __int16 v79; // ax
  unsigned __int16 v80; // r11
  __int64 v81; // r10
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // edx
  unsigned int v85; // eax
  unsigned int v86; // r15d
  __int64 v87; // rbx
  __int64 v88; // rdi
  int v90; // [rsp+58h] [rbp-B0h]
  unsigned int v91; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG v92; // [rsp+60h] [rbp-A8h]
  NTSTATUS v93; // [rsp+64h] [rbp-A4h]
  __int64 v94; // [rsp+68h] [rbp-A0h]
  _QWORD Size[3]; // [rsp+70h] [rbp-98h] BYREF
  ULONG v96; // [rsp+88h] [rbp-80h]
  char *v97; // [rsp+90h] [rbp-78h]
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
  memset(v101, 0, 0x50uLL);
  v7 = 0LL;
  v8 = KiMaximumGroups;
  v9 = 0;
  v92 = *Length;
  v10 = 0;
  v90 = 0;
  Size[0] = 8LL * (unsigned __int16)KiMaximumGroups;
  v11 = 0LL;
  v93 = 0;
  v12 = 236;
  v97 = 0LL;
  v13 = 1LL;
  v14 = Size[0] + 8LL;
  v15 = 0;
  if ( ((v4 == RelationAll
      || (unsigned int)v4 <= RelationProcessorModule && _bittest(&v12, v4) && (v15 = 1, v4 == RelationCache))
     && (v15 = 6, v4 == RelationAll)
     || v4 == RelationProcessorCore)
    && (++v15, v4 == RelationAll)
    || v4 == RelationProcessorPackage )
  {
    ++v15;
  }
  if ( v4 == RelationProcessorDie )
  {
    ++v15;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    ++v15;
  }
  if ( v15 )
  {
    v16 = v15;
    Pool2 = ExAllocatePool2(64LL, v14 * v15, 1347178827LL);
    v97 = (char *)Pool2;
    if ( !Pool2 )
      return -1073741670;
    v18 = Size[0];
    v19 = (_DWORD *)(Pool2 + 4);
    do
    {
      *((_WORD *)v19 - 2) = 1;
      *((_WORD *)v19 - 1) = v8;
      *v19 = 0;
      memset(v19 + 1, 0, v18);
      v19 = (_DWORD *)((char *)v19 + v14);
      --v16;
    }
    while ( v16 );
    v10 = v93;
    v7 = 0LL;
    v5 = v104;
    v9 = v93;
    v4 = RelationshipType;
    v12 = 236;
    v11 = v97;
    v13 = 1LL;
  }
  v20 = v11;
  if ( v4 == RelationAll || (unsigned int)v4 <= RelationProcessorModule && _bittest(&v12, v4) )
  {
    v101[0] = v11;
    v20 = &v11[v14];
    if ( v4 == RelationAll || v4 == RelationCache )
    {
      v21 = (char **)&v101[1];
      v22 = 5LL;
      do
      {
        *v21 = v20;
        v20 += v14;
        ++v21;
        --v22;
      }
      while ( v22 );
      if ( v4 == RelationAll )
        goto LABEL_178;
    }
  }
  if ( v4 == RelationProcessorCore )
  {
LABEL_178:
    v101[6] = v20;
    v20 += v14;
    if ( v4 == RelationAll )
      goto LABEL_32;
  }
  if ( v4 == RelationProcessorPackage )
  {
LABEL_32:
    v101[7] = v20;
    v20 += v14;
  }
  if ( v4 == RelationProcessorDie )
  {
    v101[8] = v20;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    v101[9] = v20;
  }
  v23 = ProcessorNumber;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v93 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
    {
      v9 = -1073741811;
      goto LABEL_173;
    }
    v25 = ProcessorIndexFromNumber;
    v7 = 0LL;
  }
  else
  {
    ProcessorIndexFromNumber = 0;
    v93 = 0;
    v25 = KeNumberProcessors_0 - 1;
  }
  v26 = (unsigned __int16 *)v101[0];
  LODWORD(v94) = v25;
  v27 = ProcessorIndexFromNumber;
  v96 = ProcessorIndexFromNumber;
  v28 = 0x140000000uLL;
  *(_OWORD *)&Size[1] = 0LL;
  if ( ProcessorIndexFromNumber <= v25 )
  {
    v13 = v101[6];
    v100 = v101[9];
    v99 = v101[8];
    v98 = v101[7];
    Size[0] = v101[6];
    while ( 1 )
    {
      v29 = KiProcessorBlock[ProcessorIndexFromNumber];
      if ( v4 == RelationProcessorPackage || v4 == RelationAll )
      {
        KiCopyAffinityEx((__int64)v26, v26[1], (unsigned __int16 *)(v29 + 34576));
        LODWORD(v104) = 0;
        v91 = 0;
        LOBYTE(v30) = v23 != 0LL;
        v31 = KiTryPopulateLogicalProcessorInformation(
                (_DWORD)v26,
                v98,
                v30,
                3,
                (__int64)v5,
                v92,
                v10,
                (__int64)&v104,
                (__int64)&v91);
        v10 += (unsigned int)v104;
        v7 = 0LL;
        if ( v31 >= 0 )
        {
          if ( v91 )
            v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v91);
        }
        else
        {
          v9 = v31;
          v90 = v31;
        }
        v13 = Size[0];
      }
      if ( v4 == RelationProcessorCore || v4 == RelationAll )
        break;
LABEL_64:
      if ( v4 != RelationProcessorDie )
      {
        if ( v4 == RelationProcessorModule || v4 == RelationAll )
        {
          KiCopyAffinityEx((__int64)v26, v26[1], (unsigned __int16 *)(v29 + 38416));
          LODWORD(v104) = 0;
          v91 = 0;
          LOBYTE(v39) = v23 != 0LL;
          v40 = KiTryPopulateLogicalProcessorInformation(
                  (_DWORD)v26,
                  v100,
                  v39,
                  7,
                  (__int64)v5,
                  v92,
                  v10,
                  (__int64)&v104,
                  (__int64)&v91);
          v10 += (unsigned int)v104;
          v7 = 0LL;
          if ( v40 >= 0 )
          {
            if ( v91 )
              v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v91);
          }
          else
          {
            v9 = v40;
            v90 = v40;
          }
        }
        if ( v4 != RelationCache )
        {
          v90 = v9;
          if ( v4 != RelationAll )
            goto LABEL_119;
        }
        v41 = (unsigned int)v7;
        LODWORD(v104) = (_DWORD)v7;
        if ( *(_DWORD *)(v29 + 34452) <= (unsigned int)v7 )
          goto LABEL_119;
        v42 = v29;
        while ( 2 )
        {
          v43 = v41;
          v44 = (unsigned __int16 *)(264LL * v41 + v42 + 40632);
          if ( KiSplitLargeCaches == (_DWORD)v7 )
          {
            KiCopyAffinityEx((__int64)v26, v26[1], v44);
          }
          else
          {
            v45 = *(unsigned __int8 *)(v42 + 208);
            LOWORD(Size[2]) = v45;
            if ( (unsigned __int16)v45 >= *v44 )
              v46 = v7;
            else
              v46 = *(_PROCESSOR_NUMBER **)&v44[4 * v45 + 4];
            v47 = 8LL * *v26;
            Size[1] = v46;
            memset(v26 + 4, 0, v47);
            *v26 = 1;
            if ( (_WORD)v45 )
            {
              if ( v26[1] > (unsigned __int16)v45 )
              {
                *v26 = v45 + 1;
                goto LABEL_87;
              }
            }
            else
            {
LABEL_87:
              *(_QWORD *)&v26[4 * v45 + 4] |= (unsigned __int64)v46;
            }
            v9 = v90;
          }
          v48 = (unsigned __int16 *)v101[v43 + 1];
          v49 = KiAndAffinityEx(v26, v48, 0LL, 0);
          v7 = 0LL;
          if ( !ProcessorNumber && v49 )
          {
            v23 = 0LL;
          }
          else
          {
            v50 = 0;
            if ( v48 )
              v50 = v48[1];
            KiOrAffinityEx((char *)v26, v48, v48, v50);
            v23 = ProcessorNumber;
            v7 = 0LL;
            if ( ProcessorNumber )
            {
              Group = ProcessorNumber->Group;
            }
            else
            {
              KeFirstGroupAffinityEx(&Size[1], v26);
              Group = Size[2];
              v7 = 0LL;
            }
            v52 = 0;
            v53 = 0;
            if ( *v26 )
            {
              do
              {
                if ( *(_QWORD *)&v26[4 * v53 + 4] )
                  ++v52;
                ++v53;
              }
              while ( v53 < *v26 );
              v9 = v90;
            }
            v54 = (16 * v52 + 47) & 0xFFFFFFF8;
            v10 += v54;
            if ( v10 > v92 )
            {
              v9 = -1073741820;
              v90 = -1073741820;
            }
            else
            {
              v5->Relationship = RelationCache;
              v5->Size = v54;
              LOWORD(Size[2]) = Group;
              v5->Processor.Flags = *(_BYTE *)(v42 + 12 * v43 + 34392);
              v5->Processor.EfficiencyClass = *(_BYTE *)(v42 + 12 * v43 + 34393);
              v5->Cache.LineSize = *(_WORD *)(v42 + 12 * v43 + 34394);
              v5->Cache.CacheSize = *(_DWORD *)(v42 + 12 * v43 + 34396);
              v5->Cache.Type = *(_DWORD *)(v42 + 12 * v43 + 34400);
              v5->Cache.GroupCount = v52;
              *(_OWORD *)&v5->Group.Reserved[8] = 0LL;
              *(_WORD *)&v5->Group.GroupInfo[0].Reserved[2] = 0;
              if ( Group >= *v26 )
                v55 = 0LL;
              else
                v55 = *(_QWORD *)&v26[4 * Group + 4];
              *(_OWORD *)&v5->Group.GroupInfo[0].Reserved[6] = 0LL;
              v5->Cache.GroupMask.Group = Group;
              v5->Cache.GroupMask.Mask = v55;
              v56 = 1;
              v57 = *v26;
              v58 = 0;
              Size[1] = v55;
              if ( v57 )
              {
                do
                {
                  if ( v58 != Group )
                  {
                    LOWORD(Size[2]) = v58;
                    if ( v58 >= v57 )
                    {
                      Size[1] = 0LL;
                    }
                    else
                    {
                      v59 = *(_QWORD *)&v26[4 * v58 + 4];
                      Size[1] = v59;
                      if ( v59 )
                      {
                        v60 = 2LL * v56;
                        v61 = 2 * (v56++ + 3LL);
                        *(_QWORD *)&v5->Group.GroupInfo[0].Reserved[8 * v60 + 14] = 0LL;
                        *((_WORD *)&v5->Relationship + 4 * v61) = v58;
                        *(&v5->Cache.GroupMask.Mask + v60) = v59;
                      }
                    }
                  }
                  v57 = *v26;
                  ++v58;
                }
                while ( v58 < *v26 );
                v23 = ProcessorNumber;
              }
              v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v54);
              v7 = 0LL;
            }
          }
          v41 = (_DWORD)v104 + 1;
          LODWORD(v104) = v41;
          if ( v41 >= *(_DWORD *)(v42 + 34452) )
          {
            v4 = RelationshipType;
            goto LABEL_119;
          }
          continue;
        }
      }
      KiCopyAffinityEx((__int64)v26, v26[1], (unsigned __int16 *)(v29 + 38080));
      LODWORD(v104) = 0;
      v91 = 0;
      LOBYTE(v37) = v23 != 0LL;
      v38 = KiTryPopulateLogicalProcessorInformation(
              (_DWORD)v26,
              v99,
              v37,
              5,
              (__int64)v5,
              v92,
              v10,
              (__int64)&v104,
              (__int64)&v91);
      v10 += (unsigned int)v104;
      v7 = 0LL;
      if ( v38 >= 0 )
      {
        if ( v91 )
          v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v91);
      }
      else
      {
        v9 = v38;
        v90 = v38;
      }
LABEL_119:
      v13 = Size[0];
      ProcessorIndexFromNumber = v93 + 1;
      v93 = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber > (unsigned int)v94 )
      {
        v27 = v96;
        v28 = 0x140000000uLL;
        goto LABEL_121;
      }
    }
    v32 = *(unsigned __int8 *)(v29 + 208);
    v33 = *(_QWORD *)(v29 + 34912);
    LOWORD(Size[2]) = *(unsigned __int8 *)(v29 + 208);
    Size[1] = v33;
    v34 = KeAndGroupAffinityEx((_WORD *)v13, (__int64)&Size[1], 0LL);
    v7 = 0LL;
    if ( !ProcessorNumber && v34 )
      goto LABEL_62;
    v35 = Size[0];
    if ( *(_WORD *)Size[0] <= (unsigned __int16)v32 )
    {
      if ( *(_WORD *)(Size[0] + 2LL) <= (unsigned __int16)v32 )
      {
LABEL_60:
        v36 = *(_QWORD *)(v29 + 200) != v33;
        v10 += 48;
        if ( v10 > v92 )
        {
          v9 = -1073741820;
          v90 = -1073741820;
          goto LABEL_63;
        }
        v5->Relationship = RelationProcessorCore;
        v5->Size = 48;
        v5->Processor.Flags = v36;
        v5->Processor.EfficiencyClass = KiGetProcessorEfficiencyClass(v29);
        v5->Processor.GroupCount = 1;
        *(_OWORD *)((char *)&v5->NumaNode.NodeNumber + 2) = 0LL;
        *(_DWORD *)&v5->Group.Reserved[14] = 0;
        *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
        v5->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v29 + 208);
        v5->Processor.GroupMask[0].Mask = *(_QWORD *)(v29 + 34912);
        v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + 48);
LABEL_62:
        v9 = v90;
LABEL_63:
        v23 = ProcessorNumber;
        goto LABEL_64;
      }
      *(_WORD *)Size[0] = v32 + 1;
    }
    *(_QWORD *)(v35 + 8 * v32 + 8) |= v33;
    goto LABEL_60;
  }
LABEL_121:
  if ( v4 == RelationNumaNode )
  {
    v62 = (unsigned __int16)KeNumberNodes;
    v63 = (unsigned int)v7;
    v64 = v27;
    do
    {
      v65 = *(_QWORD *)(v28 + 8LL * v63 + 13932224);
      if ( v23 )
        NodePrimarySubNode = *(_QWORD *)(v65 + 8LL * v23->Group + 24);
      else
        NodePrimarySubNode = KeGetNodePrimarySubNode(v65);
      if ( NodePrimarySubNode )
      {
        KiQuerySubNodeActiveAffinity(NodePrimarySubNode);
        v67 = Size[2];
        v68 = 0;
        v69 = Size[1];
        if ( !v23
          || (v70 = KiProcessorIndexToNumberMappingTable[v64],
              LOBYTE(v68) = v70 >> 6 == LOWORD(Size[2]),
              (v68 & (unsigned int)(Size[1] >> (v70 & 0x3F))) != 0) )
        {
          v10 += 48;
          if ( v10 > v92 )
          {
            v9 = -1073741820;
          }
          else
          {
            v5->Size = 48;
            v5->NumaNode.NodeNumber = v63;
            v5->Relationship = RelationNumaNode;
            *(_DWORD *)&v5->Group.Reserved[16] = 0x10000;
            *(_OWORD *)v5->Group.Reserved = 0LL;
            *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            v5->Processor.GroupMask[0].Group = v67;
            v5->Processor.GroupMask[0].Mask = v69;
            v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + 48);
          }
        }
        v28 = 0x140000000uLL;
      }
      ++v63;
    }
    while ( v63 < v62 );
LABEL_168:
    if ( !v9 && !v10 )
      v9 = -1073741823;
    goto LABEL_172;
  }
  v71 = v27;
  if ( v4 == RelationNumaNodeEx || v4 == RelationAll )
  {
    v72 = (unsigned int)v7;
    if ( (unsigned __int16)v7 < (unsigned __int16)KeNumberNodes )
    {
      v73 = ProcessorNumber;
      do
      {
        if ( !v73 || *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v71] + 192) + 138LL) == v72 )
        {
          KeQueryNodeActiveAffinityEx((unsigned __int16)v72, v26, 0LL, v13);
          v7 = 0LL;
          v74 = 0;
          v75 = 0;
          v13 = *(unsigned __int8 *)(KeNodeBlock[v72] + 12);
          if ( *v26 )
          {
            do
            {
              if ( *(_QWORD *)&v26[4 * v75 + 4] )
                ++v74;
              ++v75;
            }
            while ( v75 < *v26 );
            v73 = ProcessorNumber;
            if ( v74 )
            {
              v76 = (16 * v74 + 39) & 0xFFFFFFF8;
              v10 += v76;
              if ( v10 > v92 )
              {
                v9 = -1073741820;
                v90 = -1073741820;
              }
              else
              {
                v5->Size = v76;
                v5->Relationship = RelationNumaNode;
                v5->NumaNode.NodeNumber = v72;
                v5->Processor.GroupCount = v74;
                *(_OWORD *)v5->Group.Reserved = 0LL;
                *(_WORD *)&v5->Group.Reserved[16] = 0;
                if ( (unsigned __int16)v13 >= *v26 )
                  v77 = 0LL;
                else
                  v77 = *(_QWORD *)&v26[4 * v13 + 4];
                *(_OWORD *)&v5->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
                v5->Processor.GroupMask[0].Mask = v77;
                v5->Processor.GroupMask[0].Group = v13;
                v78 = 0;
                v79 = *v26;
                v80 = 1;
                if ( *v26 )
                {
                  do
                  {
                    if ( v78 != (_WORD)v13 && v78 < v79 )
                    {
                      v81 = *(_QWORD *)&v26[4 * v78 + 4];
                      if ( v81 )
                      {
                        v82 = v80++;
                        v83 = 2 * (v82 + 2);
                        *((_QWORD *)&v5->Processor.Flags + v83) = 0LL;
                        v5->Processor.GroupMask[v82].Group = v78;
                        *((_QWORD *)&v5->Relationship + v83) = v81;
                      }
                    }
                    v79 = *v26;
                    ++v78;
                  }
                  while ( v78 < *v26 );
                  v9 = v90;
                }
                v5 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v5 + v76);
                v7 = 0LL;
              }
            }
          }
        }
        ++v72;
      }
      while ( v72 < (unsigned __int16)KeNumberNodes );
      v4 = RelationshipType;
    }
  }
  if ( v4 != RelationGroup && (v4 != RelationAll || ProcessorNumber != v7) )
    goto LABEL_168;
  v84 = (unsigned __int16)KiActiveGroups;
  v85 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
  v10 += v85;
  v93 = v10;
  if ( v10 <= v92 )
  {
    v5->Size = v85;
    v86 = (unsigned int)v7;
    v5->Group.MaximumGroupCount = KiMaximumGroups;
    v5->Relationship = RelationGroup;
    v5->Cache.LineSize = v84;
    *(_OWORD *)v5->Group.Reserved = 0LL;
    *(_DWORD *)&v5->Group.Reserved[16] = 0;
    if ( v84 )
    {
      do
      {
        v87 = v86;
        v88 = v86;
        v5->Cache.Reserved[48 * v86 + 12] = KeQueryMaximumProcessorCountEx(v86);
        v5->Cache.Reserved[48 * v86 + 13] = KeQueryActiveProcessorCountEx(v86);
        ++v86;
        v5->Group.GroupInfo[v88].ActiveProcessorMask = qword_140D1EFE8[v87];
        *(_OWORD *)v5->Group.GroupInfo[v88].Reserved = 0LL;
        *(_OWORD *)&v5->Group.GroupInfo[v88].Reserved[16] = 0LL;
        *(_DWORD *)&v5->Group.GroupInfo[v88].Reserved[32] = 0;
        *(_WORD *)&v5->Group.GroupInfo[v88].Reserved[36] = 0;
      }
      while ( v86 < (unsigned __int16)KiActiveGroups );
      v10 = v93;
      v9 = v90;
    }
    goto LABEL_168;
  }
  v9 = -1073741820;
LABEL_172:
  v11 = v97;
  *v105 = v10;
LABEL_173:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v9;
}
