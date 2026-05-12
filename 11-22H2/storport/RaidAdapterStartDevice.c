/*
 * XREFs of RaidAdapterStartDevice @ 0x1C00391DC
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C003993C (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C003CFF0 (RaidPnPAsyncStartCompleteWorker.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     RaidGetD3ColdInterface @ 0x1C0020144 (RaidGetD3ColdInterface.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0024800 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0024824 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x1C00325D4 (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterCompleteInitialization @ 0x1C00346D8 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterConfigureResources @ 0x1C0034B08 (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C003612C (RaidAdapterInitializeWmi.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C00373BC (RaidAdapterRegisterDeviceInterface.c)
 *     RaidAdapterRegisterMFNDInterface @ 0x1C0037434 (RaidAdapterRegisterMFNDInterface.c)
 *     RaidAdapterRegisterNonPoFxMiniportInterface @ 0x1C00374BC (RaidAdapterRegisterNonPoFxMiniportInterface.c)
 *     RaidAdapterRegisterRpmbInterface @ 0x1C0037520 (RaidAdapterRegisterRpmbInterface.c)
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C003E980 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaQueryInterface @ 0x1C00575C0 (RaQueryInterface.c)
 *     RaidGetResetInterface @ 0x1C0059654 (RaidGetResetInterface.c)
 *     RaInitializeConfiguration @ 0x1C00A9208 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDevice(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  int started; // esi
  __int64 v11; // rax
  char v12; // cl
  ULONG v13; // eax
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rcx
  int (__fastcall *v17)(_QWORD, __int64, _DWORD *); // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // r9
  int *v22; // rax
  int v23; // ecx
  void **v24; // rbx
  __int64 v25; // rdx
  NTSTATUS v26; // r8d
  int v27; // r8d
  void *v28; // rcx
  KIRQL v29; // bl
  ULONG Size[2]; // [rsp+20h] [rbp-60h]
  PVOID Data; // [rsp+28h] [rbp-58h]
  PULONG RequiredSize; // [rsp+30h] [rbp-50h]
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-48h]
  _BYTE v34[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-2Ch] BYREF
  ULONG v36; // [rsp+58h] [rbp-28h] BYREF
  ULONG v37; // [rsp+5Ch] [rbp-24h] BYREF
  _DWORD v38[4]; // [rsp+60h] [rbp-20h] BYREF
  int SystemPowerHint; // [rsp+70h] [rbp-10h]
  int SystemPowerResumeLatency; // [rsp+74h] [rbp-Ch]

  v35 = 0;
  v36 = 0;
  v37 = 0;
  v34[0] = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids, a1, a2);
  }
  v4 = *(_DWORD *)(a1 + 88);
  v5 = 8LL;
  *(_DWORD *)(a1 + 88) = 1;
  if ( v4 != 2 )
  {
    if ( v4 != 8 )
    {
      if ( (*(_BYTE *)(a1 + 111) & 0x20) != 0 )
        KeSetEvent((PRKEVENT)(a1 + 6040), 0, 0);
      return 0LL;
    }
    *(_BYTE *)(a1 + 110) |= 0x80u;
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  started = RaInitializeConfiguration(
              (int)a1 + 344,
              *(_QWORD *)(a1 + 568),
              *(_DWORD *)(a1 + 816),
              *(_DWORD *)(a1 + 820),
              (*(_BYTE *)(a1 + 109) & 4) != 0,
              *(_BYTE *)(a1 + 110) >> 7);
  if ( started >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 568) )
    {
      started = -1073741810;
      goto LABEL_14;
    }
    started = RaidAdapterConfigureResources(a1, v8, v9);
    if ( started < 0 )
      goto LABEL_14;
    if ( *(_DWORD *)(a1 + 352) == 5 )
    {
      if ( IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &DEVPKEY_Device_Address, 0, 0, 4u, &v35, &v36, &v37) >= 0 )
      {
        *(_DWORD *)(a1 + 824) = HIWORD(v35);
        *(_DWORD *)(a1 + 828) = (unsigned __int16)v35;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 32),
             &DEVPKEY_PciDevice_IsTunneledDevice,
             0,
             0,
             1u,
             v34,
             &v36,
             &v37) >= 0 )
      {
        if ( StorageD3InModernStandbyEnabled || (v12 = 0, v34[0]) )
          v12 = 2;
        *(_BYTE *)(a1 + 120) = v12 | (*(_BYTE *)(a1 + 120) ^ (*(_BYTE *)(a1 + 120) ^ v34[0]) & 1) & 0xFD;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(a1 + 720))(
              *(_QWORD *)(a1 + 672),
              4LL,
              a1 + 4672,
              0LL,
              64);
      v14 = *(struct _DEVICE_OBJECT **)(a1 + 24);
      v36 = v13;
      RaQueryInterface(v14, a1 + 5832);
    }
    *(_DWORD *)(a1 + 1944) = 64;
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1968));
    *(_QWORD *)(a1 + 1976) = 0LL;
    *(_QWORD *)(a1 + 1960) = a1 + 1952;
    *(_QWORD *)(a1 + 1952) = a1 + 1952;
    *(_DWORD *)(a1 + 1984) = 0;
    *(_DWORD *)(a1 + 2000) = 1;
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 5920), 0) )
      *(_DWORD *)(a1 + 5924) = g_MaximumProcessorCount;
    v15 = (__int64 *)(a1 + 5304);
    RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 5304));
    RaidGetResetInterface(*(PDEVICE_OBJECT *)(a1 + 8));
    started = RaidAdapterStartMiniport(a1);
    if ( started < 0 )
      goto LABEL_14;
    if ( *(char *)(a1 + 110) < 0 )
    {
      v29 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1);
      KeLowerIrql(v29);
    }
    else
    {
      v16 = *v15;
      if ( *v15 )
      {
        if ( *(_QWORD *)(a1 + 4896) )
        {
          v38[0] = 0;
          v17 = *(int (__fastcall **)(_QWORD, __int64, _DWORD *))(v16 + 40);
          if ( v17 )
          {
            if ( v17(*(_QWORD *)(v16 + 8), 1LL, v38) >= 0 && (unsigned int)(v38[0] - 4) <= 1 )
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 4896) + 20LL) |= 0x80u;
              WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
              *(_QWORD *)(a1 + 5600) = WorkItem;
              if ( !WorkItem )
              {
                started = -1073741670;
                goto LABEL_14;
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
          v21 = *(_QWORD **)(a1 + 4896);
          if ( v21 )
          {
            v22 = (int *)v21[1];
            v23 = *v22;
            if ( *v22 == 1 )
            {
              v5 = (__int64)(v22 + 6);
            }
            else if ( v23 == 2 || v23 == 3 )
            {
              v5 = (__int64)(v22 + 8);
            }
            if ( (byte_1C0092A02 & 0x10) != 0 )
            {
              LODWORD(Type) = *(_DWORD *)v5;
              LODWORD(RequiredSize) = *(_DWORD *)(a1 + 4912);
              LODWORD(Data) = (*(unsigned __int8 *)(a1 + 107) >> 4) & 1;
              Size[0] = *(_DWORD *)(a1 + 56);
              McTemplateK0pqtqqt_EtwWriteTransfer(
                (unsigned int)Data,
                v19,
                v20,
                *v21,
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
          goto LABEL_77;
        v24 = (void **)(a1 + 4904);
        v26 = PoRegisterPowerSettingCallback(
                *(PDEVICE_OBJECT *)(a1 + 8),
                &GUID_LOW_POWER_EPOCH,
                RaidPowerSettingCallback,
                (PVOID)a1,
                (PVOID *)(a1 + 4904));
        if ( v26 < 0 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qD(
              WPP_GLOBAL_Control->AttachedDevice,
              18LL,
              &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
              a1,
              v26);
          }
        }
        else
        {
          LOBYTE(v25) = 1;
          v27 = PoRegisterCoalescingCallback(RaidCoalescingCallback, v25, a1 + 4920, a1);
          if ( v27 >= 0 )
          {
            *(_BYTE *)(a1 + 108) &= 0xFCu;
            v38[2] = 1;
            v38[3] = 16;
            SystemPowerHint = RaidAdapterGetSystemPowerHint(a1);
            SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
            RaCallMiniportAdapterControl(a1 + 336);
            goto LABEL_74;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qD(
              WPP_GLOBAL_Control->AttachedDevice,
              17LL,
              &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
              a1,
              v27);
          }
          v28 = *v24;
          *(_QWORD *)(a1 + 4920) = 0LL;
          PoUnregisterPowerSettingCallback(v28);
        }
        *v24 = 0LL;
LABEL_74:
        started = PoRegisterPowerSettingCallback(
                    *(PDEVICE_OBJECT *)(a1 + 8),
                    &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                    RaidPowerSettingCallback,
                    (PVOID)a1,
                    (PVOID *)(a1 + 5992));
        if ( started < 0 )
        {
          *(_QWORD *)(a1 + 5992) = 0LL;
          started = 0;
        }
        else
        {
          *(_BYTE *)(a1 + 111) &= ~8u;
        }
LABEL_77:
        if ( (unsigned int)RaidIsAdapterControlSupported(a1, 14) )
        {
          PoRegisterPowerSettingCallback(
            *(PDEVICE_OBJECT *)(a1 + 8),
            &GUID_DISK_MAX_POWER,
            RaidPowerSettingCallback,
            (PVOID)a1,
            (PVOID *)(a1 + 4928));
          started = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(a1 + 32),
                      &GUID_DEVINTERFACE_THERMAL_COOLING,
                      0LL,
                      (PUNICODE_STRING)(a1 + 4936));
          if ( started >= 0 )
          {
            *(_BYTE *)(a1 + 108) |= 0x10u;
            IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4936), 1u);
          }
        }
        if ( !*(_QWORD *)(a1 + 4896) && *(_BYTE *)(a1 + 4306) )
          RaidAdapterRegisterNonPoFxMiniportInterface(a1);
      }
    }
  }
LABEL_14:
  *(_BYTE *)(a1 + 110) &= ~0x80u;
  v11 = *(_QWORD *)(a1 + 4896);
  if ( v11 && (*(_DWORD *)(v11 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 4896) + 20LL) &= ~4u;
  }
  *(_QWORD *)(a1 + 5576) = 0LL;
  *(_DWORD *)(a1 + 5584) = 0;
  if ( started < 0 )
    *(_DWORD *)(a1 + 88) = 2;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
      a1,
      a2,
      started);
  }
  if ( (*(_BYTE *)(a1 + 111) & 0x20) != 0 )
    KeSetEvent((PRKEVENT)(a1 + 6040), 0, 0);
  return (unsigned int)started;
}
