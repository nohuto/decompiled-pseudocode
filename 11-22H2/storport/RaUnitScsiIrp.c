/*
 * XREFs of RaUnitScsiIrp @ 0x1C0004C30
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0004BA0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     IsReadWriteRequest @ 0x1C00150E4 (IsReadWriteRequest.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     RaidUnitSubmitRequest @ 0x1C001F3F4 (RaidUnitSubmitRequest.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0021D74 (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C003F0DC (RaUnitCheckRemoveStateForDisabled.c)
 *     RaidNtStatusToSrbStatus @ 0x1C005A42C (RaidNtStatusToSrbStatus.c)
 *     RaUnitFlushQueueSrb @ 0x1C005DBC4 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C005E34C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C005E3D0 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C00604A8 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0062F04 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C0067A7C (StorEtwIORequestDispatch.c)
 *     StorUnitExecuteNvmeSrb @ 0x1C0074478 (StorUnitExecuteNvmeSrb.c)
 *     RaUnitUnknownSrb @ 0x1C00AA5F8 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v3; // ebx
  bool v6; // r12
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  _IO_SECURITY_CONTEXT *v8; // r13
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  volatile signed __int32 *v12; // r10
  int v13; // ecx
  unsigned int FullCreateOptions; // r14d
  int SecurityQos; // r15d
  PDEVICE_OBJECT v16; // rcx
  _IO_SECURITY_CONTEXT *v17; // r9
  unsigned int AccessState; // r10d
  unsigned int i; // r11d
  __int64 v20; // rcx
  unsigned __int64 DesiredAccess; // rdx
  __int64 v22; // r8
  int v23; // ecx
  _IO_STACK_LOCATION *v24; // rax
  _IO_SECURITY_CONTEXT *v25; // rcx
  unsigned __int64 v26; // r14
  unsigned int AccessState_high; // edi
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned int v31; // eax
  unsigned int v32; // edi
  __int64 v33; // rdx
  $18E3EACC1E717291AA7C720ECCD5C45C v34; // rax
  int v35; // ecx
  __int64 v36; // rcx
  signed int v37; // r14d
  _IO_STACK_LOCATION *v38; // rcx
  int v39; // ecx
  unsigned int v41; // ebx
  __int128 v42; // [rsp+48h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v42 = 0LL;
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
LABEL_80:
    v12 = (volatile signed __int32 *)(a1 + 968);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 968));
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
        goto LABEL_80;
    }
    v12 = (volatile signed __int32 *)(a1 + 968);
  }
  v13 = *(_DWORD *)(a1 + 48);
  if ( v13 < 5 )
    goto LABEL_8;
  v35 = v13 - 5;
  if ( v35 )
  {
    v36 = (unsigned int)(v35 - 1);
    if ( !(_DWORD)v36 )
    {
      v37 = -1073741738;
      goto LABEL_86;
    }
    if ( (_DWORD)v36 != 1 )
      goto LABEL_8;
    v37 = RaUnitCheckRemoveStateForDisabled(v36, a2);
  }
  else
  {
    v38 = a2->Tail.Overlay.CurrentStackLocation;
    if ( v38->MajorFunction == 27 || v38->MajorFunction == 14 && v38->Parameters.Read.ByteOffset.LowPart == 266276 )
      goto LABEL_8;
    v37 = -1073741738;
  }
  if ( v37 < 0 )
  {
LABEL_86:
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v37);
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v37);
  }
LABEL_8:
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
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v16 = *(PDEVICE_OBJECT *)(a1 + 24), (v34 = v16[14].DeviceQueue.1) != 0LL)
      && (*(_DWORD *)(*(_QWORD *)&v34 + 20LL) & 1) == 0
      || (BYTE3(v16->Queue.Wcb.DeviceRoutine) & 4) != 0
      || *(_DWORD *)(&v16->Spare1 + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC0000001);
    }
  }
  switch ( FullCreateOptions )
  {
    case 0u:
      if ( BYTE2(SecurityContext->SecurityQos) != 40 )
      {
        v17 = SecurityContext + 3;
        goto LABEL_27;
      }
      v17 = 0LL;
      if ( BYTE2(v8->SecurityQos) == 40 && !v8->FullCreateOptions )
      {
        AccessState = (unsigned int)v8[2].AccessState;
        for ( i = 0; i < AccessState; ++i )
        {
          v20 = *((unsigned int *)&v8[5].SecurityQos + i);
          if ( (unsigned int)v20 >= 0x80 )
          {
            DesiredAccess = v8->DesiredAccess;
            if ( (unsigned int)v20 <= (unsigned int)DesiredAccess )
            {
              v22 = (unsigned int)v20;
              v23 = *(_DWORD *)((char *)&v8->SecurityQos + v20);
              if ( v23 == 64 )
              {
                if ( v22 + 40 <= DesiredAccess )
                  goto LABEL_25;
              }
              else
              {
                v39 = v23 - 65;
                if ( v39 )
                {
                  if ( v39 == 1 && v22 + 40 <= DesiredAccess )
                  {
                    if ( *(_DWORD *)((char *)&v8->AccessState + v22 + 4) )
                      v17 = (_IO_SECURITY_CONTEXT *)((char *)v8 + v22 + 32);
                    break;
                  }
                }
                else if ( v22 + 56 <= DesiredAccess )
                {
LABEL_25:
                  if ( *((_BYTE *)&v8->AccessState + v22 + 2) )
                    v17 = (_IO_SECURITY_CONTEXT *)((char *)v8 + v22 + 24);
                  break;
                }
              }
            }
          }
        }
      }
LABEL_27:
      if ( v17 )
      {
        if ( LOBYTE(v17->SecurityQos) == 27 && (BYTE4(v17->SecurityQos) & 1) == 0 )
        {
          if ( (unsigned __int8)RaUnitSwallowStopUnitCommand(a1) )
          {
            BYTE3(SecurityContext->SecurityQos) = 1;
            a2->IoStatus.Information = 0LL;
            v41 = RaidCompleteRequestEx(a2, 0, 0);
            RaUnitReleaseRemoveLock(a1);
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              WPP_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                20LL,
                &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
                a1,
                a2);
            }
            return v41;
          }
        }
      }
      if ( !DisableIEEE1667 || !v17 )
        goto LABEL_30;
      if ( LOBYTE(v17->SecurityQos) == 0xA2 )
      {
        if ( BYTE1(v17->SecurityQos) != 0xEE )
        {
LABEL_30:
          if ( StorEtwLoggingEnabled
            && (byte_1C0092A01 & 0x1E) != 0
            && (unsigned int)IsReadWriteRequest(0LL, LOBYTE(v17->SecurityQos)) )
          {
            IoGetActivityIdIrp(a2, &v42);
            StorEtwIORequestDispatch(a2);
          }
          v24 = a2->Tail.Overlay.CurrentStackLocation;
          v25 = v24->Parameters.Create.SecurityContext;
          v24->Control |= 1u;
          BYTE3(v25->SecurityQos) = 0;
          a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
          if ( BYTE2(v25->SecurityQos) == 40 )
          {
            v26 = v25->FullCreateOptions;
            AccessState_high = (unsigned int)v25[1].SecurityQos;
          }
          else
          {
            AccessState_high = HIDWORD(v25->AccessState);
            v26 = BYTE2(v25->SecurityQos);
          }
          if ( (qword_1C0092468 & 0x20) != 0 )
            DbgLogRequest(
              *(_QWORD *)(a1 + 24),
              3,
              (_DWORD)a2,
              (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
              0LL,
              0LL,
              0LL);
          v28 = (AccessState_high >> 17) & 4 | 2;
          if ( (AccessState_high & 0x10) == 0 )
            v28 = (AccessState_high >> 17) & 4;
          if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
          {
            if ( (unsigned int)v26 > 0x20 || (v33 = 0x1000D0000LL, !_bittest64(&v33, v26)) )
              v3 = 1;
          }
          v29 = v28 | 1;
          if ( !v3 )
            v29 = v28;
          RaidStartIoPacket(a1, a2, v29);
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqD(
              WPP_GLOBAL_Control->AttachedDevice,
              21LL,
              &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
              a1,
              a2,
              259);
          }
          return 259LL;
        }
      }
      else if ( LOBYTE(v17->SecurityQos) != 0xB5 || BYTE1(v17->SecurityQos) != 0xEE )
      {
        goto LABEL_30;
      }
      BYTE3(SecurityContext->SecurityQos) = 4;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC00000BB);
    case 0xAu:
      return StorUnitExecuteNvmeSrb(a1, a2);
    case 8u:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 427LL) )
      {
        v31 = RaidUnitSubmitRequest(a1, a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v31 = RaidCompleteRequestEx(a2, 0, 0);
      }
      v32 = v31;
      v6 = v31 != 259;
      break;
    case 2u:
LABEL_59:
      v32 = RaidUnitSubmitRequest(a1, a2);
      v6 = 0;
      break;
    default:
      switch ( FullCreateOptions )
      {
        case 1u:
          v32 = RaUnitClaimDeviceSrb(a1, a2);
          goto LABEL_51;
        case 4u:
          *(_BYTE *)(a1 + 692) = 0;
          RaidRestartIoQueue(a1, 0LL);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v32 = RaidCompleteRequestEx(a2, 0, 0);
          goto LABEL_51;
        case 6u:
          v32 = RaUnitReleaseDeviceSrb(a1, a2);
          goto LABEL_51;
        case 7u:
        case 9u:
          goto LABEL_59;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v32 = RaidUnitSubmitResetRequest(a1, a2);
          goto LABEL_51;
        case 0x12u:
          v32 = RaUnitResetBusSrb(a1, a2);
          goto LABEL_51;
        case 0x15u:
          v32 = RaUnitFlushQueueSrb(a1, a2);
          goto LABEL_51;
        case 0x17u:
          v32 = RaidCompleteRequestEx(a2, 0, 0xC0000010);
          goto LABEL_51;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 1;
          RiDisableDeviceQueueFastPath();
          v32 = RaidCompleteRequestEx(a2, 0, 0);
          goto LABEL_51;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 0;
          RaidRestartIoQueue(a1, 0LL);
          v32 = RaidCompleteRequestEx(a2, 0, 0);
          goto LABEL_51;
        case 0x1Au:
          if ( (((__int64)*(unsigned int *)(a1 + 744) >> 1) & 0x7FFFFFFF) != 0 )
          {
            *(_QWORD *)(a1 + 1904) = a2;
            a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(a1 + 1896),
              RaidUnitQuiesceDeviceWorkRoutine,
              CriticalWorkQueue,
              (PVOID)(a1 + 1896));
            v32 = 259;
          }
          else
          {
            *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
            v32 = RaidCompleteRequestEx(a2, 0, 0);
            if ( v32 != 259 )
              goto LABEL_51;
          }
          v6 = 0;
          break;
        default:
          v32 = RaUnitUnknownSrb(v16, a2);
          goto LABEL_51;
      }
      break;
  }
LABEL_51:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids, a1, a2, v32);
  }
  if ( v6 )
    RaUnitReleaseRemoveLock(a1);
  return v32;
}
