/*
 * XREFs of PopEtInternerUnlock @ 0x1407E3E30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock((__int64 *)(PopEtGlobals + 40));
}
