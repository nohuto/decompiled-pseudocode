/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x1C01624E0
 * Callers:
 *     ndisGetProcessorInfo @ 0x1C0162318 (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  ULONG v1; // r12d
  int v2; // r13d
  ULONG v3; // ebx
  void *v4; // rsi
  _DWORD *v5; // rax
  void *v6; // rbx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v7; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v8; // r14
  unsigned int v9; // edi
  ULONG v10; // edx
  __m128i *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rax
  ULONG v14; // r15d
  _DWORD *v15; // r8
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v16; // rbx
  __int64 Size; // rax
  unsigned int v18; // ecx
  __m128i v20; // xmm0
  unsigned int v21; // r15d
  ULONG v22; // r12d
  unsigned __int64 v23; // r14
  unsigned __int8 v24; // al
  char v25; // al
  ULONG v26; // ebx
  __int64 ProcessorIndexFromNumber; // rdx
  struct _NDIS_PROCESSOR_INFO_EX *v28; // rax
  unsigned int v29; // r15d
  unsigned __int16 v30; // r14
  __m128i v31; // xmm0
  unsigned __int64 v32; // rbx
  bool v33; // zf
  unsigned __int8 j; // al
  ULONG v35; // r12d
  WORD v36; // r14
  __m128i v37; // xmm0
  unsigned __int64 v38; // rsi
  bool v39; // zf
  unsigned __int8 k; // al
  ULONG v41; // eax
  __int64 v42; // rcx
  ULONG v43; // edx
  __m128i v44; // xmm0
  unsigned __int64 v45; // rbx
  unsigned __int8 Number; // al
  __int64 v47; // rax
  unsigned __int8 *p_Reserved; // rdx
  char v49; // al
  char v50; // [rsp+20h] [rbp-48h]
  char v51; // [rsp+24h] [rbp-44h]
  unsigned int v52; // [rsp+28h] [rbp-40h]
  ULONG v53; // [rsp+2Ch] [rbp-3Ch]
  NTSTATUS v54; // [rsp+30h] [rbp-38h]
  __int64 Pool2; // [rsp+38h] [rbp-30h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v56; // [rsp+40h] [rbp-28h]
  _DWORD *v57; // [rsp+48h] [rbp-20h]
  _DWORD *v58; // [rsp+50h] [rbp-18h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+48h] BYREF
  int v60; // [rsp+B4h] [rbp+4Ch]
  ULONG Length; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int i; // [rsp+C0h] [rbp+58h]
  ULONG v63; // [rsp+C8h] [rbp+60h]

  v60 = HIDWORD(a1);
  v1 = 0;
  v57 = ndisSystemProcessorInfo;
  v2 = 0;
  Length = 0;
  v3 = 0;
  v53 = 0;
  v50 = 1;
  v51 = 1;
  ProcNumber = 0;
  v52 = 0;
  for ( i = 0; v3 < ndisNumberOfActiveProcessorsAtBoot; ++v3 )
    KeGetProcessorNumberFromIndex(v3, &ndisCpuInfo[v3].ProcNum);
  if ( v3 < ndisMaxNumberOfProcessors )
  {
    v47 = ndisMaxNumberOfProcessors - v3;
    p_Reserved = &ndisCpuInfo[v3].ProcNum.Reserved;
    do
    {
      *(_DWORD *)(p_Reserved - 3) = 0xFFFFFF;
      p_Reserved += 20;
      --v47;
    }
    while ( v47 );
  }
  Pool2 = ExAllocatePool2(64LL, 4LL * ndisMaxNumberOfProcessors, 538985550);
  v4 = (void *)Pool2;
  if ( Pool2 )
  {
    v5 = (_DWORD *)ExAllocatePool2(66LL, 4LL * ndisMaxNumberOfProcessors, 538985550);
    v58 = v5;
    v6 = v5;
    if ( v5
      && (memset(v5, 255, 4LL * ndisMaxNumberOfProcessors),
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v7 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(66LL, Length, 538985550),
          v56 = v7,
          (v8 = v7) != 0LL) )
    {
      v54 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v7, &Length);
      v9 = v54;
      if ( v54 >= 0 )
      {
        v10 = 0;
        v11 = (__m128i *)v8;
        v63 = 0;
        if ( Length )
        {
          v12 = 0;
          do
          {
            if ( v11->m128i_i32[0] )
            {
              if ( v11->m128i_i32[0] == 1 )
              {
                v44 = v11[2];
                ProcNumber.Reserved = 0;
                v45 = v44.m128i_i64[0];
                ProcNumber.Group = _mm_extract_epi16(v44, 4);
                Number = 0;
                ProcNumber.Number = 0;
                if ( v44.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v45 & 1) != 0 )
                    {
                      ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].NodeId = v11->m128i_u16[4];
                      Number = ProcNumber.Number;
                    }
                    ++Number;
                    v45 >>= 1;
                    ProcNumber.Number = Number;
                  }
                  while ( v45 );
                  v10 = v63;
                }
              }
              else if ( v11->m128i_i32[0] == 3 )
              {
                v29 = 0;
                v30 = 0;
                if ( v11[1].m128i_i16[7] )
                {
                  do
                  {
                    v31 = v11[v30 + 2];
                    ProcNumber.Reserved = 0;
                    v32 = v31.m128i_i64[0];
                    v33 = v31.m128i_i64[0] == 0;
                    ProcNumber.Group = _mm_extract_epi16(v31, 4);
                    for ( j = 0; ; ++j )
                    {
                      ProcNumber.Number = j;
                      if ( v33 )
                        break;
                      if ( (v32 & 1) != 0 )
                      {
                        ++v29;
                        ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].SocketId = v1;
                        j = ProcNumber.Number;
                      }
                      v32 >>= 1;
                      v33 = v32 == 0;
                    }
                    ++v30;
                  }
                  while ( v30 < (unsigned int)v11[1].m128i_i16[7] );
                  v10 = v63;
                  v12 = i;
                }
                if ( v1 )
                {
                  v49 = v51;
                  if ( v29 != v52 )
                    v49 = 0;
                  v51 = v49;
                }
                else
                {
                  v52 = v29;
                }
                v53 = ++v1;
              }
            }
            else
            {
              v20 = v11[2];
              v21 = 0;
              ProcNumber.Reserved = 0;
              v22 = 0;
              v23 = v20.m128i_i64[0];
              ProcNumber.Group = _mm_extract_epi16(v20, 4);
              v24 = 0;
              ProcNumber.Number = 0;
              if ( v20.m128i_i64[0] )
              {
                do
                {
                  if ( (v23 & 1) != 0 )
                  {
                    ++v21;
                    v26 = v22++;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                    v28 = ndisCpuInfo;
                    *(_DWORD *)(Pool2 + 4 * ProcessorIndexFromNumber) = v2;
                    v28[ProcessorIndexFromNumber].HyperThreadId = v26;
                    v24 = ProcNumber.Number;
                  }
                  ++v24;
                  v23 >>= 1;
                  ProcNumber.Number = v24;
                }
                while ( v23 );
                v10 = v63;
                v12 = i;
              }
              if ( v2 )
              {
                v25 = v50;
                if ( v21 != v12 )
                  v25 = 0;
                v50 = v25;
              }
              else
              {
                v12 = v21;
                i = v21;
              }
              v1 = v53;
              ++v2;
            }
            v13 = v11->m128i_u32[1];
            v10 += v13;
            v11 = (__m128i *)((char *)v11 + v13);
            v63 = v10;
          }
          while ( v10 < Length );
          v9 = v54;
          v8 = v56;
        }
        v14 = 0;
        v15 = v57;
        v16 = v8;
        v63 = 0;
        v57[3] = v1;
        v57[4] = v2;
        if ( Length )
        {
          do
          {
            if ( v16->Relationship == RelationProcessorPackage )
            {
              v35 = 0;
              v36 = 0;
              if ( v16->Processor.GroupCount )
              {
                do
                {
                  v37 = *((__m128i *)&v16->Group.GroupInfo[0].MaximumProcessorCount + v36);
                  ProcNumber.Reserved = 0;
                  v38 = v37.m128i_i64[0];
                  v39 = v37.m128i_i64[0] == 0;
                  ProcNumber.Group = _mm_extract_epi16(v37, 4);
                  for ( k = 0; ; ++k )
                  {
                    ProcNumber.Number = k;
                    if ( v39 )
                      break;
                    if ( (v38 & 1) != 0 )
                    {
                      v41 = KeGetProcessorIndexFromNumber(&ProcNumber);
                      v42 = *(unsigned int *)(Pool2 + 4LL * v41);
                      v43 = v58[v42];
                      if ( v43 == -1 )
                      {
                        v43 = v35++;
                        v58[v42] = v43;
                      }
                      ndisCpuInfo[v41].CoreId = v43;
                      k = ProcNumber.Number;
                    }
                    v38 >>= 1;
                    v39 = v38 == 0;
                  }
                  ++v36;
                }
                while ( v36 < v16->Processor.GroupCount );
                v14 = v63;
              }
            }
            Size = v16->Size;
            v14 += Size;
            v16 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v16 + Size);
            v63 = v14;
          }
          while ( v14 < Length );
          v9 = v54;
          v8 = v56;
          v15 = v57;
        }
        if ( v50 )
        {
          v18 = i;
          v15[6] = i;
          if ( v51 )
          {
            if ( v18 )
              v15[5] = v52 / v18;
          }
        }
        v6 = v58;
        v4 = (void *)Pool2;
      }
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v9 = -1073741670;
    }
    ExFreePoolWithTag(v4, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
