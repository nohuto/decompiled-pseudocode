/*
 * XREFs of ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00144E4 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00145E4 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014A28 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016508 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016C0C (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0018668 (WPP_RECORDER_SF_qLL.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0021284 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022ACC (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00251B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisSetEvent @ 0x1C0027230 (NdisSetEvent.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E914 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0082554 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0082680 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0082AFC (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009998C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C009EC60 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C010F78C (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0111FD8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0116160 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C01166C0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167A0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0117494 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01177E4 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0117890 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0135ACC (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABC8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C014B820 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

void __fastcall ndisDevicePowerOn(_QWORD *a1)
{
  char *v1; // rbx
  KIRQL v3; // r14
  char v4; // r15
  __int64 v5; // rcx
  _IRP *v6; // rsi
  enum _DEVICE_POWER_STATE DeviceState; // r12d
  int Status; // edi
  int SetMiniportDeviceState; // edi
  unsigned __int8 v10; // al
  KIRQL v11; // dl
  enum _NDIS_DEVICE_PNP_EVENT v12; // edx
  unsigned int v13; // r9d
  KIRQL v14; // r15
  int v15; // eax
  struct _NDIS_MINIPORT_BLOCK *v16; // rdx
  __int64 v17; // rcx
  _DEVICE_OBJECT *v18; // rcx
  POWER_STATE v19; // r8d
  KIRQL v20; // dl
  int v21; // edx
  KIRQL v22; // dl
  KIRQL v23; // dl
  __int64 v24; // rax
  KIRQL v25; // dl
  KSPIN_LOCK *v26; // rcx
  KIRQL v27; // dl
  unsigned int v28; // eax
  KIRQL v29; // cl
  __int64 v30; // [rsp+38h] [rbp-D0h]
  KIRQL NewIrql[4]; // [rsp+58h] [rbp-B0h] BYREF
  char v32[4]; // [rsp+5Ch] [rbp-ACh]
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  char v34[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v36; // [rsp+178h] [rbp+70h] BYREF
  int v37; // [rsp+180h] [rbp+78h]
  __int128 v38; // [rsp+188h] [rbp+80h] BYREF
  __int128 v39; // [rsp+198h] [rbp+90h]
  __int64 v40; // [rsp+1A8h] [rbp+A0h]

  v1 = (char *)(a1 - 672);
  NewIrql[1] = 0;
  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v33 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v3 = 0;
  v38 = 0LL;
  v40 = 0LL;
  v4 = 0;
  v39 = 0LL;
  NewIrql[2] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x43u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      v1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)v1 + 30) & 0x80u) != 0 )
  {
    v6 = 0LL;
    *(_DWORD *)v32 = 0;
    DeviceState = PowerDeviceD0;
  }
  else
  {
    v6 = (_IRP *)a1[4];
    DeviceState = v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.DeviceState;
    *(_DWORD *)v32 = v6->IoStatus.Status;
  }
  a1[4] = 0LL;
  if ( *((_DWORD *)v1 + 380) != 1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x44u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        v1);
    if ( (byte_1C00F7641 & 8) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        v5,
        (__int64)&PowerOnMiniportNotStarted,
        (__int64)(v1 + 4008),
        (__int64)(v1 + 4008),
        *((_DWORD *)v1 + 1014),
        *((_QWORD *)v1 + 503),
        1);
    v18 = (_DEVICE_OBJECT *)*((_QWORD *)v1 + 478);
    v19.SystemState = (_SYSTEM_POWER_STATE)v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *((POWER_STATE *)v1 + 967) = v19;
    PoSetPowerState(v18, DevicePowerState, v19);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v1 + 5232));
    ndisScheduleD0CompleteSignalWorkItem((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
    IofCompleteRequest(v6, 0);
    goto LABEL_53;
  }
  if ( (*((_DWORD *)v1 + 31) & 0x10) == 0 )
  {
    Status = *(_DWORD *)v32;
    if ( *(int *)v32 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x47u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          (char)v1,
          *(_DWORD *)v32);
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x48u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          v1);
      if ( *((_DWORD *)v1 + 967) != 1 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x49u,
            (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
            v1);
        if ( (byte_1C00F7641 & 8) != 0 )
          McTemplateK0jqxq_EtwWriteTransfer(
            v5,
            (__int64)&MiniportPoweringUp,
            (__int64)(v1 + 4008),
            (__int64)(v1 + 4008),
            *((_DWORD *)v1 + 1014),
            *((_QWORD *)v1 + 503),
            2);
        if ( (*((_DWORD *)v1 + 31) & 0x20) != 0 )
        {
          if ( (ndisAoAcCapable || ndisAoAcTest)
            && ((unsigned __int8)v1[32] > 6u || v1[32] == 6 && (unsigned __int8)v1[33] >= 0x1Eu) )
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
            ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
            v20 = NewIrql[0];
            *((_QWORD *)v1 + 65) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v20);
            v4 = 1;
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(
                                     (struct _NDIS_MINIPORT_BLOCK *)v1,
                                     DeviceState,
                                     0xFD010101,
                                     1);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v21,
              0xEu,
              0x4Au,
              (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
              (char)v1,
              DeviceState,
              SetMiniportDeviceState);
          if ( SetMiniportDeviceState )
          {
            if ( v4 )
            {
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
              ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
              v22 = NewIrql[0];
              *((_QWORD *)v1 + 65) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v22);
              v4 = 0;
            }
          }
          else
          {
            *((_DWORD *)v1 + 967) = DeviceState;
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
          ndisSetWakeUpTimer((struct _NDIS_MINIPORT_BLOCK *)v1);
          v23 = NewIrql[0];
          *((_QWORD *)v1 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v23);
        }
        else
        {
          if ( (*(_WORD *)(*((_QWORD *)v1 + 470) + 26LL) & 1) != 0 || (*((_DWORD *)v1 + 31) & 0x4000) == 0 )
            goto LABEL_19;
          SetMiniportDeviceState = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v1);
        }
        if ( SetMiniportDeviceState )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = SetMiniportDeviceState;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x4Cu,
              (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
              (char)v1,
              v30);
          }
          if ( (*((_DWORD *)v1 + 30) & 0x80u) != 0 )
            *(_DWORD *)v32 = -1073741823;
          else
            v6->IoStatus.Status = -1073741823;
          *((_QWORD *)v1 + 508) = 2LL;
          if ( ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, 0xCu) )
          {
            v24 = *((_QWORD *)v1 + 505);
            if ( *(_DWORD *)(v24 + 1112) != 2 )
            {
              *(_DWORD *)(v24 + 1112) = 2;
              *(_DWORD *)(*((_QWORD *)v1 + 505) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification((struct _NDIS_MINIPORT_BLOCK *)v1);
              LODWORD(v33) = 1;
            }
            ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, MPIFREF_DEVPOWERUPFAIL);
          }
          goto LABEL_32;
        }
LABEL_19:
        NewIrql[2] = 1;
        if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) )
        {
          NdisSetEvent((PNDIS_EVENT)(v1 + 3728));
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
          if ( !v4 )
            ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
          v10 = ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v1, 1, NewIrql[0]);
          v11 = NewIrql[0];
          LODWORD(v33) = v10;
          *((_QWORD *)v1 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v11);
          _m_prefetchw(v1 + 4424);
          if ( (_InterlockedOr((volatile signed __int32 *)v1 + 1106, 0) & 0x10) != 0 )
          {
            ndisSetDeviceInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v1, 1u);
            _InterlockedAnd((volatile signed __int32 *)v1 + 1106, 0xFFFFFFEF);
          }
          NewIrql[1] = 1;
          HIDWORD(v33) = (_BYTE)ndisAcOnLine == 1;
          ndisNotifyMiniports((struct _NDIS_MINIPORT_BLOCK *)v1, v12, (char *)&v33 + 4, v13);
          if ( (unsigned __int8)v1[32] < 6u )
            ndisQueryMediaStatus((struct _NDIS_MINIPORT_BLOCK *)v1);
        }
        *((_DWORD *)v1 + 967) = DeviceState;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v30) = DeviceState;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x4Bu,
            (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
            (char)v1,
            v30);
        }
        NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, DeviceState);
        if ( (byte_1C00F7641 & 8) != 0 )
          McTemplateK0jqxqq_EtwWriteTransfer(
            v5,
            &DevicePowerStateChange,
            (const GUID *)(v1 + 4008),
            (__int64)(v1 + 4008),
            *((_DWORD *)v1 + 1014),
            *((_QWORD *)v1 + 503),
            1,
            DeviceState);
        if ( (*((_DWORD *)v1 + 30) & 0x80u) == 0 )
          PoSetPowerState(*((PDEVICE_OBJECT *)v1 + 478), DevicePowerState, (POWER_STATE)DeviceState);
LABEL_32:
        v14 = NewIrql[1];
        Status = *(_DWORD *)v32;
        v3 = NewIrql[1];
LABEL_33:
        if ( (*((_DWORD *)v1 + 30) & 0x80u) == 0 )
        {
          Status = v6->IoStatus.Status;
          *(_DWORD *)v32 = Status;
          IofCompleteRequest(v6, 0);
        }
        if ( Status < 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = Status;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x4Du,
              (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
              (char)v1,
              v30);
          }
          if ( (byte_1C00F7643 & 2) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v5,
              &DevicePowerOnFailed,
              (const GUID *)(v1 + 4008),
              (__int64)(v1 + 4008),
              *((_DWORD *)v1 + 1014),
              *((_QWORD *)v1 + 503),
              Status,
              1,
              0);
          ndisMiniportFatalError((struct _NDIS_MINIPORT_BLOCK *)v1, NdisMEventErr_FailedPowerD0);
        }
        if ( *((int *)v1 + 468) < 0 )
          ndisReturnQueuedLowPowerNbls((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v1 + 5232));
        if ( v3 )
        {
          ndisIssueNetEventSetPowerEvent(
            (struct _NDIS_MINIPORT_BLOCK *)v1,
            DeviceState,
            (*((_DWORD *)v1 + 30) & 0x80) == 0);
          ndisNotifyDevicePowerStateChange(
            (struct _NDIS_MINIPORT_BLOCK *)v1,
            (enum _NDIS_DEVICE_POWER_STATE)DeviceState);
          if ( (*((_DWORD *)v1 + 31) & 0x10000000) != 0 && _bittest((const signed __int32 *)v1 + 30, 0x1Du) )
          {
            while ( 1 )
            {
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
              v26 = (KSPIN_LOCK *)(v1 + 96);
              if ( !v1[89] )
                break;
              v27 = NewIrql[0];
              *((_QWORD *)v1 + 65) = 0LL;
              KeReleaseSpinLock(v26, v27);
              KeStallExecutionProcessor(1u);
            }
            v1[89] = 1;
            *((_QWORD *)v1 + 233) = KeGetCurrentThread();
            *((_QWORD *)v1 + 65) = 0LL;
            KeReleaseSpinLockFromDpcLevel(v26);
            v28 = *((_DWORD *)v1 + 87);
            *((_DWORD *)v1 + 30) &= ~0x20000000u;
            StatusIndication.Flags |= 8u;
            *((_QWORD *)&v38 + 1) = v28;
            v39 = *(_OWORD *)(v1 + 2760);
            v40 = *(_QWORD *)(v1 + 812);
            StatusIndication.StatusBufferSize = 40;
            StatusIndication.StatusBuffer = &v38;
            *(_QWORD *)&v38 = 0x100280180LL;
            StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
            StatusIndication.SourceHandle = v1;
            StatusIndication.StatusCode = 1073807383;
            NdisMIndicateStatusEx(v1, &StatusIndication);
            v29 = NewIrql[0];
            v1[89] = 0;
            *((_QWORD *)v1 + 233) = 0LL;
            if ( v29 != 2 )
              KeLowerIrql(v29);
            Status = *(_DWORD *)v32;
          }
          if ( !_bittest((const signed __int32 *)v1 + 30, 0x1Du) && v14 )
            ndisSetMediaDisconnectTimer((struct _NDIS_MINIPORT_BLOCK *)v1);
        }
        ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, Status);
        ndisMSetMiniportReadyForBinding((struct _NDIS_MINIPORT_BLOCK *)v1, 1, 2048, RunAsynchronous);
        if ( NewIrql[2] )
        {
          v15 = *((_DWORD *)v1 + 671);
          if ( (v15 & 0x100) != 0 )
          {
            *((_DWORD *)v1 + 671) = v15 & 0xFFFFFEFF;
            Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v1 + 5112));
            if ( Ndis::BindState::SetPause((Ndis::BindState *)(v1 + 5040), DatapathRunning, PauseReason_LowPower) )
            {
              memset(v34, 0, sizeof(v34));
              if ( (unsigned __int8)byte_1C00F5443 >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v1, (struct NDIS_PNPTRACE_LOCALS *)v34);
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v16,
                    0x1Cu,
                    0x4Eu,
                    (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
                    *(unsigned __int16 **)&v34[8],
                    *(_QWORD *)v34);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5112), v16);
            Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5112), RunSynchronous, 1);
          }
        }
        if ( (!ndisAoAcCapable && !ndisAoAcTest || (_DWORD)v33)
          && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1)
          && *((_DWORD *)v1 + 380) == 1
          && ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, 0xDu) )
        {
          v17 = *((_QWORD *)v1 + 505);
          LODWORD(v36) = 786816;
          HIDWORD(v36) = *(_DWORD *)(v17 + 1112);
          v37 = *(_DWORD *)(v17 + 1116);
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = &v36;
          StatusIndication.SourceHandle = v1;
          StatusIndication.StatusCode = 1073807395;
          StatusIndication.StatusBufferSize = 12;
          NdisMIndicateStatusEx(v1, &StatusIndication);
          ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, MPIFREF_DEVPOWERUP);
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x4Fu,
            (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
            v1);
LABEL_53:
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0xCu);
        ndisDereferencePackage((PVOID *)&ndisPkgs);
        return;
      }
      v14 = 0;
      if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) && *((_DWORD *)v1 + 380) == 1 )
      {
        NdisSetEvent((PNDIS_EVENT)(v1 + 3728));
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
        ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
        v25 = NewIrql[0];
        *((_QWORD *)v1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v25);
        v3 = 1;
        goto LABEL_33;
      }
    }
    v14 = 0;
    goto LABEL_33;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x45u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      v1);
  if ( (byte_1C00F7641 & 8) != 0 )
    McTemplateK0jqxq_EtwWriteTransfer(
      v5,
      (__int64)&PowerOnMiniportRemoved,
      (__int64)(v1 + 4008),
      (__int64)(v1 + 4008),
      *((_DWORD *)v1 + 1014),
      *((_QWORD *)v1 + 503),
      1);
  IofCompleteRequest(v6, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v1 + 5232));
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0xCu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x46u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      v1);
}
