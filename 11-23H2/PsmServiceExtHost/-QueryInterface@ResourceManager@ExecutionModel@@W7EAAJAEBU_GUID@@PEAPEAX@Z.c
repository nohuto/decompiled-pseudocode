/*
 * XREFs of ?QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return HAM_ACTIVITY_RM_CONTEXT::QueryInterface((HAM_ACTIVITY_RM_CONTEXT *)(a1 - 8), a2, a3);
}
