/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C005D360
 * Callers:
 *     <none>
 * Callees:
 *     NdisReadConfiguration @ 0x1C001D1E0 (NdisReadConfiguration.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026D48 (WPP_RECORDER_SF_Z.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        UNICODE_STRING *a4,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C00D7CF0;
  while ( !RtlEqualUnicodeString(a4, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C00D7DE0 )
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
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      &a4->Length);
  *Status = -1073741823;
}
