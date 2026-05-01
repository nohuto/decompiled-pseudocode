/*
 * XREFs of ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ @ 0x180051350
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18003AF20 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesInternal(ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  return 0LL;
}
