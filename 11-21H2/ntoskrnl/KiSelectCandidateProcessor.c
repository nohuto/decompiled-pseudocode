/*
 * XREFs of KiSelectCandidateProcessor @ 0x14057D168
 * Callers:
 *     KiChooseTargetProcessor @ 0x1403419B0 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x14045AFC6 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  _WORD *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rsi
  volatile LONG *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 208);
  v7 = *(_WORD **)(a2 + 576);
  v8 = *(_QWORD *)(v3 + 128);
  if ( (unsigned __int16)v5 >= *v7 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v7[4 * v5 + 4];
  v10 = (volatile LONG *)(v3 + 104);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 104));
  v13 = a3 & v8 & v9 & *(_QWORD *)(v3 + 80);
  if ( v13 || (v8 & v9 & *(_QWORD *)(v3 + 80)) != 0 )
  {
    v14 = *(_BYTE *)(v4 + 209);
    if ( !v13 )
      v13 = v8 & v9 & *(_QWORD *)(v3 + 80);
    v13 = __ROR8__(v13, v14);
    _BitScanForward64(&v15, v13);
    v11 = (((unsigned __int8)v15 + v14) & 0x3F) + (*(unsigned __int8 *)(v4 + 208) << 6);
    v4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v11]];
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[6];
        SchedulerAssist[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      break;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v19[6] - 1;
        v19[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v22, v11, v13, v12);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v10);
  return v4;
}
