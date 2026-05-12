/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C00546E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 *     RaidXrbDeallocateResources @ 0x1C000BDD4 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0053EFC (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0054168 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00549A8 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(__int64 a1)
{
  __int64 v1; // rdi
  IRP *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // eax
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  PEVENT_DATA_DESCRIPTOR v16; // [rsp+28h] [rbp-81h]
  char v17; // [rsp+30h] [rbp-79h] BYREF
  char v18; // [rsp+31h] [rbp-78h] BYREF
  char v19; // [rsp+32h] [rbp-77h] BYREF
  char v20; // [rsp+33h] [rbp-76h] BYREF
  int v21; // [rsp+34h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+40h] [rbp-69h] BYREF
  __int64 v23; // [rsp+60h] [rbp-49h]
  int v24; // [rsp+68h] [rbp-41h]
  int v25; // [rsp+6Ch] [rbp-3Dh]
  __int64 v26; // [rsp+70h] [rbp-39h]
  int v27; // [rsp+78h] [rbp-31h]
  int v28; // [rsp+7Ch] [rbp-2Dh]
  int *v29; // [rsp+80h] [rbp-29h]
  int v30; // [rsp+88h] [rbp-21h]
  int v31; // [rsp+8Ch] [rbp-1Dh]
  char *v32; // [rsp+90h] [rbp-19h]
  int v33; // [rsp+98h] [rbp-11h]
  int v34; // [rsp+9Ch] [rbp-Dh]
  char *v35; // [rsp+A0h] [rbp-9h]
  int v36; // [rsp+A8h] [rbp-1h]
  int v37; // [rsp+ACh] [rbp+3h]
  char *v38; // [rsp+B0h] [rbp+7h]
  int v39; // [rsp+B8h] [rbp+Fh]
  int v40; // [rsp+BCh] [rbp+13h]
  char *v41; // [rsp+C0h] [rbp+17h]
  int v42; // [rsp+C8h] [rbp+1Fh]
  int v43; // [rsp+CCh] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 168);
  v3 = *(IRP **)(a1 + 160);
  v4 = *(_QWORD *)(a1 + 224);
  v5 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v5 == 40 )
  {
    v6 = *(_DWORD *)(v1 + 60);
    v7 = 40;
    v8 = *(_DWORD *)(v1 + 20);
  }
  else
  {
    v6 = *(_DWORD *)(v1 + 16);
    v8 = *(unsigned __int8 *)(v1 + 2);
    v7 = v8;
  }
  if ( v8 != 16 )
  {
    if ( (_BYTE)v5 == 40 )
      v7 = *(_DWORD *)(v1 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 1268));
    if ( v7 >= 0x12 )
    {
      if ( v7 <= 0x13 )
      {
        RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v4 + 24));
      }
      else if ( v7 == 32 )
      {
        RaidResumeAndRestartUnitQueue(v4);
      }
    }
  }
  v9 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v9 == 40 )
    v9 = *(_DWORD *)(v1 + 20);
  if ( v9 == 16 && (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(v5, 0x400000000000LL) )
  {
    v12 = *(_QWORD *)(v4 + 24);
    v25 = 0;
    v28 = 0;
    v24 = 16;
    v27 = 16;
    v23 = v12 + 4936;
    v26 = v4 + 1976;
    v13 = *(_DWORD *)(v12 + 56);
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v21 = v13;
    v29 = &v21;
    v17 = *(_BYTE *)(v4 + 96);
    v32 = &v17;
    v18 = *(_BYTE *)(v4 + 97);
    v35 = &v18;
    v19 = *(_BYTE *)(v4 + 98);
    v38 = &v19;
    LOBYTE(v13) = *(_BYTE *)(v1 + 3) & 0x3F;
    v30 = 4;
    v20 = v13;
    v41 = &v20;
    v33 = v11;
    v36 = v11;
    v39 = v11;
    v42 = v11;
    tlgWriteTransfer_EtwWriteTransfer(v12, (unsigned __int8 *)dword_1C006CFC2, v10, v11, 9u, &v22);
  }
  RaidUnitEndDeviceBusy(v4, v3);
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v4, *(_DWORD *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v1 + 3));
  v3->IoStatus.Information = v6;
  RaidUnitReleaseIrp((__int64)v3);
  if ( v8 == 16 )
  {
    RaidXrbDeallocateResources(a1, 1, v14);
    StorFreeContiguousIoResources(*(_QWORD *)(v4 + 24), a1 - 48);
  }
  else
  {
    *(_DWORD *)(v4 + 1728) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v16) = v3->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Au,
      (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
      v4,
      v3,
      v16);
  }
  if ( (qword_1C00793A8 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v4 + 24), (__int64)v3, v1);
  return RaidCompleteRequestEx(v3, 0, v3->IoStatus.Status);
}
