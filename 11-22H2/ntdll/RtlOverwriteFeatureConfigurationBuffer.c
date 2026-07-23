/*
 * XREFs of RtlOverwriteFeatureConfigurationBuffer @ 0x18010E880
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetSystemInformation @ 0x1800A2500 (ZwSetSystemInformation.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x18012E510 (RtlpFcValidateFeatureConfigurationBuffer.c)
 */

NTSTATUS __cdecl RtlOverwriteFeatureConfigurationBuffer(
        PRTL_FEATURE_CHANGE_STAMP PreviousChangeStamp,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PVOID ConfigurationBuffer,
        ULONG ConfigurationBufferSize)
{
  __int64 v5; // rbp
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+20h] [rbp-48h] BYREF
  ULONGLONG v10; // [rsp+28h] [rbp-40h]
  RTL_FEATURE_CONFIGURATION_TYPE v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  PVOID v13; // [rsp+40h] [rbp-28h]

  v5 = ConfigurationBufferSize;
  result = RtlpFcValidateFeatureConfigurationBuffer(ConfigurationBuffer, ConfigurationBufferSize);
  if ( result >= 0 )
  {
    SystemInformation = 1;
    v11 = ConfigurationType;
    if ( PreviousChangeStamp )
      v10 = *PreviousChangeStamp;
    v12 = v5;
    v13 = ConfigurationBuffer;
    result = ZwSetSystemInformation(SystemFeatureConfigurationInformation, &SystemInformation, 0x28u);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
