/*
 * XREFs of RaUnitStartResetIo @ 0x1C005F780
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C000152C (StorPortUnitActiveConditionStep2.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C004F038 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0062F04 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x1C000708C (RaUnitCheckRemoveState.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidUnitClaimIrp @ 0x1C00094D0 (RaidUnitClaimIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C0016EE4 (RaidUnitReleaseIrp.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaidPauseUnitQueue @ 0x1C0044AB0 (RaidPauseUnitQueue.c)
 *     RaidNtStatusToSrbStatus @ 0x1C005A42C (RaidNtStatusToSrbStatus.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0060AD8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0061370 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaUnitStartResetIo(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // r12d
  _IO_SECURITY_CONTEXT *SecurityContext; // r13
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // r15
  unsigned int FullCreateOptions; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 result; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  PEVENT_DATA_DESCRIPTOR v27; // [rsp+28h] [rbp-81h]
  char v28; // [rsp+30h] [rbp-79h] BYREF
  char v29; // [rsp+31h] [rbp-78h] BYREF
  char v30; // [rsp+32h] [rbp-77h] BYREF
  __int64 v31; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+40h] [rbp-69h] BYREF
  __int64 v33; // [rsp+60h] [rbp-49h]
  int v34; // [rsp+68h] [rbp-41h]
  int v35; // [rsp+6Ch] [rbp-3Dh]
  __int64 v36; // [rsp+70h] [rbp-39h]
  int v37; // [rsp+78h] [rbp-31h]
  int v38; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v39; // [rsp+80h] [rbp-29h]
  int v40; // [rsp+88h] [rbp-21h]
  int v41; // [rsp+8Ch] [rbp-1Dh]
  char *v42; // [rsp+90h] [rbp-19h]
  int v43; // [rsp+98h] [rbp-11h]
  int v44; // [rsp+9Ch] [rbp-Dh]
  char *v45; // [rsp+A0h] [rbp-9h]
  int v46; // [rsp+A8h] [rbp-1h]
  int v47; // [rsp+ACh] [rbp+3h]
  char *v48; // [rsp+B0h] [rbp+7h]
  int v49; // [rsp+B8h] [rbp+Fh]
  int v50; // [rsp+BCh] [rbp+13h]

  v3 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v31 = *(_QWORD *)(v3 + 24);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v8 = RaUnitCheckRemoveState(v3, (__int64)a2);
  if ( v8 < 0 )
    goto LABEL_38;
  LOBYTE(v9) = 1;
  v8 = RaUnitAcquireRemoveLock(v3, (__int64)a2, v9);
  if ( v8 < 0 )
    goto LABEL_38;
  v8 = RaidUnitClaimIrp(v3, (__int64)a2, 0LL, a3);
  if ( v8 < 0 )
  {
    RaUnitReleaseRemoveLock(v3);
LABEL_38:
    a2->IoStatus.Information = 0LL;
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(v8);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(v27) = a2->IoStatus.Status;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x19u,
        (__int64)&WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
        *(_QWORD *)(v3 + 8),
        a2,
        v27);
    }
    RaidUnitEndDeviceBusy(v3, a2);
    return RaidCompleteRequestEx(a2, 0, v8);
  }
  v11 = (__int64)a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *(_BYTE *)(v11 + 2) == 40 )
    v12 = *(_QWORD **)(v11 + 96);
  else
    v12 = *(_QWORD **)(v11 + 48);
  FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  if ( (_BYTE)FullCreateOptions == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  if ( FullCreateOptions != 16 )
  {
    v14 = v12[21];
    v11 = *(unsigned __int8 *)(v14 + 2);
    if ( (_BYTE)v11 == 40 )
      v15 = *(_DWORD *)(v14 + 20);
    else
      v15 = *(unsigned __int8 *)(v14 + 2);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 1324), 1u);
    v16 = v15 - 18;
    if ( v16 && (v17 = v16 - 1) != 0 )
    {
      if ( v17 == 13 )
        RaidPauseUnitQueue(v3);
    }
    else
    {
      RaidPauseAdapterQueue(*(_QWORD *)(v3 + 24));
    }
    v6 = 1;
  }
  v18 = BYTE2(SecurityContext->SecurityQos);
  if ( (_BYTE)v18 == 40 )
    v18 = SecurityContext->FullCreateOptions;
  if ( v18 == 16 && (unsigned int)dword_1C00920C8 > 5 && tlgKeywordOn(v11, 0x400000000000LL) )
  {
    v21 = v31;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v33 = v31 + 5000;
    v36 = v3 + 2024;
    LODWORD(v31) = *(_DWORD *)(v31 + 56);
    v39 = &v31;
    v28 = *(_BYTE *)(v3 + 96);
    v42 = &v28;
    v29 = *(_BYTE *)(v3 + 97);
    v45 = &v29;
    v30 = *(_BYTE *)(v3 + 98);
    v48 = &v30;
    v34 = 16;
    v37 = 16;
    v40 = 4;
    v43 = 1;
    v46 = 1;
    v49 = 1;
    tlgWriteTransfer_EtwWriteTransfer(v19, (unsigned __int8 *)dword_1C008410C, v10, v20, 8u, &v32);
  }
  else
  {
    v21 = v31;
  }
  v12[82] = RaidUnitCompleteResetRequest;
  result = RaidAdapterExecuteXrb(v21, v12, v10);
  if ( (int)result < 0 )
  {
    v8 = result;
    if ( v6 )
    {
      v23 = v12[21];
      if ( *(_BYTE *)(v23 + 2) == 40 )
        v24 = *(_DWORD *)(v23 + 20);
      else
        v24 = *(unsigned __int8 *)(v23 + 2);
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 1324));
      v25 = v24 - 18;
      if ( v25 && (v26 = v25 - 1) != 0 )
      {
        if ( v26 == 13 )
          RaidResumeAndRestartUnitQueue(v3);
      }
      else
      {
        RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24));
      }
    }
    RaidUnitReleaseIrp((__int64)a2);
    goto LABEL_38;
  }
  return result;
}
