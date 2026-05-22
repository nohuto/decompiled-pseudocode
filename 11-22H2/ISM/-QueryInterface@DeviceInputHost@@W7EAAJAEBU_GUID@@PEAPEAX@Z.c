/*
 * XREFs of ?QueryInterface@DeviceInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DeviceInputHost::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DeviceInputHost::QueryInterface((DeviceInputHost *)(a1 - 8), a2, a3);
}
