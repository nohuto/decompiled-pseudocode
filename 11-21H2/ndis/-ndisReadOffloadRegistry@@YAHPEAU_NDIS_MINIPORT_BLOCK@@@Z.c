/*
 * XREFs of ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F734
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0112FCC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00302BC (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  PVOID v3; // rsi
  unsigned int v4; // edi
  unsigned int Value; // ecx
  unsigned int IntegerData; // edx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // ecx
  PNDIS_CONFIGURATION_PARAMETER v44; // rcx
  unsigned int v45; // edx
  unsigned int v46; // r8d
  unsigned int v47; // r8d
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
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
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
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
    if ( !Status )
    {
      Value = a1->OffloadRegistry.Value;
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        v8 = IntegerData - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
            v9 = Value & 0xFFFFFFFC | 1;
          else
            v9 = Value & 0xFFFFFFFC;
        }
        else
        {
          v9 = Value & 0xFFFFFFFC | 2;
        }
      }
      else
      {
        v9 = Value | 3;
      }
      a1->OffloadRegistry.Value = v9;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v10 = a1->OffloadRegistry.Value;
      v11 = ParameterValue->ParameterData.IntegerData;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v13 = v10 & 0xFFFFFFF3 | 4;
          else
            v13 = v10 & 0xFFFFFFF3;
        }
        else
        {
          v13 = v10 & 0xFFFFFFF3 | 8;
        }
      }
      else
      {
        v13 = v10 | 0xC;
      }
      a1->OffloadRegistry.Value = v13;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v14 = a1->OffloadRegistry.Value;
      v15 = ParameterValue->ParameterData.IntegerData;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v17 = v14 & 0xFFFFFFCF | 0x10;
          else
            v17 = v14 & 0xFFFFFFCF;
        }
        else
        {
          v17 = v14 & 0xFFFFFFCF | 0x20;
        }
      }
      else
      {
        v17 = v14 | 0x30;
      }
      a1->OffloadRegistry.Value = v17;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v18 = a1->OffloadRegistry.Value;
      v19 = ParameterValue->ParameterData.IntegerData;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            v21 = v18 & 0xFFFFFF3F | 0x40;
          else
            v21 = v18 & 0xFFFFFF3F;
        }
        else
        {
          v21 = v18 & 0xFFFFFF3F | 0x80;
        }
      }
      else
      {
        v21 = v18 | 0xC0;
      }
      a1->OffloadRegistry.Value = v21;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v22 = a1->OffloadRegistry.Value;
      v23 = ParameterValue->ParameterData.IntegerData;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          if ( v24 == 1 )
            v25 = v22 & 0xFFFFFCFF | 0x100;
          else
            v25 = v22 & 0xFFFFFCFF;
        }
        else
        {
          v25 = v22 & 0xFFFFFCFF | 0x200;
        }
      }
      else
      {
        v25 = v22 | 0x300;
      }
      a1->OffloadRegistry.Value = v25;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3Fu;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3C0u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v26 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v27 = v26 & 0xFFFFEFFF;
      else
        v27 = v26 | 0x1000;
      a1->OffloadRegistry.Value = v27;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v28 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v29 = v28 & 0xFFFFF7FF;
      else
        v29 = v28 | 0x800;
      a1->OffloadRegistry.Value = v29;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV1IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v30 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v31 = v30 & 0xFFFFFBFF;
      else
        v31 = v30 | 0x400;
      a1->OffloadRegistry.Value = v31;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v32 = a1->OffloadRegistry.Value;
      v33 = ParameterValue->ParameterData.IntegerData;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 )
            v35 = v32 & 0xFFFF9FFF | 0x2000;
          else
            v35 = v32 & 0xFFFF9FFF;
        }
        else
        {
          v35 = v32 & 0xFFFF9FFF | 0x4000;
        }
      }
      else
      {
        v35 = v32 | 0x6000;
      }
      a1->OffloadRegistry.Value = v35;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v36 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v37 = v36 & 0xFFFF7FFF;
      else
        v37 = v36 | 0x8000;
      a1->OffloadRegistry.Value = v37;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v38 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v39 = v38 & 0xFFFEFFFF;
      else
        v39 = v38 | 0x10000;
      a1->OffloadRegistry.Value = v39;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2Str, NdisParameterInteger);
    if ( Status )
    {
      NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v44 = ParameterValue;
        v45 = a1->OffloadRegistry.Value | 0x400000;
        a1->OffloadRegistry.Value = v45;
        v46 = v44->ParameterData.IntegerData;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            if ( v47 == 1 )
              v48 = v45 & 0xFFCFFFFF | 0x100000;
            else
              v48 = v45 & 0xFFCFFFFF;
          }
          else
          {
            v48 = v45 & 0xFFCFFFFF | 0x200000;
          }
        }
        else
        {
          v48 = v45 | 0x300000;
        }
        a1->OffloadRegistry.Value = v48;
      }
    }
    else
    {
      v40 = a1->OffloadRegistry.Value;
      v41 = ParameterValue->ParameterData.IntegerData;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( v42 )
        {
          if ( v42 == 1 )
            v43 = v40 & 0xFFF3FFFF | 0x40000;
          else
            v43 = v40 & 0xFFF3FFFF;
        }
        else
        {
          v43 = v40 & 0xFFF3FFFF | 0x80000;
        }
      }
      else
      {
        v43 = v40 | 0xC0000;
      }
      a1->OffloadRegistry.Value = v43;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v49 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v50 = v49 & 0xFF7FFFFF;
      else
        v50 = v49 | 0x800000;
      a1->OffloadRegistry.Value = v50;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v51 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v52 = v51 & 0xFEFFFFFF;
      else
        v52 = v51 | 0x1000000;
      a1->OffloadRegistry.Value = v52;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
    if ( !Status )
    {
      v53 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v54 = v53 & 0xFDFFFFFF;
      else
        v54 = v53 | 0x2000000;
      a1->OffloadRegistry.Value = v54;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadNvgreStr, NdisParameterInteger);
    if ( !Status )
    {
      v55 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v56 = v55 & 0xFBFFFFFF;
      else
        v56 = v55 | 0x4000000;
      a1->OffloadRegistry.Value = v56;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadVxlanStr, NdisParameterInteger);
    if ( !Status )
    {
      v57 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v58 = v57 & 0xF7FFFFFF;
      else
        v58 = v57 | 0x8000000;
      a1->OffloadRegistry.Value = v58;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UsoIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v59 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v60 = v59 & 0xEFFFFFFF;
      else
        v60 = v59 | 0x10000000;
      a1->OffloadRegistry.Value = v60;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UsoIPv6Str, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      v61 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v62 = v61 & 0xDFFFFFFF;
      else
        v62 = v61 | 0x20000000;
      a1->OffloadRegistry.Value = v62;
    }
  }
  if ( v3 )
    NdisCloseConfiguration(v3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x43u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      (char)a1,
      v4,
      a1->OffloadRegistry.Value);
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1);
  return v4;
}
