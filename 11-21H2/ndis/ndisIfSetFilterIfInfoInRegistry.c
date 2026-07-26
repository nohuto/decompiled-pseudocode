/*
 * XREFs of ndisIfSetFilterIfInfoInRegistry @ 0x1C0105EB0
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0022F50 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisWriteConfiguration @ 0x1C001AC80 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00CC228 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisIfSetFilterIfInfoInRegistry(_QWORD *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v4; // rax
  unsigned int v5; // ebx
  int Status; // [rsp+40h] [rbp-29h] BYREF
  PVOID ConfigurationHandle; // [rsp+48h] [rbp-21h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING Keyword; // [rsp+68h] [rbp-1h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+90h] [rbp+27h] BYREF

  v2 = *a2;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  *(_QWORD *)&Keyword.Length = 1835034LL;
  v12 = v2;
  Keyword.Buffer = L"InterfaceGuid";
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      a1);
  ConfigObject.Flags = 0;
  v4 = a1[2];
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = (*(_BYTE *)(*(_QWORD *)(v4 + 336) + 40LL) & 2) != 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    ParameterValue.ParameterData.StringData.Length = 16;
    ParameterValue.ParameterType = NdisParameterBinary;
    ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)&v12;
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    v5 = Status;
    if ( Status )
    {
      if ( Status != -1073741772 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      v5);
  return v5;
}
