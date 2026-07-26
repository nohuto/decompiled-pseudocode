/*
 * XREFs of ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C01482B0
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015FF8 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014798C (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008C3C (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016378 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x1C00181B4 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AA8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C0082D98 (ndisWdmSendOidPmParametersForSx.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C01103B4 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisMPowerPolicy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3,
        enum _DEVICE_POWER_STATE *a4,
        unsigned __int8 a5)
{
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // edi
  __int64 v6; // rsi
  enum _DEVICE_POWER_STATE v10; // r15d
  __int64 EnabledWoLPacketPatterns; // rcx
  unsigned __int16 v13; // r9
  void *v14; // rdx
  _DEVICE_POWER_STATE v15; // edx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  int v17; // ecx
  unsigned int v18; // edi
  unsigned int PnPFlags; // eax
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h]
  unsigned int v22; // [rsp+40h] [rbp-C0h]
  struct _NDIS_OID_REQUEST v23; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[20]; // [rsp+150h] [rbp+50h] BYREF

  MinMagicPacketWakeUp = NdisDeviceStateUnspecified;
  v6 = a2;
  v22 = 0;
  v10 = PowerDeviceD3;
  memset(v24, 0, sizeof(v24));
  EnabledWoLPacketPatterns = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x79u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a1,
      a2);
    EnabledWoLPacketPatterns = (__int64)&WPP_RECORDER_INITIALIZED;
  }
  if ( (a1->Flags & 0x80u) != 0 )
    __int2c();
  if ( (_DWORD)v6 == 6 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Au,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    if ( byte_1C00F7643 < 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerShutdownMiniport,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    *a4 = PowerDeviceD3;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 123;
    goto LABEL_25;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Cu,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    if ( byte_1C00F7643 < 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerWakeUpDevice,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        2);
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += ndisGetTimeInterval(&a1->LastSystemSleepTime);
    }
    *a4 = PowerDeviceD0;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 125;
    goto LABEL_25;
  }
  if ( !a5 )
  {
    a1->PnPFlags |= 0x800u;
    a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  }
  if ( (a1->PnPFlags & 0x20) == 0 || !ndisIsMiniportStarted(a1) || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Eu,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    if ( (byte_1C00F7641 & 8) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerPolicySetD3,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    *a4 = PowerDeviceD3;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Fu,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    return 0LL;
  }
  if ( (unsigned int)(a1->CurrentDevicePowerState - 2) <= 2 )
  {
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x400u;
      ndisCancelWaitWake(a1);
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x80u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    return 2147483663LL;
  }
  if ( (_DWORD)v6 == 5 )
  {
    if ( a3 == PowerSystemShutdown )
    {
      if ( !a5 )
      {
        a1->PnPFlags &= ~0x400u;
        ndisCancelWaitWake(a1);
      }
      *a4 = PowerDeviceD3;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v13 = 129;
LABEL_25:
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        v13,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
      return 0LL;
    }
    if ( ndisAoAcCapable || ndisAoAcTest )
    {
      if ( !a5 )
      {
        a1->PnPFlags &= ~0x400u;
        ndisCancelWaitWake(a1);
      }
      *a4 = PowerDeviceD3;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v13 = 130;
      goto LABEL_25;
    }
  }
  if ( (a1->PnPFlags & 0x40) == 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = 0;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x83u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)a1,
        v21);
    }
    if ( (byte_1C00F7641 & 8) != 0 )
    {
      v14 = &PowerWakeNotEnabled;
LABEL_59:
      McTemplateK0jqxq_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)v14,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
      goto LABEL_113;
    }
    goto LABEL_113;
  }
  v15 = a1->DeviceCaps.DeviceState[v6];
  if ( (int)v6 >= 5 && ((int)v6 > a1->DeviceCaps.SystemWake || v15 > a1->DeviceCaps.DeviceWake) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x84u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    if ( (byte_1C00F7641 & 8) != 0 )
    {
      v14 = &PowerHibernateOrShutdown;
      goto LABEL_59;
    }
LABEL_113:
    if ( a5 )
    {
LABEL_121:
      *a4 = PowerDeviceD3;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Cu,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          (char)a1,
          v6,
          4);
      if ( (byte_1C00F7641 & 8) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          &PowerPolicyStates,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          v6,
          *a4);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Du,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          a1);
      return v22;
    }
LABEL_114:
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
    {
      memset(&v23.Header.Revision, 0, 0xF7uLL);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Bu,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          a1);
      if ( (byte_1C00F7641 & 8) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          v20,
          (__int64)&PowerDisableWakeup,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1);
      *(_DWORD *)v24 = 1311360;
      *(_OWORD *)&v24[4] = 0LL;
      memset(&v23, 0, 0xF8uLL);
      *(_DWORD *)&v23.NdisReserved[16] |= 8u;
      *(_QWORD *)&v23.NdisReserved[32] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v23.NdisReserved[96]);
      v23.PortNumber = 0;
      v23.DATA.QUERY_INFORMATION.InformationBuffer = v24;
      v23.Header = (NDIS_OBJECT_HEADER)15466902;
      v23.DATA.QUERY_INFORMATION.Oid = -50265847;
      v23.RequestType = NdisRequestSetInformation;
      v23.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
      ndisQuerySetMiniport(a1, 0LL, &v23, 0, 0LL);
    }
    goto LABEL_121;
  }
  EnabledWoLPacketPatterns = a1->PMCurrentParameters.EnabledWoLPacketPatterns;
  if ( (EnabledWoLPacketPatterns & 2) != 0 && a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp )
    MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
  if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD) != 0
    && (MinPatternWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp) != NdisDeviceStateUnspecified
    && (MinMagicPacketWakeUp == NdisDeviceStateUnspecified || MinMagicPacketWakeUp > MinPatternWakeUp) )
  {
    MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
  }
  else
  {
    MinPatternWakeUp = MinMagicPacketWakeUp;
    if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x85u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          a1);
      if ( (byte_1C00F7641 & 8) != 0 )
      {
        v14 = &PowerPolicyPatternNotEnabled;
        goto LABEL_59;
      }
      goto LABEL_113;
    }
  }
  EnabledWoLPacketPatterns = (unsigned int)a1->DeviceCaps.DeviceWake;
  if ( MinMagicPacketWakeUp <= (int)EnabledWoLPacketPatterns )
    EnabledWoLPacketPatterns = (unsigned int)MinPatternWakeUp;
  if ( (int)v6 > a1->DeviceCaps.SystemWake || v15 > (int)EnabledWoLPacketPatterns || v15 == PowerDeviceUnspecified )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x86u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    if ( (byte_1C00F7642 & 0x40) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerPolicyError,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        2);
    v22 = -1073741823;
    goto LABEL_113;
  }
  EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
  if ( (_DWORD)EnabledWoLPacketPatterns )
  {
    v17 = EnabledWoLPacketPatterns - 1;
    if ( v17 )
    {
      EnabledWoLPacketPatterns = (unsigned int)(v17 - 1);
      if ( (_DWORD)EnabledWoLPacketPatterns )
      {
        if ( (_DWORD)EnabledWoLPacketPatterns != 1 )
        {
LABEL_94:
          v18 = -1073741823;
          v22 = -1073741823;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v21) = v6;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x87u,
              (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
              (char)a1,
              v21);
          }
          if ( (byte_1C00F7642 & 0x40) != 0 )
            McTemplateK0jqxq_EtwWriteTransfer(
              EnabledWoLPacketPatterns,
              (__int64)&PowerPolicyError,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3);
          goto LABEL_99;
        }
        if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x2000) != 0 )
          goto LABEL_89;
      }
      EnabledWoLPacketPatterns = 4098LL;
      if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x1002) == 0x1002 )
      {
        v10 = PowerDeviceD2;
        goto LABEL_89;
      }
    }
    EnabledWoLPacketPatterns = 2049LL;
    if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x801) == 0x801 )
    {
      v10 = PowerDeviceD1;
      goto LABEL_89;
    }
  }
  if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x400) == 0 )
    goto LABEL_94;
  v10 = PowerDeviceD0;
LABEL_89:
  if ( v15 <= v10 )
  {
    v18 = 0;
  }
  else
  {
    v18 = -1073741823;
    v22 = -1073741823;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v6;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x88u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)a1,
        v21);
    }
    if ( (byte_1C00F7642 & 0x40) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerPolicyError,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        4);
  }
LABEL_99:
  if ( !a5 )
  {
    ndisMInvokeDevicePowerNotify(a1, v10);
    if ( (unsigned int)ndisWdmSendOidPmParametersForSx((__int64)a1) )
      goto LABEL_114;
  }
  *a4 = v10;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x89u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a1,
      v6,
      *a4);
  if ( (byte_1C00F7641 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      EnabledWoLPacketPatterns,
      &PowerPolicyStates,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      v6,
      *a4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x8Au,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a1);
  return v18;
}
