/*
 * XREFs of ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A76DC
 * Callers:
 *     ?ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A45E0 (-ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x1C001CED0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D100 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001D1E0 (NdisReadConfiguration.c)
 *     ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x1C00632B4 (-ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAME.c)
 *     ?ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C009F59C (-ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall ndisUpdateOffloadKeywords(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD_PARAMETERS *a2)
{
  _QWORD *v4; // r15
  UCHAR IPsecV2; // r10
  UCHAR IPsecV2IPv4; // r13
  unsigned __int8 v7; // bl
  UCHAR Type; // r12
  UCHAR v9; // r11
  UCHAR Revision; // cl
  unsigned __int8 v11; // al
  UCHAR IPv4Checksum; // al
  char v13; // r14
  UCHAR TCPIPv4Checksum; // cl
  UCHAR TCPIPv6Checksum; // r8
  UCHAR UDPIPv4Checksum; // dl
  UCHAR v17; // r9
  unsigned int v18; // ebx
  NDIS_STATUS v19; // eax
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v20; // xmm6
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  unsigned int Value; // eax
  unsigned int v35; // eax
  int LsoV2IPv4; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  int LsoV2IPv6; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  int IPsecV1; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  int TcpConnectionIPv4; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  int TcpConnectionIPv6; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned __int8 v52; // si
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  UCHAR v58; // si
  int v59; // ecx
  UCHAR v60; // si
  int v61; // ecx
  int Status; // [rsp+38h] [rbp-59h] BYREF
  UCHAR UDPIPv6Checksum; // [rsp+3Ch] [rbp-55h]
  UCHAR LsoV1; // [rsp+3Dh] [rbp-54h]
  struct _NDIS_CONFIGURATION_PARAMETER v66; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int8 v67; // [rsp+58h] [rbp-39h]
  UCHAR v68; // [rsp+59h] [rbp-38h]
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-31h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-29h] BYREF
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v71; // [rsp+80h] [rbp-11h]
  PNDIS_CONFIGURATION_PARAMETER ParameterValue[11]; // [rsp+90h] [rbp-1h] BYREF
  UCHAR v73; // [rsp+F8h] [rbp+67h]
  UCHAR v74; // [rsp+100h] [rbp+6Fh]
  unsigned __int8 v75; // [rsp+108h] [rbp+77h]
  UCHAR v76; // [rsp+110h] [rbp+7Fh]

  *(_QWORD *)&v71.IntegerData = 262146LL;
  ConfigurationHandle = 0LL;
  ParameterValue[0] = 0LL;
  v71.StringData.Buffer = (wchar_t *)L"0";
  v4 = 0LL;
  v74 = 0;
  memset(&v66, 0, sizeof(v66));
  IPsecV2 = 0;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  v67 = 0;
  IPsecV2IPv4 = 0;
  v75 = 0;
  v7 = 0;
  UDPIPv6Checksum = 0;
  LsoV1 = 0;
  Type = 0;
  v76 = 0;
  v9 = 0;
  v68 = 0;
  v73 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBEu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      a1);
    IPsecV2 = 0;
    v9 = 0;
  }
  Revision = a2->Header.Revision;
  if ( Revision >= 2u && a2->Header.Size >= 0x16u )
  {
    IPsecV2 = a2->IPsecV2;
    IPsecV2IPv4 = a2->IPsecV2IPv4;
    v74 = IPsecV2;
  }
  if ( Revision >= 3u && a2->Header.Size >= 0x1Au )
  {
    v7 = *(&a2->IPsecV2IPv4 + 1);
    v11 = *(&a2->IPsecV2IPv4 + 2);
    v9 = a2[1].Header.Revision;
    Type = a2[1].Header.Type;
    v67 = v7;
    v75 = v11;
    v73 = v9;
  }
  if ( Revision >= 4u && a2->Header.Size >= 0x20u )
  {
    v76 = (v9 & 1) != 0 ? Type : 0;
    if ( (v9 & 2) != 0 )
    {
      v68 = Type;
      v76 = (v9 & 1) != 0 ? Type : 0;
    }
  }
  if ( Revision >= 5u && a2->Header.Size >= 0x22u )
  {
    UDPIPv6Checksum = a2[1].UDPIPv6Checksum;
    LsoV1 = a2[1].LsoV1;
  }
  IPv4Checksum = a2->IPv4Checksum;
  v13 = a1->Offload->MiniportHardwareCapabilities.Flags & 1;
  if ( IPv4Checksum > 4u )
    goto LABEL_216;
  TCPIPv4Checksum = a2->TCPIPv4Checksum;
  if ( TCPIPv4Checksum > 4u )
    goto LABEL_216;
  TCPIPv6Checksum = a2->TCPIPv6Checksum;
  if ( TCPIPv6Checksum > 4u )
    goto LABEL_216;
  UDPIPv4Checksum = a2->UDPIPv4Checksum;
  if ( UDPIPv4Checksum > 4u )
    goto LABEL_216;
  v17 = a2->UDPIPv6Checksum;
  if ( v17 > 4u
    || a2->LsoV1 > 2u
    || a2->LsoV2IPv4 > 2u
    || a2->LsoV2IPv6 > 2u
    || a2->IPsecV1 > 4u
    || a2->TcpConnectionIPv4 > 2u
    || a2->TcpConnectionIPv6 > 2u
    || IPsecV2 > 4u
    || IPsecV2IPv4 > 4u
    || v7 > 2u
    || v75 > 2u
    || Type > 2u
    || v9 > 3u
    || Type && !v9 )
  {
    goto LABEL_216;
  }
  if ( UDPIPv6Checksum > 2u || LsoV1 > 2u )
    goto LABEL_216;
  if ( IPsecV2 && IPsecV2IPv4 )
    return (unsigned int)-1073676267;
  if ( v13 && (IPv4Checksum != TCPIPv4Checksum || IPv4Checksum != UDPIPv4Checksum || TCPIPv6Checksum != v17) )
    return (unsigned int)-1073741811;
  a1->OffloadRegistry.Value |= 0x20000u;
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  v19 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = ConfigurationHandle;
  v18 = v19;
  Status = v19;
  if ( v19 )
    goto LABEL_217;
  v20 = v71;
  if ( v13 )
  {
    v21 = a2->IPv4Checksum;
    if ( (_BYTE)v21 )
    {
      v66.ParameterType = NdisParameterString;
      v66.ParameterData = v71;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v21 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_217;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv4Str, &v66);
    }
    v22 = a2->TCPIPv6Checksum;
    if ( (_BYTE)v22 )
    {
      v66.ParameterType = NdisParameterString;
      v66.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v22 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_217;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv6Str, &v66);
    }
  }
  else
  {
    NdisReadConfiguration(
      &Status,
      ParameterValue,
      ConfigurationHandle,
      &TCPUDPChecksumOffloadIPv4Str,
      NdisParameterString);
  }
  v23 = a2->IPv4Checksum;
  if ( (_BYTE)v23 )
  {
    if ( !v13 )
    {
      v66.ParameterType = NdisParameterString;
      v66.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v23 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_217;
      ndisWriteConfigurationIfPresent(&Status, v4, &IPXsumIPv4Str, &v66);
    }
    if ( a2->IPv4Checksum == 1 )
    {
      a1->OffloadRegistry.Value |= 3u;
    }
    else
    {
      if ( a2->IPv4Checksum == 2 )
      {
        v24 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 2;
      }
      else
      {
        if ( a2->IPv4Checksum != 3 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFFC;
          goto LABEL_66;
        }
        v24 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 1;
      }
      a1->OffloadRegistry.Value = v24;
    }
  }
LABEL_66:
  v25 = a2->TCPIPv4Checksum;
  if ( !(_BYTE)v25 )
    goto LABEL_78;
  if ( !v13 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v25 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv4Str, &v66);
  }
  if ( a2->TCPIPv4Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0xCu;
  }
  else
  {
    if ( a2->TCPIPv4Checksum == 2 )
    {
      v26 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 8;
    }
    else
    {
      if ( a2->TCPIPv4Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFFF3;
        goto LABEL_78;
      }
      v26 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 4;
    }
    a1->OffloadRegistry.Value = v26;
  }
LABEL_78:
  v27 = a2->TCPIPv6Checksum;
  if ( !(_BYTE)v27 )
    goto LABEL_90;
  if ( !v13 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v27 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv6Str, &v66);
  }
  if ( a2->TCPIPv6Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0xC0u;
  }
  else
  {
    if ( a2->TCPIPv6Checksum == 2 )
    {
      v28 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x80;
    }
    else
    {
      if ( a2->TCPIPv6Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFF3F;
        goto LABEL_90;
      }
      v28 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x40;
    }
    a1->OffloadRegistry.Value = v28;
  }
LABEL_90:
  v29 = a2->UDPIPv4Checksum;
  if ( !(_BYTE)v29 )
    goto LABEL_102;
  if ( !v13 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v29 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv4Str, &v66);
  }
  if ( a2->UDPIPv4Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0x30u;
  }
  else
  {
    if ( a2->UDPIPv4Checksum == 2 )
    {
      v30 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x20;
    }
    else
    {
      if ( a2->UDPIPv4Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFFCF;
        goto LABEL_102;
      }
      v30 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x10;
    }
    a1->OffloadRegistry.Value = v30;
  }
LABEL_102:
  v31 = a2->UDPIPv6Checksum;
  if ( !(_BYTE)v31 )
    goto LABEL_114;
  if ( !v13 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v31 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv6Str, &v66);
  }
  if ( a2->UDPIPv6Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0x300u;
  }
  else
  {
    if ( a2->UDPIPv6Checksum == 2 )
    {
      v32 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x200;
    }
    else
    {
      if ( a2->UDPIPv6Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFCFF;
        goto LABEL_114;
      }
      v32 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x100;
    }
    a1->OffloadRegistry.Value = v32;
  }
LABEL_114:
  v33 = a2->LsoV1;
  if ( (_BYTE)v33 )
  {
    if ( (unsigned __int8)v33 > 2u )
      goto LABEL_216;
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, v33 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV1IPv4Str, &v66);
    Value = a1->OffloadRegistry.Value;
    if ( a2->LsoV1 == 1 )
      v35 = Value | 0x400;
    else
      v35 = Value & 0xFFFFFBFF;
    a1->OffloadRegistry.Value = v35;
  }
  LsoV2IPv4 = a2->LsoV2IPv4;
  if ( (_BYTE)LsoV2IPv4 )
  {
    if ( (unsigned __int8)LsoV2IPv4 > 2u )
      goto LABEL_216;
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, LsoV2IPv4 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv4Str, &v66);
    v37 = a1->OffloadRegistry.Value;
    if ( a2->LsoV2IPv4 == 1 )
      v38 = v37 | 0x800;
    else
      v38 = v37 & 0xFFFFF7FF;
    a1->OffloadRegistry.Value = v38;
  }
  LsoV2IPv6 = a2->LsoV2IPv6;
  if ( (_BYTE)LsoV2IPv6 )
  {
    if ( (unsigned __int8)LsoV2IPv6 > 2u )
      goto LABEL_216;
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, LsoV2IPv6 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv6Str, &v66);
    v40 = a1->OffloadRegistry.Value;
    if ( a2->LsoV2IPv6 == 1 )
      v41 = v40 | 0x1000;
    else
      v41 = v40 & 0xFFFFEFFF;
    a1->OffloadRegistry.Value = v41;
  }
  IPsecV1 = a2->IPsecV1;
  if ( (_BYTE)IPsecV1 )
  {
    if ( (unsigned __int8)IPsecV1 > 4u )
      goto LABEL_216;
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, IPsecV1 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecIPv4Str, &v66);
    if ( a2->IPsecV1 == 1 )
    {
      a1->OffloadRegistry.Value |= 0x6000u;
    }
    else
    {
      if ( a2->IPsecV1 == 2 )
      {
        v43 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x4000;
      }
      else
      {
        if ( a2->IPsecV1 != 3 )
        {
          a1->OffloadRegistry.Value &= 0xFFFF9FFF;
          goto LABEL_146;
        }
        v43 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x2000;
      }
      a1->OffloadRegistry.Value = v43;
    }
  }
LABEL_146:
  if ( v74 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, (unsigned int)v74 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2Str, &v66);
    v44 = a1->OffloadRegistry.Value;
    switch ( v74 )
    {
      case 1u:
        v45 = v44 | 0xC0000;
        break;
      case 2u:
        v45 = v44 & 0xFFF3FFFF | 0x80000;
        break;
      case 3u:
        v45 = v44 & 0xFFF3FFFF | 0x40000;
        break;
      default:
        v45 = v44 & 0xFFF3FFFF;
        break;
    }
LABEL_162:
    a1->OffloadRegistry.Value = v45;
    goto LABEL_165;
  }
  if ( !IPsecV2IPv4 )
    goto LABEL_165;
  v66.ParameterType = NdisParameterString;
  v66.ParameterData = v20;
  Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, (unsigned int)IPsecV2IPv4 - 1);
  v18 = Status;
  if ( Status )
    goto LABEL_217;
  ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2IPv4Str, &v66);
  switch ( IPsecV2IPv4 )
  {
    case 1u:
      a1->OffloadRegistry.Value |= 0x300000u;
      break;
    case 2u:
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFCFFFFF | 0x200000;
      break;
    case 3u:
      v45 = a1->OffloadRegistry.Value & 0xFFCFFFFF | 0x100000;
      goto LABEL_162;
    default:
      a1->OffloadRegistry.Value &= 0xFFCFFFFF;
      break;
  }
LABEL_165:
  TcpConnectionIPv4 = a2->TcpConnectionIPv4;
  if ( (_BYTE)TcpConnectionIPv4 )
  {
    if ( (unsigned __int8)TcpConnectionIPv4 > 2u )
      goto LABEL_216;
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, TcpConnectionIPv4 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv4Str, &v66);
    v47 = a1->OffloadRegistry.Value;
    if ( a2->TcpConnectionIPv4 == 1 )
      v48 = v47 | 0x8000;
    else
      v48 = v47 & 0xFFFF7FFF;
    a1->OffloadRegistry.Value = v48;
  }
  TcpConnectionIPv6 = a2->TcpConnectionIPv6;
  if ( (_BYTE)TcpConnectionIPv6 )
  {
    if ( (unsigned __int8)TcpConnectionIPv6 <= 2u )
    {
      v66.ParameterType = NdisParameterString;
      v66.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, TcpConnectionIPv6 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_217;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv6Str, &v66);
      v50 = a1->OffloadRegistry.Value;
      if ( a2->TcpConnectionIPv6 == 1 )
        v51 = v50 | 0x10000;
      else
        v51 = v50 & 0xFFFEFFFF;
      a1->OffloadRegistry.Value = v51;
      goto LABEL_179;
    }
LABEL_216:
    v18 = -1073676267;
    goto LABEL_217;
  }
LABEL_179:
  v52 = v67;
  if ( v67 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, (unsigned int)v67 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv4Str, &v66);
    v53 = 0;
    if ( v52 == 1 )
      v53 = 0x800000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFF7FFFFF | v53;
  }
  if ( v75 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, (unsigned int)v75 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv6Str, &v66);
    v54 = 0;
    if ( v75 == 1 )
      v54 = 0x1000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFEFFFFFF | v54;
  }
  if ( Type )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, Type == 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    if ( Type == 2 && v73 == 3 || Type == 1 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadStr, &v66);
      v55 = 0;
      if ( Type == 2 )
        v55 = 0x2000000;
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFDFFFFFF | v55;
    }
    if ( (v73 & 1) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadNvgreStr, &v66);
      v56 = 0;
      if ( v76 == 2 )
        v56 = 0x4000000;
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFBFFFFFF | v56;
    }
    if ( (v73 & 2) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadVxlanStr, &v66);
      v57 = 0;
      if ( v68 == 2 )
        v57 = 0x8000000;
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xF7FFFFFF | v57;
    }
  }
  v58 = UDPIPv6Checksum;
  if ( UDPIPv6Checksum )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString(
               (struct _UNICODE_STRING *)&v66.ParameterData,
               (unsigned int)UDPIPv6Checksum - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &UsoIPv4Str, &v66);
    v59 = 0;
    if ( v58 == 1 )
      v59 = 0x10000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xEFFFFFFF | v59;
  }
  v60 = LsoV1;
  if ( LsoV1 )
  {
    v66.ParameterType = NdisParameterString;
    v66.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v66.ParameterData, (unsigned int)LsoV1 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_217;
    ndisWriteConfigurationIfPresent(&Status, v4, &UsoIPv6Str, &v66);
    v61 = 0;
    if ( v60 == 1 )
      v61 = 0x20000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xDFFFFFFF | v61;
  }
  v18 = 0;
LABEL_217:
  if ( v4 )
    NdisCloseConfiguration(v4);
  return v18;
}
