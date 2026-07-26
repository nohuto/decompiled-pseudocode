/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C0058110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        UNICODE_STRING *a4,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C00D0910;
  while ( !RtlEqualUnicodeString(a4, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Name )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, a4, ParameterType);
      return;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      8u,
      0x25u,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
      &a4->Length);
  *Status = -1073741823;
}
