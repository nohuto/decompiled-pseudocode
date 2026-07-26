/*
 * XREFs of NdisWriteConfiguration @ 0x1C001C950
 * Callers:
 *     ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x1C00632D4 (-ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAME.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00771D0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D894 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1C009A858 (-ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00A7560 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x1C0110DE0 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C013818C (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void __stdcall NdisWriteConfiguration(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  char v7; // r12
  wchar_t *Buffer; // rdi
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *ValueData; // r14
  ULONG v11; // r15d
  ULONG ValueLength; // ebx
  __int64 Length; // rdx
  wchar_t *Pool2; // rax
  const WCHAR *v15; // rdx
  ULONG v16; // ecx

  v7 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x21u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      ConfigurationHandle);
  *Status = 0;
  Buffer = Keyword->Buffer;
  if ( ParameterValue->ParameterType < (unsigned int)NdisParameterString )
  {
    ValueData = &ParameterValue->ParameterData;
    ValueLength = 4;
    v11 = 4;
  }
  else
  {
    switch ( ParameterValue->ParameterType )
    {
      case NdisParameterString:
        ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
        v11 = 1;
        ValueLength = ParameterValue->ParameterData.StringData.Length + 2;
        break;
      case NdisParameterMultiString:
        ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
        v11 = 7;
        ValueLength = ParameterValue->ParameterData.StringData.Length;
        break;
      case NdisParameterBinary:
        ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
        v11 = 3;
        ValueLength = ParameterValue->ParameterData.StringData.Length;
        break;
      default:
        *Status = -1073741637;
        goto LABEL_17;
    }
  }
  Length = Keyword->Length;
  if ( (unsigned __int16)Length < 2u || Buffer[((unsigned __int64)Keyword->Length >> 1) - 1] )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(66LL, Length + 2, 538985550);
    Buffer = Pool2;
    if ( !Pool2 )
    {
      *Status = -1073741670;
      goto LABEL_17;
    }
    v7 = 1;
    memmove(Pool2, Keyword->Buffer, Keyword->Length);
    Buffer[(unsigned __int64)Keyword->Length >> 1] = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
  {
    v15 = (const WCHAR *)*((_QWORD *)ConfigurationHandle + 4);
    v16 = 0x40000000;
  }
  else
  {
    v15 = (const WCHAR *)((char *)ConfigurationHandle + 176);
    v16 = 1;
  }
  *Status = RtlWriteRegistryValue(v16, v15, (PCWSTR)Buffer, v11, ValueData, ValueLength);
  if ( v7 )
    ExFreePoolWithTag(Buffer, 0);
LABEL_17:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x22u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      ConfigurationHandle);
}
