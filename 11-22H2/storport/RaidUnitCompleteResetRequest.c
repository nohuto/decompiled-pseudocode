/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C00610B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidUnitReleaseIrp @ 0x1C0016EE4 (RaidUnitReleaseIrp.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C006086C (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0060AD8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0061370 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(__int64 a1)
{
  __int64 v1; // rdi
  IRP *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // r12d
  int v8; // r15d
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  PEVENT_DATA_DESCRIPTOR v18; // [rsp+28h] [rbp-81h]
  char v19; // [rsp+30h] [rbp-79h] BYREF
  char v20; // [rsp+31h] [rbp-78h] BYREF
  char v21; // [rsp+32h] [rbp-77h] BYREF
  char v22; // [rsp+33h] [rbp-76h] BYREF
  int v23; // [rsp+34h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+40h] [rbp-69h] BYREF
  __int64 v25; // [rsp+60h] [rbp-49h]
  int v26; // [rsp+68h] [rbp-41h]
  int v27; // [rsp+6Ch] [rbp-3Dh]
  __int64 v28; // [rsp+70h] [rbp-39h]
  int v29; // [rsp+78h] [rbp-31h]
  int v30; // [rsp+7Ch] [rbp-2Dh]
  int *v31; // [rsp+80h] [rbp-29h]
  int v32; // [rsp+88h] [rbp-21h]
  int v33; // [rsp+8Ch] [rbp-1Dh]
  char *v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+98h] [rbp-11h]
  int v36; // [rsp+9Ch] [rbp-Dh]
  char *v37; // [rsp+A0h] [rbp-9h]
  int v38; // [rsp+A8h] [rbp-1h]
  int v39; // [rsp+ACh] [rbp+3h]
  char *v40; // [rsp+B0h] [rbp+7h]
  int v41; // [rsp+B8h] [rbp+Fh]
  int v42; // [rsp+BCh] [rbp+13h]
  char *v43; // [rsp+C0h] [rbp+17h]
  int v44; // [rsp+C8h] [rbp+1Fh]
  int v45; // [rsp+CCh] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 168);
  v3 = *(IRP **)(a1 + 160);
  v4 = *(_QWORD *)(a1 + 224);
  v5 = *(unsigned __int8 *)(v1 + 2);
  v6 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v5 == 40 )
  {
    v7 = *(_DWORD *)(v1 + 60);
    v8 = *(_DWORD *)(v1 + 20);
  }
  else
  {
    v7 = *(_DWORD *)(v1 + 16);
    v8 = *(unsigned __int8 *)(v1 + 2);
  }
  if ( v8 != 16 )
  {
    if ( (_BYTE)v5 == 40 )
      v6 = *(_DWORD *)(v1 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 1324));
    v9 = v6 - 18;
    if ( v9 && (v10 = v9 - 1) != 0 )
    {
      if ( v10 == 13 )
        RaidResumeAndRestartUnitQueue(v4);
    }
    else
    {
      RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v4 + 24));
    }
  }
  v11 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v11 == 40 )
    v11 = *(_DWORD *)(v1 + 20);
  if ( v11 == 16 && (unsigned int)dword_1C00920C8 > 5 && tlgKeywordOn(v5, 0x400000000000LL) )
  {
    v14 = *(_QWORD *)(v4 + 24);
    v27 = 0;
    v30 = 0;
    v26 = 16;
    v29 = 16;
    v25 = v14 + 5000;
    v28 = v4 + 2024;
    v15 = *(_DWORD *)(v14 + 56);
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v23 = v15;
    v31 = &v23;
    v19 = *(_BYTE *)(v4 + 96);
    v34 = &v19;
    v20 = *(_BYTE *)(v4 + 97);
    v37 = &v20;
    v21 = *(_BYTE *)(v4 + 98);
    v40 = &v21;
    v32 = 4;
    v35 = v13;
    v38 = v13;
    v41 = v13;
    LOBYTE(v15) = *(_BYTE *)(v1 + 3);
    v45 = 0;
    v22 = v15 & 0x3F;
    v43 = &v22;
    v44 = v13;
    tlgWriteTransfer_EtwWriteTransfer(v14, (unsigned __int8 *)dword_1C0084172, v12, v13, 9u, &v24);
  }
  RaidUnitEndDeviceBusy(v4, v3);
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v4, *(_DWORD *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v1 + 3));
  v3->IoStatus.Information = v7;
  RaidUnitReleaseIrp((__int64)v3);
  if ( v8 == 16 )
  {
    RaidXrbDeallocateResources(a1, 1, v16);
    StorFreeContiguousIoResources(*(_QWORD *)(v4 + 24), a1 - 48);
  }
  else
  {
    *(_DWORD *)(v4 + 1776) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v18) = v3->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Au,
      (__int64)&WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
      v4,
      v3,
      v18);
  }
  if ( (qword_1C0092468 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v4 + 24), (__int64)v3, v1);
  return RaidCompleteRequestEx(v3, 0, v3->IoStatus.Status);
}
