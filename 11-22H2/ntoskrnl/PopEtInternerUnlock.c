/*
 * XREFs of PopEtInternerUnlock @ 0x1407E43B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock((__int64 *)(PopEtGlobals + 40));
}
