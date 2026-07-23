/*
 * XREFs of MmCreateProcessAddressSpace @ 0x140706060
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     PsGetDefaultWsMaximum @ 0x140291CA0 (PsGetDefaultWsMaximum.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140291CB0 (KeMakeKernelDirectoryTableBase.c)
 *     RtlRandomEx @ 0x140292830 (RtlRandomEx.c)
 *     PsChargeProcessQuota @ 0x140292858 (PsChargeProcessQuota.c)
 *     MiMakePartitionActive @ 0x140292890 (MiMakePartitionActive.c)
 *     MiSetProcessPartitionId @ 0x140292928 (MiSetProcessPartitionId.c)
 *     MiSyncSystemPdes @ 0x140292938 (MiSyncSystemPdes.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1402929AC (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x140292A1C (MiInsertNewProcess.c)
 *     MiReturnResident @ 0x1402930A0 (MiReturnResident.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 *     MiCheckWsLimits @ 0x1402EA260 (MiCheckWsLimits.c)
 *     PsReturnProcessQuota @ 0x1402EA35C (PsReturnProcessQuota.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiAllocateProcessShadow @ 0x1407062BC (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x1407065E0 (MiJoinSession.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  ULONG_PTR v13; // rbp
  __int64 v14; // r8
  __int64 TopLevelPage; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  int v19; // r15d
  __int64 v20; // r8
  unsigned __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = a3;
  v23 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v22 = PspMinimumWorkingSet;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2520);
  else
    v10 = (__int16 *)MiSystemPartition;
  if ( !(unsigned int)MiMakePartitionActive((unsigned __int64)v10) )
    return 0;
  MiSetProcessPartitionId(v9, *v10);
  *(_DWORD *)(v9 + 2876) = 1;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v10, 4uLL, 0LL) )
    return 0;
  *(_DWORD *)(v9 + 1664) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v9 + 2352) = 0LL;
  *(_QWORD *)(v9 + 2368) = v9 + 2360;
  *(_QWORD *)(v9 + 2360) = v9 + 2360;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v9 + 1664, (__int64 *)&v22, &v24, a4, 1);
    v8 = v24;
    v7 = v22;
  }
  *(_QWORD *)(v9 + 1776) = v7;
  *(_QWORD *)(v9 + 1784) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v9 + 1848) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v9, v11, v7) < 0 )
  {
LABEL_26:
    MiReturnCommit((__int64)v10, 4LL);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident(v10, v7, 0LL) )
  {
LABEL_25:
    PsReturnProcessQuota(v9, v12, v7);
    goto LABEL_26;
  }
  v13 = MiReservePtes((__int64)&qword_140C69940, 1u);
  if ( !v13 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C69940, (__int64 *)v13, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v23) )
  {
    MiDeleteProcessShadow(v9, 0);
    goto LABEL_23;
  }
  v14 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v13, v14);
  v16 = v23;
  v17 = TopLevelPage;
  if ( v23 )
  {
    *(_QWORD *)(v9 + 1368) = v23;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v16 = v23;
  }
  MiInsertNewProcess((_QWORD *)v9, v16);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v13 << 25) >> 16);
  v18 = MiMakeValidPte(0LL, v17, 2415919110LL) & 0xFFFFFFFFFFFFFEFFuLL;
  v19 = 0;
  if ( !MiPteInShadowRange(((__int64)(v13 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( MiPteHasShadow() )
  {
    v19 = 1;
    if ( !HIBYTE(word_140C66CFC) )
    {
LABEL_31:
      if ( (v18 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v13 << 25) >> 16) + 0xF68) = v18;
  if ( v19 )
    MiWritePteShadow(((__int64)(v13 << 25) >> 16) + 3944, v18, v20);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v17 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C69940, (__int64 *)v13, 1u);
  return 1;
}
