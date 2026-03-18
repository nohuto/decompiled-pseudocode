/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0017C10
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C000EE64 (UsbhDecPdoIoCount.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00186F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0029EC4 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C002A020 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C002A0D8 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A2CC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C002A584 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002A6B4 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhPdoTrapFatal_Dbg @ 0x1C002CD28 (UsbhPdoTrapFatal_Dbg.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhWait @ 0x1C002D834 (UsbhWait.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E090 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C002F9D0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C002FB38 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C002FB9C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C002FC90 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C002FD78 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003036C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C00303D0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030490 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C00306A0 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x1C0030748 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00307E8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C00308D8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0030998 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhSetPdo_AllowIo @ 0x1C003CE78 (UsbhSetPdo_AllowIo.c)
 *     UsbhIdleIrp_Event @ 0x1C00576A8 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  __int64 v4; // rbp
  unsigned int LowPart; // ebx
  __int64 v6; // rcx
  int v8; // r14d
  __int64 v9; // r15
  KSPIN_LOCK *v10; // r12
  KIRQL v11; // al
  KIRQL v12; // r13
  __int64 Pool2; // rax
  __int64 v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int Status; // ebx
  struct _DEVICE_OBJECT *v33; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v35; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  NTSTATUS v37; // eax
  __int64 v38; // rbp
  unsigned int v39; // ebx
  _QWORD *v40; // r14
  KIRQL v41; // r12
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  int v44; // eax
  _QWORD *v45; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+60h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
    goto LABEL_161;
  v4 = BugCheckParameter3[8];
  if ( !v4 )
    goto LABEL_169;
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  LowPart = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v4 + 1184), 100LL);
      if ( *(_BYTE *)(v4 + 2741) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              3,
              10,
              (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        }
        Log(*(_QWORD *)(v4 + 1184), 256, 1397903939, 0LL, *(_QWORD *)(v4 + 1184));
        UsbhSetPdo_AllowIo(v6, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        *(_QWORD *)(v4 + 2784) = 0LL;
        *(_BYTE *)(v4 + 2741) = 0;
        return 0LL;
      }
      if ( *(_DWORD *)(v4 + 784) == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            11,
            (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        Log(*(_QWORD *)(v4 + 1184), 256, 1397903953, 0LL, *(_QWORD *)(v4 + 1184));
        *(_QWORD *)(v4 + 2784) = BugCheckParameter4;
LABEL_16:
        BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        return 259LL;
      }
LABEL_68:
      v8 = 1232023609;
      break;
    case 0x220FABu:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          3,
          12,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v4 + 1184));
      Log(*(_QWORD *)(v4 + 1184), 256, 1397903944, 0LL, *(_QWORD *)(v4 + 1184));
      *(_QWORD *)(v4 + 2792) = BugCheckParameter4;
      goto LABEL_16;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          1,
          13,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v4 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v4 + 1432) |= 0x80000u;
      return 0LL;
    case 0x220013u:
      v8 = 1232023605;
      break;
    case 0x220003u:
      v8 = 1232023604;
      break;
    default:
      if ( LowPart > 0x220424 )
      {
        if ( LowPart > 0x22044F )
        {
          switch ( LowPart )
          {
            case 0x491404u:
              v8 = 1232023857;
              goto LABEL_71;
            case 0x491408u:
              v8 = 1232023858;
              goto LABEL_71;
            case 0x49140Fu:
              v8 = 1232023859;
              goto LABEL_71;
          }
        }
        else
        {
          switch ( LowPart )
          {
            case 0x22044Fu:
              v8 = 1232023856;
              goto LABEL_71;
            case 0x22042Cu:
              v8 = 1232023652;
              goto LABEL_71;
            case 0x220433u:
              v8 = 1232023607;
              goto LABEL_71;
            case 0x220437u:
              v8 = 1232023608;
              goto LABEL_71;
            case 0x22043Bu:
              v8 = 1232023606;
              goto LABEL_71;
          }
        }
      }
      else
      {
        if ( LowPart == 2229284 )
        {
          v8 = 1232023602;
          break;
        }
        if ( LowPart > 0x22001F )
        {
          switch ( LowPart )
          {
            case 0x220020u:
              v8 = 1232023651;
              goto LABEL_71;
            case 0x220027u:
              v8 = 1232023653;
              goto LABEL_71;
            case 0x22002Bu:
              v8 = 1232023654;
              goto LABEL_71;
            case 0x220420u:
              v8 = 1232023603;
              goto LABEL_71;
          }
        }
        else
        {
          switch ( LowPart )
          {
            case 0x22001Fu:
              v8 = 1232023650;
              goto LABEL_71;
            case 0x220007u:
              goto LABEL_68;
            case 0x22000Fu:
              v8 = 1232023601;
              goto LABEL_71;
            case 0x220017u:
              v8 = 1232023649;
              goto LABEL_71;
            case 0x22001Bu:
              v8 = 1232023600;
              goto LABEL_71;
          }
        }
      }
      v8 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      break;
  }
LABEL_71:
  v9 = BugCheckParameter3[8];
  if ( !v9 )
    goto LABEL_169;
  if ( *(_DWORD *)v9 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v10 = (KSPIN_LOCK *)(v9 + 1216);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 1216));
  v12 = v11;
  if ( *(_DWORD *)(v9 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 1216), v11);
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = -1073741810;
    IofCompleteRequest(BugCheckParameter4, 0);
    return 3221225486LL;
  }
  Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = BugCheckParameter4;
    v14 = v9 + 1224;
    *(_DWORD *)(Pool2 + 32) = v8;
    *(_DWORD *)Pool2 = 1330201673;
    v15 = (_QWORD *)(Pool2 + 8);
    v16 = *(_QWORD **)(v14 + 8);
    if ( *v16 != v14 )
      goto LABEL_158;
    *v15 = v14;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v14 + 8) = v15;
  }
  else
  {
    ++*(_DWORD *)(v9 + 1264);
  }
  KeReleaseSpinLock(v10, v12);
  if ( LowPart == 2228243 )
    return UsbhFdoReturnPortStatus(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
  if ( LowPart != 2228227 )
  {
    if ( LowPart > 0x22042C )
    {
      if ( LowPart <= 0x22044F )
      {
        if ( LowPart == 2229327 )
          return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        v25 = LowPart - 2229299;
        if ( v25 )
        {
          v26 = v25 - 4;
          if ( v26 )
          {
            v27 = v26 - 4;
            if ( !v27 )
              return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
            v28 = v27 - 4;
            if ( !v28 )
              return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
            if ( v28 == 4 )
              return UsbhIdleIrp_Event(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
            goto LABEL_124;
          }
          LOBYTE(v17) = 1;
        }
        else
        {
          v17 = 0LL;
        }
        return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4, v17);
      }
      v29 = LowPart - 2232243;
      if ( v29 )
      {
        v30 = v29 - 2557009;
        if ( !v30 )
          return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        v31 = v30 - 4;
        if ( !v31 )
          return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v31 == 7 )
          return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_124;
      }
    }
    else
    {
      if ( LowPart == 2229292 )
      {
LABEL_143:
        BugCheckParameter4->IoStatus.Status = -1073741637;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return 3221225659LL;
      }
      if ( LowPart > 0x220020 )
      {
        v22 = LowPart - 2228263;
        if ( !v22 )
          return UsbhFdoSubmitPdoIdleNotification(
                   *(_QWORD *)(v4 + 1184),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        v23 = v22 - 4;
        if ( !v23 )
          return UsbhFdoRecordFailure(
                   *(_QWORD *)(v4 + 1184),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        v24 = v23 - 1013;
        if ( !v24 )
          return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v24 == 4 )
          return UsbhFdoReturnControllerName(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_124;
      }
      if ( LowPart == 2228256 )
        return UsbhFdoReturnHubName(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
      v18 = LowPart - 2228231;
      if ( v18 )
      {
        v19 = v18 - 8;
        if ( !v19 )
          return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        v20 = v19 - 8;
        if ( !v20 )
        {
          BugCheckParameter4->IoStatus.Status = 0;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return 0LL;
        }
        v21 = v20 - 4;
        if ( !v21 )
          return UsbhFdoReturnHubCount(*(_QWORD *)(v4 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v21 == 4 )
          return UsbhFdoCyclePdoPort(
                   *(_QWORD *)(v4 + 1184),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
LABEL_124:
        Status = BugCheckParameter4->IoStatus.Status;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return Status;
      }
    }
    return UsbhFdoResetPdoPort(
             *(PDEVICE_OBJECT *)(v4 + 1184),
             (ULONG_PTR)BugCheckParameter3,
             (ULONG_PTR)BugCheckParameter4);
  }
  v33 = *(struct _DEVICE_OBJECT **)(v4 + 1184);
  if ( !v33 )
LABEL_161:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (PDEVICE_OBJECT *)v33->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1184), 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1184), v33->DeviceExtension);
  v35 = BugCheckParameter3[8];
  if ( !v35 )
LABEL_169:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v35 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v35);
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityContext->AccessState = *(_ACCESS_STATE **)(v35 + 1160);
  switch ( WORD1(SecurityContext->SecurityQos) )
  {
    case 0:
      return UsbhFdoSelectConfigurationPdo(v33, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    case 1:
      return UsbhFdoSelectInterfacePdo(v33, BugCheckParameter3, BugCheckParameter4);
    case 0x13:
      if ( (*(_DWORD *)(v35 + 1432) & 0x80000) == 0 )
        goto LABEL_144;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          1,
          19,
          (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
          *(_QWORD *)(v35 + 840));
      goto LABEL_143;
    case 0x1E:
    case 0x30:
    case 0x31:
      return UsbhFdoValidateConnectionPdo(v33, BugCheckParameter3, BugCheckParameter4);
    case 0x2A:
      return UsbhFdoGetMsDescriptorPdo(v33, BugCheckParameter3, BugCheckParameter4);
    default:
LABEL_144:
      ++BugCheckParameter4->CurrentLocation;
      ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
      v37 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
      v38 = BugCheckParameter3[8];
      v39 = v37;
      if ( !v38 )
        goto LABEL_169;
      if ( *(_DWORD *)v38 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
      v40 = (_QWORD *)(v38 + 1224);
      v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v38 + 1216));
      v42 = *(_QWORD **)(v38 + 1224);
      if ( v42 == (_QWORD *)(v38 + 1224) || !v42 )
        goto LABEL_150;
      break;
  }
  do
  {
    v43 = (_QWORD *)*v42;
    if ( (IRP *)v42[2] == BugCheckParameter4 )
    {
      if ( (_QWORD *)v43[1] == v42 )
      {
        v45 = (_QWORD *)v42[1];
        if ( (_QWORD *)*v45 == v42 )
        {
          *v45 = v43;
          v43[1] = v45;
          ExFreePoolWithTag(v42 - 1, 0);
          goto LABEL_152;
        }
      }
LABEL_158:
      __fastfail(3u);
    }
    v42 = (_QWORD *)*v42;
  }
  while ( v43 != v40 );
LABEL_150:
  v44 = *(_DWORD *)(v38 + 1264);
  if ( !v44 )
    UsbhPdoTrapFatal_Dbg((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  *(_DWORD *)(v38 + 1264) = v44 - 1;
LABEL_152:
  if ( (_QWORD *)*v40 != v40 || *(_DWORD *)(v38 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v38 + 1216), v41);
    return v39;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v38 + 1216), v41);
    KeSetEvent((PRKEVENT)(v38 + 1240), 0, 0);
    return v39;
  }
}
