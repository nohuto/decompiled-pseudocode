/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ndisMiniportDpc @ 0x1C000122C (ndisMiniportDpc.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisDereferenceWithTag @ 0x1C000D510 (NdisDereferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  KIRQL v1; // bp
  unsigned int Number; // r12d
  __int64 v4; // rax
  __int64 v5; // r13
  char v6; // r14
  char v7; // r14
  ULONG v8; // r15d
  __int64 v9; // rdi
  int v10; // edx
  KIRQL v11; // al
  int v12; // edx
  ULONG_PTR v13; // rcx
  KIRQL v14; // bp
  int v15; // esi
  int v16; // edx
  struct _KEVENT *v17; // rcx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-48h] BYREF

  PreviousAffinity = 0LL;
  v1 = 0;
  Affinity = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v7 = v6 & 2;
  v8 = *(_DWORD *)(a1 + 64);
  v9 = *(_QWORD *)(v5 + 96);
  v21 = v4;
  v20 = *(_QWORD *)(a1 + 48);
  v19 = *(_QWORD *)(a1 + 56);
  if ( Number != v8 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v8, &ProcNumber);
    Affinity.Mask = 1LL << ProcNumber.Number;
    Affinity.Group = ProcNumber.Group;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v7 )
    v1 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  ndisMiniportDpc(v21, v5, v20, v19);
  if ( !v7 && v1 != 2 )
    KeLowerIrql(v1);
  if ( Number != v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      20,
      25,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      v9);
  }
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 4432));
  v13 = *(_QWORD *)(v9 + 4888);
  v14 = v11;
  if ( v13 )
    NdisDereferenceWithTag(v13);
  v15 = *(_DWORD *)(v9 + 4440) - 1;
  *(_DWORD *)(v9 + 4440) = v15;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      20,
      14,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      v9,
      *(_DWORD *)(v9 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 4432), v14);
  if ( !v15 )
  {
    v17 = *(struct _KEVENT **)(v9 + 1608);
    if ( v17 )
      KeSetEvent(v17, 0, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      20,
      26,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      v9);
  }
}
