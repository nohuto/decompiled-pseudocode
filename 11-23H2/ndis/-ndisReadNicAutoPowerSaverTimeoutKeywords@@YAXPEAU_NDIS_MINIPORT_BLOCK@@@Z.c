/*
 * XREFs of ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138974
 * Callers:
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138CE8 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D290 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C002194C (WPP_RECORDER_SF_Lq.c)
 */

void __fastcall ndisReadNicAutoPowerSaverTimeoutKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  unsigned int IntegerData; // ebx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+88h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+90h] [rbp+30h] BYREF

  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  *(_QWORD *)&ConfigObject.Header.Revision = 0LL;
  ConfigObject.NdisHandle = a1;
  *((_BYTE *)&ConfigObject.Flags + 4) = 0;
  ConfigObject.Flags = 0;
  *(_WORD *)((char *)&ConfigObject.Flags + 5) = 0;
  *((_BYTE *)&ConfigObject.Flags + 7) = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x27u,
        (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
        v2,
        a1);
    *((_DWORD *)a1->SelectiveSuspend + 2) = 3000;
  }
  else
  {
    IntegerData = 3;
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &NicAutoPowerSaverTimeoutStr,
      NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
    *((_DWORD *)a1->SelectiveSuspend + 2) = 1000 * IntegerData;
  }
}
