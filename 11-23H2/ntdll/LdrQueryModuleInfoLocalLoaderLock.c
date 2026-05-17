/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x180002D80
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
