/*
 * XREFs of ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003232C
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0032598 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C00325C4 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 */

void __fastcall ndisReadRssKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _PROCESSOR_NUMBER v2; // ebx
  struct _PROCESSOR_NUMBER v3; // edi
  _NDIS_RSS_PROFILE IntegerData; // r14d
  PVOID v5; // rbx
  unsigned __int16 Length; // r15
  unsigned __int16 Group; // r12
  unsigned int MaxNumRssProcessors; // ecx
  int v9; // eax
  unsigned int v10; // r15d
  struct _PROCESSOR_NUMBER v11; // r8d
  int v12; // eax
  _PROCESSOR_NUMBER v13; // r8d
  __int64 v14; // r11
  unsigned int v15; // r9d
  struct _PROCESSOR_NUMBER v16; // r8d
  int v17; // r9d
  _PROCESSOR_NUMBER v18; // r8d
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-38h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  _PROCESSOR_NUMBER v23; // [rsp+B8h] [rbp+50h]
  struct _PROCESSOR_NUMBER v24; // [rsp+C0h] [rbp+58h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+60h] BYREF

  ConfigurationHandle = 0LL;
  v2 = 0;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  v3 = 0;
  IntegerData = NdisRssProfileNumaStatic;
  *(&ConfigObject.Flags + 1) = 0;
  ParameterValue = 0LL;
  v24 = 0;
  v23 = 0;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v5 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &RssStr, NdisParameterInteger);
    NdisTraceLoggingRssConfiguration(a1, ParameterValue, Status);
    NdisReadConfiguration(&Status, &ParameterValue, v5, &MaxRssProcStr, NdisParameterInteger);
    if ( !Status )
      a1->MaxNumRssProcessors = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v5, &RssBaseProcGroupStr, NdisParameterInteger);
    Length = 32;
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x20 )
    {
      Group = v24.Group;
    }
    else
    {
      Group = ParameterValue->ParameterData.StringData.Length;
      v24.Group = Group;
      v3 = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &RssBaseProcNumStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x40 )
    {
      v24.Number = ParameterValue->ParameterData.IntegerData;
      v3 = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &RssMaxProcGroupStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x20 )
      Length = ParameterValue->ParameterData.StringData.Length;
    v23.Group = Length;
    NdisReadConfiguration(&Status, &ParameterValue, v5, &RssMaxProcNumStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
    {
      v23.Number = 63;
    }
    else
    {
      v23.Number = ParameterValue->ParameterData.IntegerData;
      if ( Length == 32 )
        v23.Group = Group;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &RssProfileStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 4 )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(v5);
    v2 = v23;
  }
  MaxNumRssProcessors = ndisMaxNumRssCpus;
  if ( a1->MaxNumRssProcessors < ndisMaxNumRssCpus )
    MaxNumRssProcessors = a1->MaxNumRssProcessors;
  a1->MaxNumRssProcessors = MaxNumRssProcessors;
  v9 = ndisCompareProcNum(ProcNumber, v3);
  v10 = ndisRssCpuCount;
  if ( v9 > 0 )
    v3 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v3,
              *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * (unsigned int)(ndisRssCpuCount - 1))) > 0 )
    v3 = v11;
  v12 = ndisCompareProcNum(v2, v11);
  v15 = 0;
  if ( v12 > 0 )
    v2 = v13;
  if ( v10 )
  {
    while ( (int)ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v14 + 4LL * v15), v3) < 0 )
    {
      v15 = v17 + 1;
      if ( v15 >= v10 )
        goto LABEL_24;
    }
    if ( (int)ndisCompareProcNum(v16, v2) > 0 )
      v2 = v18;
  }
LABEL_24:
  a1->RssBaseProcessor = v3;
  a1->RssMaxProcessor = v2;
  a1->RssProfile = IntegerData;
}
