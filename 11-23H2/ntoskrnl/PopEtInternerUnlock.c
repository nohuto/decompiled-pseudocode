/*
 * XREFs of PopEtInternerUnlock @ 0x1407E4100
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock((__int64 *)(PopEtGlobals + 40));
}
