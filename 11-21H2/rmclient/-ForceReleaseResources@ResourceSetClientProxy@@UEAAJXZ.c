/*
 * XREFs of ?ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x18001FBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetClientProxy::ForceReleaseResources(ResourceSetClientProxy *this)
{
  return ResourceSetClientProxy::ReleaseResourcesImpl(this, 3u);
}
