/*
 * XREFs of RaUnitStartResetIo @ 0x1C0052F6C
 * Callers:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C000C400 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0056138 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C000282C (RaidPauseUnitQueue.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidUnitClaimIrp @ 0x1C0004810 (RaidUnitClaimIrp.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x1C000B5D4 (RaUnitCheckRemoveState.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     RaidPauseAdapterQueue @ 0x1C0014BF8 (RaidPauseAdapterQueue.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C004ED98 (RaidNtStatusToSrbStatus.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0054168 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00549A8 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaUnitStartResetIo(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // r12d
  _IO_SECURITY_CONTEXT *SecurityContext; // r13
  int v8; // edi
  __int64 v9; // r8
  _IO_SECURITY_CONTEXT *v10; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r15
  unsigned int v12; // eax
  __int64 FullCreateOptions; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  PEVENT_DATA_DESCRIPTOR v23; // [rsp+28h] [rbp-81h]
  char v24; // [rsp+30h] [rbp-79h] BYREF
  char v25; // [rsp+31h] [rbp-78h] BYREF
  char v26; // [rsp+32h] [rbp-77h] BYREF
  __int64 v27; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+40h] [rbp-69h] BYREF
  __int64 v29; // [rsp+60h] [rbp-49h]
  int v30; // [rsp+68h] [rbp-41h]
  int v31; // [rsp+6Ch] [rbp-3Dh]
  __int64 v32; // [rsp+70h] [rbp-39h]
  int v33; // [rsp+78h] [rbp-31h]
  int v34; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v35; // [rsp+80h] [rbp-29h]
  int v36; // [rsp+88h] [rbp-21h]
  int v37; // [rsp+8Ch] [rbp-1Dh]
  char *v38; // [rsp+90h] [rbp-19h]
  int v39; // [rsp+98h] [rbp-11h]
  int v40; // [rsp+9Ch] [rbp-Dh]
  char *v41; // [rsp+A0h] [rbp-9h]
  int v42; // [rsp+A8h] [rbp-1h]
  int v43; // [rsp+ACh] [rbp+3h]
  char *v44; // [rsp+B0h] [rbp+7h]
  int v45; // [rsp+B8h] [rbp+Fh]
  int v46; // [rsp+BCh] [rbp+13h]

  v3 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v27 = *(_QWORD *)(v3 + 24);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v8 = RaUnitCheckRemoveState(v3, (__int64)a2);
  if ( v8 < 0 )
    goto LABEL_40;
  LOBYTE(v9) = 1;
  v8 = RaUnitAcquireRemoveLock(v3, (__int64)a2, v9);
  if ( v8 < 0 )
    goto LABEL_40;
  v8 = RaidUnitClaimIrp(v3, (__int64)a2, 0LL, a3);
  if ( v8 < 0 )
  {
    RaUnitReleaseRemoveLock(v3);
LABEL_40:
    a2->IoStatus.Information = 0LL;
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(v8);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(v23) = a2->IoStatus.Status;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x19u,
        (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        *(_QWORD *)(v3 + 8),
        a2,
        v23);
    }
    RaidUnitEndDeviceBusy(v3, a2);
    return RaidCompleteRequestEx(a2, 0, v8);
  }
  v10 = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(v10->SecurityQos) == 40 )
    SecurityQos = v10[4].SecurityQos;
  else
    SecurityQos = v10[2].SecurityQos;
  LOBYTE(v12) = BYTE2(SecurityContext->SecurityQos);
  if ( (_BYTE)v12 == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  else
    FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  if ( (_DWORD)FullCreateOptions != 16 )
  {
    v14 = *(_QWORD *)&SecurityQos[14].Length;
    FullCreateOptions = *(unsigned __int8 *)(v14 + 2);
    if ( (_BYTE)FullCreateOptions == 40 )
      v15 = *(_DWORD *)(v14 + 20);
    else
      v15 = *(unsigned __int8 *)(v14 + 2);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 1268), 1u);
    if ( v15 >= 0x12 )
    {
      if ( v15 <= 0x13 )
      {
        RaidPauseAdapterQueue(*(_QWORD *)(v3 + 24));
      }
      else if ( v15 == 32 )
      {
        RaidPauseUnitQueue(v3);
      }
    }
    LOBYTE(v12) = BYTE2(SecurityContext->SecurityQos);
    v6 = 1;
  }
  if ( (_BYTE)v12 == 40 )
    v12 = SecurityContext->FullCreateOptions;
  else
    v12 = (unsigned __int8)v12;
  if ( v12 == 16 && (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(FullCreateOptions, 0x400000000000LL) )
  {
    v19 = v27;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v29 = v27 + 4936;
    v32 = v3 + 1976;
    LODWORD(v27) = *(_DWORD *)(v27 + 56);
    v35 = &v27;
    v24 = *(_BYTE *)(v3 + 96);
    v38 = &v24;
    v25 = *(_BYTE *)(v3 + 97);
    v41 = &v25;
    v26 = *(_BYTE *)(v3 + 98);
    v44 = &v26;
    v30 = 16;
    v33 = 16;
    v36 = 4;
    v39 = 1;
    v42 = 1;
    v45 = 1;
    tlgWriteTransfer_EtwWriteTransfer(v16, (unsigned __int8 *)dword_1C006CF5C, v17, v18, 8u, &v28);
  }
  else
  {
    v19 = v27;
  }
  *(_QWORD *)&SecurityQos[54].ContextTrackingMode = RaidUnitCompleteResetRequest;
  result = RaidAdapterExecuteXrb(v19, SecurityQos);
  if ( (int)result < 0 )
  {
    v8 = result;
    if ( v6 )
    {
      v21 = *(_QWORD *)&SecurityQos[14].Length;
      v22 = *(_BYTE *)(v21 + 2) == 40 ? *(_DWORD *)(v21 + 20) : *(unsigned __int8 *)(v21 + 2);
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 1268));
      if ( v22 >= 0x12 )
      {
        if ( v22 <= 0x13 )
        {
          RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24));
        }
        else if ( v22 == 32 )
        {
          RaidResumeAndRestartUnitQueue(v3);
        }
      }
    }
    RaidUnitReleaseIrp((__int64)a2);
    goto LABEL_40;
  }
  return result;
}
