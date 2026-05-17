/*
 * XREFs of RtlOverwriteFeatureConfigurationBuffer @ 0x18010FD30
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetSystemInformation @ 0x1800A45C0 (ZwSetSystemInformation.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1801304E4 (RtlpFcValidateFeatureConfigurationBuffer.c)
 */

__int64 __fastcall RtlOverwriteFeatureConfigurationBuffer(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  result = RtlpFcValidateFeatureConfigurationBuffer(a3, a4);
  if ( (int)result >= 0 )
  {
    result = ZwSetSystemInformation();
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
