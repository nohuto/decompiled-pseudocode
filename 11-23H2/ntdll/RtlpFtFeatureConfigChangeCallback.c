/*
 * XREFs of RtlpFtFeatureConfigChangeCallback @ 0x18009F840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlpFtFeatureConfigChangeCallback(PVOID a1)
{
  int v1; // eax
  signed __int32 v2; // ecx

  do
  {
    v1 = _ft_g_token;
    v2 = _ft_g_token + 1;
    if ( (unsigned int)_ft_g_token >= 0x3FF )
      v2 = 1;
  }
  while ( v1 != _InterlockedCompareExchange(&_ft_g_token, v2, _ft_g_token) );
}
