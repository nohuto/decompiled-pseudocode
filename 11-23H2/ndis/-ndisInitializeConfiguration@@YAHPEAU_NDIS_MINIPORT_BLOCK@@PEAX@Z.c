/*
 * XREFs of ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C011ABBC
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 *     ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BD80 (-ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C0AC (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C002DE24 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E658 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C380 (-ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisInitializeConfiguration(struct _NDIS_MINIPORT_BLOCK *a1, const WCHAR *a2)
{
  _INTERFACE_TYPE IntegerData; // edi
  unsigned int v4; // r15d
  unsigned __int16 Length; // r12
  _BYTE *Pool2; // rax
  _BYTE *v8; // r14
  unsigned int v9; // esi
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  NTSTATUS DeviceProperty; // r9d
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  PVOID v14; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  PNDIS_CONFIGURATION_PARAMETER v24; // rax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  __int128 ConfigurationHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h]
  const WCHAR *v32; // [rsp+68h] [rbp-98h]
  UNICODE_STRING Keyword; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v34; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v35; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v36; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v37; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v38; // [rsp+C0h] [rbp-40h] BYREF
  __int128 PropertyBuffer; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v40[3]; // [rsp+E0h] [rbp-20h] BYREF

  v29 = -1;
  v32 = 0LL;
  Status = 0;
  ParameterValue = 0LL;
  IntegerData = MaximumInterfaceType;
  *(_QWORD *)&v35.Length = 1310738LL;
  *(_QWORD *)&Keyword.Length = 1048590LL;
  v35.Buffer = L"BusNumber";
  LOWORD(v4) = 20;
  *(_QWORD *)&v34.Length = 2097182LL;
  Keyword.Buffer = (wchar_t *)L"BusType";
  Length = 16;
  *(_QWORD *)&v36.Length = 1966108LL;
  v34.Buffer = L"PnPCapabilities";
  *(_QWORD *)&v38.Length = 2883626LL;
  v36.Buffer = L"RemoteBootCard";
  *(_QWORD *)&v37.Length = 2752552LL;
  v38.Buffer = L"NdisDriverVerifyFlags";
  v26 = 1;
  v37.Buffer = L"SGMapRegistersNeeded";
  ConfigurationHandle = 0LL;
  ResultLength = 0;
  *(_OWORD *)P = 0LL;
  PropertyBuffer = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      a1);
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 136LL, 1751336014);
  v8 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_30;
  }
  a1->ConfigurationHandle = Pool2;
  *Pool2 = 10;
  *((_WORD *)Pool2 + 1) = 136;
  Pool2[1] = 1;
  v32 = a2;
  *((_QWORD *)&ConfigurationHandle + 1) = a1;
  P[0] = Pool2;
  P[1] = 0LL;
  if ( !a1->OpenQueue )
  {
    Status = ndisReadBindPaths(a1, v40, a2);
    v9 = Status;
    if ( Status )
      goto LABEL_30;
  }
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  *((_QWORD *)v8 + 3) = ndisSaveParameters;
  *((_DWORD *)v8 + 8) = 20;
  *((_DWORD *)v8 + 14) = 0;
  *((_QWORD *)v8 + 10) = 0LL;
  *((_DWORD *)v8 + 22) = 0;
  *((_QWORD *)v8 + 12) = 0LL;
  *((_QWORD *)v8 + 1) = a1;
  DeviceProperty = IoGetDeviceProperty(
                     PhysicalDeviceObject,
                     DevicePropertyBusTypeGuid,
                     0x10u,
                     &PropertyBuffer,
                     &ResultLength);
  if ( DeviceProperty >= 0 )
  {
    v16 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
      v16 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
    if ( !v16 )
    {
      IntegerData = Internal;
      v26 = 0;
      goto LABEL_40;
    }
    v17 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
      v17 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
    if ( v17 )
    {
      v18 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
        v18 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
      if ( v18 )
      {
        v19 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
        if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
          v19 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
        if ( !v19 )
        {
          IntegerData = Vmcs;
          v26 = 16;
          goto LABEL_40;
        }
        v20 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
        if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
          v20 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
        if ( v20 )
        {
          v21 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
          if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
            v21 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
          if ( v21 )
          {
            v22 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
            if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
              v22 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
            if ( v22 )
            {
              v23 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
              if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
                v23 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
              if ( v23 )
                goto LABEL_7;
              IntegerData = Eisa;
            }
          }
          else
          {
            IntegerData = PNPISABus;
          }
        }
        else
        {
          IntegerData = ACPIBus;
        }
      }
      else
      {
        IntegerData = PCIBus;
      }
    }
    else
    {
      IntegerData = PCMCIABus;
    }
    v26 = IntegerData;
    goto LABEL_40;
  }
LABEL_7:
  IntegerData = v26;
  if ( v26 == 1 )
  {
    v12 = IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyLegacyBusType, 4u, &v26, &ResultLength);
    IntegerData = v26;
    DeviceProperty = v12;
  }
  if ( DeviceProperty < 0 )
    goto LABEL_10;
LABEL_40:
  if ( IntegerData == Isa || IntegerData == PCMCIABus )
  {
LABEL_10:
    *((_DWORD *)P[0] + 4) |= 1u;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &Keyword, NdisParameterInteger);
    *((_DWORD *)P[0] + 4) &= ~1u;
    if ( Status )
    {
      IntegerData = v26;
    }
    else
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      v26 = IntegerData;
    }
  }
  if ( IntegerData == PCIBus || IntegerData == PCMCIABus )
  {
    Status = ndisQueryBusInterface(a1);
    v9 = Status;
    if ( Status )
      goto LABEL_30;
    IntegerData = v26;
  }
  if ( (unsigned int)(IntegerData - 2) <= 1 )
  {
    v9 = -1073741637;
  }
  else
  {
    a1->BusType = IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v34, NdisParameterInteger);
    if ( Status )
    {
      if ( (a1->PnPFlags & 0x200000) != 0 )
      {
        a1->PnPCapabilities = ndisDefaultPnPCapabilities;
        a1->PnPCapabilities = ndisDefaultPnPCapabilities | 0x10000000;
      }
    }
    else
    {
      a1->PnPCapabilities = ParameterValue->ParameterData.IntegerData;
    }
    if ( (a1->Flags & 0x80u) != 0 )
      a1->PnPCapabilities &= 0x10000100u;
    if ( IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyBusNumber, 4u, &v29, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v35, NdisParameterInteger), Status) )
    {
      v13 = v29;
    }
    else
    {
      v13 = ParameterValue->ParameterData.IntegerData;
      v29 = v13;
    }
    a1->BusNumber = v13;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v36, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      a1->Flags |= 0x40000000u;
      a1->InfoFlags |= 0x4000u;
    }
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      &ConfigurationHandle,
      &MediaDisconnectTimeOutStr,
      NdisParameterHexInteger);
    if ( !Status )
    {
      v4 = ParameterValue->ParameterData.IntegerData;
      if ( v4 )
      {
        if ( v4 > 0xFFFF )
          LOWORD(v4) = -1;
      }
      else
      {
        LOWORD(v4) = 1;
      }
    }
    a1->MediaDisconnectTimeOut = v4;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      a1->FilterPnPFlags |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(&ConfigurationHandle, a1);
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v37, NdisParameterInteger);
    if ( !Status )
    {
      v24 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v24 = ParameterValue;
      }
      Length = v24->ParameterData.StringData.Length;
    }
    a1->SGMapRegistersNeeded = Length;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v38, NdisParameterHexInteger);
    if ( !Status )
      a1->DriverVerifyFlags = ParameterValue->ParameterData.IntegerData;
    *((_DWORD *)v8 + 4) = 0;
    ndisReadOffloadRegistry(a1);
    ndisReadSoftwareTimestampSettings(&ConfigurationHandle, a1);
    v9 = 0;
  }
LABEL_30:
  while ( 1 )
  {
    v14 = P[1];
    if ( !P[1] )
      break;
    P[1] = *(PVOID *)P[1];
    ExFreePoolWithTag(v14, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      a1);
  return v9;
}
