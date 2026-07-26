/*
 * XREFs of ndisIfGetFilterIfInfoFromRegistry @ 0x1C0105D64
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0022F50 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisIfGetFilterIfInfoFromRegistry(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-20h] BYREF
  int Status; // [rsp+A0h] [rbp+30h] BYREF
  PVOID ConfigurationHandle; // [rsp+B0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+48h] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  Keyword.Buffer = L"InterfaceGuid";
  *(_QWORD *)&Keyword.Length = 1835034LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      a2);
  ConfigObject.Flags = 0;
  v4 = a1[2];
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = (*(_BYTE *)(*(_QWORD *)(v4 + 336) + 40LL) & 2) != 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterBinary);
    v5 = Status;
    if ( !Status )
      *a2 = *(_OWORD *)ParameterValue->ParameterData.StringData.Buffer;
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      (char)a2,
      v5,
      *(_QWORD *)&Keyword.Length,
      Keyword.Buffer,
      *(_QWORD *)&ConfigObject.Header.Type,
      ConfigObject.NdisHandle);
  return v5;
}
