/*
 * XREFs of KiIntSteerConnect @ 0x1403AFA58
 * Callers:
 *     KeConnectInterrupt @ 0x1403AF5E4 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x140248E38 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x14024D740 (KiIntSteerSetDestination.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x1403AFE08 (KiIntSteerLogState.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1403AFE88 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // r13
  bool v6; // zf
  char v9; // r15
  int v10; // r12d
  __int64 *PoolWithTag; // rax
  __int64 *v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 i; // rbx
  int v17; // eax
  int v18; // r15d
  int v19; // r9d
  __int64 v20; // r8
  __int16 v21; // cx
  __int64 v22; // rax
  __int16 v23; // cx
  __int64 *v24; // rax
  __int64 v25; // rbx
  __int64 **v26; // rax
  KIRQL v27; // bl
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  int v37; // [rsp+40h] [rbp-20h] BYREF
  int v38; // [rsp+44h] [rbp-1Ch] BYREF
  __int128 v39; // [rsp+48h] [rbp-18h] BYREF
  KIRQL v41; // [rsp+B0h] [rbp+50h]

  v5 = a2;
  v6 = KiIntSteerEtwHandle == 0;
  v38 = 0;
  *a4 = 0;
  v39 = 0LL;
  if ( v6 )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( !*(_DWORD *)a3 )
  {
    v37 = *(_DWORD *)(a3 + 56);
    if ( !(unsigned __int8)off_140C01DD0[0]() )
    {
      v9 = 1;
LABEL_6:
      v10 = v37;
      goto LABEL_7;
    }
    v9 = 0;
    if ( ((int (__fastcall *)(__int64, int *))off_140C01DB8[0])(a3, &v37) >= 0 )
      goto LABEL_6;
LABEL_35:
    v29 = *(unsigned __int16 *)(a3 + 32);
    v30 = *(_QWORD *)(a3 + 24);
    if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v29 )
    {
      if ( HIWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v29 )
        return 0LL;
      LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v29 + 1;
    }
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v29 + 2] |= v30;
    return 0LL;
  }
  if ( *(_DWORD *)a3 != 3 )
    goto LABEL_35;
  v10 = -1;
  v9 = 1;
  v37 = -1;
LABEL_7:
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x6B725449u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[4] = (__int64)a1;
  *((_DWORD *)PoolWithTag + 6) = v5;
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *((_BYTE *)PoolWithTag + 56) = v9;
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
  *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a3 + 64);
  PoolWithTag[18] = *(_QWORD *)(a3 + 80);
  if ( (_DWORD)v5 )
  {
    v13 = a1;
    v14 = v5;
    do
    {
      v15 = (_QWORD *)*v13++;
      v15[22] = 0LL;
      v15[24] = 0LL;
      v15[25] = 0LL;
      v15[27] = 0LL;
      v15[21] = v12;
      --v14;
    }
    while ( v14 );
  }
  v41 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  if ( !*(_DWORD *)a3 )
  {
    for ( i = KiIntTrackRootList; ; i = *(_QWORD *)i )
    {
      if ( (ULONG_PTR *)i == &KiIntTrackRootList )
        goto LABEL_19;
      v17 = *(_DWORD *)(i + 32);
      if ( v17 == v10 && v17 != -1 )
        break;
    }
    if ( *(_DWORD *)(i + 128) != 2 )
      goto LABEL_18;
    *(_BYTE *)(*(_QWORD *)(i + 200) + 16LL) = 0;
    *(_DWORD *)(i + 128) = 0;
    *(_BYTE *)(i + 132) = 0;
    v31 = *(unsigned __int16 *)(a3 + 32);
    v32 = *(_QWORD *)(a3 + 24);
    if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v31 )
    {
      if ( HIWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v31 )
      {
LABEL_18:
        v18 = 0;
        goto LABEL_27;
      }
      LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v31 + 1;
    }
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v31 + 2] |= v32;
    goto LABEL_18;
  }
LABEL_19:
  i = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x6B725449u);
  if ( i )
  {
    v18 = KiIntSteerChooseInitialTargetProcessors((_DWORD)a1, v5, a3, v19, v9, (__int64)&v39, (__int64)&v38);
    if ( v18 >= 0 )
    {
      memset((void *)i, 0, 0xE0uLL);
      *(_DWORD *)(i + 32) = v10;
      *(_QWORD *)(i + 24) = i + 16;
      *(_QWORD *)(i + 16) = i + 16;
      *(_BYTE *)(i + 132) = 0;
      *(_QWORD *)(i + 152) = 0LL;
      v21 = *(_WORD *)(a3 + 32);
      *(_QWORD *)(i + 136) = 0LL;
      *(_DWORD *)(i + 128) = v38;
      v22 = v39;
      *(_QWORD *)(i + 160) = v39;
      *(_QWORD *)(i + 176) = v22;
      *(_WORD *)(i + 144) = v21;
      v23 = WORD4(v39);
      *(_WORD *)(i + 168) = WORD4(v39);
      *(_WORD *)(i + 184) = v23;
      v6 = *(_DWORD *)(i + 128) == 2;
      *(_OWORD *)(i + 40) = *(_OWORD *)a3;
      *(_OWORD *)(i + 56) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(i + 72) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(i + 88) = *(_OWORD *)(a3 + 48);
      *(_OWORD *)(i + 104) = *(_OWORD *)(a3 + 64);
      *(_QWORD *)(i + 120) = *(_QWORD *)(a3 + 80);
      if ( v6 )
        *(_QWORD *)(i + 200) = *(_QWORD *)(*a1 + 272LL);
      v24 = (__int64 *)qword_140C2AD58;
      if ( *(ULONG_PTR **)qword_140C2AD58 != &KiIntTrackRootList )
        goto LABEL_47;
      *(_QWORD *)i = &KiIntTrackRootList;
      *(_QWORD *)(i + 8) = v24;
      *v24 = i;
      ++KiIntTrackRootCount;
      qword_140C2AD58 = i;
      KiIntSteerUpdateDeviceInterruptMask(i + 160, 0, v20);
      if ( *(_DWORD *)(i + 128) )
      {
        KiIntSteerSetDestination(i);
        *a4 = 1;
        *(_WORD *)(a5 + 8) = *(_WORD *)(i + 168);
        *(_QWORD *)a5 = *(_QWORD *)(i + 160);
      }
    }
    if ( !v18 )
    {
LABEL_27:
      v12[2] = i;
      v25 = i + 16;
      v26 = *(__int64 ***)(v25 + 8);
      if ( *v26 == (__int64 *)v25 )
      {
        *v12 = v25;
        v12[1] = (__int64)v26;
        *v26 = v12;
        *(_QWORD *)(v25 + 8) = v12;
        KiIntSteerLogState(v12, PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
        goto LABEL_29;
      }
LABEL_47:
      __fastfail(3u);
    }
  }
  else
  {
    v18 = -1073741670;
  }
  ExFreePoolWithTag(v12, 0x6B725449u);
LABEL_29:
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v27 = v41;
    if ( v41 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (v41 + 1));
      v6 = (v36 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v36;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v27 = v41;
  }
  __writecr8(v27);
  return (unsigned int)v18;
}
