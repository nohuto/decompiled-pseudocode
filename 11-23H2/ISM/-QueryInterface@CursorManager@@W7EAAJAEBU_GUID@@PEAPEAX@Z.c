/*
 * XREFs of ?QueryInterface@CursorManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800684D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CursorManager::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CursorManager::QueryInterface((CursorManager *)(a1 - 8), a2, a3);
}
