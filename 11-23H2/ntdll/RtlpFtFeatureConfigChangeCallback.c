/*
 * XREFs of RtlpFtFeatureConfigChangeCallback @ 0x18009F880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlpFtFeatureConfigChangeCallback()
{
  signed __int32 v0; // ecx
  __int64 result; // rax
  int v2; // ett

  do
  {
    v0 = _ft_g_token + 1;
    if ( (unsigned int)_ft_g_token >= 0x3FF )
      v0 = 1;
    v2 = _ft_g_token;
    result = (unsigned int)_InterlockedCompareExchange(&_ft_g_token, v0, _ft_g_token);
  }
  while ( v2 != (_DWORD)result );
  return result;
}
