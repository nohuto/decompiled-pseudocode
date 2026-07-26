/*
 * XREFs of ndisReceiveWorkerThread @ 0x1C0033120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ndisPeriodicReceivesGetTimerPeriod @ 0x1C003E6F8 (ndisPeriodicReceivesGetTimerPeriod.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C003FEE2 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

unsigned int *__fastcall ndisReceiveWorkerThread(ULONG a1)
{
  int v2; // edx
  KSPIN_LOCK *v3; // rbx
  KSPIN_LOCK v4; // rdi
  KIRQL v5; // si
  __int64 v6; // rcx
  KSPIN_LOCK *v7; // rax
  KSPIN_LOCK v8; // rax
  unsigned __int64 v9; // rdx
  LARGE_INTEGER v10; // rax
  __int64 v11; // rdx
  struct _WORK_QUEUE_ITEM *v12; // rdx
  unsigned int *result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+40h] [rbp-31h] BYREF
  __int128 v16; // [rsp+42h] [rbp-2Fh]
  __m256i v17; // [rsp+52h] [rbp-1Fh]
  int v18; // [rsp+72h] [rbp+1h]
  __int16 v19; // [rsp+76h] [rbp+5h]
  _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+17h] BYREF

  ProcNumber = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      12,
      16,
      (struct _GUID *)&WPP_40b3d572a35736b75ceff139a227553e_Traceguids,
      a1);
  }
  Affinity.Mask = 1LL << ProcNumber.Number;
  v3 = (KSPIN_LOCK *)((char *)qword_1C00F5240 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    ndisWaitForKernelObject(v3 + 4);
    v4 = 0LL;
    v5 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel(v3 + 2);
    v7 = (KSPIN_LOCK *)*v3;
    if ( (KSPIN_LOCK *)*v3 != v3 )
    {
      v4 = *v3;
      if ( (KSPIN_LOCK *)v7[1] != v3 || (v8 = *v7, *(_QWORD *)(v8 + 8) != v4) )
        __fastfail(3u);
      *v3 = v8;
      *(_QWORD *)(v8 + 8) = v3;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      --*((_DWORD *)v3 + 6);
    }
    v9 = (unsigned __int64)a1 << 7;
    if ( (KSPIN_LOCK *)*v3 == v3 )
    {
      *((_DWORD *)qword_1C00F5238 + a1) = 0;
      KeCancelTimer((PKTIMER)((char *)qword_1C00F5230 + v9));
    }
    else
    {
      v10.QuadPart = ndisPeriodicReceivesGetTimerPeriod(v6, v9);
      KeSetTimer((PKTIMER)((char *)qword_1C00F5230 + v11), v10, (PKDPC)((char *)qword_1C00F5230 + v11 + 64));
    }
    KeReleaseSpinLockFromDpcLevel(v3 + 2);
    if ( v4 )
      break;
LABEL_15:
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
  v12 = (struct _WORK_QUEUE_ITEM *)((char *)ndisPerCpuPoisonPills + 32 * a1);
  if ( (struct _WORK_QUEUE_ITEM *)v4 != v12 )
  {
    if ( (_BYTE)word_1C00F76B4 )
    {
      v18 = 0;
      *(_OWORD *)&v17.m256i_u64[2] = 0LL;
      v19 = 0;
      v16 = 0LL;
      WnodeEventItem = 56;
      v17.m256i_i64[0] = 0LL;
      *(_QWORD *)((char *)&v16 + 6) = qword_1C00F76A8;
      *(__int32 *)((char *)&v17.m256i_i32[6] + 2) = 0x20000;
      BYTE2(v16) = 22;
      *(GUID *)&v17.m256i_u16[3] = EtwGuidNdisReceive;
      v17.m256i_i8[30] = 0;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    (*(void (__fastcall **)(_QWORD))(v4 + 16))(*(_QWORD *)(v4 + 24));
    if ( (_BYTE)word_1C00F76B4 )
    {
      *(__int64 *)((char *)&v17.m256i_i64[2] + 6) = 0x2000000000000LL;
      v16 = 0LL;
      WnodeEventItem = 48;
      v17.m256i_i64[0] = 0LL;
      *(_QWORD *)((char *)&v16 + 6) = qword_1C00F76A8;
      BYTE2(v16) = 23;
      *(GUID *)&v17.m256i_u16[3] = EtwGuidNdisReceive;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    goto LABEL_15;
  }
  if ( (KSPIN_LOCK *)*v3 != v3 )
  {
    ndisInsertInWorkQueue((struct _NDIS_WORK_QUEUE *)v3, v12, 1u);
    goto LABEL_15;
  }
  if ( v5 != 2 )
    KeLowerIrql(v5);
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    return (unsigned int *)WPP_RECORDER_SF_d(
                             *((_QWORD *)WPP_GLOBAL_Control + 8),
                             (int)v12,
                             12,
                             17,
                             (struct _GUID *)&WPP_40b3d572a35736b75ceff139a227553e_Traceguids,
                             a1);
  }
  return result;
}
