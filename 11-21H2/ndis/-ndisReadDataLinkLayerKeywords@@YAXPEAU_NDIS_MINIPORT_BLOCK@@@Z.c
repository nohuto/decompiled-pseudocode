/*
 * XREFs of ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0105724
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C001834C (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadDataLinkLayerKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  PVOID v2; // rdi
  int v3; // esi
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-20h] BYREF
  int Status; // [rsp+90h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+98h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp+30h] BYREF

  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ParameterValue = 0LL;
  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  Keyword.Buffer = L"*DataLinkLayerType";
  *(_QWORD *)&Keyword.Length = 2490404LL;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v2 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    v3 = Status;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x71u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        (char)a1,
        Status);
    if ( !v3 )
    {
      a1->DataLinkLayerType = ParameterValue->ParameterData.IntegerData;
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x100u);
      v2 = ConfigurationHandle;
    }
    NdisCloseConfiguration(v2);
  }
}
