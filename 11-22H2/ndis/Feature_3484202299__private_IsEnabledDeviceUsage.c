/*
 * XREFs of Feature_3484202299__private_IsEnabledDeviceUsage @ 0x1C0037258
 * Callers:
 *     ndisValidateEmbeddedBufferBounds @ 0x1C010C3CC (ndisValidateEmbeddedBufferBounds.c)
 * Callees:
 *     Feature_3484202299__private_IsEnabledFallback @ 0x1C0037290 (Feature_3484202299__private_IsEnabledFallback.c)
 */

__int64 Feature_3484202299__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3484202299__private_featureState & 0x10) != 0 )
    return Feature_3484202299__private_featureState & 1;
  else
    return Feature_3484202299__private_IsEnabledFallback((unsigned int)Feature_3484202299__private_featureState, 3LL);
}
