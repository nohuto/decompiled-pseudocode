/*
 * XREFs of ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C013AEBC
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014C04 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013B0DC (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x1C0015654 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020738 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5A8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C007D858 (ndisWdmSendOidPmParametersForSx.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C0103EA4 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
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
  unsigned int v7; // r13d
  enum _DEVICE_POWER_STATE v10; // r14d
  unsigned __int16 v13; // r9
  _DEVICE_POWER_STATE v14; // edx
  unsigned int EnabledWoLPacketPatterns; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  _DEVICE_POWER_STATE DeviceWake; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx
  unsigned int PnPFlags; // eax
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  struct _NDIS_OID_REQUEST v24; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v25[20]; // [rsp+140h] [rbp+40h] BYREF

  MinMagicPacketWakeUp = NdisDeviceStateUnspecified;
  v6 = a2;
  v7 = 0;
  v10 = PowerDeviceD3;
  memset(v25, 0, sizeof(v25));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x79u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      a2);
  if ( (_DWORD)v6 == 6 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Au,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1);
    if ( byte_1C00EE583 < 0 )
    {
      LODWORD(v22) = 65537;
      McTemplateK0jqxd_EtwWriteTransfer();
    }
    *a4 = PowerDeviceD3;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 123;
    goto LABEL_23;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Cu,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1);
    if ( byte_1C00EE583 < 0 )
    {
      LODWORD(v22) = 65538;
      McTemplateK0jqxd_EtwWriteTransfer();
    }
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += ndisGetTimeInterval(&a1->LastSystemSleepTime);
    }
    *a4 = PowerDeviceD0;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 125;
    goto LABEL_23;
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
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1);
    if ( (byte_1C00EE581 & 8) != 0 )
    {
      LODWORD(v22) = 65537;
      McTemplateK0jqxd_EtwWriteTransfer();
    }
    *a4 = PowerDeviceD3;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Fu,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1,
        v22);
    return 0LL;
  }
  if ( (unsigned int)(a1->CurrentDevicePowerState - 2) > 2 )
  {
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
LABEL_23:
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          v13,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a1,
          v22);
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
        goto LABEL_23;
      }
    }
    if ( (a1->PnPFlags & 0x40) == 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = 0;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x83u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1,
          v22);
      }
      if ( (byte_1C00EE581 & 8) != 0 )
      {
LABEL_56:
        LODWORD(v22) = 65537;
        McTemplateK0jqxd_EtwWriteTransfer();
      }
LABEL_110:
      if ( a5 )
      {
LABEL_118:
        *a4 = PowerDeviceD3;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x8Cu,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a1,
            v6,
            4);
        if ( (byte_1C00EE581 & 8) != 0 )
        {
          SLODWORD(v23) = *a4;
          LODWORD(v22) = v6;
          McTemplateK0jqxqq_EtwWriteTransfer();
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x8Du,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            a1,
            v22,
            v23);
        return v7;
      }
LABEL_111:
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
      {
        memset(&v24.Header.Revision, 0, 0xF7uLL);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x8Bu,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            a1);
        if ( (byte_1C00EE581 & 8) != 0 )
        {
          LODWORD(v22) = 65537;
          McTemplateK0jqxd_EtwWriteTransfer();
        }
        *(_DWORD *)v25 = 1311360;
        *(_OWORD *)&v25[4] = 0LL;
        memset(&v24, 0, 0xF8uLL);
        *(_DWORD *)&v24.NdisReserved[16] |= 8u;
        v24.PortNumber = 0;
        *(_QWORD *)&v24.NdisReserved[32] = &ndisIntReqGeneric;
        v24.Header = (NDIS_OBJECT_HEADER)15466902;
        v24.DATA.QUERY_INFORMATION.InformationBuffer = v25;
        v24.DATA.QUERY_INFORMATION.Oid = -50265847;
        v24.RequestType = NdisRequestSetInformation;
        v24.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
        ndisQuerySetMiniport(a1, 0LL, &v24, 0, 0LL);
      }
      goto LABEL_118;
    }
    v14 = a1->DeviceCaps.DeviceState[v6];
    if ( (int)v6 >= 5 && ((int)v6 > a1->DeviceCaps.SystemWake || v14 > a1->DeviceCaps.DeviceWake) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x84u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a1);
      if ( (byte_1C00EE581 & 8) != 0 )
        goto LABEL_56;
      goto LABEL_110;
    }
    EnabledWoLPacketPatterns = a1->PMCurrentParameters.EnabledWoLPacketPatterns;
    if ( (EnabledWoLPacketPatterns & 2) != 0 && a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp )
      MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
    if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD) != 0
      && (MinPatternWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp) != NdisDeviceStateUnspecified )
    {
      if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified || MinMagicPacketWakeUp > MinPatternWakeUp )
        MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
    }
    else if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x85u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a1);
      if ( (byte_1C00EE581 & 8) != 0 )
        goto LABEL_56;
      goto LABEL_110;
    }
    DeviceWake = a1->DeviceCaps.DeviceWake;
    if ( MinMagicPacketWakeUp <= DeviceWake )
      DeviceWake = MinMagicPacketWakeUp;
    if ( (int)v6 > a1->DeviceCaps.SystemWake || v14 > DeviceWake || v14 == PowerDeviceUnspecified )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x86u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a1);
      if ( (byte_1C00EE582 & 0x40) != 0 )
      {
        LODWORD(v22) = 65538;
        McTemplateK0jqxd_EtwWriteTransfer();
      }
      v7 = -1073741823;
      goto LABEL_110;
    }
    v18 = DeviceWake - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 != 1 )
            goto LABEL_92;
          if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x2000) != 0 )
          {
LABEL_86:
            if ( v14 > v10 )
            {
              v7 = -1073741823;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v22) = v6;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0xEu,
                  0x88u,
                  (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                  (char)a1,
                  v22);
              }
              if ( (byte_1C00EE582 & 0x40) != 0 )
              {
                LODWORD(v22) = 65540;
LABEL_91:
                McTemplateK0jqxd_EtwWriteTransfer();
                goto LABEL_96;
              }
            }
            goto LABEL_96;
          }
        }
        if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x1002) == 0x1002 )
        {
          v10 = PowerDeviceD2;
          goto LABEL_86;
        }
      }
      if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x801) == 0x801 )
      {
        v10 = PowerDeviceD1;
        goto LABEL_86;
      }
    }
    if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x400) != 0 )
    {
      v10 = PowerDeviceD0;
      goto LABEL_86;
    }
LABEL_92:
    v7 = -1073741823;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v6;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x87u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1,
        v22);
    }
    if ( (byte_1C00EE582 & 0x40) != 0 )
    {
      LODWORD(v22) = 65539;
      goto LABEL_91;
    }
LABEL_96:
    if ( a5 || (ndisMInvokeDevicePowerNotify(a1, v10), !(unsigned int)ndisWdmSendOidPmParametersForSx((__int64)a1)) )
    {
      *a4 = v10;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x89u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1,
          v6,
          v10);
      if ( (byte_1C00EE581 & 8) != 0 )
      {
        SLODWORD(v23) = *a4;
        LODWORD(v22) = v6;
        McTemplateK0jqxqq_EtwWriteTransfer();
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Au,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a1,
          v22,
          v23);
      return v7;
    }
    goto LABEL_111;
  }
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
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a1);
  return 2147483663LL;
}
