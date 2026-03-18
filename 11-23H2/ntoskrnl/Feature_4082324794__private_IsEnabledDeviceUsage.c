/*
 * XREFs of Feature_4082324794__private_IsEnabledDeviceUsage @ 0x140411F80
 * Callers:
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FFDDC (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     Feature_4082324794__private_IsEnabledFallback @ 0x140411FB8 (Feature_4082324794__private_IsEnabledFallback.c)
 */

__int64 Feature_4082324794__private_IsEnabledDeviceUsage()
{
  if ( (Feature_4082324794__private_featureState & 0x10) != 0 )
    return Feature_4082324794__private_featureState & 1;
  else
    return Feature_4082324794__private_IsEnabledFallback((unsigned int)Feature_4082324794__private_featureState, 3LL);
}
