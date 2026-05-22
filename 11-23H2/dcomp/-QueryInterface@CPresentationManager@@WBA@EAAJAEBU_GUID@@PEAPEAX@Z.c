/*
 * XREFs of ?QueryInterface@CPresentationManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B1CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPresentationManager::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CPresentationManager::QueryInterface((CPresentationManager *)(a1 - 16), a2, a3);
}
