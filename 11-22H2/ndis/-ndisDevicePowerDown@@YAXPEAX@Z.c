/*
 * XREFs of ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0014354 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014898 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016378 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016A7C (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00184D8 (WPP_RECORDER_SF_qLL.c)
 *     NdisMIndicateStatusEx @ 0x1C001A280 (NdisMIndicateStatusEx.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C3FC (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00210F4 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00212C0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C002134C (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0082660 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C010F7CC (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C01161A0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167E0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C01174D4 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117824 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01178D0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0135B0C (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABE8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerDown(const GUID *a1)
{
  struct _NDIS_MINIPORT_BLOCK *Data4; // rsi
  int v3; // r12d
  _IRP *v4; // r13
  int Status; // r15d
  POWER_STATE v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rax
  KIRQL v10; // dl
  __int64 v11; // rcx
  unsigned int Data1; // eax
  __int64 v13; // rcx
  enum _DEVICE_POWER_STATE v14; // ebx
  __int64 v15; // rcx
  int v16; // edx
  int SetMiniportDeviceState; // r15d
  __int64 v18; // rcx
  struct _NDIS_MINIPORT_BLOCK *v19; // rdx
  unsigned __int8 v20; // al
  KIRQL v21; // dl
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // rax
  __int64 v25; // [rsp+38h] [rbp-D0h]
  __int64 v26; // [rsp+40h] [rbp-C8h]
  KIRQL NewIrql[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v28; // [rsp+5Ch] [rbp-ACh]
  char v29[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v31; // [rsp+178h] [rbp+70h] BYREF
  int v32; // [rsp+180h] [rbp+78h]

  NewIrql[0] = 0;
  Data4 = (struct _NDIS_MINIPORT_BLOCK *)a1[-339].Data4;
  v3 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v31 = 0LL;
  v32 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x52u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      Data4);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a1[-331].Data1 & 0x80u) != 0 )
  {
    v4 = 0LL;
    Status = 0;
    v6.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v4 = *(_IRP **)&a1[2].Data1;
    Status = v4->IoStatus.Status;
    v6.SystemState = (_SYSTEM_POWER_STATE)v4->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)&a1[2].Data1 = 0LL;
  v28 = Status;
  if ( Status >= 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x53u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)Data4,
        v6.SystemState);
    NDIS_COUNT_POWER_TRANSITION(Data4, v6.SystemState);
    if ( (byte_1C00F7641 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        v7,
        &DevicePowerStateChange,
        a1 - 88,
        (__int64)&a1[-88],
        a1[-85].Data1,
        *(_QWORD *)&a1[-87].Data1,
        1,
        v6.SystemState);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(Data4, NewIrql);
    v8 = *(_DWORD *)&a1[-85].Data4[4] & 0xFEFFFFFF;
    *(_DWORD *)a1[-85].Data4 = 5;
    *(_DWORD *)&a1[-85].Data4[4] = v8 | 8;
    if ( ndisMReferenceIfBlock(Data4, 0xEu) )
    {
      v9 = *(_QWORD *)&a1[-86].Data1;
      if ( *(_DWORD *)(v9 + 1112) != 5 )
      {
        *(_DWORD *)(v9 + 1112) = 5;
        v3 = 1;
        *(_DWORD *)(*(_QWORD *)&a1[-86].Data1 + 1116LL) = *(_DWORD *)&a1[-85].Data4[4];
      }
      ndisMDereferenceIfBlock(Data4, MPIFREF_POWERDOWN);
    }
    v10 = NewIrql[0];
    *(_QWORD *)&a1[-306].Data1 = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)a1[-333].Data4, v10);
    if ( v3 )
      ndisNsiSyncMiniportOperStatusNotification(Data4);
    Data1 = a1[-331].Data1;
    *(POWER_STATE *)&a1[-97].Data2 = v6;
    if ( (Data1 & 0x80u) == 0 )
      PoSetPowerState(*(PDEVICE_OBJECT *)a1[-100].Data4, DevicePowerState, v6);
    goto LABEL_18;
  }
  if ( !ndisIsMiniportStarted(Data4) || *(_DWORD *)a1[-244].Data4 != 1 )
    goto LABEL_22;
  if ( (a1[-331].Data1 & 0x80u) != 0 )
    __int2c();
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x54u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)Data4,
      v4->IoStatus.Status);
  v14 = *(_DWORD *)&a1[-97].Data2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = *(_DWORD *)&a1[-97].Data2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x55u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)Data4,
      v25);
  }
  NDIS_COUNT_POWER_TRANSITION(Data4, *(_DWORD *)&a1[-97].Data2);
  if ( (byte_1C00F7641 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      v15,
      &DevicePowerStateChange,
      a1 - 88,
      (__int64)&a1[-88],
      a1[-85].Data1,
      *(_QWORD *)&a1[-87].Data1,
      1,
      *(_DWORD *)&a1[-97].Data2);
  if ( (*(_DWORD *)&a1[-331].Data2 & 0x20) != 0 )
  {
    SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(Data4, v14, 0xFD010101, 1);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = SetMiniportDeviceState;
      WPP_RECORDER_SF_qLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        0xEu,
        0x56u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)Data4,
        v14,
        v26);
    }
  }
  else
  {
    SetMiniportDeviceState = ndisPmInitializeMiniport(Data4);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)a1[-12].Data4);
  if ( SetMiniportDeviceState )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x58u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        Data4);
    if ( (byte_1C00F7642 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v18,
        &PowerDownFailedCannotReinitialize,
        a1 - 88,
        (__int64)&a1[-88],
        a1[-85].Data1,
        *(_QWORD *)&a1[-87].Data1,
        SetMiniportDeviceState,
        1,
        0);
    if ( ndisMReferenceIfBlock(Data4, 0xFu) )
    {
      v24 = *(_QWORD *)&a1[-86].Data1;
      *(_DWORD *)&a1[-85].Data4[4] = 0;
      *(_DWORD *)a1[-85].Data4 = 2;
      if ( *(_DWORD *)(v24 + 1112) != 2 )
      {
        *(_DWORD *)(v24 + 1112) = 2;
        *(_DWORD *)(*(_QWORD *)&a1[-86].Data1 + 1116LL) = 0;
        ndisNsiSyncMiniportOperStatusNotification(Data4);
        v3 = 1;
      }
      ndisMDereferenceIfBlock(Data4, MPIFREF_POWERDOWNFAIL);
    }
    ndisMiniportFatalError(Data4, NdisMEventErr_FailedPowerDx);
    if ( (a1[-331].Data1 & 0x80u) != 0 )
    {
      LOBYTE(Status) = 1;
      goto LABEL_18;
    }
    v4->IoStatus.Status = -1073741823;
  }
  else
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)&a1[-19]);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)a1[-24].Data4, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v29, 0, sizeof(v29));
      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
      {
        ndisGetBindLinkNameForTracing(Data4, (struct NDIS_PNPTRACE_LOCALS *)v29);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v19,
            0x1Cu,
            0x57u,
            (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
            *(unsigned __int16 **)&v29[8],
            *(_QWORD *)v29);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&a1[-19], v19);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)&a1[-19], RunSynchronous, 0);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(Data4, NewIrql);
    ndisMRestoreOpenHandlers(Data4, 4u);
    v20 = ndisIfSetInterfaceState(Data4, 1, NewIrql[0]);
    v21 = NewIrql[0];
    *(_QWORD *)&a1[-306].Data1 = 0LL;
    v3 = v20;
    KeReleaseSpinLock((PKSPIN_LOCK)a1[-333].Data4, v21);
    _m_prefetchw(&a1[-62]);
    v22 = a1[-62].Data1;
    do
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange((volatile signed __int32 *)&a1[-62], v22, v22);
    }
    while ( v23 != v22 );
    if ( (v22 & 0x10) != 0 )
    {
      ndisSetDeviceInterfaceState(Data4, 1u);
      _InterlockedAnd((volatile signed __int32 *)&a1[-62], 0xFFFFFFEF);
    }
    ndisNotifyDevicePowerStateChange(Data4, (enum _NDIS_DEVICE_POWER_STATE)v14);
    ndisIssueNetEventSetPowerEvent(Data4, v14, 1);
  }
  LOBYTE(Status) = v28;
LABEL_18:
  if ( v3 && ndisIsMiniportStarted(Data4) && *(_DWORD *)a1[-244].Data4 == 1 )
  {
    v13 = *(_QWORD *)&a1[-86].Data1;
    LODWORD(v31) = 786816;
    HIDWORD(v31) = *(_DWORD *)(v13 + 1112);
    v32 = *(_DWORD *)(v13 + 1116);
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v31;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = Data4;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(Data4, &StatusIndication);
  }
LABEL_22:
  *(_DWORD *)a1[-60].Data4 = 65534;
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0jqxq_EtwWriteTransfer(
      v11,
      (__int64)&DevicePowerDownComplete,
      (__int64)&a1[-88],
      (__int64)&a1[-88],
      a1[-85].Data1,
      *(_QWORD *)&a1[-87].Data1,
      Status);
  if ( (a1[-331].Data1 & 0x80u) == 0 )
    IofCompleteRequest(v4, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x59u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      Data4);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
}
