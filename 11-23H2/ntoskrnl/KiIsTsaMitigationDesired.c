/*
 * XREFs of KiIsTsaMitigationDesired @ 0x140410B94
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1404109F4 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     <none>
 */

__int64 KiIsTsaMitigationDesired()
{
  if ( (KiFeatureSettings & 5) != 0 )
    return 0LL;
  else
    return ((unsigned int)KiFeatureSettings >> 30) & 1;
}
