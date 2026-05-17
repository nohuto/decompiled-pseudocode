/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x180002780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrQueryModuleInfoLocalLoaderLock()
{
  return LdrpAcquireLoaderLock();
}
