/*
 * XREFs of ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E4C8
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C011ABFC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x1C001CED0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D100 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001D1E0 (NdisReadConfiguration.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BE20 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  PVOID v3; // rsi
  unsigned int v4; // edi
  unsigned int IntegerData; // edx
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int Value; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // eax
  PNDIS_CONFIGURATION_PARAMETER v38; // rcx
  unsigned int v39; // edx
  unsigned int v40; // r8d
  unsigned int v41; // r8d
  unsigned int v42; // edx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+90h] [rbp+30h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+A0h] [rbp+40h] BYREF

  ParameterValue = 0LL;
  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x42u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v3 = ConfigurationHandle;
  v4 = v2;
  Status = v2;
  if ( !v2 )
  {
    a1->OffloadRegistry.Value |= 0x20000u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_5;
    IntegerData = ParameterValue->ParameterData.IntegerData;
    if ( IntegerData )
    {
      v7 = IntegerData - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFFC;
          goto LABEL_5;
        }
        v8 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 1;
      }
      else
      {
        v8 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 2;
      }
      a1->OffloadRegistry.Value = v8;
    }
    else
    {
      a1->OffloadRegistry.Value |= 3u;
    }
LABEL_5:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_6;
    v9 = ParameterValue->ParameterData.IntegerData;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFF3;
          goto LABEL_6;
        }
        v11 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 4;
      }
      else
      {
        v11 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 8;
      }
      a1->OffloadRegistry.Value = v11;
    }
    else
    {
      a1->OffloadRegistry.Value |= 0xCu;
    }
LABEL_6:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_7;
    v12 = ParameterValue->ParameterData.IntegerData;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFCF;
          goto LABEL_7;
        }
        v14 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x10;
      }
      else
      {
        v14 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x20;
      }
      a1->OffloadRegistry.Value = v14;
    }
    else
    {
      a1->OffloadRegistry.Value |= 0x30u;
    }
LABEL_7:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_8;
    v15 = ParameterValue->ParameterData.IntegerData;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFF3F;
          goto LABEL_8;
        }
        v17 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x40;
      }
      else
      {
        v17 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x80;
      }
      a1->OffloadRegistry.Value = v17;
    }
    else
    {
      a1->OffloadRegistry.Value |= 0xC0u;
    }
LABEL_8:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( Status )
    {
LABEL_9:
      NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
      if ( !Status && !ParameterValue->ParameterData.IntegerData )
        a1->OffloadRegistry.Value |= 0x3Fu;
      NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
      if ( !Status && !ParameterValue->ParameterData.IntegerData )
        a1->OffloadRegistry.Value |= 0x3C0u;
      NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv6Str, NdisParameterInteger);
      if ( !Status )
      {
        Value = a1->OffloadRegistry.Value;
        if ( ParameterValue->ParameterData.IntegerData )
          v22 = Value & 0xFFFFEFFF;
        else
          v22 = Value | 0x1000;
        a1->OffloadRegistry.Value = v22;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v23 = a1->OffloadRegistry.Value;
        if ( ParameterValue->ParameterData.IntegerData )
          v24 = v23 & 0xFFFFF7FF;
        else
          v24 = v23 | 0x800;
        a1->OffloadRegistry.Value = v24;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV1IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v25 = a1->OffloadRegistry.Value;
        if ( ParameterValue->ParameterData.IntegerData )
          v26 = v25 & 0xFFFFFBFF;
        else
          v26 = v25 | 0x400;
        a1->OffloadRegistry.Value = v26;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecIPv4Str, NdisParameterInteger);
      if ( Status )
        goto LABEL_15;
      v27 = ParameterValue->ParameterData.IntegerData;
      if ( !v27 )
      {
        a1->OffloadRegistry.Value |= 0x6000u;
        goto LABEL_15;
      }
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFF9FFF;
LABEL_15:
          NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
          if ( !Status )
          {
            v30 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v31 = v30 & 0xFFFF7FFF;
            else
              v31 = v30 | 0x8000;
            a1->OffloadRegistry.Value = v31;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
          if ( !Status )
          {
            v32 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v33 = v32 & 0xFFFEFFFF;
            else
              v33 = v32 | 0x10000;
            a1->OffloadRegistry.Value = v33;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2Str, NdisParameterInteger);
          if ( Status )
          {
            NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2IPv4Str, NdisParameterInteger);
            if ( !Status )
            {
              v38 = ParameterValue;
              v39 = a1->OffloadRegistry.Value | 0x400000;
              a1->OffloadRegistry.Value = v39;
              v40 = v38->ParameterData.IntegerData;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  if ( v41 == 1 )
                    v42 = v39 & 0xFFCFFFFF | 0x100000;
                  else
                    v42 = v39 & 0xFFCFFFFF;
                }
                else
                {
                  v42 = v39 & 0xFFCFFFFF | 0x200000;
                }
              }
              else
              {
                v42 = v39 | 0x300000;
              }
              a1->OffloadRegistry.Value = v42;
            }
          }
          else
          {
            v34 = a1->OffloadRegistry.Value;
            v35 = ParameterValue->ParameterData.IntegerData;
            if ( v35 )
            {
              v36 = v35 - 1;
              if ( v36 )
              {
                if ( v36 == 1 )
                  v37 = v34 & 0xFFF3FFFF | 0x40000;
                else
                  v37 = v34 & 0xFFF3FFFF;
              }
              else
              {
                v37 = v34 & 0xFFF3FFFF | 0x80000;
              }
            }
            else
            {
              v37 = v34 | 0xC0000;
            }
            a1->OffloadRegistry.Value = v37;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv4Str, NdisParameterInteger);
          if ( !Status )
          {
            v43 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v44 = v43 & 0xFF7FFFFF;
            else
              v44 = v43 | 0x800000;
            a1->OffloadRegistry.Value = v44;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv6Str, NdisParameterInteger);
          if ( !Status )
          {
            v45 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v46 = v45 & 0xFEFFFFFF;
            else
              v46 = v45 | 0x1000000;
            a1->OffloadRegistry.Value = v46;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
          if ( !Status )
          {
            v47 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v48 = v47 & 0xFDFFFFFF;
            else
              v48 = v47 | 0x2000000;
            a1->OffloadRegistry.Value = v48;
          }
          NdisReadConfiguration(
            &Status,
            &ParameterValue,
            v3,
            &EncapsulatedPacketTaskOffloadNvgreStr,
            NdisParameterInteger);
          if ( !Status )
          {
            v49 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v50 = v49 & 0xFBFFFFFF;
            else
              v50 = v49 | 0x4000000;
            a1->OffloadRegistry.Value = v50;
          }
          NdisReadConfiguration(
            &Status,
            &ParameterValue,
            v3,
            &EncapsulatedPacketTaskOffloadVxlanStr,
            NdisParameterInteger);
          if ( !Status )
          {
            v51 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v52 = v51 & 0xF7FFFFFF;
            else
              v52 = v51 | 0x8000000;
            a1->OffloadRegistry.Value = v52;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &UsoIPv4Str, NdisParameterInteger);
          if ( !Status )
          {
            v53 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v54 = v53 & 0xEFFFFFFF;
            else
              v54 = v53 | 0x10000000;
            a1->OffloadRegistry.Value = v54;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &UsoIPv6Str, NdisParameterInteger);
          v4 = Status;
          if ( !Status )
          {
            v55 = a1->OffloadRegistry.Value;
            if ( ParameterValue->ParameterData.IntegerData )
              v56 = v55 & 0xDFFFFFFF;
            else
              v56 = v55 | 0x20000000;
            a1->OffloadRegistry.Value = v56;
          }
          goto LABEL_26;
        }
        v29 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x2000;
      }
      else
      {
        v29 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x4000;
      }
      a1->OffloadRegistry.Value = v29;
      goto LABEL_15;
    }
    v18 = ParameterValue->ParameterData.IntegerData;
    if ( !v18 )
    {
      a1->OffloadRegistry.Value |= 0x300u;
      goto LABEL_9;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFCFF;
        goto LABEL_9;
      }
      v20 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x100;
    }
    else
    {
      v20 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x200;
    }
    a1->OffloadRegistry.Value = v20;
    goto LABEL_9;
  }
LABEL_26:
  if ( v3 )
    NdisCloseConfiguration(v3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x43u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      v4,
      a1->OffloadRegistry.Value);
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1);
  return v4;
}
