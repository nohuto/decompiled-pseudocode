/*
 * XREFs of RaUnitScsiIrp @ 0x1C0009800
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0009760 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaidUnitSubmitRequest @ 0x1C0009690 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C0018A20 (RaUnitQuiesceDeviceSrb.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0022A08 (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C003CF2C (RaUnitCheckRemoveStateForDisabled.c)
 *     RaidNtStatusToSrbStatus @ 0x1C004ED98 (RaidNtStatusToSrbStatus.c)
 *     RaUnitFlushQueueSrb @ 0x1C00513D4 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C00518B4 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C0051938 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C0053C6C (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0056138 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C005AAEC (StorEtwIORequestDispatch.c)
 *     StorUnitExecuteNvmeSrb @ 0x1C00659C4 (StorUnitExecuteNvmeSrb.c)
 *     RaUnitUnknownSrb @ 0x1C008FCAC (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v3; // ebx
  bool v6; // r12
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  _IO_SECURITY_CONTEXT *v8; // rsi
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int v12; // ecx
  unsigned int FullCreateOptions; // ebp
  int SecurityQos; // r14d
  PDEVICE_OBJECT v15; // rcx
  _IO_SECURITY_CONTEXT *v16; // r9
  unsigned int AccessState; // r10d
  unsigned int v18; // r11d
  __int64 v19; // rcx
  unsigned __int64 DesiredAccess; // r8
  int v21; // ebp
  __int64 v22; // rdx
  _IO_STACK_LOCATION *v23; // rax
  _IO_SECURITY_CONTEXT *v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned int AccessState_high; // edi
  unsigned int v27; // edx
  __int64 v28; // r8
  unsigned int v30; // eax
  unsigned int v31; // edi
  __int64 v32; // rcx
  _DWORD *DeviceObject; // rax
  signed int v34; // ebp
  int v35; // ecx
  __int64 v36; // rcx
  _IO_STACK_LOCATION *v37; // rcx
  int v38; // ebp
  char v39; // al
  unsigned int v40; // ebx
  __int128 v41; // [rsp+48h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v41 = 0LL;
  v6 = 1;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v8 = 0LL;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, 0xC000000D);
  }
  v9 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v10 = *(_DWORD *)(v9 + *(_QWORD *)(a1 + 32));
  if ( (v10 & 1) != 0 )
  {
LABEL_76:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
  }
  else
  {
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + *(_QWORD *)(a1 + 32)), v10 + 2, v10);
      if ( v11 == v10 )
        break;
      if ( (v10 & 1) != 0 )
        goto LABEL_76;
    }
  }
  v12 = *(_DWORD *)(a1 + 48);
  if ( v12 < 5 )
    goto LABEL_5;
  v35 = v12 - 5;
  if ( !v35 )
  {
    v37 = a2->Tail.Overlay.CurrentStackLocation;
    if ( v37->MajorFunction == 27 || v37->MajorFunction == 14 && v37->Parameters.Read.ByteOffset.LowPart == 266276 )
      goto LABEL_5;
LABEL_84:
    v34 = -1073741738;
LABEL_85:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v34);
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v34);
  }
  v36 = (unsigned int)(v35 - 1);
  if ( !(_DWORD)v36 )
    goto LABEL_84;
  if ( (_DWORD)v36 == 1 )
  {
    v34 = RaUnitCheckRemoveStateForDisabled(v36, a2);
    if ( v34 < 0 )
      goto LABEL_85;
  }
LABEL_5:
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 442LL) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC00000BB);
    }
    v8 = SecurityContext;
    FullCreateOptions = SecurityContext->FullCreateOptions;
    SecurityQos = (int)SecurityContext[1].SecurityQos;
    if ( LODWORD(SecurityContext->AccessState) != 1397899864
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC000000D);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v15 = *(PDEVICE_OBJECT *)(a1 + 24), (DeviceObject = v15[14].Queue.Wcb.DeviceObject) != 0LL)
      && (DeviceObject[5] & 1) == 0
      || (BYTE3(v15->Queue.Wcb.DeviceRoutine) & 4) != 0
      || *(_DWORD *)(&v15->Spare1 + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC0000001);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 10 )
      return StorUnitExecuteNvmeSrb(a1, a2);
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 427LL) )
      {
        v30 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v30 = RaidCompleteRequestEx(a2, 0, 0);
      }
      v31 = v30;
      v6 = v30 != 259;
    }
    else
    {
      switch ( FullCreateOptions )
      {
        case 1u:
          v31 = RaUnitClaimDeviceSrb(a1, a2);
          break;
        case 2u:
        case 7u:
        case 9u:
          v31 = RaidUnitSubmitRequest(a1, (__int64)a2);
          v6 = 0;
          break;
        case 4u:
          *(_BYTE *)(a1 + 692) = 0;
          RaidRestartIoQueue(a1, 0);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v31 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 6u:
          v31 = RaUnitReleaseDeviceSrb(a1, a2);
          break;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v31 = RaidUnitSubmitResetRequest(a1, a2);
          break;
        case 0x12u:
          v31 = RaUnitResetBusSrb(a1, a2);
          break;
        case 0x15u:
          v31 = RaUnitFlushQueueSrb(a1, a2);
          break;
        case 0x17u:
          v31 = RaidCompleteRequestEx(a2, 0, 0xC0000010);
          break;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 1;
          v31 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 0;
          RaidRestartIoQueue(a1, 0);
          v31 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 0x1Au:
          v31 = RaUnitQuiesceDeviceSrb(a1, a2);
          if ( v31 == 259 )
            v6 = 0;
          break;
        default:
          v31 = RaUnitUnknownSrb(v15, a2);
          break;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        22LL,
        &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        a1,
        a2,
        v31);
    }
    if ( v6 )
      RaUnitReleaseRemoveLock(a1);
    return v31;
  }
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    v16 = SecurityContext + 3;
    goto LABEL_24;
  }
  v16 = 0LL;
  if ( BYTE2(v8->SecurityQos) != 40 )
    goto LABEL_24;
  if ( v8->FullCreateOptions )
    goto LABEL_24;
  AccessState = (unsigned int)v8[2].AccessState;
  v18 = 0;
  if ( !AccessState )
    goto LABEL_24;
  while ( 1 )
  {
    v19 = *((unsigned int *)&v8[5].SecurityQos + v18);
    if ( (unsigned int)v19 < 0x80 )
      goto LABEL_101;
    DesiredAccess = v8->DesiredAccess;
    if ( (unsigned int)v19 > (unsigned int)DesiredAccess )
      goto LABEL_101;
    v21 = *(_DWORD *)((char *)&v8->SecurityQos + v19);
    v22 = (__int64)v8 + v19;
    if ( v21 == 64 )
    {
      if ( v19 + 40 <= DesiredAccess )
        goto LABEL_22;
      goto LABEL_101;
    }
    v38 = v21 - 65;
    if ( v38 )
      break;
    if ( v19 + 56 <= DesiredAccess )
    {
LABEL_22:
      if ( *(_BYTE *)(v22 + 10) )
        v16 = (_IO_SECURITY_CONTEXT *)(v22 + 24);
      goto LABEL_24;
    }
LABEL_101:
    if ( ++v18 >= AccessState )
      goto LABEL_24;
  }
  if ( v38 != 1 || v19 + 40 > DesiredAccess )
    goto LABEL_101;
  v16 = (_IO_SECURITY_CONTEXT *)(v22 + 32);
  if ( !*(_DWORD *)(v22 + 12) )
    v16 = 0LL;
LABEL_24:
  if ( v16
    && LOBYTE(v16->SecurityQos) == 27
    && (BYTE4(v16->SecurityQos) & 1) == 0
    && (v39 = RaUnitSwallowStopUnitCommand(a1)) != 0 )
  {
    BYTE3(SecurityContext->SecurityQos) = 1;
    a2->IoStatus.Information = 0LL;
    v40 = RaidCompleteRequestEx(a2, 0, 0);
    RaUnitReleaseRemoveLock(a1);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_568007271afc3cdc120e483208e8f443_Traceguids, a1, a2);
    }
    return v40;
  }
  else
  {
    if ( StorEtwLoggingEnabled && (byte_1C00799E1 & 0x1E) != 0 && ((LOBYTE(v16->SecurityQos) - 8) & 0x5D) == 0 )
    {
      IoGetActivityIdIrp(a2, &v41);
      StorEtwIORequestDispatch(a2);
    }
    v23 = a2->Tail.Overlay.CurrentStackLocation;
    v24 = v23->Parameters.Create.SecurityContext;
    v23->Control |= 1u;
    BYTE3(v24->SecurityQos) = 0;
    a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
    if ( BYTE2(v24->SecurityQos) == 40 )
    {
      v25 = v24->FullCreateOptions;
      AccessState_high = (unsigned int)v24[1].SecurityQos;
    }
    else
    {
      AccessState_high = HIDWORD(v24->AccessState);
      v25 = BYTE2(v24->SecurityQos);
    }
    if ( (qword_1C00793A8 & 0x20) != 0 )
      DbgLogRequest(
        *(_QWORD *)(a1 + 24),
        3,
        (_DWORD)a2,
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
        0LL,
        0LL,
        0LL);
    v27 = (AccessState_high >> 17) & 4 | 2;
    if ( (AccessState_high & 0x10) == 0 )
      v27 = (AccessState_high >> 17) & 4;
    if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
    {
      if ( (unsigned int)v25 > 0x20 || (v32 = 0x1000D0000LL, !_bittest64(&v32, v25)) )
        v3 = 1;
    }
    v28 = v27 | 1;
    if ( !v3 )
      v28 = v27;
    RaidStartIoPacket(a1, a2, v28);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        21LL,
        &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        a1,
        a2,
        259);
    }
    return 259LL;
  }
}
