/*
 * XREFs of ?QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return AudioDeviceMgr::QueryInterface((AudioDeviceMgr *)(a1 - 8), a2, a3);
}
