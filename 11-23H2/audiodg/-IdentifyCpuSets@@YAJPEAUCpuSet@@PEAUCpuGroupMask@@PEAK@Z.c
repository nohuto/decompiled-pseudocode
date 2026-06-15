/*
 * XREFs of ?IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@PEAK@Z @ 0x140053740
 * Callers:
 *     ?AddingResource@CpuManager@@EEAAJXZ @ 0x140052FF0 (-AddingResource@CpuManager@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

NTSTATUS __fastcall IdentifyCpuSets(struct CpuSet *a1, struct CpuGroupMask *a2, unsigned int *a3)
{
  __int64 v6; // rbx
  _OWORD *v7; // rax
  struct CpuSet *v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  NTSTATUS result; // eax
  DWORD v27; // ebx
  HANDLE ProcessHeap; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v29; // rax
  unsigned __int16 *v30; // rbx
  BOOL LogicalProcessorInformation; // r12d
  int v32; // ecx
  char v33; // r9
  __int64 v34; // rdx
  __int128 v35; // xmm0
  __int64 v36; // r15
  __int64 v37; // r14
  int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // r10
  HANDLE v41; // rax
  __int64 v42; // rcx
  int v44; // edx
  unsigned int v45; // edx
  DWORD ReturnedLength[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v47; // [rsp+30h] [rbp-D0h]
  _BYTE v48[272]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SystemInformation[272]; // [rsp+150h] [rbp+50h] BYREF

  memset_0(SystemInformation, 0, 0x108uLL);
  v6 = 2LL;
  v7 = SystemInformation;
  v8 = a1;
  v9 = 2LL;
  do
  {
    v10 = v7[1];
    *(_OWORD *)v8 = *v7;
    v11 = v7[2];
    *((_OWORD *)v8 + 1) = v10;
    v12 = v7[3];
    *((_OWORD *)v8 + 2) = v11;
    v13 = v7[4];
    *((_OWORD *)v8 + 3) = v12;
    v14 = v7[5];
    *((_OWORD *)v8 + 4) = v13;
    v15 = v7[6];
    *((_OWORD *)v8 + 5) = v14;
    v16 = v7[7];
    v7 += 8;
    *((_OWORD *)v8 + 6) = v15;
    v8 = (struct CpuSet *)((char *)v8 + 128);
    *((_OWORD *)v8 - 1) = v16;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)v8 = *(_QWORD *)v7;
  *(_OWORD *)a2 = 0LL;
  *a3 = -1;
  memset_0(v48, 0, 0x108uLL);
  v17 = SystemInformation;
  v18 = v48;
  do
  {
    v19 = v18[1];
    *v17 = *v18;
    v20 = v18[2];
    v17[1] = v19;
    v21 = v18[3];
    v17[2] = v20;
    v22 = v18[4];
    v17[3] = v21;
    v23 = v18[5];
    v17[4] = v22;
    v24 = v18[6];
    v17[5] = v23;
    v25 = v18[7];
    v18 += 8;
    v17[6] = v24;
    v17 += 8;
    *(v17 - 1) = v25;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)v17 = *(_QWORD *)v18;
  result = NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0x108u, 0LL);
  if ( result < 0 )
    return result;
  ReturnedLength[0] = 0;
  GetLogicalProcessorInformationEx(RelationGroup, 0LL, ReturnedLength);
  v27 = ReturnedLength[0];
  ProcessHeap = GetProcessHeap();
  v29 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)HeapAlloc(ProcessHeap, 8u, v27);
  v30 = (unsigned __int16 *)v29;
  if ( !v29 )
    return -1073741670;
  LogicalProcessorInformation = GetLogicalProcessorInformationEx(RelationGroup, v29, ReturnedLength);
  if ( !LogicalProcessorInformation )
    goto LABEL_25;
  v32 = v30[5];
  v33 = 0;
  v34 = 0LL;
  *(_DWORD *)a1 = v32;
  v35 = 0LL;
  v47 = 0LL;
  if ( !v32 )
    goto LABEL_23;
  v36 = *((_QWORD *)&v47 + 1);
  do
  {
    v37 = *(_QWORD *)&v30[24 * v34 + 36];
    *((_QWORD *)a1 + v34 + 1) = v37;
    if ( v33 )
      goto LABEL_21;
    v38 = 0;
    v39 = 1LL;
    if ( (v37 & 1) == 0 )
      goto LABEL_21;
    v40 = qword_1400CFAF8;
    while ( 1 )
    {
      if ( !v36 )
      {
        *((_QWORD *)&v47 + 1) = v39;
        v36 = v39;
        LOWORD(v47) = v34;
        v35 = v47;
      }
      if ( v40 )
        break;
      *((_QWORD *)a2 + 1) = v39;
      if ( (v39 & *(_QWORD *)&SystemInformation[8 * v34 + 8]) == 0 )
        goto LABEL_20;
      v40 = qword_1400CFAF8;
LABEL_32:
      ++v38;
      v37 &= ~v39;
      v39 = 1LL << v38;
      if ( ((1LL << v38) & v37) == 0 )
        goto LABEL_21;
    }
    if ( (_DWORD)v34 != g_UserConfiguredAudioReservedCpu || (v40 & v39) == 0 )
      goto LABEL_32;
    *((_QWORD *)a2 + 1) = v39;
LABEL_20:
    v33 = 1;
    *(_WORD *)a2 = v34;
LABEL_21:
    v34 = (unsigned int)(v34 + 1);
  }
  while ( (unsigned int)v34 < *(_DWORD *)a1 );
  if ( !v33 )
LABEL_23:
    *(_OWORD *)a2 = v35;
  *((_QWORD *)a1 + *(unsigned __int16 *)a2 + 1) &= ~*((_QWORD *)a2 + 1);
LABEL_25:
  v41 = GetProcessHeap();
  HeapFree(v41, 0, v30);
  if ( !LogicalProcessorInformation )
    return -1073741823;
  v42 = *((_QWORD *)a2 + 1);
  if ( !v42 )
    return -1073741823;
  if ( !_BitScanForward((unsigned int *)&v44, v42) )
  {
    _BitScanForward(&v45, HIDWORD(v42));
    v44 = v45 + 32;
  }
  *a3 = v44 | (*(unsigned __int16 *)a2 << 16) | 0x100;
  return 0;
}
