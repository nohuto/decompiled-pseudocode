/*
 * XREFs of ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00A0A18
 * Callers:
 *     ?ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D480 (-ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     NdisWriteConfiguration @ 0x1C001AC80 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C0056858 (WPP_RECORDER_SF_qdL_ea_1C0056858.c)
 */

__int64 __fastcall ndisUpdateHDSplitKeyword(struct _NDIS_MINIPORT_BLOCK *a1, ULONG a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  int Status; // [rsp+40h] [rbp-49h] BYREF
  PVOID ConfigurationHandle; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING String; // [rsp+50h] [rbp-39h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp-29h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v12[2]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+27h]

  ConfigurationHandle = 0LL;
  v13 = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCEu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      a2);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    String.MaximumLength = 40;
    String.Buffer = (wchar_t *)v12;
    if ( RtlIntegerToUnicodeString(a2, 0xAu, &String) )
    {
      v5 = -1073741823;
    }
    else
    {
      ParameterValue.ParameterType = NdisParameterString;
      ParameterValue.ParameterData.StringData = String;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &HDSplitStr, &ParameterValue);
      v5 = Status;
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0xBu,
      0xCFu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      a2,
      v5);
  return v5;
}
