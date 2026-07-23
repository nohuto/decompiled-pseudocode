/*
 * XREFs of ExSizeOfRundownProtectionCacheAware @ 0x1408113C0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x1402D3250 (KeGetRecommendedSharedDataAlignment.c)
 */

SIZE_T ExSizeOfRundownProtectionCacheAware(void)
{
  int v0; // ebx
  __int64 v1; // rax

  v0 = dword_140D06884;
  if ( (unsigned int)dword_140D06884 <= 1 )
    v1 = 8LL;
  else
    v1 = (v0 + 1) * KeGetRecommendedSharedDataAlignment();
  return v1 + 24;
}
