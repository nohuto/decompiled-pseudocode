/*
 * XREFs of RaidAdapterStartDevice @ 0x1C0037D70
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0038428 (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C003B200 (RaidPnPAsyncStartCompleteWorker.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidGetD3ColdInterface @ 0x1C002026C (RaidGetD3ColdInterface.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0024B84 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0024BA8 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x1C0031F90 (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterConfigureResources @ 0x1C0033EA0 (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C00352C0 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C0036148 (RaidAdapterRegisterDeviceInterface.c)
 *     RaidAdapterRegisterMFNDInterface @ 0x1C00361C0 (RaidAdapterRegisterMFNDInterface.c)
 *     RaidAdapterRegisterNonPoFxMiniportInterface @ 0x1C0036248 (RaidAdapterRegisterNonPoFxMiniportInterface.c)
 *     RaidAdapterRegisterRpmbInterface @ 0x1C00362AC (RaidAdapterRegisterRpmbInterface.c)
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C003C5EC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaQueryInterface @ 0x1C004DD88 (RaQueryInterface.c)
 *     RaidGetResetInterface @ 0x1C004EB30 (RaidGetResetInterface.c)
 *     RaInitializeConfiguration @ 0x1C008EB08 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDevice(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  int started; // esi
  __int64 v11; // rax
  ULONG v12; // eax
  struct _DEVICE_OBJECT *v13; // rcx
  __int64 *v14; // rbx
  __int64 v15; // rcx
  int (__fastcall *v16)(_QWORD, __int64, int *); // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // r9
  int *v21; // rax
  int v22; // ecx
  void **v23; // rbx
  __int64 v24; // rdx
  NTSTATUS v25; // r8d
  int v26; // r8d
  void *v27; // rcx
  KIRQL v28; // bl
  ULONG Size[2]; // [rsp+20h] [rbp-60h]
  PVOID Data; // [rsp+28h] [rbp-58h]
  PULONG RequiredSize; // [rsp+30h] [rbp-50h]
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-48h]
  unsigned int v33; // [rsp+50h] [rbp-30h] BYREF
  ULONG v34; // [rsp+54h] [rbp-2Ch] BYREF
  int v35; // [rsp+58h] [rbp-28h] BYREF
  ULONG v36[3]; // [rsp+5Ch] [rbp-24h] BYREF
  int SystemPowerHint; // [rsp+68h] [rbp-18h]
  int SystemPowerResumeLatency; // [rsp+6Ch] [rbp-14h]

  v33 = 0;
  v34 = 0;
  v36[0] = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids, a1, a2);
  }
  v4 = *(_DWORD *)(a1 + 88);
  v5 = 8LL;
  *(_DWORD *)(a1 + 88) = 1;
  if ( v4 != 2 )
  {
    if ( v4 != 8 )
      return 0LL;
    *(_BYTE *)(a1 + 110) |= 0x80u;
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  started = RaInitializeConfiguration(
              (int)a1 + 344,
              *(_QWORD *)(a1 + 568),
              *(_DWORD *)(a1 + 808),
              *(_DWORD *)(a1 + 812),
              (*(_BYTE *)(a1 + 109) & 4) != 0,
              *(_BYTE *)(a1 + 110) >> 7);
  if ( started >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 568) )
    {
      started = -1073741810;
      goto LABEL_12;
    }
    started = RaidAdapterConfigureResources(a1, v8, v9);
    if ( started < 0 )
      goto LABEL_12;
    if ( *(_DWORD *)(a1 + 352) == 5 )
    {
      if ( IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &DEVPKEY_Device_Address, 0, 0, 4u, &v33, &v34, v36) >= 0 )
      {
        *(_DWORD *)(a1 + 816) = HIWORD(v33);
        *(_DWORD *)(a1 + 820) = (unsigned __int16)v33;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(a1 + 712))(
              *(_QWORD *)(a1 + 664),
              4LL,
              a1 + 4608,
              0LL,
              64);
      v13 = *(struct _DEVICE_OBJECT **)(a1 + 24);
      v34 = v12;
      RaQueryInterface(v13, a1 + 5768);
    }
    *(_DWORD *)(a1 + 1880) = 64;
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1904));
    *(_QWORD *)(a1 + 1912) = 0LL;
    *(_QWORD *)(a1 + 1896) = a1 + 1888;
    *(_QWORD *)(a1 + 1888) = a1 + 1888;
    *(_DWORD *)(a1 + 1920) = 0;
    *(_DWORD *)(a1 + 1936) = 1;
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 5856), 0) )
      *(_DWORD *)(a1 + 5860) = g_MaximumProcessorCount;
    v14 = (__int64 *)(a1 + 5240);
    RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 5240));
    RaidGetResetInterface(*(PDEVICE_OBJECT *)(a1 + 8));
    started = RaidAdapterStartMiniport(a1);
    if ( started < 0 )
      goto LABEL_12;
    if ( *(char *)(a1 + 110) < 0 )
    {
      v28 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1);
      KeLowerIrql(v28);
    }
    else
    {
      v15 = *v14;
      if ( *v14 )
      {
        if ( *(_QWORD *)(a1 + 4832) )
        {
          v35 = 0;
          v16 = *(int (__fastcall **)(_QWORD, __int64, int *))(v15 + 40);
          if ( v16 )
          {
            if ( v16(*(_QWORD *)(v15 + 8), 1LL, &v35) >= 0 && (unsigned int)(v35 - 4) <= 1 )
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 4832) + 20LL) |= 0x80u;
              WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
              *(_QWORD *)(a1 + 5536) = WorkItem;
              if ( !WorkItem )
              {
                started = -1073741670;
                goto LABEL_12;
              }
            }
          }
        }
      }
      started = RaidAdapterCompleteInitialization(a1);
      if ( started >= 0 )
      {
        if ( StorEtwLoggingEnabled )
        {
          v20 = *(_QWORD **)(a1 + 4832);
          if ( v20 )
          {
            v21 = (int *)v20[1];
            v22 = *v21;
            if ( *v21 == 1 )
            {
              v5 = (__int64)(v21 + 6);
            }
            else if ( v22 == 2 || v22 == 3 )
            {
              v5 = (__int64)(v21 + 8);
            }
            if ( (byte_1C00799E2 & 0x10) != 0 )
            {
              LODWORD(Type) = *(_DWORD *)v5;
              LODWORD(RequiredSize) = *(_DWORD *)(a1 + 4848);
              LODWORD(Data) = (*(unsigned __int8 *)(a1 + 107) >> 4) & 1;
              Size[0] = *(_DWORD *)(a1 + 56);
              McTemplateK0pqtqqt_EtwWriteTransfer(
                (unsigned int)Data,
                v18,
                v19,
                *v20,
                *(_QWORD *)Size,
                Data,
                RequiredSize,
                Type,
                (*(unsigned __int8 *)(a1 + 110) >> 6) & 1);
            }
          }
        }
        RaidAdapterInitializeWmi(a1);
        RaidAdapterRegisterDeviceInterface(a1);
        if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
          RaidAdapterRegisterMFNDInterface(a1);
        RaidAdapterRegisterRpmbInterface(a1);
        if ( IsSystemAoAC != 1 || !(unsigned int)RaidIsAdapterControlSupported(a1, 12) )
          goto LABEL_68;
        v23 = (void **)(a1 + 4840);
        v25 = PoRegisterPowerSettingCallback(
                *(PDEVICE_OBJECT *)(a1 + 8),
                &GUID_LOW_POWER_EPOCH,
                RaidPowerSettingCallback,
                (PVOID)a1,
                (PVOID *)(a1 + 4840));
        if ( v25 < 0 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qD(
              WPP_GLOBAL_Control->AttachedDevice,
              18LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              a1,
              v25);
          }
        }
        else
        {
          LOBYTE(v24) = 1;
          v26 = PoRegisterCoalescingCallback(RaidCoalescingCallback, v24, a1 + 4856, a1);
          if ( v26 >= 0 )
          {
            *(_BYTE *)(a1 + 108) &= 0xFCu;
            v36[1] = 1;
            v36[2] = 16;
            SystemPowerHint = RaidAdapterGetSystemPowerHint(a1);
            SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
            RaCallMiniportAdapterControl(a1 + 336);
            goto LABEL_65;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qD(
              WPP_GLOBAL_Control->AttachedDevice,
              17LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              a1,
              v26);
          }
          v27 = *v23;
          *(_QWORD *)(a1 + 4856) = 0LL;
          PoUnregisterPowerSettingCallback(v27);
        }
        *v23 = 0LL;
LABEL_65:
        started = PoRegisterPowerSettingCallback(
                    *(PDEVICE_OBJECT *)(a1 + 8),
                    &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                    RaidPowerSettingCallback,
                    (PVOID)a1,
                    (PVOID *)(a1 + 5920));
        if ( started < 0 )
        {
          *(_QWORD *)(a1 + 5920) = 0LL;
          started = 0;
        }
        else
        {
          *(_BYTE *)(a1 + 111) &= ~4u;
        }
LABEL_68:
        if ( (unsigned int)RaidIsAdapterControlSupported(a1, 14) )
        {
          PoRegisterPowerSettingCallback(
            *(PDEVICE_OBJECT *)(a1 + 8),
            &GUID_DISK_MAX_POWER,
            RaidPowerSettingCallback,
            (PVOID)a1,
            (PVOID *)(a1 + 4864));
          started = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(a1 + 32),
                      &GUID_DEVINTERFACE_THERMAL_COOLING,
                      0LL,
                      (PUNICODE_STRING)(a1 + 4872));
          if ( started >= 0 )
          {
            *(_BYTE *)(a1 + 108) |= 0x10u;
            IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4872), 1u);
          }
        }
        if ( !*(_QWORD *)(a1 + 4832) && *(_BYTE *)(a1 + 4242) )
          RaidAdapterRegisterNonPoFxMiniportInterface(a1);
      }
    }
  }
LABEL_12:
  *(_BYTE *)(a1 + 110) &= ~0x80u;
  v11 = *(_QWORD *)(a1 + 4832);
  if ( v11 && (*(_DWORD *)(v11 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 4832) + 20LL) &= ~4u;
  }
  *(_QWORD *)(a1 + 5512) = 0LL;
  *(_DWORD *)(a1 + 5520) = 0;
  if ( started < 0 )
    *(_DWORD *)(a1 + 88) = 2;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      a1,
      a2,
      started);
  }
  return (unsigned int)started;
}
