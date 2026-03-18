/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C01F0950
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01F02B0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0024370 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DxgkReportDeviceDirectedPowerDown @ 0x1C0046CF4 (DxgkReportDeviceDirectedPowerDown.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C01B45A0 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01EFEE0 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F0830 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C01F0D70 (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01F43EC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DxgkStartPnPTransition @ 0x1C01FD15C (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C0217CD4 (DxgkCompletePnPTransition.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiFdoDetermineAffectedSession @ 0x1C0388968 (DpiFdoDetermineAffectedSession.c)
 *     DpiFdoIsDevicePresent @ 0x1C038A94C (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C038AF7C (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0396530 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C03966BC (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C0396F08 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v3; // rbx
  unsigned int *DeviceExtension; // rdi
  struct _DEVICE_OBJECT *v6; // r14
  __int64 Status; // rsi
  bool v8; // r15
  int v9; // ebx
  int v10; // eax
  struct _IO_STACK_LOCATION *v11; // rax
  struct _IO_STACK_LOCATION *v12; // rax
  NTSTATUS v13; // eax
  bool v14; // r12
  DWORD LowPart; // ebx
  int v16; // eax
  CCHAR v17; // dl
  char v19; // r12
  __int64 v20; // rax
  int IsDevicePresent; // eax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r15
  char v25; // al
  char v26; // al
  unsigned __int64 v27; // rax
  void *started; // r15
  unsigned int v29; // eax
  __int64 v30; // r8
  struct _DEVICE_OBJECT *v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rcx
  union _LARGE_INTEGER v36; // [rsp+30h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-60h] BYREF
  bool v39; // [rsp+A8h] [rbp+10h]
  unsigned __int8 v40; // [rsp+B0h] [rbp+18h] BYREF
  int v41; // [rsp+B8h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  v6 = DeviceObject;
  v39 = 0;
  LODWORD(Status) = 0;
  v8 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
LABEL_17:
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
      *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
      v11[-1].FileObject = v11->FileObject;
      v11[-1].Control = 0;
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v12[-1].Context = &Event;
      v12[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v13 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v13;
      if ( v13 )
        goto LABEL_109;
      Status = Irp->IoStatus.Status;
      if ( (_DWORD)Status != -1073741810 )
      {
        if ( (int)Status >= 0 )
        {
LABEL_20:
          v14 = v39;
          goto LABEL_21;
        }
LABEL_109:
        WdLogSingleEntry1(2LL, Status);
        goto LABEL_20;
      }
      v19 = 0;
      WdLogSingleEntry4(
        2LL,
        DpiFdoHandleDevicePower,
        v6,
        (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        -1073741810LL);
      if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
      {
        v3 = (__int64)DeviceExtension;
      }
      else
      {
        v20 = *((_QWORD *)DeviceExtension + 341);
        if ( v20 )
          v3 = *(_QWORD *)(v20 + 64);
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4088LL));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v40 = 0;
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v40);
      v22 = v40;
      v23 = 0LL;
      if ( IsDevicePresent < 0 )
        v22 = 0;
      v41 = v22;
      v40 = v22;
      if ( !(_BYTE)v22 )
        *((_BYTE *)DeviceExtension + 1161) = 1;
      if ( DeviceExtension[59] == 6 )
      {
        if ( v8 || !*((_QWORD *)DeviceExtension + 61) )
          goto LABEL_95;
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v3, 0, 1);
      }
      else
      {
        if ( v3 )
        {
          if ( !(_BYTE)v22 || (*(_BYTE *)(v3 + 3904) & 0x18) != 0 )
          {
            v24 = *((_QWORD *)DeviceExtension + 5);
            if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
            {
              if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
              {
                v25 = *(_BYTE *)(v3 + 3904);
                if ( (v25 & 0x10) == 0 && ((v25 & 8) == 0 || *(int *)(v3 + 3912) < 0x2000) )
                  WdLogSingleEntry5(
                    0LL,
                    275LL,
                    25LL,
                    2LL - (*((_BYTE *)DeviceExtension + 1152) != 0),
                    DeviceExtension[281],
                    DeviceExtension[282]);
              }
            }
            if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v24, *((_QWORD *)DeviceExtension + 6), v3, 0LL) >= 0
              || (*(_BYTE *)(v3 + 3904) & 0x10) != 0 )
            {
              v19 = 1;
            }
            v26 = *((_BYTE *)DeviceExtension + 1152);
            if ( v26 || !v19 )
              DpiFdoRebootForSurpriseRemoval(v6, v26 != 0 ? 1 : 3);
          }
          else
          {
            v19 = 1;
          }
          v27 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
          started = (void *)DxgkStartPnPTransition(0LL, v27);
          if ( !started )
            WdLogSingleEntry1(6LL, -1073741670LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3792), 1u);
          if ( !v19 )
            *((_BYTE *)DeviceExtension + 1162) = 1;
          DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
          v29 = DeviceExtension[59];
          ++DeviceExtension[69];
          DeviceExtension[60] = v29;
          DeviceExtension[59] = 6;
          ExReleaseResourceLite((PERESOURCE)(v3 + 3792));
          KeLeaveCriticalRegion();
          v14 = v39;
          if ( !v39 && *((_QWORD *)DeviceExtension + 61) )
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v3, 0, 1);
          DpiRequestIoPowerState(*(_QWORD *)(v3 + 24), 4LL, v30, 0LL);
          DxgkCompletePnPTransition(started);
          if ( (unsigned int *)v3 != DeviceExtension )
          {
            v31 = *(struct _DEVICE_OBJECT **)(v3 + 152);
            *(_BYTE *)(v3 + 232) = 1;
            IoInvalidateDeviceState(v31);
            DxgCreateLiveDumpWithWdLogs(403LL, 2051LL);
          }
          LOBYTE(v22) = v41;
          v6 = DeviceObject;
          goto LABEL_96;
        }
        v32 = DeviceExtension[60];
        v33 = DeviceExtension[69] & 7;
        *((_BYTE *)DeviceExtension + 1162) = 1;
        DeviceExtension[v33 + 61] = v32;
        v34 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v34;
        DeviceExtension[59] = 6;
      }
      LOBYTE(v22) = v41;
LABEL_95:
      v14 = v39;
LABEL_96:
      if ( (struct _DEVICE_OBJECT *)qword_1C0130740 == v6 )
      {
        if ( (_BYTE)v22 )
        {
          if ( dword_1C01307F0 == 3 && byte_1C0130810 )
          {
            LOBYTE(v23) = 1;
            DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C0130750, v23, 0LL);
            byte_1C0130810 = 0;
            dword_1C013083C = 1;
          }
        }
        else
        {
          qword_1C0130740 = 0LL;
        }
      }
      if ( *((_BYTE *)DeviceExtension + 484) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
LABEL_21:
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4088LL));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( (int)Status < 0 )
      {
        if ( v14 )
          *((_BYTE *)DeviceExtension + 496) = 0;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 2 )
        {
LABEL_41:
          if ( *((_BYTE *)DeviceExtension + 484) )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
          PoStartNextPowerIrp(Irp);
          v17 = 1;
          goto LABEL_44;
        }
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( !v14 )
          *((_BYTE *)DeviceExtension + 496) = 0;
        if ( (int)LowPart < (int)DeviceExtension[71] )
        {
          if ( DeviceExtension[126] )
            v16 = DpiLdaPowerUpAdapterInChain(v6, Irp);
          else
            v16 = DpiFdoSetAdapterPowerState(
                    v6,
                    LowPart,
                    (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                    HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                    CurrentStackLocation->Parameters.Create.EaLength);
          LODWORD(Status) = v16;
        }
        if ( *((_BYTE *)DeviceExtension + 482) )
        {
          if ( LowPart != 1
            || DeviceExtension[126]
            || (DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1),
                *((_BYTE *)DeviceExtension + 482)) )
          {
            if ( LowPart == 4 && *((_BYTE *)DeviceExtension + 4152) )
            {
              v35 = *((_QWORD *)DeviceExtension + 487);
              *((_BYTE *)DeviceExtension + 4152) = 0;
              DxgkReportDeviceDirectedPowerDown(v35);
            }
          }
        }
      }
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        if ( v14 )
        {
          KeClearEvent((PRKEVENT)(DeviceExtension + 310));
          KeClearEvent((PRKEVENT)(DeviceExtension + 316));
        }
        else
        {
          KeSetEvent((PRKEVENT)(DeviceExtension + 316), 0, 0);
        }
      }
      goto LABEL_41;
    }
LABEL_52:
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    return (unsigned int)Status;
  }
  v9 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = v9 > 1;
  v39 = v9 > 1;
  WdLogSingleEntry3(9LL, DeviceExtension, v9, (int)DeviceExtension[71]);
  if ( v9 > 1 && !DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
  {
    v36.QuadPart = -300000000LL;
    DpiFdoStopMiracastSession((__int64)v6, 1, &v36, 0x83u);
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4088LL));
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( v9 <= (int)DeviceExtension[71]
    || (DeviceExtension[126]
      ? (v10 = DpiLdaPowerDownAllAdaptersInChain(v6, Irp))
      : (v10 = DpiFdoSetAdapterPowerState(
                 v6,
                 (unsigned int)v9,
                 (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                 HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                 CurrentStackLocation->Parameters.Create.EaLength)),
        LODWORD(Status) = v10,
        v10 >= 0) )
  {
    if ( v9 <= 1 )
      KeSetEvent((PRKEVENT)(DeviceExtension + 310), 0, 0);
    else
      *((_BYTE *)DeviceExtension + 496) = 1;
  }
  v3 = 0LL;
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (_DWORD)Status == -1073741637 )
    goto LABEL_52;
  if ( (int)Status >= 0 )
    goto LABEL_17;
  PoStartNextPowerIrp(Irp);
  v17 = 0;
  Irp->IoStatus.Status = Status;
LABEL_44:
  IofCompleteRequest(Irp, v17);
  return (unsigned int)Status;
}
